#ifndef FRAME_H
#define FRAME_H

#include <QMainWindow>
#include <QPushButton>
#include <contact.h>

namespace Ui {
class Frame;
}

class Frame : public QMainWindow
{
    Q_OBJECT

public:
    explicit Frame(QWidget *parent = 0);
    QString queryOne(QString command);
    void makeCall(QString number);
    QMap<QString, Contact> query(QString query);
    void getContacts(QMap<QString, Contact> map);
    ~Frame();
private slots:
    void on_suivant_clicked();
    void on_contact1_clicked();
    void on_contact2_clicked();
private:
    Ui::Frame *ui;
};

#endif // FRAME_H
