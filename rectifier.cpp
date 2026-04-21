#include "rectifier.h"
#include "ui_rectifier.h"
#include <QFileDialog>

Rectifier::Rectifier(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rectifier)
{
    ui->setupUi(this);
    connect(ui->cancelBtn, &QPushButton::clicked,this, [=](){
        close();
    });
}

Rectifier::~Rectifier()
{
    delete ui;
}

void Rectifier::on_executeBtn_clicked()
{
    QString url;
    if(ui->readFromFileRB->isChecked()){
        url = QFileDialog::getOpenFileName();
    }
}


void Rectifier::on_readFromFileRB_clicked(bool checked)
{
    if(checked){
        ui->executeBtn->setText("Выбрать файл");
    }
}


void Rectifier::on_readFromDeviceRB_clicked(bool checked)
{
    if(checked){
        ui->executeBtn->setText("Выполнить");
    }
}

