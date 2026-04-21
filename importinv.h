#ifndef IMPORTINV_H
#define IMPORTINV_H

#include <QDialog>
#include <QFileDialog>
namespace Ui {
class ImportInv;
}

class ImportInv : public QDialog
{
    Q_OBJECT

public:
    explicit ImportInv(QWidget *parent = nullptr);
    ~ImportInv();

private slots:
    void on_executeBtn_clicked();

    void on_readFromFileRB_clicked(bool checked);

    void on_readFromDeviceRB_clicked(bool checked);

private:
    Ui::ImportInv *ui;
};

#endif // IMPORTINV_H
