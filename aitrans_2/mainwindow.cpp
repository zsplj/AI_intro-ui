#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "restrictedtrans.h"
#include "speechsynthesis_1.h"

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

void MainWindow::on_SynthesisBtn_clicked()
{
    SpeechSynthesis_1 * synWindow = new SpeechSynthesis_1();
    synWindow->show();
}

