#ifndef CD_H
#define CD_H

#include "Medium.h"
#include <QString>

using namespace std;

class CD:public Medium
{
public:

    void DelFile(QString content);
    void DelFile(QString content, int Line);
    void WriteFile(QString Name,QString Author);
    string showCD();

private:
    int Line;
};

#endif // CD_H
