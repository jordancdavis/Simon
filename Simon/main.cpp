/*
 * @ author Karla Kraiss & Jordan Davis
 * 3/2/2016
 * description
 *
*/


#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include "simonmodel.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    SimonModel simon;
    w.show();

    QObject::connect(&w, SIGNAL(ColorButtonClicked(int)), &simon, SLOT(ColorClicked(int)));
    QObject::connect(&w, SIGNAL(StartButtonClicked()), &simon, SLOT(StartClicked()));
    QObject::connect(&w, SIGNAL(HintRequest()), &simon, SLOT(GiveHint()));
    QObject::connect(&simon, SIGNAL(flashColor(int)), &w, SLOT(flashButtonWithColor(int)));
    QObject::connect(&simon, SIGNAL(flashDone()), &w, SLOT(flashComplete()));
    QObject::connect(&simon, SIGNAL(startToRestart()), &w, SLOT(makeRestartButton()));
    QObject::connect(&simon, SIGNAL(playersTurn()), &w, SLOT(playersTurn()));
    QObject::connect(&simon, SIGNAL(simonsTurn()), &w, SLOT(simonsTurn()));
    QObject::connect(&simon, SIGNAL(updateProgress(int, int)), &w, SLOT(updateProgress(int, int)));
    QObject::connect(&simon, SIGNAL(endGame()), &w, SLOT(gameOver()));
    QObject::connect(&simon, SIGNAL(provideHints(int, int)), &w, SLOT(updateHint(int, int)));


    return a.exec();
}
