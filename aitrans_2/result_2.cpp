#include "result_2.h"
#include "ui_result_2.h"

Result_2::Result_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Result_2)
{
    ui->setupUi(this);
}

Result_2::~Result_2()
{
    delete ui;
}
