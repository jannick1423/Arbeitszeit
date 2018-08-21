#include "pch.h"
#include "Angestellte.h"


Angestellte::Angestellte()
{
}

Angestellte::Angestellte(string vorname, string nachname, string abteilungsnummer, string personalnummer, string passwort, string telefon, string email, Adresse adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten, int anzUrlaubstage, int genommenUrlaub)
{
	this->vorname = vorname;
	this->nachname = nachname;
	this->abteilungsnummer = abteilungsnummer;
	this->personalnummer = personalnummer;
	this->passwort = passwort;
	this->telefon = telefon;
	this->email = email;
	this->adresse = adresse;
	this->istWeiblich = istWeiblich;
	this->arbeitStunden = arbeitStunden;
	this->arbeitMinuten = arbeitMinuten;
	this->anzUrlaubstage = anzUrlaubstage;
	this->genommenUrlaub = genommenUrlaub;
}


Angestellte::~Angestellte()
{
}

string Angestellte::getVorname()
{
	return vorname;
}

string Angestellte::getNachname()
{
	return nachname;
}

string Angestellte::getAbteilungsnummer()
{
	return abteilungsnummer;
}

string Angestellte::getPersonalnummer()
{
	return personalnummer;
}

string Angestellte::getPasswort()
{
	return passwort;
}

string Angestellte::getTelefon()
{
	return telefon;
}

string Angestellte::getEmail()
{
	return email;
}

Adresse Angestellte::getAdresse()
{
	return adresse;
}

int Angestellte::getArbeitStunden()
{
	return arbeitStunden;
}

int Angestellte::getArbeitMinuten()
{
	return arbeitMinuten;
}

int Angestellte::getAnzUrlaubstage()
{
	return anzUrlaubstage;
}

int Angestellte::getGenommenUrlaub()
{
	return genommenUrlaub;
}

void Angestellte::setVorname(string vorname)
{
	this->vorname = vorname;
}

void Angestellte::setNachname(string nachname)
{
	this->nachname = nachname;
}

void Angestellte::setAbteilungsnummer(string abteilungsnummer)
{
	this->abteilungsnummer = abteilungsnummer;
}

void Angestellte::setPersonalnummer(string personalnummer)
{
	this->personalnummer = personalnummer;
}

void Angestellte::setPasswort(string passwort)
{
	this->passwort = passwort;
}

void Angestellte::setTelefon(string telefon)
{
	this->telefon = telefon;
}

void Angestellte::setEmail(string email)
{
	this->email = email;
}

void Angestellte::setAdresse(Adresse adresse)
{
	this->adresse = adresse;
}

void Angestellte::setArbeitStunden(int arbeitStunden)
{
	this->arbeitStunden = arbeitStunden;
}

void Angestellte::setArbeitMinuten(int arbeitMinuten)
{
	this->arbeitMinuten = arbeitMinuten;
}

void Angestellte::setAnzUrlaubstage(int anzUrlaubstage)
{
	this->anzUrlaubstage = anzUrlaubstage;
}

void Angestellte::setGenommenUrlaub(int genommenUrlaub)
{
	this->genommenUrlaub = genommenUrlaub;
}
