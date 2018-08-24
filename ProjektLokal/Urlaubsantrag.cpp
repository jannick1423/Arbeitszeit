#include "Urlaubsantrag.h"

using namespace System;

Urlaubsantrag::Urlaubsantrag() {
}

Urlaubsantrag::Urlaubsantrag(DateTime anfang, DateTime ende, Int32 tage) {
	this->m_Anfang = anfang;
	this->m_Ende = ende;
	this->m_Tage = tage;
}

Urlaubsantrag::~Urlaubsantrag() {

}

//Setter
void Urlaubsantrag::setAnfang(DateTime anfang) {

}

void Urlaubsantrag::setEnde(DateTime ende) {

}

void Urlaubsantrag::setTage(int Tage) {

}

Int32 Urlaubsantrag::berechneTage(DateTime anfang, DateTime ende) {
	return 0;
}