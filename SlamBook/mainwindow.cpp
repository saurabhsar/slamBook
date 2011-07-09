/**********************************************************************

  This program is a part of simple Slam Book application written in C++

  Copyright (C) 2011   Saurabh Araiyer,  sizzsa(at)gmail(dot)com
  http://decapsulatingabstraction.blogspot.com/search/label/slamBook

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

    QObject::connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close())); //Quit using a button
    QObject::connect(ui->actionQuit,SIGNAL(triggered()),this,SLOT(close())); //Quit in File menu

    // ui->lineEdit_1  Name on tab personal
    // ui->lineEdit_2  Nick on tab personal
    // ui->lineEdit_3  Mobile on tab personal
    // ui->lineEdit_4  Home on tab personal
    // ui->lineEdit_5  email on tab personal
    // ui->lineEdit_6  Website on tab personal
    // ui->tectEdit_1  Address

    //Button Clear_i is present in every tab, listening to shortcut Alt+c to reset all fields in that tab
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_1,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_2,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_3,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_4,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_5,SLOT(clear()));
    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->lineEdit_6,SLOT(clear()));

    QObject::connect(ui->Clear_1,SIGNAL(clicked()),this->ui->textEdit_1,SLOT(clear()));

    // tab introspection
    // textEdit_2 = Hobbies, textEdit_3 = love,god,romance, textEdit_4 = Memorable day, textEdit_5 = dark secret
    // ui->Clear_2 is a hidden button responding to Alt+c
    QObject::connect(ui->Clear_2,SIGNAL(clicked()),this->ui->textEdit_2,SLOT(clear()));
    QObject::connect(ui->Clear_2,SIGNAL(clicked()),this->ui->textEdit_3,SLOT(clear()));
    QObject::connect(ui->Clear_2,SIGNAL(clicked()),this->ui->textEdit_4,SLOT(clear()));
    QObject::connect(ui->Clear_2,SIGNAL(clicked()),this->ui->textEdit_5,SLOT(clear()));

    // tab Activities
    // textEdit_6 = Movies, textEdit_7 = Song,god,romance, textEdit_8 = Books, textEdit_9 = delicasies
    // ui->Clear_3 is a hidden button responding to Alt+c
    QObject::connect(ui->Clear_3,SIGNAL(clicked()),this->ui->textEdit_6,SLOT(clear()));
    QObject::connect(ui->Clear_3,SIGNAL(clicked()),this->ui->textEdit_7,SLOT(clear()));
    QObject::connect(ui->Clear_3,SIGNAL(clicked()),this->ui->textEdit_8,SLOT(clear()));
    QObject::connect(ui->Clear_3,SIGNAL(clicked()),this->ui->textEdit_9,SLOT(clear()));

    // tab About me
    // textEdit_10 = abt me, textEdit_11 = memorable moments, textEdit_12 = hated for, textEdit_13 = dark secret
    // ui->Clear_2 is a hidden button responding to Alt+cQObject::connect(ui->Clear_4,SIGNAL(clicked()),this->ui->textEdit_10,SLOT(clear()));
    QObject::connect(ui->Clear_4,SIGNAL(clicked()),this->ui->textEdit_11,SLOT(clear()));
    QObject::connect(ui->Clear_4,SIGNAL(clicked()),this->ui->textEdit_12,SLOT(clear()));
    QObject::connect(ui->Clear_4,SIGNAL(clicked()),this->ui->textEdit_13,SLOT(clear()));

    QObject::connect(ui->Clear_5,SIGNAL(clicked()),ui->lineEdit_7,SLOT(clear()));
    QObject::connect(ui->Clear_5,SIGNAL(clicked()),ui->pushButton_4,SLOT(click()));


    //pushButton_2 is connects to above Clear_i buttons of every tab
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this->ui->Clear_1,SLOT(click()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this->ui->Clear_2,SLOT(click()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this->ui->Clear_3,SLOT(click()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this->ui->Clear_4,SLOT(click()));

    //linking "Submit button" to SLOT Accept()
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(Accept()));

    //Calling imageviewer
    QObject::connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(imageView()));
    QObject::connect(ui->pushButton,SIGNAL(clicked()),ui->pushButton_4,SLOT(click()));
    QObject::connect(ui->lineEdit_7,SIGNAL(returnPressed()),ui->pushButton_4,SLOT(click()));

    QObject::connect(ui->lineEdit_1,SIGNAL(returnPressed()),this,SLOT(Accept()));  //done for quick testing of o/p, remove it
    QObject::connect(ui->lineEdit_1,SIGNAL(textChanged(QString)),ui->lineEdit_1,SLOT(setWindowTitle(QString)));

}

void MainWindow::imageView()
{
    QGraphicsScene *scene1 = new QGraphicsScene( ui->graphicsView );
    scene1->setSceneRect( ui->graphicsView->rect() );
    ui->graphicsView->setScene(scene1);
    ui->graphicsView->setFixedSize(300,200);
    QPixmap pix( ui->lineEdit_7->text() );
    scene1->addPixmap(pix);
    ui->label_18->setText(ui->lineEdit_1->text());
}

void MainWindow::Accept()
{
    ofstream file1;
    string name = ui->lineEdit_1->text().toStdString();
    name+=".html";
    name="./Output/"+name;
    file1.open(name.c_str());

    QString *trBegin = new QString("<tr><td width=25%><i>");
    QString *trMiddle = new QString("</i></td><td>");
    QString *trClose = new QString("</td></tr>");

    QString *Header = new QString("<!DOCTYPE html><br><html><head><title>");
    file1<<Header->toStdString();
    file1<<ui->lineEdit_1->text().toStdString();
    QString *Title = new QString(" : Slam Book</title></head><body style=\"margin-top:40px;\"><center>");
    file1<<Title->toStdString();


    ////addition July 6, for displaying name and Image
    QString *pageName = new QString ("<h2><table width=600px style=\"background-color:#eee;font-family:\"Tahoma\"><tr width=\"600px\"><td width=\"60%\">");
    file1<<pageName->toStdString();
    file1<<ui->lineEdit_1->text().toStdString();
    TRM;

    QString *tryImage = new QString("<img src=\"");
    file1<<tryImage->toStdString();
    file1<<ui->lineEdit_7->text().toStdString();

    tryImage = new QString("\"alt=\"");
    file1<<tryImage->toStdString();
    tryImage = new QString("\" align=\"right\" align=\"top\">");
    file1<<tryImage->toStdString();
    TRE;
    pageName = new QString ("</table></h2>");
    file1<<pageName->toStdString();
    //// upto this, display name and Image

    QString *tableInit = new QString("<table border=\"0\" padding=\"3\" width=600px>");
    file1<<tableInit->toStdString();

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
    QString *About = new QString("Address");
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
    QString *Hobbies = new QString("Favourite delicacies");
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

    QString *Footer = new QString("</center></table> <br> <br><br><center style=\"font-size:smaller;\">Generated by Slam Book. Copyright <a href=\"http://decapsulatingabstraction.blogspot.com/search/label/slamBook\"target=\"_blank\">Saurabh Araiyer</a>, 2011<br>Disrtibuted under GNU GPLv3+</center><br><br></body></html>");
    file1<<Footer->toStdString();
    file1.close();
}


MainWindow::~MainWindow()
{
    delete ui;
}
