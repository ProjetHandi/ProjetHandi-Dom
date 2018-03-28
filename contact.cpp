#include "contact.h"

Contact::Contact(QObject *parent, QString nom, QString prenom, QString telephone, QString frequence) : QObject(parent)
{
    this->nom = nom;
    this->prenom = prenom;
    this->telephone = telephone;
    this->frequence = frequence;
}

QString Contact::getNom() const
{
    return nom;
}

void Contact::setNom(const QString &value)
{
    nom = value;
}

QString Contact::getPrenom() const
{
    return prenom;
}

void Contact::setPrenom(const QString &value)
{
    prenom = value;
}

QString Contact::getTelephone() const
{
    return telephone;
}

void Contact::setTelephone(const QString &value)
{
    telephone = value;
}

QString Contact::getPhoto() const
{
    return photo;
}

void Contact::setPhoto(const QString &value)
{
    photo = value;
}

QString Contact::getFrequence() const
{
    return frequence;
}

void Contact::setFrequence(const QString &value)
{
    frequence = value;
}
