#include "pch.h"
#include "Mitarbeiter.h"
#include "Vorgesetzter.h"


Mitarbeiter::Mitarbeiter()
{
}

Mitarbeiter::Mitarbeiter(String ^ vorname, String ^ nachname, String ^ abteilungsnummer, String ^ personalnummer, String ^ passwort) :
	Angestellter(vorname, nachname, abteilungsnummer, personalnummer, passwort, nullptr, nullptr, nullptr, false, 0, 0, 0, 0)
{
}

Mitarbeiter::Mitarbeiter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten, int anzUrlaubstage, int genommenUrlaub, Vorgesetzter^ v) : Angestellter(vorname, nachname, abteilungsnummer, personalnummer, passwort, telefon, email, adresse, istWeiblich, arbeitStunden, arbeitMinuten, anzUrlaubstage, genommenUrlaub)
{
	this->v = v;
}


Mitarbeiter::~Mitarbeiter()
{
	v->deleteMA(this);
}

Vorgesetzter^ Mitarbeiter::getVorgesetzte()
{
	return v;
}

void Mitarbeiter::setVorgesetzte(Vorgesetzter^ v)
{
	this->v = v;
	v->addMA(this);
}

bool Mitarbeiter::istVorgesetzter()
{
	return false;
}