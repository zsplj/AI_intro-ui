#ifndef SPEECHSYNTHESIS_2_H
#define SPEECHSYNTHESIS_2_H

#include <QWidget>

namespace Ui {
class SpeechSynthesis_2;
}

class SpeechSynthesis_2 : public QWidget
{
    Q_OBJECT

public:
    explicit SpeechSynthesis_2(QWidget *parent = nullptr);
    ~SpeechSynthesis_2();

private slots:
    void on_nextBtn_clicked();

private:
    Ui::SpeechSynthesis_2 *ui;
};

#endif // SPEECHSYNTHESIS_2_H
