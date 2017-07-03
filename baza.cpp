#include "baza.h"
#include "ui_baza.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Baza::Baza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Baza)
{
    ui->setupUi(this);
   Baza::on_comboBox_currentIndexChanged(0);
}

Baza::~Baza()
{
    delete ui;
}

void Baza::on_comboBox_currentIndexChanged(int index)
{
    if (index == 0){
        QFile file(":/1.txt");
        file.open(QIODevice::ReadOnly);
        QTextStream in(&file);
        ui->textEdit->setText(in.readAll());}

    if (index == 1){
        QFile file(":/2.txt");
        file.open(QIODevice::ReadOnly);
        QTextStream in(&file);
        ui->textEdit->setText(in.readAll());}

    if (index == 2){
        QFile file(":/3.txt");
        file.open(QIODevice::ReadOnly);
        QTextStream in(&file);
        ui->textEdit->setText(in.readAll());}

    if (index == 3){
        QFile file(":/4.txt");
        file.open(QIODevice::ReadOnly);
        QTextStream in(&file);
        ui->textEdit->setText(in.readAll());}
}


void Baza::on_fontComboBox_currentIndexChanged(const QString &arg1)
{
    ui->textEdit->setFontFamily(arg1);
    Baza::on_comboBox_currentIndexChanged(ui->comboBox->currentIndex());
}

void Baza::on_spinBox_valueChanged(int arg1)
{
    ui->textEdit->setFontPointSize(arg1);
    Baza::on_comboBox_currentIndexChanged(ui->comboBox->currentIndex());
}
