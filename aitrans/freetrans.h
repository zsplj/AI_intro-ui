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

private slots:
    void on_nextBtn_clicked();

private:
    Ui::FreeTrans *ui;

};
#endif // FREETRANS_H
