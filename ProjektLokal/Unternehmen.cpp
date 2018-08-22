#include "Unternehmen.h"
#include "Mitarbeiter.h"
#include "Vorgesetzter.h"



Unternehmen::Unternehmen()
{
	this->list_angestellte = gcnew List<Angestellter^>;
	
	list_angestellte->Add(gcnew Mitarbeiter("Antonia", "Sensen", "123", "288740", "Hallo1", "0511 987654", "abc@def.gh", nullptr, true, 35, 0, 25, 0, nullptr));
	list_angestellte->Add(gcnew Vorgesetzter("Markus", "Watermeyer", "1234", "201333", "Passwort", "05121 123456", "email@email.com", nullptr, false, 42, 0, 26, 0));

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

