#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>
#include <QString>

class Contact : public QObject
{
    Q_OBJECT
public:
    explicit Contact(QObject *parent = nullptr, QString nom, QString prenom, QString telephone, QString frequence);

    QString getNom() const;
    void setNom(const QString &value);

    QString getPrenom() const;
    void setPrenom(const QString &value);

    QString getTelephone() const;
    void setTelephone(const QString &value);

    QString getPhoto() const;
    void setPhoto(const QString &value);

    QString getFrequence() const;
    void setFrequence(const QString &value);

private:
    QString nom;
    QString prenom;
    QString telephone;
    QString photo;
    QString frequence;

signals:

public slots:
};

#endif // CONTACT_H
