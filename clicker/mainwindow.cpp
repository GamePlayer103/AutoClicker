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

    settings = new Settings();
    settings->setSettingsFile("config.json");

    loadSettings();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::saveSettings()
{
    settings->setInt("delay", ui->delay->value());

    if(ui->singleClick->isChecked())
        settings->setInt("clickType", 1);
    if(ui->doubleClick->isChecked())
        settings->setInt("clickType", 2);

    settings->setBool("isLimitEnabled", ui->enableLimit->isChecked());
    settings->setInt("limit", ui->limit->value());

    settings->setString("activationKey", ui->activationChar->text());

    if(ui->toogle->isChecked())
        settings->setInt("activationMode", 1);
    if(ui->hold->isChecked())
        settings->setInt("activationMode", 2);
}

void MainWindow::loadSettings()
{
    ui->delay->setValue(settings->getInt("delay"));

    if(settings->getInt("clickType") == 1)
    {
        ui->singleClick->setChecked(true);
        ui->doubleClick->setChecked(false);
    }

    if(settings->getInt("clickType") == 2)
    {
        ui->singleClick->setChecked(false);
        ui->doubleClick->setChecked(true);
    }

    ui->enableLimit->setChecked(settings->getBool("isLimitEnabled"));
    ui->limit->setValue(settings->getInt("limit"));

    ui->activationChar->setText(settings->getString("activationKey"));

    if(settings->getInt("activationMode") == 1)
    {
        ui->toogle->setChecked(true);
        ui->hold->setChecked(false);
    }

    if(settings->getInt("activationMode") == 2)
    {
        ui->toogle->setChecked(false);
        ui->hold->setChecked(true);
    }
}


void MainWindow::closeEvent(QCloseEvent *event)
{
    //save settings before quit
    saveSettings();
    event->accept();
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

