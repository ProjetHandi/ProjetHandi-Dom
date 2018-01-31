#include "frame.h"
#include "ui_frame.h"
#include <QCoreApplication>

Frame::Frame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Frame)
{
    ui->setupUi(this);
}

Frame::~Frame()
{
    delete ui;
}

void Frame::on_suivant_clicked()
{
    if(ui->contact1->isEnabled()) {
        ui->contact1->setEnabled(false);
    } else {
        ui->contact1->setEnabled(true);
    }

}

void Frame::on_contact1_clicked()
{
    ui->contact1->setEnabled(false);
}

void Frame::on_contact2_clicked()
{
    ui->contact2->setEnabled(false);
}

