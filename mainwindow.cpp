#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"
#include "iostream"
#include "QDebug"
#include "QMenuBar"
#include "QFile"
#include "QFileDialog"
#include "QMessageBox"

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
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Text"), "/home/", tr("Text Files (*.txt )"));

    if (fileName.isEmpty())
        return;
    else
    {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
        {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }

        QString line;
        ui->textEdit->clear();
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream stream(&file);
            while (!stream.atEnd()){
                line = stream.readLine();
                ui->textEdit->setText(ui->textEdit->toPlainText()+line+"\n");
            }
        }
    file.close();


    }


}

void MainWindow::on_SaveButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "/home/",
                                                    tr("Text (*.txt)"));
    QFile outputFile(fileName);
    outputFile.open(QIODevice::WriteOnly | QFile::Text);
    QTextStream stream(&outputFile);
    stream << ui->textEdit_2->toPlainText();
}
