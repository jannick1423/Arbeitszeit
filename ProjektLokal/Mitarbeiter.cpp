#include "pch.h"
#include "Mitarbeiter.h"
#include "Vorgesetzte.h"


Mitarbeiter::Mitarbeiter()
{
	//Hallo
}

Mitarbeiter::Mitarbeiter(string vorname, string nachname, string abteilungsnummer, string personalnummer, string passwort, string telefon, string email, Adresse adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten, int anzUrlaubstage, int genommenUrlaub, Vorgesetzte v) : Angestellte(vorname, nachname, abteilungsnummer, personalnummer, passwort, telefon, email, adresse, istWeiblich, arbeitStunden, arbeitMinuten, anzUrlaubstage, genommenUrlaub)
{
	this->v = v;
}


Mitarbeiter::~Mitarbeiter()
{
	v.deleteMA(*this);
}

string Mitarbeiter::asString()
{
	string maText;
	maText = "Vorname: " + this->getVorname() + "\nNachname: " + this->getNachname() + "\nAbteilung: " + this->getAbteilungsnummer() + "\nPersonalnummer: " + this->getPersonalnummer() + "\nTelefon: " + this->getTelefon() + "\nEmail: " + this->getEmail() + "\nAdresse: " + this->getAdresse().asString();
	return maText;
}

Vorgesetzte Mitarbeiter::getVorgesetzte()
{
	return v;
}

void Mitarbeiter::setVorgesetzte(Vorgesetzte v)
{
	this->v = v;
	v.addMA(this);
}