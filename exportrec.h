#ifndef EXPORTREC_H
#define EXPORTREC_H

#include <QDialog>

namespace Ui {
class exportRec;
}

class exportRec : public QDialog
{
    Q_OBJECT

public:
    explicit exportRec(QWidget *parent = nullptr);
    ~exportRec();

private:
    Ui::exportRec *ui;
};

#endif // EXPORTREC_H
