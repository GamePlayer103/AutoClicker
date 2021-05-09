#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
#include "clicker.h"
#include "settings.h"

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
    void saveSettings();

    void on_singleClick_clicked();

    void on_doubleClick_clicked();

    void on_toogle_clicked();

    void on_hold_clicked();

    void on_start_clicked();

    void on_stop_clicked();

private:
    Ui::MainWindow *ui;
    Clicker *clicker;
    Settings *settings;
    void loadSettings();
    void closeEvent(QCloseEvent *event);
};
#endif // MAINWINDOW_H
