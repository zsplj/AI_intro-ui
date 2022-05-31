#include "freetrans_2.h"
#include "ui_freetrans_2.h"
#include "result_1.h"

Freetrans_2::Freetrans_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Freetrans_2)
{
    ui->setupUi(this);
}

Freetrans_2::~Freetrans_2()
{
    delete ui;
}

void Freetrans_2::on_nextBtn_clicked()
{
    Result_1 * result1 = new Result_1();
    result1->show();
}

