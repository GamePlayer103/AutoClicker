#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clicker = new Clicker(*ui->delay, *ui->activationChar);
    ui->limit->setEnabled(false);
    connect(ui->enableLimit, SIGNAL(toggled(bool)), clicker, SLOT(enableClickLimit(bool)));
    connect(ui->limit, SIGNAL(valueChanged(int)), clicker, SLOT(setClickLimit(int)));
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

void MainWindow::on_toogle_clicked()
{
    clicker->setActivationMode(1);
}

void MainWindow::on_hold_clicked()
{
    clicker->setActivationMode(2);
}

void MainWindow::on_start_clicked()
{
    clicker->start();
    ui->status->setText("Started");
}

void MainWindow::on_stop_clicked()
{
    clicker->stop();
    ui->status->setText("Stopped");
}
