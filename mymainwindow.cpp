#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include <QTextEdit>
MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}
void MyMainWindow::on_actionnew_triggered()
{
    QTextEdit
}
