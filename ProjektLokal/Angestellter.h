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
	int arbeitStundenNoch;
	int arbeitMinutenNoch;
	int anzUrlaubstage;
	int genommenUrlaub;
	//NEU
	List<DateTime>^ arbeitsTagAktuell;
	//NEU
	Hashtable^ arbeitsTage;

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

	//NEU
	int getArbeitStundenNoch();
	//NEU
	int getArbeitMinutenNoch();

	int getAnzUrlaubstage();
	int getGenommenUrlaub();
	//NEU
	List<DateTime>^ getArbeitsTagAktuell();
	//NEU
	Hashtable^ getArbeitsTage();

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

	//NEU
	void setArbeitStundenNoch(int arbeitStundenNochNeu);
	//NEU
	void setArbeitMinutenNoch(int arbeitMinutenNochNeu);
	
	void setAnzUrlaubstage(int anzUrlaubstage);
	void setGenommenUrlaub(int genommenUrlaub);

	//Methoden
	//NEU
	void fuegeZeitHinzu();

	//NEU
	void aendereTag(DateTime tag, List<DateTime>^ neueZeiten);

	//NEU
	void arbeitsTagBeenden(int arbeitStundenNochNeu, int arbeitMinutenNochNeu);

	virtual String^ asString() = 0;

	virtual bool istVorgesetzter() = 0;

};