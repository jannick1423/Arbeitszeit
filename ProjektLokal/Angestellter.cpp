#include "pch.h"
#include "Angestellter.h"


Angestellter::Angestellter()
{
}

Angestellter::Angestellter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten, int anzUrlaubstage, int genommenUrlaub)
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


Angestellter::~Angestellter()
{
}

String^ Angestellter::getVorname()
{
	return vorname;
}

String^ Angestellter::getNachname()
{
	return nachname;
}

String^ Angestellter::getAbteilungsnummer()
{
	return abteilungsnummer;
}

String^ Angestellter::getPersonalnummer()
{
	return personalnummer;
}

String^ Angestellter::getPasswort()
{
	return passwort;
}

String^ Angestellter::getTelefon()
{
	return telefon;
}

String^ Angestellter::getEmail()
{
	return email;
}

Adresse^ Angestellter::getAdresse()
{
	return adresse;
}

int Angestellter::getArbeitStunden()
{
	return arbeitStunden;
}

int Angestellter::getArbeitMinuten()
{
	return arbeitMinuten;
}

int Angestellter::getAnzUrlaubstage()
{
	return anzUrlaubstage;
}

int Angestellter::getGenommenUrlaub()
{
	return genommenUrlaub;
}

//NEU
List<DateTime>^ Angestellter::getArbeitsTagAktuell() {
	return arbeitsTagAktuell;
}

//NEU
Hashtable^ Angestellter::getArbeitsTage() {
	return arbeitsTage;
}

void Angestellter::setVorname(String^ vorname)
{
	this->vorname = vorname;
}

void Angestellter::setNachname(String^ nachname)
{
	this->nachname = nachname;
}

void Angestellter::setAbteilungsnummer(String^ abteilungsnummer)
{
	this->abteilungsnummer = abteilungsnummer;
}

void Angestellter::setPersonalnummer(String^ personalnummer)
{
	this->personalnummer = personalnummer;
}

void Angestellter::setPasswort(String^ passwort)
{
	this->passwort = passwort;
}

void Angestellter::setTelefon(String^ telefon)
{
	this->telefon = telefon;
}

void Angestellter::setEmail(String^ email)
{
	this->email = email;
}

void Angestellter::setAdresse(Adresse^ adresse)
{
	this->adresse = adresse;
}

void Angestellter::setArbeitStunden(int arbeitStunden)
{
	this->arbeitStunden = arbeitStunden;
}

void Angestellter::setArbeitMinuten(int arbeitMinuten)
{
	this->arbeitMinuten = arbeitMinuten;
}

void Angestellter::setAnzUrlaubstage(int anzUrlaubstage)
{
	this->anzUrlaubstage = anzUrlaubstage;
}

void Angestellter::setGenommenUrlaub(int genommenUrlaub)
{
	this->genommenUrlaub = genommenUrlaub;
}

//NEU
void Angestellter::fuegeZeitHinzu() 
{
	arbeitsTagAktuell->Add(DateTime::Today);
}

//NEU
void Angestellter::aendereTag(DateTime tag, List<DateTime>^ neueZeiten) 
{
	arbeitsTage->Remove(tag.Date);
	arbeitsTage->Add(tag.Date, neueZeiten);
}

//NEU
void Angestellter::arbeitsTagBeenden() 
{
	fuegeZeitHinzu();
	arbeitsTage->Add(DateTime::Today, arbeitsTagAktuell);
	arbeitsTagAktuell->Clear;
}
