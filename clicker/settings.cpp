#include "settings.h"

void Settings::setSettingsFile(QString path)
{
    settingsFile = path;
}

//return json object from file
QJsonObject Settings::loadSettings()
{
    QFile file(settingsFile);

    if(!file.open(QFile::ReadWrite | QFile::Text))
    {
        QJsonObject empty;
        return empty;
    }

    QString json;

    while (!file.atEnd())
    {
        json = json + file.readLine();
    }

    QJsonDocument jsonDoc = QJsonDocument::fromJson(json.toUtf8());

    QJsonObject obj = jsonDoc.object();

    return obj;
}

//write settings to file
void Settings::saveSettings(QJsonObject settings)
{
    QJsonDocument jsonDoc(settings);

    QFile file(settingsFile);

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        return;
    }

    file.write(jsonDoc.toJson());

    file.flush();
    file.close();
}


QString Settings::getString(QString key)
{
    return loadSettings()[key].toString();
}

void Settings::setString(QString key, QString value)
{
    QJsonObject obj = loadSettings();
    obj.insert(key, value);

    saveSettings(obj);
}

bool Settings::getBool(QString key)
{
    return loadSettings()[key].toBool();
}

void Settings::setBool(QString key, bool value)
{
    QJsonObject obj = loadSettings();
    obj.insert(key, value);

    saveSettings(obj);
}

int Settings::getInt(QString key)
{
    return loadSettings()[key].toInt();
}

void Settings::setInt(QString key, int value)
{
    QJsonObject obj = loadSettings();
    obj.insert(key, value);

    saveSettings(obj);
}
