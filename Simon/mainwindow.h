/*
 * @ author Karla Kraiss & Jordan Davis
 * 3/2/2016
 * description
 *
*/


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPalette>
#include <time.h>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {

private:
    Ui::MainWindow *ui;
    Q_OBJECT
    void validateButtons(bool);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void ColorButtonClicked(int);
    void StartButtonClicked();

private slots:
    void on_RedButton_clicked();
    void on_BlueButton_clicked();
    void on_YellowButton_clicked();
    void on_GreenButton_clicked();
    void on_StartButton_clicked();
    void flashButtonWithColor(int);
    void flashComplete();

public slots:
    void makeRestartButton();
    void playersTurn();
    void simonsTurn();
    void updateProgress(int, int);
    void gameOver();

};

#endif // MAINWINDOW_H
