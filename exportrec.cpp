#include "exportrec.h"
#include "ui_exportrec.h"

exportRec::exportRec(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::exportRec)
{
    ui->setupUi(this);
    connect(ui->cancelBtn, &QPushButton::clicked,this, [=](){
        close();
    });
}

exportRec::~exportRec()
{
    delete ui;
}
