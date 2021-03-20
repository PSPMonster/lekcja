#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QRandomGenerator>
#include <QDebug>
#include <QTest>
#include <QSoundEffect>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnRock_clicked();

    void on_btnPaper_clicked();

    void on_btnScissors_clicked();

    void Losuj();

    void WhoWon();

    void on_btnRestart_clicked();

    void on_SliVolume_sliderMoved(int position);

    void on_btnPause_clicked();

    void on_btnStop_clicked();

    void on_btnPlay_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer* player;
    QMediaPlayer* klik;

private:
    int computerChoice;
    int computerPoints = 0;
    int playerChoice;
    int playerPoints = 0;
};
#endif // MAINWINDOW_H
