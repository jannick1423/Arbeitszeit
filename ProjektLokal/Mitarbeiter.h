#pragma once
#include "Angestellte.h"
#include "Vorgesetzte.h"
#include <vector>

using namespace std;

class Mitarbeiter :
	public Angestellte
{
	Vorgesetzte v;

public:
	Mitarbeiter();
	Mitarbeiter(string vorname, string nachname, string abteilungsnummer, string personalnummer, string passwort, string telefon, string email, Adresse adresse, bool istWeiblich, int arbeitStunden, int arbeitMinuten,
		int anzUrlaubstage, int genommenUrlaub, Vorgesetzte v);
	~Mitarbeiter();

	string asString();
	Vorgesetzte getVorgesetzte();
	void setVorgesetzte(Vorgesetzte v);
};