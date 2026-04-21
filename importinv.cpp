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

void ImportInv::on_executeBtn_clicked()
{
    QString url;
   if(ui->readFromFileRB->isChecked()){
      url = QFileDialog::getOpenFileName();
    }
}


void ImportInv::on_readFromFileRB_clicked(bool checked)
{
    if(checked){
        ui->executeBtn->setText("Выбрать файл");
    }
}


void ImportInv::on_readFromDeviceRB_clicked(bool checked)
{
    if(checked){
        ui->executeBtn->setText("Выполнить");
    }
}

