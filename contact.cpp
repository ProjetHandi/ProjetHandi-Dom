#include "contact.h"

Contact::Contact(std::string nom, std::string prenom, std::string photo, std::string telephone, std::string frequence)
{
    this->nom = nom;
    this->prenom = prenom;
    this->photo = photo;
    this->telephone = telephone;
    this->frequence = frequence;
}

std::string Contact::getNom() const
{
    return nom;
}

void Contact::setNom(const std::string &value)
{
    nom = value;
}

std::string Contact::getPrenom() const
{
    return prenom;
}

void Contact::setPrenom(const std::string &value)
{
    prenom = value;
}

std::string Contact::getTelephone() const
{
    return telephone;
}

void Contact::setTelephone(const std::string &value)
{
    telephone = value;
}

std::string Contact::getPhoto() const
{
    return photo;
}

void Contact::setPhoto(const std::string &value)
{
    photo = value;
}

std::string Contact::getFrequence() const
{
    return frequence;
}

void Contact::setFrequence(const std::string &value)
{
    frequence = value;
}
