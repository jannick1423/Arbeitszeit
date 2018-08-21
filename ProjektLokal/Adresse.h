#pragma once
#include <string>

using namespace std;

class Adresse
{
private:
	string strasse;
	string hausnummer;
	string plz;
	string ort;

public:
	Adresse();
	Adresse(string strasse, string hausnummer, string plz, string ort);
	~Adresse();

	//Setter
	void setStrasse(string strasse);
	void setHausnummer(string hausnummer);
	void setPlz(string plz);
	void setOrt(string ort);

	//Getter
	string getStrasse();
	string getHausnummer();
	string getPlz();
	string getOrt();

	string asString();
};