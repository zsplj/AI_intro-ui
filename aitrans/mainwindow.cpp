#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "freetrans.h"
#include "restrictedtrans.h"

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

void MainWindow::on_fTransBtn_clicked()
{
    FreeTrans * fTransWindow = new FreeTrans();

    fTransWindow->show();
}


void MainWindow::on_rTransBtn_clicked()
{
    RestrictedTrans * rTransWindow = new RestrictedTrans();

    rTransWindow->show();
}

