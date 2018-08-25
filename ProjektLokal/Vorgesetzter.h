#pragma once
#ifndef _VORGESETZTER_H_
#define _VORGESETZTER_H_

#include "Angestellter.h"
#include "Aenderungsantrag.h"
#include "Urlaubsantrag.h"
#include <iterator>

ref class Mitarbeiter;

using namespace System;
using namespace System::Collections::Generic;

[Serializable]
ref class Vorgesetzter : 
	public Angestellter 
{
private:
 	List<Mitarbeiter^>^ maListe;
	List<Aenderungsantrag^>^ aenderungsantragsListe;
	List<Urlaubsantrag^>^ urlaubsantragsListe;

public:
	Vorgesetzter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten,
		int anzUrlaubstage, int genommenUrlaub);
	Vorgesetzter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort);
	~Vorgesetzter();

	List<Mitarbeiter^>^ getMaListe();
	List<Aenderungsantrag^>^ getAenderungsantragsListe();
	List<Urlaubsantrag^>^ getUrlaubsantragsListe();

	void addMA(Mitarbeiter^ ma);
	void deleteMA(Mitarbeiter^ ma);
	void addAenderungsantrag(Aenderungsantrag^ antrag);
	void deleteAenderungsantrag(Aenderungsantrag^ antrag);
	void addUrlaubsantrag(Urlaubsantrag^ antrag);
	void deleteUrlaubsantrag(Urlaubsantrag^ antrag);

	bool istVorgesetzter() override;
};

#endif