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
	this->arbeitStundenNoch = arbeitStunden;
	this->arbeitMinutenNoch = arbeitMinuten;
	this->arbeitsTagAktuell = gcnew List<DateTime>;
	this->arbeitsTage = gcnew Hashtable;
	this->wochenZeitErreicht = false;
	this->ueberStunden = 0;
	this->ueberMinuten = 0;
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

int Angestellter::getArbeitStundenNoch()
{
	return arbeitStundenNoch;
}

int Angestellter::getArbeitMinutenNoch()
{
	return arbeitMinutenNoch;
}

int Angestellter::getUeberStunden()
{
	return ueberStunden;
}

int Angestellter::getUeberMinuten()
{
	return ueberMinuten;
}

int Angestellter::getAnzUrlaubstage()
{
	return anzUrlaubstage;
}

int Angestellter::getGenommenUrlaub()
{
	return genommenUrlaub;
}

bool Angestellter::getWochenZeitErreicht() 
{
	return wochenZeitErreicht;
}

List<DateTime>^ Angestellter::getArbeitsTagAktuell() {
	return arbeitsTagAktuell;
}

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

void Angestellter::setArbeitStundenNoch(int arbeitStundenNochNeu)
{
	this->arbeitStundenNoch = arbeitStundenNochNeu;
}

void Angestellter::setArbeitMinutenNoch(int arbeitMinutenNochNeu)
{
	this->arbeitMinutenNoch = arbeitMinutenNochNeu;
}

void Angestellter::setAnzUrlaubstage(int anzUrlaubstage)
{
	this->anzUrlaubstage = anzUrlaubstage;
}

void Angestellter::setGenommenUrlaub(int genommenUrlaub)
{
	this->genommenUrlaub = genommenUrlaub;
}

void Angestellter::fuegeZeitHinzu() 
{
	arbeitsTagAktuell->Add(DateTime::Now);
}

void Angestellter::setWochenZeitErreicht(bool wochenZeitErreicht) {
	this->wochenZeitErreicht = wochenZeitErreicht;
}

void Angestellter::aendereTag(DateTime tag, List<DateTime>^ neueZeiten) 
{
	arbeitsTage->Remove(tag.Date);
	arbeitsTage->Add(tag.Date, neueZeiten);
}

void Angestellter::arbeitsTagBeenden(int arbeitStundenNochNeu, int arbeitMinutenNochNeu, bool wochenZeitErreicht) 
{
	this->wochenZeitErreicht = wochenZeitErreicht;
	this->fuegeZeitHinzu();
	this->arbeitsTage->Add(DateTime::Today, arbeitsTagAktuell);
	this->arbeitsTagAktuell->Clear();
	if (wochenZeitErreicht) {
		this->arbeitStundenNoch = arbeitStundenNochNeu;
		this->arbeitMinutenNoch = arbeitMinutenNochNeu;
	}
	else {
		this->ueberStunden = arbeitStundenNochNeu;
		this->ueberStunden = arbeitStundenNochNeu;
	}
}
