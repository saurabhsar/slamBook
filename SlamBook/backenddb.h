#ifndef BACKENDDB_H
#define BACKENDDB_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QObject>
#include <QDir>


class DatabaseManager : public QObject
{
public:
    DatabaseManager(QObject *parent = 0);
    ~DatabaseManager();

public:
    int insertValues( QString Name ,QString DOB , QString Sex , QString Nick ,
                      QString Zodiac , QString Mobile , QString Home ,
                      QString email , QString Website , QString Address ,
                      QString Image , QString Hobby , QString LoveRomanceGod ,
                      QString Unforgettable , QString DarkSecret , QString Movies,
                      QString Songs , QString bestBooks , QString favouriteFood ,
                      QString IAm , QString Memorable , QString Negative ,
                      QString RandomScribbling );
    bool openDB();
    bool createSlamBookTable();

private:
    QSqlDatabase db;
};


#endif // BACKENDDB_H
