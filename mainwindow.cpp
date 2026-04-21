#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "rectifier.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*Меню кнопок выпрямителя*/
    connect(ui->adcBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->interfaceCommunitacionBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->sdBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(2);
    });
    connect(ui->sensorBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(4);
    });
    connect(ui->serviceSettingsBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(5);
    });
    connect(ui->ustavkBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(6);
    });
    connect(ui->importBtn, &QPushButton::clicked, this, [=](){
        recWin = new Rectifier;
        recWin->show();
    });
    connect(ui->exportBtn, &QPushButton::clicked, this, [=](){
        exRecWin = new exportRec;
        exRecWin->show();
    });

    /*Меню кнопок инвертора*/

    connect(ui->invAdcBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidgetInv->setCurrentIndex(0);
    });
    connect(ui->InvInterfaceCommunitacionBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidgetInv->setCurrentIndex(1);
    });
    connect(ui->invSdBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidgetInv->setCurrentIndex(2);
    });
    connect(ui->invSensorBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidgetInv->setCurrentIndex(4);
    });
    connect(ui->invServiceSettingsBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidgetInv->setCurrentIndex(5);
    });
    connect(ui->invUstavkBtn, &QPushButton::clicked, this, [=](){
        ui->stackedWidgetInv->setCurrentIndex(6);
    });
    connect(ui->invImportBtn, &QPushButton::clicked, this, [=](){
        impInvWin = new ImportInv;
        impInvWin->show();
    });
    connect(ui->invExportBtn, &QPushButton::clicked, this, [=](){
        expInvWin = new ExportInv;
        expInvWin->show();
    });

    connect(ui->tabWidget, &QTabWidget::tabBarClicked, this, [=](int idx){
        switch(idx){
        case 0:
            ui->statusBar->showMessage("Общее");
            break;
        case 1:
            ui->statusBar->showMessage("Выпрямитель");
            break;

        case 2:
            ui->statusBar->showMessage("Инвертор");
            break;
        default:
            ui->statusBar->showMessage("Ошибка вывода вкладки");
            break;
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
    delete recWin;
    delete exRecWin;
    delete impInvWin;
    delete expInvWin;
}


