#include "exportinv.h"
#include "ui_exportinv.h"

ExportInv::ExportInv(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExportInv)
{
    ui->setupUi(this);
    connect(ui->cancelBtn, &QPushButton::clicked,this, [=](){
        close();
    });
}

ExportInv::~ExportInv()
{
    delete ui;
}
