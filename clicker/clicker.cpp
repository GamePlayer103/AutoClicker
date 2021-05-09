#include "clicker.h"

Clicker::Clicker(QSpinBox &delay, QLineEdit &activationKey)
{
    delaySpinBox = &delay;
    activationChar = &activationKey;

    clickTimer = new QTimer(this);
    connect(clickTimer, SIGNAL(timeout()), this, SLOT(click()));

    checkTimer = new QTimer(this);
    checkTimer->setInterval(250);
    connect(checkTimer, SIGNAL(timeout()), this, SLOT(check()));

    isRunning = false;

    /* click type
     * 1 = single click
     * 2 = double click
     */
    clickType = 1;

    /* activation mode
     * 1 = toogle
     * 2 = hold
     */
    activationMode = 1;
}

void Clicker::start()
{
    checkTimer->start();
}


void Clicker::click()
{
    //set delay
    if(delaySpinBox->value() != clickTimer->interval())
        clickTimer->setInterval(delaySpinBox->value());

    //click
    for(int i = 0; i < clickType; i++)
    {
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        qDebug() << "Clicked, current delay is: " << delaySpinBox->value();
    }

}

void Clicker::check()
{
    //convert QString to char
    QString text = activationChar->text();
    QByteArray ba = text.toLocal8Bit();
    const char *c_str = ba.data();
    char ch = c_str[0];

    if(activationMode == 1)
    {
        if(checkTimer->interval() != 250)
            checkTimer->setInterval(250);

        if(GetAsyncKeyState(VkKeyScanA(ch)))
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

    if(activationMode == 2)
    {
        if(checkTimer->interval() != 50)
            checkTimer->setInterval(50);

        if(GetAsyncKeyState(VkKeyScanA(ch)))
        {
            qDebug() << "Activate key hold";
            if(isRunning == false)
            {
                isRunning = true;
                clickTimer->start();
                qDebug() << "Click timer started";
            }
        }
        else
        {
            if(isRunning == true)
            {
                isRunning = false;
                clickTimer->stop();
                qDebug() << "Click timer stopped";
            }
        }
    }
}

void Clicker::setClickType(int type)
{
    clickType = type;
    qDebug() << "Set click type to: " << type;
}

void Clicker::setActivationMode(int mode)
{
    activationMode = mode;
    qDebug() << "Set activation mode to: " << mode;
}
