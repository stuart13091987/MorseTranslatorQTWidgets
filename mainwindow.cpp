#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"
#include "iostream"
#include "QDebug"
#include "QMenuBar"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_actionExit_triggered()
{

}

void MainWindow::on_actionAbout_triggered()
{
    delete ui;
}

void MainWindow::on_actionSave_As_triggered()
{

}

void MainWindow::on_TranslateButton_clicked()
{

    QString input = ui->textEdit->toPlainText();
    qDebug() << input;

    //translate

    ui->textEdit_2->setText(input);
//    About a = new About(QMainWindow);
//    a.show();

//    typedef std::vector <int> DaneT;
//    DaneT dane;
//    DaneT::iterator i = dane.begin();
//    printf("%d", i);
}

//Save
void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_OpenButton_clicked()
{

}

void MainWindow::on_SaveButton_clicked()
{

}
