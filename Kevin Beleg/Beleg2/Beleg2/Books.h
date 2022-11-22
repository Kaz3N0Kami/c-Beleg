#ifndef BOOKS_H
#define BOOKS_H

#include "Medium.h"
#include <QString>

using namespace std;

class Books:public Medium
{
public:

    void WriteFile(QString Name, QString Author);

    string showBooks();

private:
    int Line;
    QString content;
};


#endif // BOOKS_H
