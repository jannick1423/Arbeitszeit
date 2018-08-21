#pragma once
#include "Angestellte.h"
#include "Mitarbeiter.h"
#include <vector>
#include <iterator>

class Vorgesetzte : 
	public Angestellte 
{
	vector<Mitarbeiter*> maListe{};

public:
	Vorgesetzte();
	Vorgesetzte(string vorname, string nachname, string abteilungsnummer, string personalnummer, string passwort, string telefon, string email, Adresse adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten,
		int anzUrlaubstage, int genommenUrlaub);
	~Vorgesetzte();

	string asString();
	vector<Mitarbeiter*> getMaListe();
	void addMA(Mitarbeiter* ma);
	void deleteMA(Mitarbeiter* ma);
};