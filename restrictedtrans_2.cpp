#include "restrictedtrans_2.h"
#include "ui_restrictedtrans_2.h"
#include "result_1.h"

RestrictedTrans_2::RestrictedTrans_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RestrictedTrans_2)
{
    ui->setupUi(this);
}

RestrictedTrans_2::~RestrictedTrans_2()
{
    delete ui;
}

void RestrictedTrans_2::on_nextBtn_clicked()
{
    Result_1 *result_1 = new Result_1();
    result_1->show();
}

