#include "pch.h"
#include "Vorgesetzte.h"

using namespace std;


Vorgesetzte::Vorgesetzte()
{

}

Vorgesetzte::Vorgesetzte(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten, int anzUrlaubstage, int genommenUrlaub) : Angestellte (vorname, nachname, abteilungsnummer, personalnummer, passwort, telefon, email, adresse, istWeiblich, arbeitStunden, arbeitMinuten, anzUrlaubstage, genommenUrlaub)
{

}


Vorgesetzte::~Vorgesetzte()
{
}

String^ Vorgesetzte::asString()
{
	String^ maText;
	maText = "Vorname: " + this->getVorname() + "\nNachname: " + this->getNachname() + "\nAbteilung: " + this->getAbteilungsnummer() + "\nPersonalnummer: " + this->getPersonalnummer() + "\nTelefon: " + this->getTelefon() + "\nEmail: " + this->getEmail() + "\nAdresse: " + this->getAdresse()->asString();
	if (maListe->Count == 0) {
		maText = maText + "\nDieser Vorgesetzte hat bisher noch keine Mitarbeiter.";
	}
	else {
		int a = maListe->Count;
		//stringstream ss;
		//ss << a;
		//String^ anz = ss.str();
		//maText = maText + "\nDieser Vorgesetzte hat " + anz + " Mitarbeiter.";
	}
	return maText;
}

List<Mitarbeiter^>^ Vorgesetzte::getMaListe()
{
	return maListe;
}

void Vorgesetzte::addMA(Mitarbeiter^ ma)
{
	maListe->Add(ma);
}

void Vorgesetzte::deleteMA(Mitarbeiter^ m)
{
	maListe->Remove(m);
	//Anzeigefenster, dass MA nicht vorhanden
}

bool Vorgesetzte::istVorgesetzter()
{
	return true;
}