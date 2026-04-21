#ifndef EXPORTINV_H
#define EXPORTINV_H

#include <QDialog>

namespace Ui {
class ExportInv;
}

class ExportInv : public QDialog
{
    Q_OBJECT

public:
    explicit ExportInv(QWidget *parent = nullptr);
    ~ExportInv();

private:
    Ui::ExportInv *ui;
};

#endif // EXPORTINV_H
