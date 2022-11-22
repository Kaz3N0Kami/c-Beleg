#include "Person.h"
#include "Medium.h"
#include "mainwindow.h"
#include <iostream>
#include <QFile>
#include <QString>
#include <QTextStream>

QList <QString> media1 = {"CD.txt", "Books.txt","BR.txt", "CDP.txt" ,"BP.txt", "BRP.txt", "CD2.txt","Books2.txt","BR2.txt","CDP2.txt","BP2.txt", "BRP2.txt"};

//löscht die Zeile der jeweiligen Partnerdatei, Bsp: löschen Zeile 1 aus CD.txt löscht ebenfalls Zeile 1 aus CDP.txt ...
void Person::DelFileJoin(int Line, int i, int j)
{
    QString Buf;
    QString Buf2;
    int count = 0;

    if(i >= 0 && i <= 2){
        string arr = media1.at(i+3).toStdString();
        string arr2 = media1.at(j+3).toStdString();

        QFile file(media1.at(i + 3));
        if (!file.open(QIODevice::ReadOnly)){cerr << arr + " could not be opened! Maybe the file doesn`t exist." << endl;}
        else{
        QFile file2(media1.at(j + 3 ));
        if (!file2.open(QIODevice::WriteOnly)){cerr << arr2 + " could not be opened! Maybe the file doesn`t exist." << endl;}
        else{
             QTextStream in(&file);
             QTextStream out(&file2);
             while(!in.atEnd()){
                 count++;
                 Buf = in.readLine();
                 if(count != Line){Buf2 = Buf; out << Buf2 << Qt::endl;}
             }
        }
        file.close();

        QByteArray ba = media1.at(i+3).toLocal8Bit();
        const char *c_str2 = ba.data();

        QByteArray ba2 = media1.at(j+3).toLocal8Bit();
        const char *c_str3 = ba2.data();

        rename(c_str3, c_str2);
        file2.close();
        }
    }


        if(i >= 3 && i <= 5){
            string arr = media1.at(i-3).toStdString();
            string arr2 = media1.at(j-3).toStdString();

            QFile file(media1.at(i - 3));
            if (!file.open(QIODevice::ReadOnly)){cerr << arr + " could not be opened! Maybe the file doesn`t exist." << endl;}
            else{
            QFile file2(media1.at(j - 3 ));
            if (!file2.open(QIODevice::WriteOnly)){cerr << arr2 + " could not be opened! Maybe the file doesn`t exist." << endl;}
            else{
                 QTextStream in(&file);
                 QTextStream out(&file2);
                 while(!in.atEnd()){
                     count++;
                     Buf = in.readLine();
                     if(count != Line){Buf2 = Buf; out << Buf2 << Qt::endl;}
                 }
            }
            file.close();

            QByteArray ba = media1.at(i - 3).toLocal8Bit();
            const char *c_str2 = ba.data();

            QByteArray ba2 = media1.at(j - 3).toLocal8Bit();
            const char *c_str3 = ba2.data();

            rename(c_str3, c_str2);
            file2.close();
            }
    }

}

//löscht den jeweiligen Inhalt der jeweiligen Datei
void Person::DelFile(QString content, int Line, int i, int j) //i = Index der ComboBox
{
    setName(content);
    QString Buf;
    QString Buf2;
    int count = 0;

    string arr = media1.at(i).toStdString();
    string arr2 = media1.at(j).toStdString();

    QFile file(media1.at(i));
    if (!file.open(QIODevice::ReadOnly)){cerr << arr + " could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
    QFile file2(media1.at(j));
    if (!file2.open(QIODevice::WriteOnly)){cerr << arr2 + " could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
         QTextStream in(&file);
         QTextStream out(&file2);
         while(!in.atEnd()){
             count++;
             Buf = in.readLine();
             if(Buf != this->Name || (count != Line)){Buf2 = Buf; out << Buf2 << Qt::endl;}
         }
    }
    file.close();

    QByteArray ba = media1.at(i).toLocal8Bit();
    const char *c_str2 = ba.data();

    QByteArray ba2 = media1.at(j).toLocal8Bit();
    const char *c_str3 = ba2.data();

    rename(c_str3, c_str2);
    file2.close();

    Person* P = new Person;
    P->DelFileJoin(Line, i, j);
    delete P;
    }
}

//löscht den jeweiligen Inhalt der jeweiligen Datei
void Person::DelFile(QString content, int i, int j)
{
    setName(content);
    QString Buf;
    QString Buf2;
    int count = 0;
    int count2;

    string arr = media1.at(i).toStdString();
    string arr2 = media1.at(j).toStdString();

    QFile file(media1.at(i));
    if (!file.open(QIODevice::ReadOnly)){cerr << arr + " could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
    QFile file2(media1.at(j));
    if (!file2.open(QIODevice::WriteOnly)){cerr << arr2 + " could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
         QTextStream in(&file);
         QTextStream out(&file2);
         while(!in.atEnd()){
             count++;
             Buf = in.readLine();
             if(Buf != this->Name){Buf2 = Buf; out << Buf2 << Qt::endl;}
             else{count2 = count;}
         }
    }
    file.close();

    QByteArray ba = media1.at(i).toLocal8Bit();
    const char *c_str2 = ba.data();

    QByteArray ba2 = media1.at(j).toLocal8Bit();
    const char *c_str3 = ba2.data();

    rename(c_str3, c_str2);
    file2.close();

    Person* P = new Person;
    P->DelFileJoin(count2,i,j);
    delete P;
    }
}

//schreibt die Daten in die jeweilige Datei
void Person::WriteFile(QString Person, int i)
{
    setName(Person);
    QFile file(media1.at(i));
    string arr = media1.at(i).toStdString();
    if (!file.open(QIODevice::Append|QIODevice::Text)){cerr << arr + " could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
        QTextStream out(&file);
        out << this->Name << Qt::endl;
     file.close();
     }
}

//zeigt den Inhalt der jeweiligen Datei
string Person::showP(int i) //i = Index der ComboBox
{
    QString Buf;
    int count = 0;
    QString Buf2;
    QString counter;

    QFile file(media1.at(i));
    string arr = media1.at(i).toStdString();
    if (!file.open(QIODevice::ReadOnly)){cerr << arr + " could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
        QTextStream in(&file);
        while(!in.atEnd())
        {
             count++;
             Buf = in.readLine();
             counter = QString::number(count);
             Buf2 += "Line ";
             Buf2 += counter;
             Buf2 += ": ";
             Buf2 += Buf;
             Buf2 += '\n';
        }
    }
    file.close();
    string Buf3 = Buf2.toStdString();
    return Buf3;
}
