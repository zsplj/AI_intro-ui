#include "freetrans.h"
#include "ui_freetrans.h"

FreeTrans::FreeTrans(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FreeTrans)
{
    ui->setupUi(this);
}

FreeTrans::~FreeTrans()
{
    delete ui;
}
