#pragma once
#include "Angestellter.h"
#include "Vorgesetzter.h"
#include <vector>

using namespace System;

ref class Mitarbeiter :
	public Angestellter
{
	Vorgesetzter^ v;

public:
	Mitarbeiter();
	Mitarbeiter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort);
	Mitarbeiter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten,
		int anzUrlaubstage, int genommenUrlaub, Vorgesetzter^ v);
	~Mitarbeiter();

	String^ asString() override;
	Vorgesetzter^ getVorgesetzte();
	void setVorgesetzte(Vorgesetzter^ v);
	bool istVorgesetzter() override;
};