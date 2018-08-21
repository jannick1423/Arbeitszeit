#pragma once
#include "Angestellte.h"
#include "Vorgesetzte.h"
#include <vector>

using namespace System;

ref class Mitarbeiter :
	public Angestellte
{
	Vorgesetzte^ v;

public:
	Mitarbeiter();
	Mitarbeiter(String^ vorname, String^ nachname, String^ abteilungsnummer, String^ personalnummer, String^ passwort, String^ telefon, String^ email, Adresse^ adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten,
		int anzUrlaubstage, int genommenUrlaub, Vorgesetzte^ v);
	~Mitarbeiter();

	String^ asString() override;
	Vorgesetzte^ getVorgesetzte();
	void setVorgesetzte(Vorgesetzte^ v);
};