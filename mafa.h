#ifndef MAFA_H
#define MAFA_H

#include <QMainWindow>

namespace Ui {
class MAFA;
}

class MAFA : public QMainWindow
{
    Q_OBJECT

public:
    explicit MAFA(QWidget *parent = 0);
    ~MAFA();

private:
    Ui::MAFA *ui;
};

#endif // MAFA_H
