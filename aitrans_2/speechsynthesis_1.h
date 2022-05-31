#ifndef SPEECHSYNTHESIS_1_H
#define SPEECHSYNTHESIS_1_H

#include <QWidget>

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
    void on_nextBtn_clicked();

private:
    Ui::SpeechSynthesis_1 *ui;
};

#endif // SPEECHSYNTHESIS_1_H
