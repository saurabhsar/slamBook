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

#include <QMainWindow>
#include <QDateTime>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

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

public slots:
    void Accept();

signals:

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
