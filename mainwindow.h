#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rectifier.h"
#include "exportrec.h"
#include "importinv.h"
#include "exportinv.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui;
    Rectifier* recWin;
    exportRec* exRecWin;
    ImportInv* impInvWin;
    ExportInv* expInvWin;
};
#endif // MAINWINDOW_H
