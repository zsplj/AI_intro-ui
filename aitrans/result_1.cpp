#include "result_1.h"
#include "ui_result_1.h"

Result_1::Result_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Result_1)
{
    ui->setupUi(this);
}

Result_1::~Result_1()
{
    delete ui;
}
