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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "backenddb.h"

#include <QGraphicsPixmapItem>
#include <QApplication>
#include <QMainWindow>
#include <QDateTime>
#include <QVariant>
#include <iostream>
#include <fstream>
#include <cstring>
#include <QPixmap>
#include <QWidget>
#include <string>

#define TRB file1<<trBegin->toStdString();
#define TRM file1<<trMiddle->toStdString();
#define TRE file1<<trClose->toStdString();


using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//    DatabaseManager databaseObject;

public slots:
    void Accept();
    void imageView();

signals:

private:
    Ui::MainWindow *ui;
    DatabaseManager db1;


};


#endif // MAINWINDOW_H
