#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Alkutila " << tila;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plusButton_clicked()
{
    // plus vain jos tila on 2
    if (tila == 2) {
        qDebug() << "Tila " << tila << "plus sallittu";
    // haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    // haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " + " << num2;
    // lasketaan tulos
    result = num1 + num2;
    // kirjoitetaan tulos edittiin
    QString r = QString::number(result);
    ui->resultEdit->setText(r);
    // palataan alkutilaan
    tila = 0;
    qDebug() << "Nykyinen tila " << tila;
    }
}


void MainWindow::on_minusButton_clicked()
{
    // miinus vain jos tila on 2
    if (tila == 2) {
        qDebug() << "Tila " << tila << "miinus sallittu";
    // haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    // haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " - " << num2;
    // lasketaan tulos
    result = num1 - num2;
    // kirjoitetaan tulos edittiin
    QString r = QString::number(result);
    ui->resultEdit->setText(r);
    // palataan alkutilaan
    tila = 0;
    qDebug() << "Nykyinen tila " << tila;
    }
}


void MainWindow::on_N1Button_clicked()
{
    setEditNum(1);
}


void MainWindow::on_N2Button_clicked()
{
    setEditNum(2);
}


void MainWindow::on_N3Button_clicked()
{
    setEditNum(3);
}


void MainWindow:: setEditNum(int num)
{
    QString lukunyt;
    if (tila == 0) {
        // tila 0: kirjoitetaan num1
        qDebug () << " tila 0: kirjoitetaan num1";
        // lisää num1 kenttään numeron
        lukunyt = ui->num1Edit->text();
        lukunyt = lukunyt + QString::number(num);
        ui->num1Edit->setText(lukunyt);
    } else if (tila == 1) {
        // tila 1: kirjoitetaan num2
        qDebug () << " tila 1: kirjoitetaan num2";
        lukunyt = ui->num2Edit->text();
        lukunyt = lukunyt + QString::number(num);
        ui->num2Edit->setText(lukunyt);
    } else {
        qDebug() << "vaara tila: ei voi syottaa numeroa";
    }
}

void MainWindow::on_enterButton_clicked()
{
    qDebug() << "Nykyinen tila " << tila;
    // tilasta 0 -> tilaan 1
    if (tila == 0) {
        tila = 1;
    // tilasta 1 -> tilaan 2
    } else if (tila == 1) {
        tila = 2;
    }
    qDebug() << "Uusi tila " << tila;
}

void MainWindow::on_clearButton_clicked()
{
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();
    // clearissa aina alkutila
    tila = 0;
    qDebug() << "Clearissa palataan tilaan " << tila;
}


void MainWindow::on_multiplyButton_clicked()
{
    // miinus vain jos tila on 2
    if (tila == 2) {
        qDebug() << "Tila " << tila << "miinus sallittu";
        // haetaan num1
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();
        // haetaan num2
        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug() << num1 << " * " << num2;
        // lasketaan tulos
        result = num1 * num2;
        // kirjoitetaan tulos edittiin
        QString r = QString::number(result);
        ui->resultEdit->setText(r);
        // palataan alkutilaan
        tila = 0;
        qDebug() << "Nykyinen tila " << tila;
    }
}


void MainWindow::on_divideButton_clicked()
{
    // miinus vain jos tila on 2
    if (tila == 2) {
        qDebug() << "Tila " << tila << "miinus sallittu";
        // haetaan num1
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();
        // haetaan num2
        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug() << num1 << " / " << num2;
        // lasketaan tulos
        result = num1 / num2;
        // kirjoitetaan tulos edittiin
        QString r = QString::number(result);
        ui->resultEdit->setText(r);
        // palataan alkutilaan
        tila = 0;
        qDebug() << "Nykyinen tila " << tila;
    }
}




void MainWindow::on_N4Button_clicked()
{
    setEditNum(4);
}


void MainWindow::on_N5Button_clicked()
{
    setEditNum(5);
}


void MainWindow::on_N6Button_clicked()
{
    setEditNum(6);
}


void MainWindow::on_N7Button_clicked()
{
    setEditNum(7);
}


void MainWindow::on_N8Button_clicked()
{
    setEditNum(8);
}


void MainWindow::on_N9Button_clicked()
{
    setEditNum(9);
}


void MainWindow::on_N0Button_clicked()
{
    setEditNum(0);
}

