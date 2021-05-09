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


void MainWindow::on_singleClick_clicked()
{
    clicker->setClickType(1);
}

void MainWindow::on_doubleClick_clicked()
{
    clicker->setClickType(2);
}
