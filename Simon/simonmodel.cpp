/*
 * @ author
 * date
 * description
 *
*/


#include "simonmodel.h"


SimonModel::SimonModel(QObject *parent) : QObject(parent) {
    clickCount = 0;
    reachedNextLevel = false;
    gameInProgress = false;
    flashPauseDuration = 1000;
    gameSpeed = 500;
    isPlayersTurn = false;
    buttonFlashTimer = new QTimer(this);
    flashPauseTimer = new QTimer(this);
    buttonFlashTimer->setSingleShot(true);
    flashPauseTimer->setSingleShot(true);
    QObject::connect(buttonFlashTimer, SIGNAL(timeout()), this, SLOT(flashButtonTimerFinished()));
    QObject::connect(flashPauseTimer, SIGNAL(timeout()), this, SLOT(flashPauseTimerFinished()));
    emit updateProgress(0, 1);
}


void SimonModel::RedClicked() {
    if(computerMoves.at(clickCount) == 0){
        if(clickCount == computerMoves.length() - 1){
            flashButtonTimerFinished();
        }
        else{
            emit playersTurn();
            flashPauseTimer->start(gameSpeed);
        }
    } else {
        endGame();
    }
    return;
}


void SimonModel::BlueClicked() {
    if(computerMoves.at(clickCount) == 1){
        if(clickCount == computerMoves.length() - 1){
            flashButtonTimerFinished();
        }
        else{
            emit playersTurn();
            flashPauseTimer->start(gameSpeed);
        }
    } else {
        endGame();
    }
    return;
}


void SimonModel::YellowClicked() {
    if(computerMoves.at(clickCount) == 2){
        if(clickCount == computerMoves.length() - 1){
            flashButtonTimerFinished();
        }
        else{
            emit playersTurn();
            flashPauseTimer->start(gameSpeed);
        }
    } else {
        endGame();
    }
    return;
}


void SimonModel::GreenClicked() {
    if(computerMoves.at(clickCount) == 3){
        if(clickCount == computerMoves.length() - 1){
            flashButtonTimerFinished();
        }
        else{
            emit playersTurn();
            flashPauseTimer->start(gameSpeed);
        }
    } else {
        endGame();
    }
    return;
}


void SimonModel::StartClicked() {
    if(!gameInProgress){
        computerMoves.clear();
        clickCount = -1;
        computerMoves.append(getNextColor());
        gameInProgress = true;
        flashPauseTimer->start(1000);
        emit DisableStart();
        emit flashDone();
    }
}


void SimonModel::playComputer() {
    qDebug()<<"---------COMPUTER TURN---------";

    int thisMove = computerMoves.at(clickCount);
    qDebug()<<thisMove;

    buttonFlashTimer->start(flashPauseDuration);
    emit flashColor(thisMove);
    if((clickCount == computerMoves.length() - 1) && (!reachedNextLevel) &&(gameInProgress)){
        computerMoves.append(getNextColor());
        reachedNextLevel = true;
    }
    return;
}


void SimonModel::playPlayer() {
    qDebug()<<"---------PLAYER TURN---------";
//    int thisMove = computerMoves.at(clickCount);
    emit playersTurn();
    return;
}


int SimonModel::getNextColor() {
    srand(time(NULL));
    return rand()%4; //make %4 for 4 colors
}


void SimonModel::flashButtonTimerFinished() {
    emit flashDone();
    flashPauseTimer->start(gameSpeed);
}


void SimonModel::flashPauseTimerFinished() {
    clickCount++;
    if(isPlayersTurn){
        emit updateProgress(clickCount, computerMoves.length());
    }

    if(clickCount >= computerMoves.length() && isPlayersTurn){
        getNextSequenceFromSimon();
    }
    else if (clickCount >= computerMoves.length() && !isPlayersTurn){
        getNextSequenceFromPlayer();
    }
    else if(clickCount < computerMoves.length() && isPlayersTurn){
        playPlayer();
    }
    else{
        playComputer();
        gameInProgress = true;
    }
}


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

void SimonModel::getNextSequenceFromPlayer(){
    clickCount = 0;
    isPlayersTurn = 1;
    emit playersTurn();
    playPlayer();
    emit updateProgress(0, computerMoves.length());
}


void SimonModel::endGame() {
    //youlose
    exit(1);
}
