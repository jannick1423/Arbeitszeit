#include "Aenderungsantrag.h"

Aenderungsantrag::Aenderungsantrag()
{
}

Aenderungsantrag::Aenderungsantrag(String^ antragstellerName, Angestellter^ antragsteller, DateTime^ tag, DateTime^ anfang, DateTime^ ende, String^ grund, String^ kommentar) 
{
	this->m_AntragstellerName = antragstellerName;
	this->m_Antragsteller = antragsteller;
	this->m_Anfang = anfang;
	this->m_Ende = ende;
	this->m_Tag = tag;
	this->m_Kommentar = kommentar;
	this->m_Grund = grund;
}

Aenderungsantrag::~Aenderungsantrag() 
{
}

//Getter und Setter
void Aenderungsantrag::setAnfang(DateTime^ anfang) 
{
	this->m_Anfang = anfang;
}

void Aenderungsantrag::setEnde(DateTime^ ende) 
{
	this->m_Ende = ende;
}

void Aenderungsantrag::setTag(DateTime^ tag)
{
	this->m_Tag = tag;
}

void Aenderungsantrag::setKommentar(String^ kommentar) 
{
	this->m_Kommentar = kommentar;
}

void Aenderungsantrag::setGrund(String^ grund) 
{
	this->m_Grund = grund;
}

void Aenderungsantrag::setAntragsteller(Angestellter^ antragsteller)
{
	this->m_Antragsteller = antragsteller;
}