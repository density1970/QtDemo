#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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
    qDebug() << "Hello Git." << endl;
    qDebug() << "Hello World." << endl;
    qDebug() << "Hello World222222." << endl;
    qDebug() << "Hello World33333." << endl;
qDebug() << "Hello World4444." << endl;

}
