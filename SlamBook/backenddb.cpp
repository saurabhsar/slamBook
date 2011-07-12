/**********************************************************************

  This program is a part of simple Slam Book application written in C++

  Copyright (C) 2011   Saurabh Araiyer,  sizzsa(at)gmail(dot)com
  http://www.decapsulatingabstraction.blogspot.com/

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

************************************************************************/


#include "backenddb.h"
#include <iostream> //for testing purpose only, this file is not working as expected


DatabaseManager::DatabaseManager(QObject *parent)
{

}

bool DatabaseManager::createSlamBookTable()
{
    // Create table "person"
    bool ret = false;
    bool ret2 = false;
    if (db.isOpen())
    {
        QSqlQuery query;
        ret = query.exec("create table slamBook (id integer primary key, Name varchar(40),DOB varchar(10), Sex varchar(1), Nick varchar(10),Zodiac varchar(11), Mobile varchar(36),Home varchar(36),email varchar(30), Website varchar(100),Address varchar(250),Image varchar(200),Hobby varchar(200),LoveRomanceGod varchar(200), Unforgettable varchar(200),DarkSecret varchar(200),Movies varchar(200),Songs varchar(200), bestBooks varchar(300),favouriteFood varchar(200),IAm varchar(300),Memorable varchar(250))");
        ret2 = query.exec("create table slamBook2 (id integer primary key, Negative varchar(250), RandomScribbling varchar(250) )");
    }
    return (ret & ret2 );
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

// working better than previous commits
int DatabaseManager::insertValues( QString Name,QString DOB,QString Sex,QString Nick,QString Zodiac,QString Mobile,
                                  QString Home,QString email,QString Website,QString Address ,QString Image , QString Hobby ,
                                  QString LoveRomanceGod,QString Unforgettable,QString DarkSecret,QString Movies,QString Songs,
                                  QString bestBooks,QString favouriteFood,QString IAm,QString Memorable,QString Negative,
                                  QString RandomScribbling)
{
    int newId = -1;
    bool ret = false;
    bool ret2 = false;
    if (db.isOpen())
    {
        QSqlQuery query;
        ret2 = query.exec(QString("insert into slamBook2 (Negative,RandomScribbling) VALUES ('%1','%2')").arg(Negative).arg(RandomScribbling));
        ret = query.exec(QString("insert into slamBook (Name,DOB,Sex,Nick,Zodiac,Mobile,Home,email,Website,Address,Image,Hobby,LoveRomanceGod,Unforgettable,DarkSecret,Movies,Songs,bestBooks,favouriteFood,IAm,Memorable) VALUES ('%1','%2','%3','%4','%5','%6','%7','%8','%9','%10','%11','%12','%13','%14','%15','%16','%17','%18','%19','%20','%21')")
                         .arg(Name).arg(DOB).arg(Sex).arg(Nick).arg(Zodiac).arg(Mobile).arg(Home).arg(email).arg(Website).arg(Address).arg(Image).arg(Hobby).arg(LoveRomanceGod).arg(Unforgettable).arg(DarkSecret).arg(Movies).arg(Songs).arg(bestBooks).arg(favouriteFood).arg(IAm).arg(Memorable));
        // Get database given autoincrement value
        if (ret2)
        {
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

