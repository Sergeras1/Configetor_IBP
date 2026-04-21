#ifndef IMPORTINV_H
#define IMPORTINV_H

#include <QDialog>

namespace Ui {
class ImportInv;
}

class ImportInv : public QDialog
{
    Q_OBJECT

public:
    explicit ImportInv(QWidget *parent = nullptr);
    ~ImportInv();

private:
    Ui::ImportInv *ui;
};

#endif // IMPORTINV_H
