#include "freetrans.h"
#include "ui_freetrans.h"
#include "freetrans_2.h"

FreeTrans::FreeTrans(QWidget  *parent) :
    QWidget(parent),
    ui(new Ui::FreeTrans)
{
    ui->setupUi(this);
}

FreeTrans::~FreeTrans()
{
    delete ui;
}

void FreeTrans::on_nextBtn_clicked()
{
    Freetrans_2 *freetrans_2 = new Freetrans_2();
    freetrans_2->show();
}

