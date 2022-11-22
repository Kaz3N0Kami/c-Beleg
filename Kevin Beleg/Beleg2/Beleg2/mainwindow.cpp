#include "mainwindow.h"
#include "Books.h"
#include "CD.h"
#include "Medium.h"
#include "Person.h"
#include "ui_mainwindow.h"
#include "blueray.h"
#include "error.h"
#include <QList>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

int Index; //Index der ersten ComboBox
int Index2;//Index der zweiten ComboBox

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//sucht für jegliche Eingabe in den Dateien nach und gibt es aus
void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
//das zeigt den gesamten Inhalt jeder Datei an, um einen Überblick zu erhalten
    if(arg1.compare("") == 0 || arg1.compare(" ") == 0){

        Person* P = new Person;
        const QString BP = QString::fromStdString(P->showP(4));
        ui->BP_Output->setText("Person:  \n" + BP);

        const QString CDP = QString::fromStdString(P->showP(3));
        ui->CDP_Output->setText("Person:  \n" + CDP);

        const QString BRP = QString::fromStdString(P->showP(5));
        ui->BRP_Output->setText("Person:  \n" + BRP);
        delete P;

        BlueRay* BR = new BlueRay;
        const QString Br = QString::fromStdString(BR->showBR());
        ui->BR_Output->setText("Medium:  \n" + Br);
        delete BR;

        Books* B = new Books;
        const QString Books = QString::fromStdString(B->showBooks());
        ui->Books_Output->setText("Medium:  \n" + Books);
        delete B;

        CD* CD = new class CD;
        const QString C = QString::fromStdString(CD->showCD());
        ui->CD_Output->setText("Medium:  \n" + C);
        delete CD;
    }
//hier beginnt die eigentliche Suche
    else{

    Medium* M = new Medium;
    const QString Output1 = M->Search(arg1, 3);
    ui->CDP_Output->setText("Person:  \n" + Output1);

    const QString Output2 = M->Search(arg1,4);
    ui->BP_Output->setText("Person:  \n" + Output2);

    const QString Output3 = M->Search(arg1, 0);
    ui->CD_Output->setText("Medium:  \n" + Output3);

    const QString Output4 = M->Search(arg1, 1);
    ui->Books_Output->setText("Medium:  \n" + Output4);

    const QString Output5 = M->Search(arg1, 5);
    ui->BRP_Output->setText("Medium:  \n" + Output5);

    const QString Output6 = M->Search(arg1, 2);
    ui->BR_Output->setText("Medium:  \n" + Output6);
    delete M;

    }
}

//gibt den Index der ComboBox an die globale Indexvariable zurück
void MainWindow::on_comboBox_3_currentIndexChanged(int index)
{
    Medium* M = new Medium;
    Index = M->IndexCheck(index);
    delete M;
}

//nimmt die Eingaben der "Add-Line" und schreibt es in die jeweiligen Dateien
void MainWindow::on_lineEdit_2_returnPressed()
{
    if(Index == 0)
    {

    QString str = ui->lineEdit_2->text();

    QStringList list = str.split(QLatin1Char(','));

         if(list.length() == 2)
         {
             Error* E = new Error;
             E->ErrorShow();
             delete E;

             ui->lineEdit_2->setText("");
         }
         else if(list.length() <= 1)
         {
             QMessageBox MS; MS.setText("It cannot be saved!"); MS.setInformativeText("The Inputvalue is 0 or 1"); MS.exec();
             ui->lineEdit_2->setText("");
         }
         else if(list.length() > 3)
         {
             Error* E = new Error;
             E->ErrorShow();
             delete E;

             ui->lineEdit_2->setText("");
         }
         else
         {
         QString Title = list[0];
         QString Author = list[1];
         QString PersonName = list[2];

         CD* CD = new class CD;
         CD->WriteFile(Title, Author);
         delete CD;

         Person* P = new Person;
         P->WriteFile(PersonName, Index + 3);
         delete P;

         ui->lineEdit_2->setText("");
         }
    }
    else if(Index == 1)
    {
        QString str = ui->lineEdit_2->text();

        QStringList list = str.split(QLatin1Char(','));

             if(list.length() == 2)
             {
                 Error* E = new Error;
                 E->ErrorShow();
                 delete E;

                 ui->lineEdit_2->setText("");
             }
             else if(list.length() <= 1)
             {
                 QMessageBox MS; MS.setText("It cannot be saved!"); MS.setInformativeText("The Inputvalue is 0 or 1"); MS.exec();
                 ui->lineEdit_2->setText("");
             }
             else if(list.length() > 3)
             {
                 Error* E = new Error;
                 E->ErrorShow();
                 delete E;

                 ui->lineEdit_2->setText("");
             }
             else
             {
             QString Title = list[0];
             QString Author = list[1];
             QString PersonName = list[2];

             Books* B = new Books;
             B->WriteFile(Title, Author);
             delete B;

             Person* P = new Person;
             P->WriteFile(PersonName, Index + 3);
             delete P;

             ui->lineEdit_2->setText("");
             }
    }
    else if(Index == 2)
    {
        QString str = ui->lineEdit_2->text();

        QStringList list = str.split(QLatin1Char(','));

             if(list.length() == 2)
             {
                 Error* E = new Error;
                 E->ErrorShow();
                 delete E;

                 ui->lineEdit_2->setText("");
             }
             else if(list.length() <= 1)
             {
                 QMessageBox MS; MS.setText("It cannot be saved!"); MS.setInformativeText("The Inputvalue is 0 or 1"); MS.exec();
                 ui->lineEdit_2->setText("");
             }
             else if(list.length() > 3)
             {
                 Error* E = new Error;
                 E->ErrorShow();
                 delete E;

                 ui->lineEdit_2->setText("");
             }
             else
             {
             QString Title = list[0];
             QString Author = list[1];
             QString PersonName = list[2];

             BlueRay* BR = new BlueRay;
             BR->WriteFile(Title, Author);
             delete BR;

             Person* P = new Person;
             P->WriteFile(PersonName, Index + 3);
             delete P;

             ui->lineEdit_2->setText("");
             }
        }
}

//gibt den Index der ComboBox an die globale Indexvariable zurück
void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    Medium* M = new Medium;
    Index2 = M->IndexCheck(index);
    delete M;
}

//nimmt die Eingabe der "Delete-Line" entgegen und löscht den Inhalt, wenn er gefunden wurde, aus den Dateien
void MainWindow::on_lineEdit_5_returnPressed()
{
    QString str = ui->lineEdit_5->text();

    QStringList list = str.split(';');
    QString content = list[0];
    string content2 = list[0].toStdString();

    if(list.length() == 1 || 0)
    {   
        Person* P = new Person;
             if(Index2 == 0)
             {
                 P->DelFile(content, Index2, Index2 + 6);
                 ui->lineEdit_5->setText("");
                 ui->lineEdit_3->setText("");
             }
             else if(Index2 == 1)
             {
                 P->DelFile(content, Index2, Index2 + 6);
                 ui->lineEdit_5->setText("");
                 ui->lineEdit_3->setText("");
             }
             else if(Index2 == 2)
             {
                 P->DelFile(content, Index2, Index2 + 6);
                 ui->lineEdit_5->setText("");
                 ui->lineEdit_3->setText("");
             }
             else if(Index2 == 3)
             {
                P->DelFile(content, Index2, Index2 + 6);
                ui->lineEdit_5->setText("");
                ui->lineEdit_3->setText("");
             }
             else if(Index2 == 4)
             {
                P->DelFile(content, Index2, Index2 + 6);
                ui->lineEdit_5->setText("");
                ui->lineEdit_3->setText("");
             }
             else if(Index2 == 5)
             {
                P->DelFile(content, Index2, Index2 + 6);
                ui->lineEdit_5->setText("");
                ui->lineEdit_3->setText("");
             }
        delete P;
    }
    else if(list.length() == 2)
    {
        Person* P = new Person;
        QString content = list[0];
        string Line = list[1].toStdString();

        try {
            stoi(Line);
        }
        catch (std::invalid_argument) {
            QMessageBox MSG;
            MSG.setText("This value is not correct!");
            MSG.setInformativeText("You have to enter Integers after '';''");
            MSG.setStandardButtons(QMessageBox::Cancel);
            MSG.exec();
            return;
        }

        int LineInt = stoi(Line);

        if(Index2 == 0)
        {
            P->DelFile(content, LineInt, Index2, Index2 + 6);
            ui->lineEdit_5->setText("");
            ui->lineEdit_3->setText("");
        }
        else if(Index2 == 1)
        {
            P->DelFile(content, LineInt, Index2, Index2 + 6);
            ui->lineEdit_5->setText("");
            ui->lineEdit_3->setText("");
        }
        else if(Index2 == 2)
        {
            P->DelFile(content, LineInt, Index2, Index2 + 6);
            ui->lineEdit_5->setText("");
            ui->lineEdit_3->setText("");
        }
        else if(Index2 == 3)
        {
           P->DelFile(content, LineInt, Index2, Index2 + 6);
           ui->lineEdit_5->setText("");
           ui->lineEdit_3->setText("");
        }
        else if(Index2 == 4)
        {
           P->DelFile(content, LineInt, Index2, Index2 + 6);
           ui->lineEdit_5->setText("");
           ui->lineEdit_3->setText("");
        }
        else if(Index2 == 5)
        {
            P->DelFile(content, LineInt, Index2, Index2 + 6);
            ui->lineEdit_5->setText("");
            ui->lineEdit_3->setText("");
        }
        else
        {
         QMessageBox MSG;
         MSG.setText("This value is not correct!");
         MSG.setInformativeText("You have to enter a correct value.");
         MSG.setStandardButtons(QMessageBox::Cancel);
         MSG.exec();
        }

        delete P;
    }
}
