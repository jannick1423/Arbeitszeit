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

List<Aenderungsantrag^>^ Vorgesetzter::getAenderungsantragsListe() 
{
	return aenderungsantragsListe;
}

List<Urlaubsantrag^>^ Vorgesetzter::getUrlaubsantragsListe()
{
	return urlaubsantragsListe;
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

void Vorgesetzter::addAenderungsantrag(Aenderungsantrag^ antrag)
{
	try {
		this->aenderungsantragsListe->Add(antrag);
	}
	catch (System::NullReferenceException ^e) {
		this->aenderungsantragsListe = gcnew List<Aenderungsantrag^>;
		this->aenderungsantragsListe->Add(antrag);
	}
}

void Vorgesetzter::deleteAenderungsantrag(Aenderungsantrag^ antrag)
{
	try {
		this->aenderungsantragsListe->Remove(antrag);
	}
	catch (System::NullReferenceException ^e) {
	}
}

void Vorgesetzter::addUrlaubsantrag(Urlaubsantrag^ antrag)
{
	try {
		this->urlaubsantragsListe->Add(antrag);
	}
	catch (System::NullReferenceException ^e) {
		this->urlaubsantragsListe = gcnew List<Urlaubsantrag^>;
		this->urlaubsantragsListe->Add(antrag);
	}
}

void Vorgesetzter::deleteUrlaubsantrag(Urlaubsantrag^ antrag)
{
	try {
		this->urlaubsantragsListe->Remove(antrag);
	}
	catch (System::NullReferenceException ^e) {
	}
}

bool Vorgesetzter::istVorgesetzter()
{
	return true;
}