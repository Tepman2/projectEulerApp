//#include <iostream>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "problem01.h"
#include "problem02.h"
#include "problem03.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    ProjectEuler::Problem01 solver = ProjectEuler::Problem01(1000);
    solution01 = solver.solve();
    while(ui->lcdAnswer_1->checkOverflow((int)solution01)) {
        ui->lcdAnswer_1->setDigitCount(ui->lcdAnswer_1->digitCount() + 1);
        ui->lcdAnswer_1->adjustSize();
    }
    ui->lcdAnswer_1->display((int)solution01);
    ui->lcdAnswer_1->update();
}


void MainWindow::on_pushButton_2_clicked()
{
    ProjectEuler::Problem02 solver = ProjectEuler::Problem02();
    solution02 = solver.solve();
    while(ui->lcdAnswer_2->checkOverflow((int)solution02)) {
        ui->lcdAnswer_2->setDigitCount(ui->lcdAnswer_2->digitCount() + 1);
        ui->lcdAnswer_2->adjustSize();
    }
    ui->lcdAnswer_2->display((int)solution02);
    ui->lcdAnswer_2->update();
}

void MainWindow::on_pushButton_3_clicked()
{
    ProjectEuler::Problem03 solver = ProjectEuler::Problem03(600851475143);
    solution03 = solver.solve();
    while(ui->lcdAnswer_3->checkOverflow((int)solution03)) {
        ui->lcdAnswer_3->setDigitCount(ui->lcdAnswer_3->digitCount() + 1);
        ui->lcdAnswer_3->adjustSize();
    }
    ui->lcdAnswer_3->display((int)solution03);
    ui->lcdAnswer_3->update();
}

