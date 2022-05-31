#ifndef FREETRANS_2_H
#define FREETRANS_2_H

#include <QWidget>

namespace Ui {
class Freetrans_2;
}

class Freetrans_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Freetrans_2(QWidget *parent = nullptr);
    ~Freetrans_2();

private slots:
    void on_nextBtn_clicked();

private:
    Ui::Freetrans_2 *ui;
};

#endif // FREETRANS_2_H
