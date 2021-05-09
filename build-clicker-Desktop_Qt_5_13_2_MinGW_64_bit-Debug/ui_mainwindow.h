/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *delay;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QRadioButton *singleClick;
    QRadioButton *doubleClick;
    QCheckBox *enableLimit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpinBox *limit;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *activationChar;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QRadioButton *toogle;
    QRadioButton *hold;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *start;
    QPushButton *stop;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *status;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(264, 350);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        delay = new QSpinBox(groupBox);
        delay->setObjectName(QString::fromUtf8("delay"));
        delay->setMinimum(10);
        delay->setMaximum(10000);

        horizontalLayout->addWidget(delay);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        singleClick = new QRadioButton(groupBox);
        singleClick->setObjectName(QString::fromUtf8("singleClick"));
        singleClick->setChecked(true);

        horizontalLayout_5->addWidget(singleClick);

        doubleClick = new QRadioButton(groupBox);
        doubleClick->setObjectName(QString::fromUtf8("doubleClick"));

        horizontalLayout_5->addWidget(doubleClick);


        verticalLayout->addLayout(horizontalLayout_5);

        enableLimit = new QCheckBox(groupBox);
        enableLimit->setObjectName(QString::fromUtf8("enableLimit"));

        verticalLayout->addWidget(enableLimit);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        limit = new QSpinBox(groupBox);
        limit->setObjectName(QString::fromUtf8("limit"));
        limit->setMaximum(10000);

        horizontalLayout_7->addWidget(limit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        activationChar = new QLineEdit(groupBox_2);
        activationChar->setObjectName(QString::fromUtf8("activationChar"));
        activationChar->setMaxLength(1);

        horizontalLayout_2->addWidget(activationChar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        toogle = new QRadioButton(groupBox_2);
        toogle->setObjectName(QString::fromUtf8("toogle"));
        toogle->setChecked(true);

        horizontalLayout_6->addWidget(toogle);

        hold = new QRadioButton(groupBox_2);
        hold->setObjectName(QString::fromUtf8("hold"));

        horizontalLayout_6->addWidget(hold);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));

        horizontalLayout_3->addWidget(start);

        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));

        horizontalLayout_3->addWidget(stop);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        status = new QLabel(centralwidget);
        status->setObjectName(QString::fromUtf8("status"));

        horizontalLayout_4->addWidget(status);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(enableLimit, SIGNAL(toggled(bool)), limit, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AutoClicker", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Clicking ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Delay (ms)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Clicks type", nullptr));
        singleClick->setText(QCoreApplication::translate("MainWindow", "Single click", nullptr));
        doubleClick->setText(QCoreApplication::translate("MainWindow", "Double click", nullptr));
        enableLimit->setText(QCoreApplication::translate("MainWindow", "Enable click limit", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Maximum clicks", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Activation", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Activation key", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Activation mode", nullptr));
        toogle->setText(QCoreApplication::translate("MainWindow", "Toogle", nullptr));
        hold->setText(QCoreApplication::translate("MainWindow", "Hold", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Status: ", nullptr));
        status->setText(QCoreApplication::translate("MainWindow", "Stopped", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
