#pragma once
#include "Adresse.h"
#include <vcclr.h>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

ref class Angestellter
{
	String^ vorname;
	String^ nachname;
	String^ abteilungsnummer;
	String^ personalnummer;
	String^ passwort;
	String^ telefon;
	String^ email;
	Adresse^ adresse;
	bool istWeiblich;
	int arbeitStunden;
	int arbeitMinuten;
	int anzUrlaubstage;
	int genommenUrlaub;
	List<DateTime>^ arbeitsTagAktuell;
	Hashtable arbeitsTage;

public:
	Angestellter();
	Angestellter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten,
		int anzUrlaubstage, int genommenUrlaub);
	~Angestellter();

	//Getter
	String^ getVorname();
	String^ getNachname();
	String^ getAbteilungsnummer();
	String^ getPersonalnummer();
	String^ getPasswort();
	String^ getTelefon();
	String^ getEmail();
	Adresse^ getAdresse();
	int getArbeitStunden();
	int getArbeitMinuten();
	int getAnzUrlaubstage();
	int getGenommenUrlaub();

	//Setter
	void setVorname(String^ vorname);
	void setNachname(String^ nachname);
	void setAbteilungsnummer(String^ abteilungsnummer);
	void setPersonalnummer(String^ personalnummer);
	void setPasswort(String^ passwort);
	void setTelefon(String^ telefon);
	void setEmail(String^ email);
	void setAdresse(Adresse^ adresse);
	void setArbeitStunden(int arbeitStunden);
	void setArbeitMinuten(int arbeitMinuten);
	void setAnzUrlaubstage(int anzUrlaubstage);
	void setGenommenUrlaub(int genommenUrlaub);

	//Methoden
	virtual String^ asString() = 0;

	virtual bool istVorgesetzter() = 0;
};