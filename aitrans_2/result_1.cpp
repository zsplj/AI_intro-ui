#include "result_1.h"
#include "ui_result_1.h"
#include <QSoundEffect>
#include <QMediaPlayer>
#include <QUuid>
#include <QFile>
#include <QDateTime>

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
//    const auto uuid = QUuid::createUuid();
//    const auto newFilename = uuid.toString() + ".wav";
    QString newFilename = QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss") + ".wav";
    QFile file("D:/AI/test/aimodel/log.txt_1_log.wav.wav");
    file.copy("./results/" + newFilename);
    effect -> setSource(QUrl::fromLocalFile("./results/" + newFilename));
    effect -> setLoopCount(1);
    effect -> setVolume(0.75f);
    effect -> play();
}

