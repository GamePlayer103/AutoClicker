#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clicker = new Clicker(*ui->delay, *ui->activationChar);
    clicker->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

