#include "blueray.h"
#include <QFile>
#include <QTextStream>
#include <iostream>

//Schreibt in Datei
void BlueRay::WriteFile(QString Name, QString Author)
{
    setAuthor(Author);
    setName(Name);
    QFile BR("BR.txt");
    if (!BR.open(QIODevice::Append|QIODevice::Text)){cerr << "BR.txt could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
        QTextStream out(&BR);
        out << getName() + "," + getAuthor() << Qt::endl;
     BR.close();
     }
}

//zeigt den Inhalt der Datei
string BlueRay::showBR()
{
    QString Buf;
    int count = 0;
    QString Buf2;
    QString counter;

    QFile BR("BR.txt");
    if (!BR.open(QIODevice::ReadOnly)){cerr << "BR.txt could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
        QTextStream in(&BR);
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
    BR.close();
    string Buf3 = Buf2.toStdString();
    return Buf3;
}
