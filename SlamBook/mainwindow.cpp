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

    string lineEdit_1 = ui->lineEdit_1->text().toStdString();
    string lineEdit_2 = ui->lineEdit_2->text().toStdString();
    string lineEdit_3 = ui->lineEdit_3->text().toStdString();
    string lineEdit_4 = ui->lineEdit_4->text().toStdString();
    string lineEdit_5 = ui->lineEdit_5->text().toStdString();
    string lineEdit_6 = ui->lineEdit_6->text().toStdString();
    string lineEdit_7 = ui->lineEdit_7->text().toStdString();

    string textEdit_1 = ui->textEdit_1->toPlainText().toStdString();
    string textEdit_2 = ui->textEdit_2->toPlainText().toStdString();
    string textEdit_3 = ui->textEdit_3->toPlainText().toStdString();
    string textEdit_4 = ui->textEdit_4->toPlainText().toStdString();
    string textEdit_5 = ui->textEdit_5->toPlainText().toStdString();
    string textEdit_6 = ui->textEdit_6->toPlainText().toStdString();
    string textEdit_7 = ui->textEdit_7->toPlainText().toStdString();
    string textEdit_8 = ui->textEdit_8->toPlainText().toStdString();
    string textEdit_9 = ui->textEdit_9->toPlainText().toStdString();
    string textEdit_10 = ui->textEdit_10->toPlainText().toStdString();
    string textEdit_11 = ui->textEdit_11->toPlainText().toStdString();
    string textEdit_12 = ui->textEdit_12->toPlainText().toStdString();
    string textEdit_13 = ui->textEdit_13->toPlainText().toStdString();


    QString *Header = new QString("<!DOCTYPE html><br><html><head><title>");
    file1<<Header->toStdString();
    file1<<lineEdit_1;
    QString *Title = new QString(" : Slam Book</title></head><body style=\"margin-top:40px;\"><center>");
    file1<<Title->toStdString();


    ////addition July 6, for displaying name and Image
    QString *pageName = new QString ("<h2><table width=600px style=\"background-color:#eee;font-family:\"Tahoma\"><tr width=\"600px\"><td width=\"60%\">");
    file1<<pageName->toStdString();
    file1<<ui->lineEdit_1->text().toStdString();
    TRM;

    QString *tryImage = new QString("<img src=\"");
    file1<<tryImage->toStdString();
    file1<<lineEdit_7;

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
    file1<<ui->labelSex->text().toStdString();
    TRM;
    file1<<ui->comboBoxSex->currentText().toStdString();
    TRE;

    TRB;
    QString *date = new QString("Born on");
    file1<<date->toStdString();
    TRM
    file1<<ui->dateTimeEdit->date().toString("MMMM dd yyyy").toStdString();
    TRE;
    delete(date);

    TRB;
    file1<<ui->labelNick->text().toStdString();
    TRM;
    file1<<lineEdit_2;
    TRE;

    TRB;
    file1<<ui->labelMobile->text().toStdString();
    TRM;
    file1<<lineEdit_3;
    TRE;

    TRB;
    file1<<ui->labelHome->text().toStdString();
    TRM;
    file1<<lineEdit_4;
    TRE;

    TRB;
    file1<<ui->labelemail->text().toStdString();
    TRM;
    file1<<lineEdit_5;
    TRE;

    TRB;
    file1<<ui->labelWebsite->text().toStdString();
    TRM;
    file1<<lineEdit_6;
    TRE;

    TRB;
    QString *About = new QString("Can be reached at");
    file1<<About->toStdString();
    TRM;
    file1<<textEdit_1;
    TRE;
    delete (About);

    TRB;
    file1<<ui->labelHobby->text().toStdString();
    TRM;
    file1<<textEdit_2;
    TRE;

    TRB;
    file1<<ui->labelLoveGod->text().toStdString();
    TRM;
    file1<<textEdit_3;
    TRE;

    TRB;
    file1<<ui->labelUnforgettable->text().toStdString();
    TRM;
    file1<<textEdit_4;
    TRE;

    TRB;
    QString *Hate = new QString("Dark Secret");
    file1<<Hate->toStdString();
    TRM;
    file1<<textEdit_5;
    TRE;

    TRB;
    file1<<ui->labelMovie->text().toStdString();
    TRM;
    file1<<textEdit_6;
    TRE;

    TRB;
    file1<<ui->labelSong->text().toStdString();
    TRM;
    file1<<textEdit_7;
    TRE;

    TRB;
    QString *Books = new QString("Best Books");
    file1<<Books->toStdString();
    TRM;
    file1<<textEdit_8;
    TRE;
    delete (Books);

    TRB;
    QString *Hobbies = new QString("Favourite delicacies");
    file1<<Hobbies->toStdString();
    TRM;
    file1<<textEdit_9;
    TRE;
    delete (Hobbies);

    TRB;
    QString *iAm = new QString("For ");
    file1<<iAm->toStdString();
    file1<<lineEdit_1;
    iAm = new QString(" I am");
    file1<<iAm;
    TRM;
    file1<<ui->textEdit_10->toPlainText().toStdString();
    TRE;
    delete (iAm);

    TRB;
    QString *Moments = new QString("Most memorable moments");
    file1<<Moments->toStdString();
    TRM;
    file1<<textEdit_11;
    TRE;
    delete (Moments);

    TRB;
    QString *hateMe = new QString("I am awful for");
    file1<<hateMe->toStdString();
    TRM;
    file1<<textEdit_12;
    TRE;
    delete (hateMe);

    TRB;
    QString *forMe = new QString("bla bla");
    file1<<forMe->toStdString();
    TRM;
    file1<<textEdit_13;
    TRE;
    delete (forMe);

    QString *Footer = new QString("</center></table> <br> <br><br><center style=\"font-size:smaller;\">Generated by Slam Book. Copyright <a href=\"http://decapsulatingabstraction.blogspot.com/search/label/slamBook\"target=\"_blank\">Saurabh Araiyer</a>, 2011<br>Disrtibuted under GNU GPLv3+</center><br><br></body></html>");
    file1<<Footer->toStdString();
    file1.close();
}



MainWindow::~MainWindow()
{
    delete ui;
}
