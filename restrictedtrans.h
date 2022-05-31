#ifndef RESTRICTEDTRANS_H
#define RESTRICTEDTRANS_H

#include <QWidget>

namespace Ui {
class RestrictedTrans;
}

class RestrictedTrans : public QWidget
{
    Q_OBJECT

public:
    explicit RestrictedTrans(QWidget *parent = nullptr);
    ~RestrictedTrans();

private:
    Ui::RestrictedTrans *ui;

};

#endif // RESTRICTEDTRANS_H
