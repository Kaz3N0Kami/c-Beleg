#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <QString>

using namespace std;

class Person
{
public:

    void setName(QString Name){this->Name = Name;}
    QString getName(){return Name;}

    void DelFile(QString Name, int i, int j);
    void DelFile(QString Name, int Line, int i, int j);
    void DelFileJoin(int Line, int i, int j);
    void WriteFile(QString Name, int i);

    string showP(int i);

private:
    QString Name;
};


#endif // PERSON_H
