#include "SpeichernLaden.h"

SpeichernLaden::SpeichernLaden()
{
}

void SpeichernLaden::unternehmenSpeichern(Unternehmen^ unternehmen) {
	this->unternehmen = unternehmen;
	if (File::Exists("Imperium.txt")) {
		File::Delete("Imperium.txt");
	}
	FileStream^ os = File::Create("Imperium.txt");
	BinaryFormatter^ bf = gcnew BinaryFormatter();
	bf->Serialize(os, this->unternehmen);
	os->Close();
}

Unternehmen^ SpeichernLaden::unternehmenLaden() {
	String^ file = "Imperium.txt";
	if (!File::Exists(file)) {
		this->unternehmen = gcnew Unternehmen();
	}
	else {
		FileStream^ os = File::OpenRead(file);
		BinaryFormatter^ bf = gcnew BinaryFormatter();
		this->unternehmen = (Unternehmen^)bf->Deserialize(os);
		os->Close();
	}
	return unternehmen;
}

