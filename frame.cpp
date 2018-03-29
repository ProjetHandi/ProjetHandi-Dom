#include "frame.h"
#include <iostream>
#include <stdio.h>
#include "ui_frame.h"
#include <QCoreApplication>
#include <QString>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <QProcess>
#include <contact.h>
#include <QMap>
#include <QMapIterator>
#include <QDebug>
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
    result = this->queryOne("\"SELECT photo FROM contacts WHERE prenom = 'Louis'\"");
    icon1.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->queryOne("\"SELECT photo FROM contacts WHERE prenom = 'Leo'\"");
    icon2.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->queryOne("\"SELECT photo FROM contacts WHERE prenom = 'Adrien'\"");
    icon3.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->queryOne("\"SELECT photo FROM contacts WHERE prenom = 'Kateryna'\"");
    icon4.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->queryOne("\"SELECT photo FROM contacts WHERE prenom = 'Nathan'\"");
    icon5.addFile(result, QSize(), QIcon::Normal, QIcon::Off);
    result = this->queryOne("\"SELECT photo FROM contacts WHERE prenom = 'Titouan'\"");
    icon6.addFile(result, QSize(), QIcon::Normal, QIcon::Off);

    ui->precedent->setIcon(fleche1); ui->suivant->setIcon(fleche2); ui->telephoner->setIcon(tel);
    ui->contact1->setIcon(icon1); ui->contact2->setIcon(icon2); ui->contact3->setIcon(icon3);
    ui->contact4->setIcon(icon4); ui->contact5->setIcon(icon5); ui->contact6->setIcon(icon6);
    ui->contact1->setIconSize(QSize(128, 128)); ui->contact2->setIconSize(QSize(128, 128));
    ui->contact3->setIconSize(QSize(128, 128)); ui->contact4->setIconSize(QSize(128, 128));
    ui->contact5->setIconSize(QSize(128, 128)); ui->contact6->setIconSize(QSize(128, 128));

}

void Frame::makeCall(QString number) {
    QString programme("sudo python py/call.py " + number);
    QProcess process;
    process.startDetached(programme);
}

Frame::~Frame()
{
    delete ui;
}

void Frame::on_contact1_clicked()
{
//    if (this->queryOne("\"SELECT frequence FROM contacts WHERE prenom = 'Louis'\""))
    this->makeCall("\"+33651504320\"");
}


QString Frame::queryOne(QString command) {
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

void Frame::getContacts(QMap<QString, Contact> map) {
    QMapIterator<QString, Contact> i(map);
    while (i.hasNext()) {
        i.next();
        qDebug() << i.value().getNom().c_str() << "|" << i.value().getPrenom().c_str() << "|" << i.value().getPhoto().c_str() << "|" << i.value().getTelephone().c_str() << "|" << i.value().getFrequence().c_str();
    }
}

QMap<QString, Contact> Frame::query(QString query) {
    sql::Driver *driver;
    sql::Connection *con;
    sql::PreparedStatement *prep_stmt;
    sql::ResultSet *res;
    sql::Statement *stmt;
    QMap<QString, Contact> map;
    driver = get_driver_instance();
    con = driver->connect("127.0.0.1", "root", "btsir123");
    stmt = con->createStatement();
    stmt->execute("USE HandiDom");

    prep_stmt = con->prepareStatement(query.toStdString());
    res = prep_stmt->executeQuery();

    while(res->next()) {
        map.insert(QString::fromStdString(res->getString("nom").c_str()), Contact(res->getString("nom").asStdString(),
                                                                                  res->getString("prenom").asStdString(),
                                                                                  res->getString("photo").asStdString(),
                                                                                  res->getString("telephone").asStdString(),
                                                                                  res->getString("frequence").asStdString()));
    }

    delete stmt;
    delete con;
    delete res;
    return map;
}

void Frame::on_suivant_clicked()
{
    this->getContacts(this->query("SELECT * FROM contacts"));
}

void Frame::on_contact2_clicked()
{
}

