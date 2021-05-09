#ifndef CLICKER_H
#define CLICKER_H

#include <QObject>
#include <QTimer>
#include <QSpinBox>
#include <QLineEdit>
#include <windows.h>

#include <QDebug>

class Clicker : public QObject
{
    Q_OBJECT
public:
    Clicker(QSpinBox &delay, QLineEdit &activationKey);
    void start();

private:
    QTimer *clickTimer;
    QTimer *checkTimer;
    QSpinBox *delaySpinBox;
    QLineEdit *activationChar;
    bool isRunning;
    int clickType;

private slots:
    void click();
    void check();

public slots:
    void setClickType(int type);

};

#endif // CLICKER_H
