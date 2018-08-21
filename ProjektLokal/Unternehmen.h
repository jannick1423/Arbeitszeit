#pragma once

#include "Angestellter.h"
#include "Mitarbeiter.h"
#include "Vorgesetzter.h"
#include <list>

using namespace System;


ref class Unternehmen
{

private:
	List<Angestellter^>^ list_angestellte;

	
public:
	Unternehmen();
	~Unternehmen();

	List<Angestellter^>^ getAngestellte();
	void loescheAngestellten(Angestellter^ angestellter);
	void fuegeAngstelltenhinzu(Angestellter^ angestellter);


};

