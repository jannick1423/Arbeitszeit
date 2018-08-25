#include "Unternehmen.h"
#include "Mitarbeiter.h"
#include "Vorgesetzter.h"

Unternehmen::Unternehmen()
{
	/*this->list_angestellte = gcnew List<Angestellter^>;
	this->list_vorgesetzte = gcnew List<Vorgesetzter^>;
	
	list_angestellte->Add(gcnew Vorgesetzter("Markus", "Watermeyer", "1234", "201333", "Passwort", "05121 123456", "email@email.com", nullptr, false, 36, 30, 28, 0));
	list_vorgesetzte->Add(gcnew Vorgesetzter("Markus", "Watermeyer", "1234", "201333", "Passwort", "05121 123456", "email@email.com", nullptr, false, 36, 30, 28, 0));
	list_angestellte->Add(gcnew Mitarbeiter("Antonia", "Sensen", "123", "288740", "Hallo1", "0511 987654", "abc@def.gh", nullptr, true, 0, 1, 25, 0, getVorgesetzte()[0]));
	list_angestellte->Add(gcnew Vorgesetzter("Darth", "Vader", "Vernichtung", "2", "Anakin", "05121 777", "darth.vader@gmail.com", nullptr, false, 40, 0, 30, 0));
	*/
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

List<Vorgesetzter^>^ Unternehmen::getVorgesetzte() 
{
	return list_vorgesetzte;
}
void Unternehmen::loescheVorgesetzten(Vorgesetzter^ vorgesetzter)
{
	list_vorgesetzte->Remove(vorgesetzter);
}

void Unternehmen::fuegeVorgesetztenhinzu(Vorgesetzter^ vorgesetzter)
{
	list_vorgesetzte->Add(vorgesetzter);
	list_angestellte->Add(vorgesetzter);
}