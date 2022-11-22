#ifndef MEDIUM_H
#define MEDIUM_H

#include <string>
#include <QString>

using namespace std;

class Medium
{
public:

    void setName(QString Name){this->Name = Name;}
    QString getName(){return Name;}

    void setAuthor(QString Author){this->Author = Author;}
    QString getAuthor(){return Author;}

    void setContent(QString content){this->content = content;}
    QString getContent(){return content;}

    void setIndex(int Index){this->Index=Index;}
    int getIndex(){return Index;}

    QString Search(QString content, int Index);
    int IndexCheck(int Index);

private:
    QString Name;
    QString Author;
    QString content;
    int Index;
};

#endif // MEDIUM_H
