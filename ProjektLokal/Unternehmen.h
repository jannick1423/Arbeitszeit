#pragma once
#ifndef _UNTERNEHMEN_H_
#define _UNTERNEHMEN_H_

#include "Angestellter.h"
#include "Mitarbeiter.h"
#include "Vorgesetzter.h"
#include <list>

using namespace System;

[ Serializable ]
ref class Unternehmen
{

private:
	List<Angestellter^>^ list_angestellte;
	List<Vorgesetzter^>^ list_vorgesetzte;

	
public:
	Unternehmen();
	~Unternehmen();

	List<Angestellter^>^ getAngestellte();
	void loescheAngestellten(Angestellter^ angestellter);
	void fuegeAngstelltenhinzu(Angestellter^ angestellter);

	List<Vorgesetzter^>^ getVorgesetzte();
	void loescheVorgesetzten(Vorgesetzter^ vorgesetzter);
	void fuegeVorgesetztenhinzu(Vorgesetzter^ vorgesetzter);

};

#endif