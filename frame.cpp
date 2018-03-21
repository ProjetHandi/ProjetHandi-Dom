#include "frame.h"
#include <iostream>
#include <stdio.h>
#include "ui_frame.h"
#include <QCoreApplication>
#include <QString>
#include <QProcess>
#include <QDebug>
//#include <mysql_driver.h>
//#include <mysql_connection.h>
//#include <cppconn/resultset.h>
//#include <cppconn/statement.h>
//#include <cppconn/prepared_statement.h>
#include <unistd.h>

Frame::Frame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Frame) {
    ui->setupUi(this);

    QString result;
    QIcon icon1, icon2, icon3, icon4, icon5, icon6, fleche1, fleche2, tel;
    fleche1.addFile(QStringLiteral("img/ihm/f.png"), QSize(), QIcon::Normal, QIcon::Off);
    fleche2.addFile(QStringLiteral("img/ihm/f2.png"), QSize(), QIcon::Normal, QIcon::Off);
    tel.addFile(QStringLiteral("img/ihm/phone.png"), QSize(), QIcon::Normal, QIcon::Off);
    result = this->query("\"SELECT photo FROM contacts WHERE prenom = 'Louis'\"");
    icon1.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->query("\"SELECT photo FROM contacts WHERE prenom = 'Leo'\"");
    icon2.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->query("\"SELECT photo FROM contacts WHERE prenom = 'Adrien'\"");
    icon3.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->query("\"SELECT photo FROM contacts WHERE prenom = 'Kateryna'\"");
    icon4.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->query("\"SELECT photo FROM contacts WHERE prenom = 'Nathan'\"");
    icon5.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->query("\"SELECT photo FROM contacts WHERE prenom = 'Titouan'\"");
    icon6.addFile(result, QSize(), QIcon::Normal, QIcon::Off);

    ui->precedent->setIcon(fleche1); ui->suivant->setIcon(fleche2); ui->telephoner->setIcon(tel);
    ui->contact1->setIcon(icon1); ui->contact2->setIcon(icon2); ui->contact3->setIcon(icon3);
    ui->contact4->setIcon(icon4); ui->contact5->setIcon(icon5); ui->contact6->setIcon(icon6);
    ui->contact1->setIconSize(QSize(128, 128)); ui->contact2->setIconSize(QSize(128, 128));
    ui->contact3->setIconSize(QSize(128, 128)); ui->contact4->setIconSize(QSize(128, 128));
    ui->contact5->setIconSize(QSize(128, 128)); ui->contact6->setIconSize(QSize(128, 128));
}

Frame::~Frame()
{
    delete ui;
}

QString Frame::query(QString command) {
    QString programme("python py/main.py " + command);
    QProcess process;
    QByteArray out;
    process.start(programme);
    process.waitForFinished(-1);
    out = process.readAllStandardOutput();
    out.toStdString();
    out.remove(out.length() - 1, 1);
    return out;
}

void Frame::on_suivant_clicked()
{

}

void Frame::on_contact1_clicked()
{

}

void Frame::on_contact2_clicked()
{

}

