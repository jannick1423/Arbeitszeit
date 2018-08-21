#include "Unternehmen.h"
#include "Mitarbeiter.h"
#include "Vorgesetzter.h"



Unternehmen::Unternehmen()
{
	this->list_angestellte = gcnew List<Angestellter^>;
	
	list_angestellte->Add(gcnew Mitarbeiter("Antonia", "Sensen", "123", "288740", "Hallo1"));
	list_angestellte->Add(gcnew Mitarbeiter("Anton", "S", "456", "299999", "299999"));
	list_angestellte->Add(gcnew Vorgesetzter("Markus", "Watermeyer", "1234", "201333", "Passwort"));


}

Unternehmen::~Unternehmen()
{
	
}


List<Angestellter^>^ Unternehmen::getAngestellte()
{
	return list_angestellte;
}

void Unternehmen::loescheAngestellten(Angestellter ^ angestellter)
{
	list_angestellte->Remove(angestellter);
	
}

void Unternehmen::fuegeAngstelltenhinzu(Angestellter ^ angestellter)
{
	list_angestellte->Add(angestellter);
}

