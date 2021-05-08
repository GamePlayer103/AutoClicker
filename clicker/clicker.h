#ifndef CLICKER_H
#define CLICKER_H

#include <QObject>
#include <QTimer>
#include <QSpinBox>
#include <windows.h>

#include <QDebug>

class Clicker : public QObject
{
    Q_OBJECT
public:
    Clicker(QSpinBox &delay);
    void start();
private:
    int delay();
    QTimer *clickTimer;
    QTimer *checkTimer;
    QSpinBox *delaySpinBox;
    bool isRunning;
private slots:
    void click();
    void check();

};

#endif // CLICKER_H
