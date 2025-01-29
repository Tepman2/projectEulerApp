#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLCDNumber>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    unsigned long long solution01 = 0;
    unsigned long long solution02 = 0;
    unsigned long long solution03 = 0;
    unsigned long long solution04 = 0;
    unsigned long long solution05 = 0;
    unsigned long long solution06 = 0;
    void updateDigitCount(QLCDNumber *disp, unsigned long long num);
};
#endif // MAINWINDOW_H
