#include "restrictedtrans.h"
#include "ui_restrictedtrans.h"
#include "result_1.h"

RestrictedTrans::RestrictedTrans(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RestrictedTrans)
{
    ui->setupUi(this);
}

RestrictedTrans::~RestrictedTrans()
{
    delete ui;
}


