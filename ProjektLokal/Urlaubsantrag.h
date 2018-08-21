#pragma once
#ifndef _URLAUBSANTRAG_H_
#define _URLAUBSANTRAG_H_

using namespace System;

ref class Urlaubsantrag
{
private:

	//Membervariablen:
	DateTime m_Anfang;
	DateTime m_Ende;
	int m_Tage;

public:

	//Konstruktoren und Destruktor:
	Urlaubsantrag();
	Urlaubsantrag(DateTime anfang, DateTime ende, Int32 tage);
	Urlaubsantrag(Urlaubsantrag const ^urlaubsantrag);
	~Urlaubsantrag();

	//Getter und Setter
	inline DateTime getAnfang() { return m_Anfang; }
	inline DateTime getEnde() { return m_Ende; }
	inline int getTage() { return m_Tage; }
	void setAnfang(DateTime anfang);
	void setEnde(DateTime ende);
	void setTage(int Tage);

	//Weitere Methoden:
	Int32 berechneTage(DateTime anfang, DateTime ende);

};

#endif