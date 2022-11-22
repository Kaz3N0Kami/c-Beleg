#ifndef BLUERAY_H
#define BLUERAY_H

#include "Medium.h"
#include <QString>

using namespace std;

class BlueRay:public Medium
{
public:

    void WriteFile(QString Name, QString Author);
    string showBR();

private:
    int Line;
};

#endif // BLUERAY_H
