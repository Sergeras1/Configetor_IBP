#include "importinv.h"
#include "ui_importinv.h"

ImportInv::ImportInv(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ImportInv)
{
    ui->setupUi(this);
    connect(ui->cancelBtn, &QPushButton::clicked,this, [=](){
        close();
    });
}

ImportInv::~ImportInv()
{
    delete ui;
}
