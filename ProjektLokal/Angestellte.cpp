#include "pch.h"
#include "Angestellte.h"


Angestellte::Angestellte()
{
}

Angestellte::Angestellte(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten, int anzUrlaubstage, int genommenUrlaub)
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

String^ Angestellte::getVorname()
{
	return vorname;
}

String^ Angestellte::getNachname()
{
	return nachname;
}

String^ Angestellte::getAbteilungsnummer()
{
	return abteilungsnummer;
}

String^ Angestellte::getPersonalnummer()
{
	return personalnummer;
}

String^ Angestellte::getPasswort()
{
	return passwort;
}

String^ Angestellte::getTelefon()
{
	return telefon;
}

String^ Angestellte::getEmail()
{
	return email;
}

Adresse^ Angestellte::getAdresse()
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

void Angestellte::setVorname(String^ vorname)
{
	this->vorname = vorname;
}

void Angestellte::setNachname(String^ nachname)
{
	this->nachname = nachname;
}

void Angestellte::setAbteilungsnummer(String^ abteilungsnummer)
{
	this->abteilungsnummer = abteilungsnummer;
}

void Angestellte::setPersonalnummer(String^ personalnummer)
{
	this->personalnummer = personalnummer;
}

void Angestellte::setPasswort(String^ passwort)
{
	this->passwort = passwort;
}

void Angestellte::setTelefon(String^ telefon)
{
	this->telefon = telefon;
}

void Angestellte::setEmail(String^ email)
{
	this->email = email;
}

void Angestellte::setAdresse(Adresse^ adresse)
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
