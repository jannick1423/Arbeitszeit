#pragma once

#include "Unternehmen.h"

using namespace System;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;

ref class SpeichernLaden
{

private:
	
	Unternehmen^ unternehmen;

public:
	SpeichernLaden();
	void unternehmenSpeichern(Unternehmen^ unternehmen);
	Unternehmen^ unternehmenLaden();
};

