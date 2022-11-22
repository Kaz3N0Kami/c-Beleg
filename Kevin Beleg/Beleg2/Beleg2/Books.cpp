#include "Books.h"
#include <iostream>
#include <fstream>
#include <QTextStream>
#include <QFile>

using namespace std;

//schreibt in Datei
void Books::WriteFile(QString Name , QString Author)
{
    setAuthor(Author);
    setName(Name);
    QFile Books("Books.txt");
    if (!Books.open(QIODevice::Append|QIODevice::Text)){cerr << "Books.txt could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
        QTextStream out(&Books);
        out << getName() + "," + getAuthor() << Qt::endl;
     Books.close();
     }
}

//zeigt Inhalt der Datei
string Books::showBooks()
{
    QString Buf;
    int count = 0;
    QString Buf2;
    QString counter;

    QFile Books("Books.txt");
    if (!Books.open(QIODevice::ReadOnly)){cerr << "Books.txt could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
        QTextStream in(&Books);
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
    Books.close();
    string Buf3 = Buf2.toStdString();
    return Buf3;
}
