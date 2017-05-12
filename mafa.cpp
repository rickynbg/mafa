#include "mafa.h"
#include "ui_mafa.h"

MAFA::MAFA(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MAFA)
{
    ui->setupUi(this);
}

MAFA::~MAFA()
{
    delete ui;
}
