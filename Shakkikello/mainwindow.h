#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startButton_clicked();

    void updateProgressBar();

    void on_switchButton1_clicked();

    void on_switchButton2_clicked();

    void on_stopButton_clicked();

    void on_secButton_clicked();

    void on_minButton_clicked();

private:
    Ui::MainWindow *ui;
    int p1Time;
    int p2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    QTimer *timer = nullptr;
    void setGameInfoText(QString, int);
};
#endif // MAINWINDOW_H
