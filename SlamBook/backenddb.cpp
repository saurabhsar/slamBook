#include "backenddb.h"
#include <iostream> //for testing purpose only, this file is not working as expected


DatabaseManager::DatabaseManager(QObject *parent)
{

}

bool DatabaseManager::createSlamBookTable()
{
    // Create table "person"
    bool ret = false;
    if (db.isOpen())
    {
        QSqlQuery query;
        ret = query.exec("create table slamBook (id integer primary key, Name varchar(100),DOB varchar(10), Sex varchar(1), Nick varchar(25),Zodiac varchar(11), Mobile varchar(36),Home varchar(36),email varchar(30), Website varchar(150),Address varchar(250),Image varchar(200),Hobby varchar(200),LoveRomanceGod varchar(200), Unforgettable varchar(200),DarkSecret varchar(200),Movies varchar(300),Songs varchar(300), bestBooks varchar(300),favouriteFood varchar(200),IAm varchar(400),Memorable varchar(300),Negative varchar(300), RandomScribbling varchar(300))");

    }
    return ret;
}

bool DatabaseManager::openDB()
{
    // Find QSLite driver
    db = QSqlDatabase::addDatabase("QSQLITE");

#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append(".slamBook");
    path = QDir::toNativeSeparators(path);
    db.setDatabaseName(path);
#else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    db.setDatabaseName(".slamBook");
#endif

    // Open databasee
    return db.open();
}

int DatabaseManager::insertValues( QString Name ,QString DOB , QString Sex , QString Nick ,
                                   QString Zodiac , QString Mobile , QString Home ,
                                   QString email , QString Website , QString Address ,
                                   QString Image , QString Hobby , QString LoveRomanceGod ,
                                   QString Unforgettable , QString DarkSecret , QString Movies,
                                   QString Songs , QString bestBooks , QString favouriteFood ,
                                   QString IAm , QString Memorable , QString Negative ,
                                   QString RandomScribbling )
{
    int newId = -1;
    bool ret = false;
    db.open();

    if (db.isOpen())
    {
        //http://www.sqlite.org/autoinc.html
        // NULL = is the keyword for the autoincrement to generate next value

        QSqlQuery query;
        ret = query.exec(QString("insert into slamBook values(NULL,'%1','%2','%3','%4','%5','%6','%7','%8','%9','%10','%11','%12','%13','%14','%15','%16','%17','%18','%19','%20','%21','%22','%23)")
                         .arg(Name).arg(DOB).arg(Sex).arg(Nick).arg(Zodiac).arg(Mobile).arg(Home).arg(email).arg(Website).arg(Address).arg(Image).arg(Hobby).arg(LoveRomanceGod).arg(Unforgettable).arg(DarkSecret).arg(Movies).arg(Songs).arg(bestBooks).arg(favouriteFood).arg(IAm).arg(Memorable).arg(Negative).arg(RandomScribbling));

        // Get database given autoincrement value
        if (ret)
        {
            // http://www.sqlite.org/c3ref/last_insert_rowid.html
            newId = query.lastInsertId().toInt();
        }
        std::cout<<ret; //for testing purpose

    }
    return newId;
}

DatabaseManager::~DatabaseManager()
{
    db.close();
}

