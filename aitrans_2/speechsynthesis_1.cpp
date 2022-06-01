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
        file.copy("D:/workspace/Qt/MockingBird/log.wav");
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
    QString text = ui -> plainTextEdit -> toPlainText();
    QFile file;
    file.setFileName("D:/workspace/Qt/MockingBird/log.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream in(&file);
        in.setEncoding(QStringConverter::System);
        in << text;
    }
    file.close();

    this -> close();

    //完成转换
    system("cd D:/workspace/Qt/MockingBird && conda activate work && python gen_voice.py log.txt log.wav");

    Result_1 *resWindow = new Result_1();
    resWindow -> setWindowModality(Qt::ApplicationModal);
    resWindow -> show();

    file.remove();
    QFile wavFile("D:/workspace/Qt/MockingBird/log.wav");
    wavFile.remove();
}

