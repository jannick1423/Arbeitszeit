#pragma once
#ifndef _MITARBEITER_H_
#define _MITARBEITER_H_
#include "Angestellter.h"
#include "Vorgesetzter.h"
#include <vector>

using namespace System;

[ Serializable ]
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

	Vorgesetzter^ getVorgesetzte();
	void setVorgesetzte(Vorgesetzter^ v);
	bool istVorgesetzter() override;
};

#endif