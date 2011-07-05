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

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(ui->actionQuit,SIGNAL(triggered()),this,SLOT(close()));

    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_1,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_2,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_3,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_4,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_5,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_6,SLOT(clear()));

    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->textEdit_1,SLOT(clear()));

    QObject::connect(ui->Clear_2,SIGNAL(clicked()),this->ui->textEdit_2,SLOT(clear()));
    QObject::connect(ui->Clear_2,SIGNAL(clicked()),this->ui->textEdit_3,SLOT(clear()));
    QObject::connect(ui->Clear_2,SIGNAL(clicked()),this->ui->textEdit_4,SLOT(clear()));
    QObject::connect(ui->Clear_2,SIGNAL(clicked()),this->ui->textEdit_5,SLOT(clear()));

    QObject::connect(ui->Clear_3,SIGNAL(clicked()),this->ui->textEdit_6,SLOT(clear()));
    QObject::connect(ui->Clear_3,SIGNAL(clicked()),this->ui->textEdit_7,SLOT(clear()));
    QObject::connect(ui->Clear_3,SIGNAL(clicked()),this->ui->textEdit_8,SLOT(clear()));
    QObject::connect(ui->Clear_3,SIGNAL(clicked()),this->ui->textEdit_9,SLOT(clear()));

    QObject::connect(ui->Clear_4,SIGNAL(clicked()),this->ui->textEdit_10,SLOT(clear()));
    QObject::connect(ui->Clear_4,SIGNAL(clicked()),this->ui->textEdit_11,SLOT(clear()));
    QObject::connect(ui->Clear_4,SIGNAL(clicked()),this->ui->textEdit_12,SLOT(clear()));
    QObject::connect(ui->Clear_4,SIGNAL(clicked()),this->ui->textEdit_13,SLOT(clear()));

    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this->ui->Clear_1,SLOT(click()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this->ui->Clear_2,SLOT(click()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this->ui->Clear_3,SLOT(click()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this->ui->Clear_4,SLOT(click()));

    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(Accept()));
}
void MainWindow::Accept()
{
    ofstream file1;
    string name = ui->lineEdit_1->text().toStdString();
    name+=".html";
    name="./Output/"+name;
    file1.open(name.c_str());
    QString *Header = new QString("<html><head><title>");
    file1<<Header->toStdString();
    file1<<ui->lineEdit_1->text().toStdString();
    QString *Title = new QString(" : Slam Book</title></head><body style=\"margin-top:40px;\"><center>");
    file1<<Title->toStdString();
    QString *tableInit = new QString("<table border=\"1\" width=600px><tr><td width=20%> Name </td><td>");
    file1<<tableInit->toStdString();
    file1<<ui->lineEdit_1->text().toStdString();

    QString *trBegin = new QString("<tr><td width=20%>");
    QString *trMiddle = new QString("</td><td>");
    QString *trClose = new QString("</td></tr>");

    TRE;

    TRB;
    QString *Sex = new QString("Sex");
    file1<<Sex->toStdString();
    TRM;
    file1<<ui->comboBoxSex->currentText().toStdString();
    TRE;

    TRB;
    QString *date = new QString("Born on");
    file1<<date->toStdString();
    TRM
    file1<<ui->dateTimeEdit->date().toString("MMMM dd yyyy").toStdString();
    TRE

    TRB;
    QString *Nick = new QString("Nick");
    file1<<Nick->toStdString();
    TRM;
    file1<<ui->lineEdit_2->text().toStdString();
    TRE;

    TRB;
    QString *Mobile = new QString("Mobile");
    file1<<Mobile->toStdString();
    TRM;
    file1<<ui->lineEdit_3->text().toStdString();
    TRE;

    TRB;
    QString *Home = new QString("Home");
    file1<<Home->toStdString();
    TRM;
    file1<<ui->lineEdit_4->text().toStdString();
    TRE;

    TRB;
    QString *email = new QString("email");
    file1<<email->toStdString();
    TRM;
    file1<<ui->lineEdit_5->text().toStdString();
    TRE;

    TRB;
    QString *Website = new QString("Website");
    file1<<Website->toStdString();
    TRM;
    file1<<ui->lineEdit_6->text().toStdString();
    TRE;

    TRB;
    QString *About = new QString("About");
    file1<<About->toStdString();
    TRM;
    file1<<ui->textEdit_1->toPlainText().toStdString();
    TRE;

    TRB;
    QString *crazyAbout = new QString("Crazy About");
    file1<<crazyAbout->toStdString();
    TRM;
    file1<<ui->textEdit_2->toPlainText().toStdString();
    TRE;

    TRB;
    QString *Love = new QString("Love, Romance, God");
    file1<<Love->toStdString();
    TRM;
    file1<<ui->textEdit_3->toPlainText().toStdString();
    TRE;

    TRB;
    QString *Unforgettabele = new QString("Unforgettable Days");
    file1<<Unforgettabele->toStdString();
    TRM;
    file1<<ui->textEdit_4->toPlainText().toStdString();
    TRE;

    TRB;
    QString *Hate = new QString("Dark Secret");
    file1<<Hate->toStdString();
    TRM;
    file1<<ui->textEdit_5->toPlainText().toStdString();
    TRE;

    TRB;
    QString *Movies = new QString("Favourite Movies");
    file1<<Movies->toStdString();
    TRM;
    file1<<ui->textEdit_6->toPlainText().toStdString();
    TRE;

    TRB;
    QString *Songs = new QString("Favourite Music");
    file1<<Songs->toStdString();
    TRM;
    file1<<ui->textEdit_7->toPlainText().toStdString();
    TRE;

    TRB;
    QString *Books = new QString("Best Books");
    file1<<Books->toStdString();
    TRM;
    file1<<ui->textEdit_8->toPlainText().toStdString();
    TRE;

    TRB;
    QString *Hobbies = new QString("Hobbies/Interest");
    file1<<Hobbies->toStdString();
    TRM;
    file1<<ui->textEdit_9->toPlainText().toStdString();
    TRE;

    TRB;
    QString *iAm = new QString("I am for ");
    file1<<iAm->toStdString();
    file1<<ui->lineEdit_1->text().toStdString();
    TRM;
    file1<<ui->textEdit_10->toPlainText().toStdString();
    TRE;

    TRB;
    QString *Moments = new QString("Most memorable moments");
    file1<<Moments->toStdString();
    TRM;
    file1<<ui->textEdit_11->toPlainText().toStdString();
    TRE;

    TRB;
    QString *hateMe = new QString("I am awful for");
    file1<<hateMe->toStdString();
    TRM;
    file1<<ui->textEdit_12->toPlainText().toStdString();
    TRE;

    TRB;
    QString *forMe = new QString("Something for me");
    file1<<forMe->toStdString();
    TRM;
    file1<<ui->textEdit_13->toPlainText().toStdString();
    TRE;

    QString *Footer = new QString("</center></table><br><br><p style=\"font-size:9px;\"><center>Generated by Slam Book. Copyright Saurabh Araiyer, 2011<br>Disrtibuted under GNU GPLv3+</center></p><br><br></body></html>");
    file1<<Footer->toStdString();
    file1.close();
//    this->ui->lineEdit_1->clear();
}


MainWindow::~MainWindow()
{
    delete ui;
}
