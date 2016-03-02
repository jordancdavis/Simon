/*
 * @ author
 * date
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
    bool gameInProgress;
    bool isPlayersTurn;
    bool reachedNextLevel;
    QTimer* buttonFlashTimer;
    QTimer* flashPauseTimer;

public:
    explicit SimonModel(QObject *parent = 0);
    QList<int> computerMoves;
    void playComputer();
    void playPlayer();
    int getNextColor();
    void endGame();
    void getNextSequenceFromSimon();
    void getNextSequenceFromPlayer();

signals:
    void flashColor(int);
    void flashDone();
    void DisableStart();
    void simonsTurn();
    void playersTurn();
    void updateProgress(int, int);

public slots:
    void RedClicked();
    void BlueClicked();
    void YellowClicked();
    void GreenClicked();
    void StartClicked();
    void flashButtonTimerFinished();
    void flashPauseTimerFinished();
};

#endif // SIMONMODEL_H
