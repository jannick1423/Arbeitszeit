#pragma once
using namespace System;
[Serializable]
ref class Adresse
{
private:
	String^ strasse;
	String^ hausnummer;
	String^ plz;
	String^ ort;

public:
	Adresse();
	Adresse(String^ strasse, String^ hausnummer, String^ plz, String^ ort);
	~Adresse();

	//Setter
	void setStrasse(String^ strasse);
	void setHausnummer(String^ hausnummer);
	void setPlz(String^ plz);
	void setOrt(String^ ort);

	//Getter
	String^ getStrasse();
	String^ getHausnummer();
	String^ getPlz();
	String^ getOrt();

	String^ asString();
};