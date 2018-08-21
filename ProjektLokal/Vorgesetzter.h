#pragma once
#include "Angestellter.h"
//#include "Mitarbeiter.h"
#include <iterator>

ref class Mitarbeiter;

using namespace System;
using namespace System::Collections::Generic;

ref class Vorgesetzter : 
	public Angestellter 
{
 	List<Mitarbeiter^>^ maListe;

public:
	Vorgesetzter();
	Vorgesetzter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten,
		int anzUrlaubstage, int genommenUrlaub);
	~Vorgesetzter();

	String^ asString() override;
	List<Mitarbeiter^>^ getMaListe();
	void addMA(Mitarbeiter^ ma);
	void deleteMA(Mitarbeiter^ ma);
	bool istVorgesetzter() override;
};