#include "Medium.h"
#include <iostream>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QString>

QList <QString> media = {"CD.txt", "Books.txt","BR.txt", "CDP.txt" ,"BP.txt", "BRP.txt", "CD2.txt","Books2.txt","BR2.txt","CDP2.txt","BP2.txt", "BRP2.txt"};

//sucht nach dem jeweiligen String und gibt die Suchergebnisse aus
QString Medium::Search(QString content, int i)
{
    setContent(content);
    QString Buf;
    QString Buf2;
    QString counter;
    string arr = media.at(i).toStdString();
    int count = 0;

    QFile file(media.at(i));
    if (!file.open(QIODevice::ReadOnly)){cerr <<  arr + " could not be opened! Maybe the file doesn`t exist." << endl;}
    else{
         QTextStream in(&file);
         while(!in.atEnd()){
             count++;
             Buf = in.readLine();
             if(Buf == getContent()){
                 counter = QString::number(count);
                 Buf2 += "Line ";
                 Buf2 += counter;
                 Buf2 += ": ";
                 Buf2 += Buf;
                 Buf2 += '\n';
             }
         }
    }
    file.close();
    return Buf2;
}

//gibt den jeweiligen Index der ComboBox an die jeweiligen globalen Indexvariablen
int Medium::IndexCheck(int Index)
{
    setIndex(Index);

    if(this->Index == 0){return 0;}
    else if(this->Index == 1){return getIndex();}
    else if(this->Index == 2){return getIndex();}
    else if(this->Index == 3){return getIndex();}
    else if(this->Index == 4){return getIndex();}
    else if(this->Index == 5){return getIndex();}
}
