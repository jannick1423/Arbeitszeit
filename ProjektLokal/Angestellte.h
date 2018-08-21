#pragma once
#include "Adresse.h"
#include <string>
using namespace std;

class Angestellte
{
	string vorname;
	string nachname;
	string abteilungsnummer;
	string personalnummer;
	string passwort;
	string telefon;
	string email;
	Adresse adresse;
	bool istWeiblich;
	int arbeitStunden;
	int arbeitMinuten;
	int anzUrlaubstage;
	int genommenUrlaub;

public:
	Angestellte();
	Angestellte(string vorname, string nachname, string abteilungsnummer, string personalnummer, string passwort, string telefon, string email, Adresse adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten,
		int anzUrlaubstage, int genommenUrlaub);
	~Angestellte();

	//Getter
	string getVorname();
	string getNachname();
	string getAbteilungsnummer();
	string getPersonalnummer();
	string getPasswort();
	string getTelefon();
	string getEmail();
	Adresse getAdresse();
	int getArbeitStunden();
	int getArbeitMinuten();
	int getAnzUrlaubstage();
	int getGenommenUrlaub();

	//Setter
	void setVorname(string vorname);
	void setNachname(string nachname);
	void setAbteilungsnummer(string abteilungsnummer);
	void setPersonalnummer(string personalnummer);
	void setPasswort(string passwort);
	void setTelefon(string telefon);
	void setEmail(string email);
	void setAdresse(Adresse adresse);
	void setArbeitStunden(int arbeitStunden);
	void setArbeitMinuten(int arbeitMinuten);
	void setAnzUrlaubstage(int anzUrlaubstage);
	void setGenommenUrlaub(int genommenUrlaub);

	//Methoden
	virtual string asString() = 0;
};