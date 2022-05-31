#ifndef RESTRICTEDTRANS_2_H
#define RESTRICTEDTRANS_2_H

#include <QWidget>

namespace Ui {
class RestrictedTrans_2;
}

class RestrictedTrans_2 : public QWidget
{
    Q_OBJECT

public:
    explicit RestrictedTrans_2(QWidget *parent = nullptr);
    ~RestrictedTrans_2();

private slots:
    void on_nextBtn_clicked();

private:
    Ui::RestrictedTrans_2 *ui;
};

#endif // RESTRICTEDTRANS_2_H
