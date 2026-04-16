#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "rectifier.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*Менюк кнопок*/
    connect(ui->adcBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->canBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->rcBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(2);
    });
    connect(ui->usbBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(3);
    });
    connect(ui->sdBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(4);
    });
    connect(ui->wifiBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(6);
    });
    connect(ui->sensorBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(7);
    });
    connect(ui->serviceSettingsBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(8);
    });
    connect(ui->ustavkBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(9);
    });
    connect(ui->pidBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(5);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


