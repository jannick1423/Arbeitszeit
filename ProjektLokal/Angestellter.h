#pragma once
#include "Adresse.h"
#include <vcclr.h>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;
[ Serializable ]
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
	int ueberStunden;
	int ueberMinuten;
	bool wochenZeitErreicht;
	List<DateTime>^ arbeitsTagAktuell;
	Hashtable^ arbeitsTage;
	DateTime^ letzterArbeitstag;

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
	int getArbeitStundenNoch();
	int getArbeitMinutenNoch();
	int getUeberStunden();
	int getUeberMinuten();
	int getAnzUrlaubstage();
	int getGenommenUrlaub();
	bool getWochenZeitErreicht();
	List<DateTime>^ getArbeitsTagAktuell();
	Hashtable^ getArbeitsTage();
	DateTime^ getLetzterArbeitstag();

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
	void setArbeitStundenNoch(int arbeitStundenNochNeu);
	void setArbeitMinutenNoch(int arbeitMinutenNochNeu);
	void setUeberStunden(int ueberstunden);
	void setUeberMinuten(int ueberminuten);
	void setAnzUrlaubstage(int anzUrlaubstage);
	void setGenommenUrlaub(int genommenUrlaub);
	void setWochenZeitErreicht(bool wochenZeitErreicht);
	void setLetzterArbeitstag(DateTime^ tag);

	//Methoden
	void fuegeZeitHinzu();
	void aendereTag(DateTime tag, List<DateTime>^ neueZeiten);
	void arbeitsTagBeenden(int arbeitStundenNochNeu, int arbeitMinutenNochNeu, bool wochenZeitErreicht);
	virtual bool istVorgesetzter() = 0;

};