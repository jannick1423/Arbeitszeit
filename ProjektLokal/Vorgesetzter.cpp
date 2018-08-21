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

String^ Vorgesetzter::asString()
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