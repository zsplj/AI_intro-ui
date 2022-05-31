#include "speechsynthesis_1.h"
#include "ui_speechsynthesis_1.h"
#include "speechsynthesis_2.h"

SpeechSynthesis_1::SpeechSynthesis_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpeechSynthesis_1)
{
    ui->setupUi(this);
}

SpeechSynthesis_1::~SpeechSynthesis_1()
{
    delete ui;
}

void SpeechSynthesis_1::on_nextBtn_clicked()
{
    SpeechSynthesis_2 *speechsynthesis_2 = new SpeechSynthesis_2();
    speechsynthesis_2->show();
}

