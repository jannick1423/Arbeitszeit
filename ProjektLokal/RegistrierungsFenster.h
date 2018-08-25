#pragma once
#ifndef _REGISTRIERUNGSFENSTER_H_
#define _REGISTRIERUNGSFENSTER_H_
#include "Startseite.h"

namespace ProjektLokal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für RegistrierungsFenster
	/// </summary>
	public ref class RegistrierungsFenster : public System::Windows::Forms::Form
	{
	public:
		Unternehmen^ unternehmen;

		RegistrierungsFenster(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~RegistrierungsFenster()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  txt_personalnummer;
	protected:

	private: System::Windows::Forms::TextBox^  txt_vorname;
	protected:

	private: System::Windows::Forms::TextBox^  txt_name;
	private: System::Windows::Forms::TextBox^  txt_telefonnummer;
	private: System::Windows::Forms::TextBox^  txt_strasse;




	private: System::Windows::Forms::TextBox^  txt_email;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  btn_mitarbeiter_hinzufuegen;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txt_passwort;

	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txt_urlaubstage;

	private: System::Windows::Forms::TextBox^  txt_arbeitsstunden;
	private: System::Windows::Forms::ComboBox^  txt_geschlecht;
	private: System::Windows::Forms::ComboBox^  txt_abteilung;
	private: System::Windows::Forms::Label^  lbl_hausnummer;
	private: System::Windows::Forms::TextBox^  txt_hausnummer;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  txt_plz;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txt_ort;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  txt_Rolle;






	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_personalnummer = (gcnew System::Windows::Forms::TextBox());
			this->txt_vorname = (gcnew System::Windows::Forms::TextBox());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_telefonnummer = (gcnew System::Windows::Forms::TextBox());
			this->txt_strasse = (gcnew System::Windows::Forms::TextBox());
			this->txt_email = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_mitarbeiter_hinzufuegen = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_passwort = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_urlaubstage = (gcnew System::Windows::Forms::TextBox());
			this->txt_arbeitsstunden = (gcnew System::Windows::Forms::TextBox());
			this->txt_geschlecht = (gcnew System::Windows::Forms::ComboBox());
			this->txt_abteilung = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_hausnummer = (gcnew System::Windows::Forms::Label());
			this->txt_hausnummer = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_plz = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_ort = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_Rolle = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// txt_personalnummer
			// 
			this->txt_personalnummer->Location = System::Drawing::Point(149, 250);
			this->txt_personalnummer->Name = L"txt_personalnummer";
			this->txt_personalnummer->Size = System::Drawing::Size(351, 22);
			this->txt_personalnummer->TabIndex = 0;
			// 
			// txt_vorname
			// 
			this->txt_vorname->Location = System::Drawing::Point(149, 71);
			this->txt_vorname->Name = L"txt_vorname";
			this->txt_vorname->Size = System::Drawing::Size(351, 22);
			this->txt_vorname->TabIndex = 1;
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(149, 43);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(351, 22);
			this->txt_name->TabIndex = 2;
			// 
			// txt_telefonnummer
			// 
			this->txt_telefonnummer->Location = System::Drawing::Point(149, 162);
			this->txt_telefonnummer->Name = L"txt_telefonnummer";
			this->txt_telefonnummer->Size = System::Drawing::Size(351, 22);
			this->txt_telefonnummer->TabIndex = 3;
			// 
			// txt_strasse
			// 
			this->txt_strasse->Location = System::Drawing::Point(149, 100);
			this->txt_strasse->Name = L"txt_strasse";
			this->txt_strasse->Size = System::Drawing::Size(250, 22);
			this->txt_strasse->TabIndex = 4;
			// 
			// txt_email
			// 
			this->txt_email->Location = System::Drawing::Point(149, 192);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(351, 22);
			this->txt_email->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(2, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Geschlecht";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Vorname";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(2, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Straße";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(2, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Telefonnummer";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Email Adresse";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 227);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Abteilung";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 255);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Personalnummer";
			// 
			// btn_mitarbeiter_hinzufuegen
			// 
			this->btn_mitarbeiter_hinzufuegen->Location = System::Drawing::Point(149, 419);
			this->btn_mitarbeiter_hinzufuegen->Name = L"btn_mitarbeiter_hinzufuegen";
			this->btn_mitarbeiter_hinzufuegen->Size = System::Drawing::Size(171, 35);
			this->btn_mitarbeiter_hinzufuegen->TabIndex = 16;
			this->btn_mitarbeiter_hinzufuegen->Text = L"Hinzufügen";
			this->btn_mitarbeiter_hinzufuegen->UseVisualStyleBackColor = true;
			this->btn_mitarbeiter_hinzufuegen->Click += gcnew System::EventHandler(this, &RegistrierungsFenster::btn_mitarbeiter_hinzufuegen_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 283);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 17);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Passwort";
			// 
			// txt_passwort
			// 
			this->txt_passwort->Location = System::Drawing::Point(149, 278);
			this->txt_passwort->Name = L"txt_passwort";
			this->txt_passwort->Size = System::Drawing::Size(351, 22);
			this->txt_passwort->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 313);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 17);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Arbeitsstunden";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 341);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 17);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Urlaubstage";
			// 
			// txt_urlaubstage
			// 
			this->txt_urlaubstage->Location = System::Drawing::Point(149, 338);
			this->txt_urlaubstage->Name = L"txt_urlaubstage";
			this->txt_urlaubstage->Size = System::Drawing::Size(351, 22);
			this->txt_urlaubstage->TabIndex = 22;
			// 
			// txt_arbeitsstunden
			// 
			this->txt_arbeitsstunden->Location = System::Drawing::Point(149, 308);
			this->txt_arbeitsstunden->Name = L"txt_arbeitsstunden";
			this->txt_arbeitsstunden->Size = System::Drawing::Size(351, 22);
			this->txt_arbeitsstunden->TabIndex = 23;
			// 
			// txt_geschlecht
			// 
			this->txt_geschlecht->FormattingEnabled = true;
			this->txt_geschlecht->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"weiblich", L"männlich" });
			this->txt_geschlecht->Location = System::Drawing::Point(149, 13);
			this->txt_geschlecht->Name = L"txt_geschlecht";
			this->txt_geschlecht->Size = System::Drawing::Size(351, 24);
			this->txt_geschlecht->TabIndex = 24;
			// 
			// txt_abteilung
			// 
			this->txt_abteilung->FormattingEnabled = true;
			this->txt_abteilung->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Verwaltung", L"IT Sicherheit", L"Software Entwicklung" });
			this->txt_abteilung->Location = System::Drawing::Point(149, 220);
			this->txt_abteilung->Name = L"txt_abteilung";
			this->txt_abteilung->Size = System::Drawing::Size(351, 24);
			this->txt_abteilung->TabIndex = 25;
			// 
			// lbl_hausnummer
			// 
			this->lbl_hausnummer->AutoSize = true;
			this->lbl_hausnummer->Location = System::Drawing::Point(405, 103);
			this->lbl_hausnummer->Name = L"lbl_hausnummer";
			this->lbl_hausnummer->Size = System::Drawing::Size(27, 17);
			this->lbl_hausnummer->TabIndex = 26;
			this->lbl_hausnummer->Text = L"Nr.";
			// 
			// txt_hausnummer
			// 
			this->txt_hausnummer->Location = System::Drawing::Point(438, 100);
			this->txt_hausnummer->Name = L"txt_hausnummer";
			this->txt_hausnummer->Size = System::Drawing::Size(62, 22);
			this->txt_hausnummer->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(2, 137);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 17);
			this->label12->TabIndex = 28;
			this->label12->Text = L"PLZ";
			// 
			// txt_plz
			// 
			this->txt_plz->Location = System::Drawing::Point(149, 131);
			this->txt_plz->Name = L"txt_plz";
			this->txt_plz->Size = System::Drawing::Size(100, 22);
			this->txt_plz->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(256, 135);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 17);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Ort";
			// 
			// txt_ort
			// 
			this->txt_ort->Location = System::Drawing::Point(291, 132);
			this->txt_ort->Name = L"txt_ort";
			this->txt_ort->Size = System::Drawing::Size(209, 22);
			this->txt_ort->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 372);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 17);
			this->label14->TabIndex = 32;
			this->label14->Text = L"Rolle";
			// 
			// txt_Rolle
			// 
			this->txt_Rolle->FormattingEnabled = true;
			this->txt_Rolle->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mitarbeiter", L"Vorgesetzter" });
			this->txt_Rolle->Location = System::Drawing::Point(149, 372);
			this->txt_Rolle->Name = L"txt_Rolle";
			this->txt_Rolle->Size = System::Drawing::Size(349, 24);
			this->txt_Rolle->TabIndex = 33;
			// 
			// RegistrierungsFenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(524, 499);
			this->Controls->Add(this->txt_Rolle);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txt_ort);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txt_plz);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txt_hausnummer);
			this->Controls->Add(this->lbl_hausnummer);
			this->Controls->Add(this->txt_abteilung);
			this->Controls->Add(this->txt_geschlecht);
			this->Controls->Add(this->txt_arbeitsstunden);
			this->Controls->Add(this->txt_urlaubstage);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_passwort);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btn_mitarbeiter_hinzufuegen);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_email);
			this->Controls->Add(this->txt_strasse);
			this->Controls->Add(this->txt_telefonnummer);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->txt_vorname);
			this->Controls->Add(this->txt_personalnummer);
			this->Name = L"RegistrierungsFenster";
			this->Text = L"Registrierung";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			private: System::Void registrierungsFenster_Load(System::Object^  sender, System::EventArgs^  e) {
			}
//Getter zun Datenaustausch
public:
	String ^ getName() {
		return this->txt_name->Text;
	}

	String^ getVorname() {
		return this->txt_vorname->Text;
	}

	String^ getAbteilung() {
		return this->txt_abteilung->Text;
	}

	String^ getStrasse() {
		return this->txt_strasse->Text;
	}
	String^ getHausnummer() {
		return this->txt_hausnummer->Text;
	}

	String^ getPlz(){
		return this->txt_plz->Text;
	}

	String^ getOrt() {
		return this->txt_ort->Text;
	}

	String^ getTelefon() {
		return this->txt_telefonnummer->Text;
	}

	String^ getEmail() {
		return this->txt_email->Text;
	}

	String^ getPersonalnummer() {
		return this->txt_personalnummer->Text;
	}

	String^ getPasswort() {
		return this->txt_passwort->Text;
	}

	Int32^ getArbeitsstunden() {
		return Int32::Parse(this->txt_arbeitsstunden->Text);
	}

	Int32^ getUrlaubstage() {
		return Int32::Parse(this->txt_urlaubstage->Text);
	}

	bool getIstWeiblich() {
		bool istweiblich = false;
		if (this->txt_geschlecht->SelectedItem->ToString()->Equals("weiblich")) {
			istweiblich = true;
		}
		return istweiblich;
	}

	String^ getRolle() {
		return this->txt_Rolle->Text;
	}

	//Methode zum Zurücksetzen der Textfelder
	void clear() {
		this->txt_name->Text = "";
		this->txt_vorname->Text = "";
		this->txt_strasse->Text = "";
		this->txt_hausnummer->Text = "";
		this->txt_plz->Text = "";
		this->txt_ort->Text = "";
		this->txt_telefonnummer->Text = "";
		this->txt_email->Text = "";
		this->txt_personalnummer->Text = "";
		this->txt_passwort->Text = "";
		this->txt_arbeitsstunden->Text = "";
		this->txt_urlaubstage->Text = "";
	}

public: void setUnternehmen(Unternehmen^ unternehmen) {
	this->unternehmen = unternehmen;
}

private: System::Void btn_mitarbeiter_hinzufuegen_Click(System::Object^  sender, System::EventArgs^  e) {
	bool fehler = false;

	//Eingabepprüfung im Eventhandler
	if (this->txt_name->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_vorname->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_strasse->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_hausnummer->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_plz->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_ort->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_telefonnummer->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_email->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_personalnummer->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_passwort->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_arbeitsstunden->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}

	else if (this->txt_urlaubstage->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}
	else if (this->txt_Rolle->Text->Length == 0) {
		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}
	else if (this->txt_geschlecht->Text->Length == 0) {
		this->DialogResult = System::Windows::Forms::DialogResult::None;
		fehler = true;
	}
	else {

		this->DialogResult = System::Windows::Forms::DialogResult::OK;

	}
	//ÄNDERUNG
	if (fehler) {
		System::Windows::Forms::MessageBox::Show("Bitte füllen Sie alle Felder aus!", "Fehler!",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		bool weiblich = false;
		if (this->txt_Rolle->SelectedItem->ToString()->Equals("Mitarbeiter")) {
			if (this->txt_geschlecht->SelectedItem->ToString()->Equals("weiblich")) {
				weiblich = true;
			}

			Adresse^ adresse = gcnew Adresse(txt_strasse->Text, txt_hausnummer->Text, txt_plz->Text, txt_ort->Text);
			Mitarbeiter^ mitarbeiter = gcnew Mitarbeiter(txt_vorname->Text, txt_name->Text, txt_abteilung->Text, txt_personalnummer->Text, txt_passwort->Text, txt_telefonnummer->Text, txt_email->Text, adresse, weiblich, Int32::Parse(txt_arbeitsstunden->Text), 0, Int32::Parse(txt_urlaubstage->Text), 0, nullptr);
			unternehmen->fuegeAngstelltenhinzu(mitarbeiter);
			this->Close();
		}
		else {
			bool weiblich = false;
			if (this->txt_geschlecht->SelectedItem->ToString()->Equals("weiblich")) {
				weiblich = true;
			}
			Adresse^ adresse = gcnew Adresse(txt_strasse->Text, txt_hausnummer->Text, txt_plz->Text, txt_ort->Text);
			Vorgesetzter^ vorgesetzter = gcnew Vorgesetzter(txt_vorname->Text, txt_name->Text, txt_abteilung->Text, txt_personalnummer->Text, txt_passwort->Text, txt_telefonnummer->Text, txt_email->Text, adresse, weiblich, Int32::Parse(txt_arbeitsstunden->Text), 0, Int32::Parse(txt_urlaubstage->Text), 0);
			unternehmen->fuegeVorgesetztenhinzu(vorgesetzter);
			this->Close();
		}
	}
}
};
}

#endif
