#include "pch.h"
#include "Vorgesetzte.h"
#include <sstream>

using namespace std;


Vorgesetzte::Vorgesetzte()
{
	//Hallo Test Kommentar
}

Vorgesetzte::Vorgesetzte(string vorname, string nachname, string abteilungsnummer, string personalnummer, string passwort, string telefon, string email, Adresse adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten, int anzUrlaubstage, int genommenUrlaub) : Angestellte(vorname, nachname, abteilungsnummer, personalnummer, passwort, telefon, email, adresse, istWeiblich, arbeitStunden, arbeitMinuten, anzUrlaubstage, genommenUrlaub)
{

}


Vorgesetzte::~Vorgesetzte()
{
}

string Vorgesetzte::asString()
{
	string maText;
	maText = "Vorname: " + this->getVorname() + "\nNachname: " + this->getNachname() + "\nAbteilung: " + this->getAbteilungsnummer() + "\nPersonalnummer: " + this->getPersonalnummer() + "\nTelefon: " + this->getTelefon() + "\nEmail: " + this->getEmail() + "\nAdresse: " + this->getAdresse().asString();
	if (maListe.empty()) {
		maText = maText + "\nDieser Vorgesetzte hat bisher noch keine Mitarbeiter.";
	}
	else {
		int a = maListe.size();
		stringstream ss;
		ss << a;
		string anz = ss.str();
		maText = maText + "\nDieser Vorgesetzte hat " + anz + " Mitarbeiter.";
	}
	return maText;
}

vector<Mitarbeiter*> Vorgesetzte::getMaListe()
{
	return maListe;
}

void Vorgesetzte::addMA(Mitarbeiter* ma)
{
	maListe.push_back(ma);
}

void Vorgesetzte::deleteMA(Mitarbeiter* m)
{
	for (vector<Mitarbeiter*>::iterator i = maListe.begin(); i != maListe.end(); i++) {
		if (*i == m) {
			maListe.erase(i);
		}
		//Anzeigefenster, dass MA nicht vorhanden
	}
}