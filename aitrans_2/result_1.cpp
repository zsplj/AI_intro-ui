#include "result_1.h"
#include "ui_result_1.h"
#include <QSoundEffect>
#include <QMediaPlayer>
#include <QUuid>
#include <QFile>

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
    const auto uuid = QUuid::createUuid();
    const auto newFilename = uuid.toString() + ".wav";
    QFile file("D:/workspace/Qt/MockingBird/log.txt_1_log.wav.wav");
    file.copy("./" + newFilename);
    effect -> setSource(QUrl::fromLocalFile("./" + newFilename));
    effect -> setLoopCount(1);
    effect -> setVolume(0.5f);
    effect -> play();
}

