#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_lineEdit_2_returnPressed();

    void on_comboBox_currentIndexChanged(int index);

    void on_lineEdit_5_returnPressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
