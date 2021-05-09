#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>

#include <QDebug>

class Settings : public QObject
{
    Q_OBJECT

public slots:
     void setSettingsFile(QString path);

     QString getString(QString key);
     void setString(QString key, QString value);

     bool getBool(QString key);
     void setBool(QString key, bool value);

     int getInt(QString key);
     void setInt(QString key, int value);

private:
     QString settingsFile;
     QJsonObject loadSettings();
     void saveSettings(QJsonObject settings);
};

#endif // SETTINGSMANAGER_H
