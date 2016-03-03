/*
 * @ author Karla Kraiss & Jordan Davis
 * 3/2/2016
 * description
 *
*/

#include "simonmodel.h"

/**
 * @brief Creates a new Simon game
 * @param parent -- QObject pointer
 */
SimonModel::SimonModel(QObject *parent) : QObject(parent) {
    clickCount = 0;                         //index in the sequence
    hintsRemaining = 3;                     //user gets 3 hints
    reachedNextLevel = false;               //determines if new color is needed
    gameInProgress = false;                 //game began/ended
    flashPauseDuration = 1000;              //flash duration
    gameSpeed = 500;                        //speed sequence is repeated
    isPlayersTurn = false;                  //player or simons turn
    allowHint = false;                      //prevents user from double hinting the same color
    buttonFlashTimer = new QTimer(this);    //timer for button flash
    flashPauseTimer = new QTimer(this);     //timer to separate button flashes
    buttonFlashTimer->setSingleShot(true);
    flashPauseTimer->setSingleShot(true);
    QObject::connect(buttonFlashTimer, SIGNAL(timeout()), this, SLOT(flashButtonTimerFinished()));
    QObject::connect(flashPauseTimer, SIGNAL(timeout()), this, SLOT(flashPauseTimerFinished()));
    emit updateProgress(0, 1);

}

/**
 * @brief Determines which color to light up
 * @param color -- int representation of color RBGY {0, 1, 2, 3}
 */
void SimonModel::ColorClicked(int color) {
    //check if button clicked was correct color
    if(computerMoves.at(clickCount) == color){
        //reached end of sequence, switch users
        if(clickCount == computerMoves.length() - 1){
            flashButtonTimerFinished();
        }
        else{
            emit playersTurn();
            flashPauseTimer->start(gameSpeed);
        }
    } else {
        //end game
        gameInProgress = false;
        emit endGame();
    }
    allowHint = true;
}

/**
 * @brief Create a new simon game when the start button is clicked, and change text to restart
 */
void SimonModel::StartClicked() {
    computerMoves.clear();
    clickCount = -1;
    hintsRemaining = 3;
    computerMoves.append(getNextColor());
    flashPauseTimer->start(1000);
    if(!gameInProgress){           //only call this if needed
        emit startToRestart();    //all this does is change button label to "restart"
    }
    emit flashDone();
    reachedNextLevel = false;
    allowHint = false;
    gameInProgress = true;
    isPlayersTurn = false;
}

/**
 * @brief Generates moves for the computer / has the computer play its moves
 */
void SimonModel::playComputer() {
    int thisMove = computerMoves.at(clickCount);

    buttonFlashTimer->start(flashPauseDuration);
    emit flashColor(thisMove);
    if((clickCount == computerMoves.length() - 1) && (!reachedNextLevel) &&(gameInProgress)){
        computerMoves.append(getNextColor());
        reachedNextLevel = true;
    }
}

/**
 * @brief randomly generates the int representation of colors RBGY
 * @return the int representation of the chosen color
 */
int SimonModel::getNextColor() {
    srand(time(NULL));
    return rand()%4; //gets 4 random numbers between 0-3 for 4 colors
}

/**
 * @brief signals that the button is done flashing it's color
 */
void SimonModel::flashButtonTimerFinished() {
    emit flashDone();
    flashPauseTimer->start(gameSpeed);
}

/**
 * @brief Determines when to switch between the player and computer.
 * It checks after the pause of each button press.
 * -- computers turn, it will show the sequence.
 * -- players turn, it will read the input sequence and compare against computer.
 */
void SimonModel::flashPauseTimerFinished() {
    clickCount++;
    if(isPlayersTurn){
        emit updateProgress(clickCount, computerMoves.length());
    }

    if(clickCount >= computerMoves.length() && isPlayersTurn){
        getNextSequenceFromSimon();     //switch to simon
    }
    else if (clickCount >= computerMoves.length() && !isPlayersTurn){
        getNextSequenceFromPlayer();    //switch to player
    }
    else if(clickCount < computerMoves.length() && isPlayersTurn){
        emit playersTurn();
        allowHint = true;
    }
    else{
        playComputer();
        gameInProgress = true;
    }
}

/**
 * @brief the backend for Simon's turn. Adds a random color to the end of the sequence
 *  and applies speed up
 */
void SimonModel::getNextSequenceFromSimon(){
    clickCount = 0;
    isPlayersTurn = 0;
    flashPauseTimer->start(2000);   //pause simon slighly after user completes level
    emit simonsTurn();
    reachedNextLevel = false;
    gameSpeed /= 1.05 ;             //modify game speed to our liking
    flashPauseDuration -= 50;
    playComputer();
}

/**
 * @brief Sets up the progress bar and helper data members to
 * recieve the players sequence
 */
void SimonModel::getNextSequenceFromPlayer(){
    clickCount = 0;
    isPlayersTurn = true;
    allowHint = true;
    emit playersTurn();
    emit updateProgress(0, computerMoves.length());
}

void SimonModel::GiveHint(){
    if(hintsRemaining > 0 && allowHint){
        allowHint = false;
        emit provideHints(computerMoves.at(clickCount), --hintsRemaining);
    }
}

