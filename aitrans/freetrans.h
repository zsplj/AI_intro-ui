#ifndef FREETRANS_H
#define FREETRANS_H

#include <QWidget>

namespace Ui {
class FreeTrans;
}

class FreeTrans : public QWidget
{
    Q_OBJECT

public:
    explicit FreeTrans(QWidget *parent = nullptr);
    ~FreeTrans();

private:
    Ui::FreeTrans *ui;
};

#endif // FREETRANS_H
