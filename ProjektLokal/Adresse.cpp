#include "pch.h"
#include "Adresse.h"


Adresse::Adresse()
{
}

Adresse::Adresse(string strasse, string hausnummer, string plz, string ort)
{
	this->strasse = strasse;
	this->hausnummer = hausnummer;
	this->plz = plz;
	this->ort = ort;
}


Adresse::~Adresse()
{
}

void Adresse::setStrasse(string strasse)
{
	this->strasse = strasse;
}

string Adresse::getStrasse()
{
	return strasse;
}

string Adresse::getHausnummer()
{
	return hausnummer;
}

string Adresse::getPlz()
{
	return plz;
}

string Adresse::getOrt()
{
	return ort;
}

string Adresse::asString()
{
	return strasse + hausnummer + ", " + plz + ort;
}

void Adresse::setHausnummer(string hausnummer)
{
	this->hausnummer = hausnummer;
}

void Adresse::setPlz(string plz)
{
	this->plz = plz;
}

void Adresse::setOrt(string ort)
{
	this->ort = ort;
}