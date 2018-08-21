#pragma once
#include "Angestellte.h"
//#include "Mitarbeiter.h"
#include <iterator>

ref class Mitarbeiter;

using namespace System;
using namespace System::Collections::Generic;

ref class Vorgesetzte : 
	public Angestellte 
{
 	List<Mitarbeiter^>^ maListe;

public:
	Vorgesetzte();
	Vorgesetzte(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten,
		int anzUrlaubstage, int genommenUrlaub);
	~Vorgesetzte();

	String^ asString() override;
	List<Mitarbeiter^>^ getMaListe();
	void addMA(Mitarbeiter^ ma);
	void deleteMA(Mitarbeiter^ ma);
	bool istVorgesetzter() override;
};