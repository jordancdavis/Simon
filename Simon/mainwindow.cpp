/*
 * @ author Karla Kraiss & Jordan Davis
 * 3/2/2016
 * description
 *
*/


#include "mainwindow.h"
#include "ui_mainwindow.h"


//Here are the button settings.
QString redButtonStyle =
    "QPushButton{  border-radius: 50px;"
                  "background-color:rgb(129, 0, 1);}"
    "QPushButton:pressed {background-color:rgb(239, 22, 20); }";
QString blueButtonStyle =
    "QPushButton{ border-radius: 50px;"
                  "background-color:rgb(5, 74, 137);}"
    "QPushButton:pressed {background-color:rgb(6, 150, 255); }";
QString yellowButtonStyle =
    "QPushButton{ border-radius: 50px;"
                  "background-color:rgb(167, 157, 3);}"
    "QPushButton:pressed {background-color:rgb(253, 249, 40); }";
QString greenButtonStyle =
    "QPushButton{  border-radius: 50px;"
                  "background-color:rgb(31, 128, 29);}"
    "QPushButton:pressed {background-color:rgb(66, 211, 72); }";

/**
 * @brief Create a new gui window and initialize the progress bar
 * @param parent - QWidget pointer
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->ProgressBar->setRange(0,1);
    ui->ProgressBar->setValue(0);
    validateButtons(false);
}


/**
 * @brief MainWindow destructor
 */
MainWindow::~MainWindow() {
    delete ui;
}

/**
 * @brief signal the RedButton slot
 */
void MainWindow::on_RedButton_clicked() {
    emit ColorButtonClicked(0);
}

/**
 * @brief signal the BlueButton slot
 */
void MainWindow::on_BlueButton_clicked() {
    emit ColorButtonClicked(1);
}

/**
 * @brief signal the YellowButton slot
 */
void MainWindow::on_YellowButton_clicked() {
    emit ColorButtonClicked(2);
}

/**
 * @brief signal the GreenButton slot
 */
void MainWindow::on_GreenButton_clicked() {
    emit ColorButtonClicked(3);
}

/**
 * @brief Make it Simon's turn and signal startButton slot
 */
void MainWindow::on_StartButton_clicked() {
    ui->ProgressBar->setValue(0);
    ui->TurnLabel->setStyleSheet("color: white");
    ui->TurnLabel->setText("Simon Says");
    ui->HintCountLabel->setText("3");
    emit StartButtonClicked();
}


void MainWindow::on_HintButton_clicked()
{
    emit HintRequest();
}

/**
 * @brief Say Player's turn and allow buttons to be clicked
 */
void MainWindow::playersTurn() {
    ui->TurnLabel->setText("Your Turn");
    flashComplete();
    validateButtons(true);
    ui->ProgressBar->update();
}

/**
 * @brief set Simon's turn text and don't allow buttons to be clicked
 */
void MainWindow::simonsTurn() {
    ui->TurnLabel->setText("Simon Says");
    validateButtons(false);
}

/**
 * @brief Set the buttons style and allow them to be clicked
 */
void MainWindow::flashComplete() {
    ui->RedButton->setStyleSheet(redButtonStyle);
    ui->BlueButton->setStyleSheet(blueButtonStyle);
    ui->YellowButton->setStyleSheet(yellowButtonStyle);
    ui->GreenButton->setStyleSheet(greenButtonStyle);
}

/**
 * @brief Fills the button with its designated color
 * @param color - int representation of a color. Red = 0 Blue = 1 Yellow = 2 Green = 3
 */
void MainWindow::flashButtonWithColor(int color) {
    validateButtons(false);
    //red
    if(color == 0){
        ui->RedButton->setStyleSheet("border-radius: 50px; background-color:rgb(239, 22, 20)");
        ui->RedButton->update();
    }
    // blue
    else if(color == 1){
        ui->BlueButton->setStyleSheet("border-radius: 50px; background-color:rgb(6, 150, 255)");
        ui->BlueButton->update();
    }
    // yellow
    else if(color == 2){
        ui->YellowButton->setStyleSheet("border-radius: 50px; background-color:rgb(253, 249, 40)");
        ui->YellowButton->update();
    }
    // green
    else{
        ui->GreenButton->setStyleSheet("border-radius: 50px; background-color:rgb(66, 211, 72)");
        ui->GreenButton->update();
    }
}

/**
 * @brief Changes the text of start button
 */
void MainWindow::makeRestartButton() {
    ui->StartButton->setText("Restart");
}

/**
 * @brief Displays gameOver text and invalidates buttons
 */
void MainWindow::gameOver() {
    ui->StartButton->setText("Start");
    ui->TurnLabel->setStyleSheet("color: red");
    ui->TurnLabel->setText("* You Lose *");
    validateButtons(false);
}

/**
 * @brief Updates the min/max values for the progress bar
 * @param low -- int lower range
 * @param high -- int upper range
 */
void MainWindow::updateProgress(int low, int high) {
    ui->ProgressBar->setRange(0, high);
    ui->ProgressBar->setValue(low);
}

/**
 * @brief changes validation state of a button and updates
 * @param isValid -- bool for if buttons can be pressed
 */
void MainWindow::validateButtons(bool isValid){
    ui->RedButton->setEnabled(isValid);
    ui->BlueButton->setEnabled(isValid);
    ui->YellowButton->setEnabled(isValid);
    ui->GreenButton->setEnabled(isValid);
    ui->HintButton->setEnabled(isValid);
    ui->RedButton->update();
    ui->BlueButton->update();
    ui->YellowButton->update();
    ui->GreenButton->update();
    ui->HintButton->update();
}


void MainWindow::updateHint(int color, int hintCount){
    QString s = QString::number(hintCount);
    ui->HintCountLabel->setText(s);
    //red
    if(color == 0){


        ui->RedButton->setStyleSheet("QPushButton{  border:10px solid rgb(239, 22, 20); border-radius: 50px;"
                                     "background-color:rgb(129, 0, 1);}"
                                     "QPushButton:pressed {background-color:rgb(239, 22, 20); }");
        ui->RedButton->update();
    }
    // blue
    else if(color == 1){
        ui->BlueButton->setStyleSheet("QPushButton{  border:10px solid rgb(6, 150, 255); border-radius: 50px;"
                                      "background-color:rgbrgb(5, 74, 137);}"
                                      "QPushButton:pressed {background-color:rgb(6, 150, 255); }");
        ui->BlueButton->update();

    }
    // yellow
    else if(color == 2){
        ui->YellowButton->setStyleSheet("QPushButton{ border:10px solid rgb(253, 249, 40); border-radius: 50px;"
                                        "background-color:rgb(167, 157, 3);}"
                                         "QPushButton:pressed {background-color:rgb(253, 249, 40); }");
        ui->YellowButton->update();
    }
    // green
    else{
        ui->GreenButton->setStyleSheet("QPushButton{ border:10px solid rgb(66, 211, 72);  border-radius: 50px;"
                                       "background-color:rgb(31, 128, 29);}"
                                         "QPushButton:pressed {background-color:rgb(66, 211, 72); }");
        ui->GreenButton->update();
    }
}


