/*
 * @ author
 * date
 * description
 *
*/


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

//Here are the button settings.
QString redButtonStyle =
    "QPushButton{ border: 10px solid rgb(239, 22, 20); border-radius: 50px;"
                  "color:rgb(239, 22, 20); background-color:white;}"
    "QPushButton:pressed {color:rgb(239, 22, 20); background-color:rgb(239, 22, 20); }";
QString blueButtonStyle =
    "QPushButton{ border: 10px solid rgb(19, 152, 236); border-radius: 50px;"
                  "color:rgb(19, 152, 236); background-color:white;}"
    "QPushButton:pressed {color:rgb(19, 152, 236); background-color:rgb(19, 152, 236); }";
QString yellowButtonStyle =
    "QPushButton{ border: 10px solid rgb(253, 249, 40); border-radius: 50px;"
                  "color:rgb(253, 249, 40); background-color:white;}"
    "QPushButton:pressed {color:rgb(253, 249, 40); background-color:rgb(253, 249, 40); }";
QString greenButtonStyle =
    "QPushButton{ border: 10px solid rgb(66, 211, 72); border-radius: 50px;"
                  "color:rgb(66, 211, 72); background-color:white;}"
    "QPushButton:pressed {color:rgb(66, 211, 72); background-color:rgb(66, 211, 72); }";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->ProgressBar->setRange(0,1);
    ui->ProgressBar->setValue(0);
    validateButtons(false);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_RedButton_clicked() {
    emit RedButtonClicked();
    return;
}

void MainWindow::on_BlueButton_clicked() {
    emit BlueButtonClicked();
    return;
}

void MainWindow::on_YellowButton_clicked() {
    emit YellowButtonClicked();
    return;
}

void MainWindow::on_GreenButton_clicked() {
    emit GreenButtonClicked();
    return;
}

void MainWindow::on_StartButton_clicked() {
    emit StartButtonClicked();
    return;
}

void MainWindow::playersTurn() {
    ui->TurnLabel->setText("Your Turn");
    validateButtons(true);
    ui->RedButton->setStyleSheet(redButtonStyle);
    ui->BlueButton->setStyleSheet(blueButtonStyle);
    ui->YellowButton->setStyleSheet(yellowButtonStyle);
    ui->GreenButton->setStyleSheet(greenButtonStyle);
    ui->ProgressBar->update();
    return;
}

void MainWindow::simonsTurn() {
    ui->TurnLabel->setText("Simon Says");
    validateButtons(false);
    return;
}

void MainWindow::flashComplete() {
    ui->RedButton->setStyleSheet(redButtonStyle);
    ui->BlueButton->setStyleSheet(blueButtonStyle);
    ui->YellowButton->setStyleSheet(yellowButtonStyle);
    ui->GreenButton->setStyleSheet(greenButtonStyle);
    ui->RedButton->update();
    ui->BlueButton->update();
    ui->YellowButton->update();
    ui->GreenButton->update();
    return;
}

void MainWindow::flashButtonWithColor(int color) {
    validateButtons(false);
    if(color == 0){
        ui->RedButton->setStyleSheet("border-radius: 50px; color: rgb(239, 22, 20); background-color:rgb(239, 22, 20)");
        ui->RedButton->update();
    }
    else if(color == 1){
        ui->BlueButton->setStyleSheet("border-radius: 50px; color: rgb(19, 152, 236); background-color:rgb(19, 152, 236)");
        ui->BlueButton->update();
    }
    else if(color == 2){
        ui->YellowButton->setStyleSheet("border-radius: 50px; color: rgb(253, 249, 40); background-color:rgb(253, 249, 40)");
        ui->YellowButton->update();
    }
    else{
        ui->GreenButton->setStyleSheet("border-radius: 50px; color: rgb(66, 211, 72); background-color:rgb(66, 211, 72)");
        ui->GreenButton->update();
    }
    return;
}

void MainWindow::disableStart() {
    ui->StartButton->setText("Restart");
    ui->StartButton->setEnabled(false);
    return;
}

void MainWindow::updateProgress(int low, int high) {
    ui->ProgressBar->setRange(0, high);
    ui->ProgressBar->setValue(low);
}

void MainWindow::validateButtons(bool isValid){
    ui->RedButton->setEnabled(isValid);
    ui->BlueButton->setEnabled(isValid);
    ui->YellowButton->setEnabled(isValid);
    ui->GreenButton->setEnabled(isValid);
    ui->RedButton->update();
    ui->BlueButton->update();
    ui->YellowButton->update();
    ui->GreenButton->update();

}



