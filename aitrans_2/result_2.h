#ifndef RESULT_2_H
#define RESULT_2_H

#include <QWidget>

namespace Ui {
class Result_2;
}

class Result_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Result_2(QWidget *parent = nullptr);
    ~Result_2();

private:
    Ui::Result_2 *ui;
};

#endif // RESULT_2_H
