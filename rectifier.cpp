#include "rectifier.h"
#include "ui_rectifier.h"

Rectifier::Rectifier(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rectifier)
{
    ui->setupUi(this);
}

Rectifier::~Rectifier()
{
    delete ui;
}
