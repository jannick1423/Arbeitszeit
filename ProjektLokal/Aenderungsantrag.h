#pragma once
#ifndef _AENDERUNGSANTRAG_H_
#define _AENDERUNGSANTRAG_H_

#include "Angestellter.h"

using namespace System;

#pragma once
ref class Aenderungsantrag
{
private:

	//Membervariablen
	String^ m_AntragstellerName;
	Angestellter^ m_Antragsteller;
	DateTime^ m_Tag;
	DateTime^ m_Anfang;
	DateTime^ m_Ende;
	String^ m_Grund;
	String^ m_Kommentar;

public:
	Aenderungsantrag();
	Aenderungsantrag(String^ angestellterName, Angestellter^ antragsteller, DateTime^ tag, DateTime^ anfang, DateTime^ ende, String^ grund, String^ kommentar);
	~Aenderungsantrag();

	//Getter und Setter
	inline DateTime^ getAnfang() { return m_Anfang; }
	inline DateTime^ getEnde() { return m_Ende; }
	inline DateTime^ getTag() { return m_Tag; }
	inline String^ getGrund() { return m_Grund; }
	inline String^ getKommentar() { return m_Kommentar; }
	inline String^ getAntragstellerName() { return m_AntragstellerName; }
	inline Angestellter^ getAntragsteller() { return m_Antragsteller; }
	void setAnfang(DateTime^ anfang);
	void setEnde(DateTime^ ende);
	void setTag(DateTime^ tag);   
	void setKommentar(String^ kommentar);
	void setGrund(String^ grund);
	void setAntragsteller(Angestellter^ antragsteller);
};

#endif