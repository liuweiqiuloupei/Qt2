
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "第一次发生修改" << Qt::endl;
    qDebug() << "第二次发生修改" << Qt::endl;
    qDebug() << "第三次发生修改" << Qt::endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}


