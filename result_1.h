#ifndef RESULT_1_H
#define RESULT_1_H

#include <QWidget>

namespace Ui {
class Result_1;
}

class Result_1 : public QWidget
{
    Q_OBJECT

public:
    explicit Result_1(QWidget *parent = nullptr);
    ~Result_1();

private:
    Ui::Result_1 *ui;
};

#endif // RESULT_1_H
