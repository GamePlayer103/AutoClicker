#include "clicker.h"

Clicker::Clicker(QSpinBox &delay)
{
    delaySpinBox = &delay;

    clickTimer = new QTimer(this);
    connect(clickTimer, SIGNAL(timeout()), this, SLOT(click()));

    checkTimer = new QTimer(this);
    checkTimer->setInterval(250);
    connect(checkTimer, SIGNAL(timeout()), this, SLOT(check()));

    isRunning = false;
}


void Clicker::start()
{
    checkTimer->start();
}


void Clicker::click()
{
    // set delay
    if(delaySpinBox->value() != clickTimer->interval())
        clickTimer->setInterval(delaySpinBox->value());

    // click
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    qDebug() << "Clicked, current delay is: " << delaySpinBox->value();
}

void Clicker::check()
{
    // check than activate button button is clicked
    if(GetAsyncKeyState(VK_NUMPAD0))
    {
        qDebug() << "Activate key clicked";
        if(isRunning)
        {
            isRunning = false;
            clickTimer->stop();
            qDebug() << "Click timer stopped";
        }
        else
        {
            isRunning = true;
            clickTimer->start();
            qDebug() << "Click timer started";
        }
    }
}
