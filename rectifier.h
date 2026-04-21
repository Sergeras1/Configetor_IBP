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

private slots:
    void on_executeBtn_clicked();

    void on_readFromFileRB_clicked(bool checked);

    void on_readFromDeviceRB_clicked(bool checked);

private:
    Ui::Rectifier *ui;
    //MainWindow* mw;
};

#endif // RECTIFIER_H
