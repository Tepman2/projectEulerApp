#include <QLCDNumber>
#include <string>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "problem01.h"
#include "problem02.h"
#include "problem03.h"
#include "problem04.h"
#include "problem05.h"
#include "problem06.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    ProjectEuler::Problem01 solver = ProjectEuler::Problem01(1000);
    solution01 = solver.solve();
    updateDigitCount(ui->lcdAnswer_01, solution01);
    ui->lcdAnswer_1->display((int)solution01);
    ui->lcdAnswer_1->update();
}


void MainWindow::on_pushButton_2_clicked()
{
    ProjectEuler::Problem02 solver = ProjectEuler::Problem02();
    solution02 = solver.solve();
    updateDigitCount(ui->lcdAnswer_02, solution02);
    ui->lcdAnswer_2->display((int)solution02);
    ui->lcdAnswer_2->update();
}

void MainWindow::on_pushButton_3_clicked()
{
    ProjectEuler::Problem03 solver = ProjectEuler::Problem03(600851475143);
    solution03 = solver.solve();
    updateDigitCount(ui->lcdAnswer_03, solution03);
    ui->lcdAnswer_3->display((int)solution03);
    ui->lcdAnswer_3->update();
}

void updateDigitCount(QLCDNumber * disp, unsigned long long num) {
    std::string str_num = std::to_string(num);
    disp->setDigitCount(str_num.length());
    disp->adjustSize();
}
