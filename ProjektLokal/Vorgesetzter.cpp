#include "pch.h"
#include "Vorgesetzter.h"

using namespace std;


Vorgesetzter::Vorgesetzter()
{

}

Vorgesetzter::Vorgesetzter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten, int anzUrlaubstage, int genommenUrlaub) : Angestellter (vorname, nachname, abteilungsnummer, personalnummer, passwort, telefon, email, adresse, istWeiblich, arbeitStunden, arbeitMinuten, anzUrlaubstage, genommenUrlaub)
{

}

Vorgesetzter::Vorgesetzter(String ^ vorname, String ^ nachname, String ^ abteilungsnummer, String ^ personalnummer, String ^ passwort) :
	Angestellter(vorname, nachname, abteilungsnummer, personalnummer, passwort, nullptr, nullptr, nullptr, false, 0, 0, 0, 0)
{
}


Vorgesetzter::~Vorgesetzter()
{
}

List<Mitarbeiter^>^ Vorgesetzter::getMaListe()
{
	return maListe;
}

void Vorgesetzter::addMA(Mitarbeiter^ ma)
{
	maListe->Add(ma);
}

void Vorgesetzter::deleteMA(Mitarbeiter^ m)
{
	maListe->Remove(m);
	//Anzeigefenster, dass MA nicht vorhanden
}

bool Vorgesetzter::istVorgesetzter()
{
	return true;
}