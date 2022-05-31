#include "speechsynthesis_2.h"
#include "ui_speechsynthesis_2.h"
#include "result_2.h"

SpeechSynthesis_2::SpeechSynthesis_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpeechSynthesis_2)
{
    ui->setupUi(this);
}

SpeechSynthesis_2::~SpeechSynthesis_2()
{
    delete ui;
}

void SpeechSynthesis_2::on_nextBtn_clicked()
{
    Result_2 *result_2 = new Result_2();
    result_2->show();
}

