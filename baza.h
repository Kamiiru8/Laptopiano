#ifndef BAZA_H
#define BAZA_H

#include <QDialog>

namespace Ui {
class Baza;
}

class Baza : public QDialog
{
    Q_OBJECT

public:
    explicit Baza(QWidget *parent = 0);
    ~Baza();


private slots:
    void on_comboBox_currentIndexChanged(int index);
    void on_fontComboBox_currentIndexChanged(const QString &arg1);
    void on_spinBox_valueChanged(int arg1);

private:
    Ui::Baza *ui;
};

#endif // BAZA_H
