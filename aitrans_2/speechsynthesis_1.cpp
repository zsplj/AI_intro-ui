#include "speechsynthesis_1.h"
#include "ui_speechsynthesis_1.h"
#include "result_1.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

SpeechSynthesis_1::SpeechSynthesis_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpeechSynthesis_1)
{
    ui->setupUi(this);
    logSelect = new QButtonGroup(this);
    logSelect -> addButton(ui -> radioButton1, 1);
    logSelect -> addButton(ui -> radioButton2, 2);
    logSelect -> addButton(ui -> radioButton3, 3);
}

SpeechSynthesis_1::~SpeechSynthesis_1()
{
    delete ui;
}

// 按下第一个选择文件的行为
void SpeechSynthesis_1::on_nextBtn_2_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, "选择文本文件", "../", "txt(*.txt)");
    if (!path.isEmpty()) {
        QFile file(path);
        bool isok = file.open(QIODevice::ReadOnly);
        if (isok) {
            QTextStream fileStream(&file);
            QString str, s1;
            while (fileStream.atEnd() == false) {
                str = fileStream.readLine();
                s1.append(str);
            }
            ui -> plainTextEdit -> setPlainText(s1);
            qDebug() << s1 << '\n';
        }
        file.close();
    }
    else {
        QMessageBox::warning(this, "提示", "文件路径为空！");
    }
}

// 按下第二个选择文件的行为
void SpeechSynthesis_1::on_nextBtn_3_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, "选择语音文件", "../", "wav(*.wav)");
    if (!path.isEmpty()) {
        QFile file(path);
        file.copy("D:/AI/test/aimodel/log.wav");
        // do something.
        file.close();
    }
    else {
        QMessageBox::warning(this, "提示", "文件路径为空！");
    }
}

// 按下下一步按钮的行为
void SpeechSynthesis_1::on_nextBtn_4_clicked()
{
    //读取文本
    QString text = ui -> plainTextEdit -> toPlainText();
    if (ui -> plainTextEdit -> toPlainText().isEmpty()) {
        QMessageBox::warning(this, "提示", "合成文本为空！");
    }
    QFile file;
    file.setFileName("D:/AI/test/aimodel/log.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream in(&file);
        in.setEncoding(QStringConverter::System);
        in << text;
    }
    file.close();

    this -> close();

    //完成转换
    if (logSelect -> checkedId() == 1) {
        QFile sFile("D:/AI/test/aimodel/voice-denoise/doramon.wav");
        sFile.copy("D:/AI/test/aimodel/log.wav");
    }
    if (logSelect -> checkedId() == 2) {
        QFile sFile("D:/AI/test/aimodel/voice-denoise/slow_sheep.wav");
        sFile.copy("D:/AI/test/aimodel/log.wav");
    }
    if (logSelect -> checkedId() == 3) {
        QFile sFile("D:/AI/test/aimodel/voice-denoise/xiaoxin.wav");
        sFile.copy("D:/AI/test/aimodel/log.wav");
    }
    system("echo off && cd D:/AI/test/aimodel && conda activate work && python gen_voice.py log.txt log.wav");

    //结果
    Result_1 *resWindow = new Result_1();
    resWindow -> setWindowModality(Qt::ApplicationModal);
    resWindow -> show();

    file.remove();
    QFile wavFile("D:/AI/test/aimodel/log.wav");
    wavFile.remove();
}

