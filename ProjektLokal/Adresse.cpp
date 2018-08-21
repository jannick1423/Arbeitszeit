#include "pch.h"
#include "Adresse.h"

using namespace System;

Adresse::Adresse()
{
}

Adresse::Adresse(String^ strasse, String^ hausnummer, String^ plz, String^ ort)
{
	this->strasse = strasse;
	this->hausnummer = hausnummer;
	this->plz = plz;
	this->ort = ort;
}


Adresse::~Adresse()
{
}

void Adresse::setStrasse(String^ strasse)
{
	this->strasse = strasse;
}

String^ Adresse::getStrasse()
{
	return strasse;
}

String^ Adresse::getHausnummer()
{
	return hausnummer;
}

String^ Adresse::getPlz()
{
	return plz;
}

String^ Adresse::getOrt()
{
	return ort;
}

String^ Adresse::asString()
{
	return strasse + hausnummer + ", " + plz + ort;
}

void Adresse::setHausnummer(String^ hausnummer)
{
	this->hausnummer = hausnummer;
}

void Adresse::setPlz(String^ plz)
{
	this->plz = plz;
}

void Adresse::setOrt(String^ ort)
{
	this->ort = ort;
}