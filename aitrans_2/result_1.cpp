#include "result_1.h"
#include "ui_result_1.h"
#include <QSoundEffect>

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

void Result_1::on_pushButton_clicked()
{
    QSoundEffect *effect = new QSoundEffect;
    effect -> setSource(QUrl::fromLocalFile("./res.wav"));
    effect -> setLoopCount(1);
    effect -> setVolume(0.25f);
    effect -> play();
}

