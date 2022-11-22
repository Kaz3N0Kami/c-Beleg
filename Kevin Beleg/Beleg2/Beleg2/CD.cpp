#include "CD.h"
#include <iostream>
#include <QTextStream>
#include <QFile>

//schreibt in Datei
void CD::WriteFile(QString Name , QString Author)
{
    setAuthor(Author);
    setName(Name);
    QFile CD("CD.txt");
    if (!CD.open(QIODevice::Append|QIODevice::Text)){cerr << "CD.txt could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
        QTextStream out(&CD);
        out << getName() + "," + getAuthor() << Qt::endl;
     CD.close();
     }
}

//zeigt den Inhalt der Datei
string CD::showCD()
{
    QString Buf;
    int count = 0;
    QString Buf2;
    QString counter;

    QFile CD("CD.txt");
    if (!CD.open(QIODevice::ReadOnly)){cerr << "CD.txt could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
        QTextStream in(&CD);
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
    CD.close();
    string Buf3 = Buf2.toStdString();
    return Buf3;
}
