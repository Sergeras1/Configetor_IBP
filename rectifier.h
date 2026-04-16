#ifndef RECTIFIER_H
#define RECTIFIER_H

#include <QWidget>

namespace Ui {
class Rectifier;
}

class Rectifier : public QWidget
{
    Q_OBJECT

public:
    explicit Rectifier(QWidget *parent = nullptr);
    ~Rectifier();

private:
    Ui::Rectifier *ui;
    //MainWindow* mw;
};

#endif // RECTIFIER_H
