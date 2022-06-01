#ifndef SPEECHSYNTHESIS_1_H
#define SPEECHSYNTHESIS_1_H

#include <QWidget>
#include <QButtonGroup>

namespace Ui {
class SpeechSynthesis_1;
}

class SpeechSynthesis_1 : public QWidget
{
    Q_OBJECT

public:
    explicit SpeechSynthesis_1(QWidget *parent = nullptr);
    ~SpeechSynthesis_1();

private slots:
    void on_nextBtn_2_clicked();

    void on_nextBtn_3_clicked();

    void on_nextBtn_4_clicked();

private:
    Ui::SpeechSynthesis_1 *ui;
    QButtonGroup * logSelect;
};

#endif // SPEECHSYNTHESIS_1_H
