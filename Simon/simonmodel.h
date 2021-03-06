/*
 * @ author Karla Kraiss & Jordan Davis
 * 3/2/2016
 * description
 *
*/


#ifndef SIMONMODEL_H
#define SIMONMODEL_H

#include <QObject>
#include <time.h>
#include <QDebug>
#include <QTime>
#include <QTimer>
#include <cstdlib>
#include <ctime>

class SimonModel : public QObject {

private:
    Q_OBJECT
    int clickCount;
    int flashPauseDuration;
    int gameSpeed;
    int hintsRemaining;
    bool gameInProgress;
    bool isPlayersTurn;
    bool reachedNextLevel;
    bool allowHint;
    QTimer* buttonFlashTimer;
    QTimer* flashPauseTimer;

public:
    explicit SimonModel(QObject *parent = 0);
    QList<int> computerMoves;
    void playComputer();
    int getNextColor();
    void getNextSequenceFromSimon();
    void getNextSequenceFromPlayer();

signals:
    void flashColor(int);
    void flashDone();
    void startToRestart();
    void simonsTurn();
    void playersTurn();
    void updateProgress(int, int);
    void endGame();
    void provideHints(int, int);

public slots:
    void ColorClicked(int);
    void StartClicked();
    void flashButtonTimerFinished();
    void flashPauseTimerFinished();
    void GiveHint();
};

#endif // SIMONMODEL_H
