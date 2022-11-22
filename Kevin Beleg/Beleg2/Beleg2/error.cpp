#include "error.h"
#include <QMessageBox>

void Error::ErrorShow()
{
    QMessageBox MSG;
    MSG.setText("The Inputvalue is not correct!");
    MSG.setInformativeText("You can not save the changes because it has not the correct Datasyntax!");
    MSG.setStandardButtons(QMessageBox::Cancel);
    MSG.exec();
}
