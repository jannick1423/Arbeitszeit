#pragma once

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



	private: System::Windows::Forms::TextBox^  txt_adresse;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrierungsFenster::typeid));
			this->txt_personalnummer = (gcnew System::Windows::Forms::TextBox());
			this->txt_vorname = (gcnew System::Windows::Forms::TextBox());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_telefonnummer = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
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
			this->SuspendLayout();
			// 
			// txt_personalnummer
			// 
			this->txt_personalnummer->Location = System::Drawing::Point(112, 176);
			this->txt_personalnummer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_personalnummer->Name = L"txt_personalnummer";
			this->txt_personalnummer->Size = System::Drawing::Size(264, 20);
			this->txt_personalnummer->TabIndex = 0;
			// 
			// txt_vorname
			// 
			this->txt_vorname->Location = System::Drawing::Point(112, 58);
			this->txt_vorname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_vorname->Name = L"txt_vorname";
			this->txt_vorname->Size = System::Drawing::Size(264, 20);
			this->txt_vorname->TabIndex = 1;
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(112, 35);
			this->txt_name->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(264, 20);
			this->txt_name->TabIndex = 2;
			// 
			// txt_telefonnummer
			// 
			this->txt_telefonnummer->Location = System::Drawing::Point(112, 105);
			this->txt_telefonnummer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_telefonnummer->Name = L"txt_telefonnummer";
			this->txt_telefonnummer->Size = System::Drawing::Size(264, 20);
			this->txt_telefonnummer->TabIndex = 3;
			// 
			// txt_adresse
			// 
			this->txt_adresse->Location = System::Drawing::Point(112, 81);
			this->txt_adresse->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(264, 20);
			this->txt_adresse->TabIndex = 4;
			// 
			// txt_email
			// 
			this->txt_email->Location = System::Drawing::Point(112, 129);
			this->txt_email->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(264, 20);
			this->txt_email->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 16);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Geschlecht";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 39);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 62);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Vorname";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(2, 85);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Adresse";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(2, 109);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Telefonnummer";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(2, 133);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Email Adresse";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(2, 158);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Abteilung";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(2, 180);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Personalnummer";
			// 
			// btn_mitarbeiter_hinzufuegen
			// 
			this->btn_mitarbeiter_hinzufuegen->Location = System::Drawing::Point(112, 291);
			this->btn_mitarbeiter_hinzufuegen->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_mitarbeiter_hinzufuegen->Name = L"btn_mitarbeiter_hinzufuegen";
			this->btn_mitarbeiter_hinzufuegen->Size = System::Drawing::Size(128, 28);
			this->btn_mitarbeiter_hinzufuegen->TabIndex = 16;
			this->btn_mitarbeiter_hinzufuegen->Text = L"Hinzufügen";
			this->btn_mitarbeiter_hinzufuegen->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(2, 203);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Passwort";
			// 
			// txt_passwort
			// 
			this->txt_passwort->Location = System::Drawing::Point(112, 199);
			this->txt_passwort->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_passwort->Name = L"txt_passwort";
			this->txt_passwort->Size = System::Drawing::Size(264, 20);
			this->txt_passwort->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(2, 228);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Arbeitsstunden";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 251);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Urlaubstage";
			// 
			// txt_urlaubstage
			// 
			this->txt_urlaubstage->Location = System::Drawing::Point(112, 248);
			this->txt_urlaubstage->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_urlaubstage->Name = L"txt_urlaubstage";
			this->txt_urlaubstage->Size = System::Drawing::Size(264, 20);
			this->txt_urlaubstage->TabIndex = 22;
			// 
			// txt_arbeitsstunden
			// 
			this->txt_arbeitsstunden->Location = System::Drawing::Point(112, 223);
			this->txt_arbeitsstunden->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_arbeitsstunden->Name = L"txt_arbeitsstunden";
			this->txt_arbeitsstunden->Size = System::Drawing::Size(264, 20);
			this->txt_arbeitsstunden->TabIndex = 23;
			// 
			// txt_geschlecht
			// 
			this->txt_geschlecht->FormattingEnabled = true;
			this->txt_geschlecht->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"weiblich", L"männlich" });
			this->txt_geschlecht->Location = System::Drawing::Point(112, 11);
			this->txt_geschlecht->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_geschlecht->Name = L"txt_geschlecht";
			this->txt_geschlecht->Size = System::Drawing::Size(264, 21);
			this->txt_geschlecht->TabIndex = 24;
			// 
			// txt_abteilung
			// 
			this->txt_abteilung->FormattingEnabled = true;
			this->txt_abteilung->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Verwaltung", L"IT Sicherheit", L"Software Entwicklung" });
			this->txt_abteilung->Location = System::Drawing::Point(112, 152);
			this->txt_abteilung->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_abteilung->Name = L"txt_abteilung";
			this->txt_abteilung->Size = System::Drawing::Size(264, 21);
			this->txt_abteilung->TabIndex = 25;
			// 
			// RegistrierungsFenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(393, 354);
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
			this->Controls->Add(this->txt_adresse);
			this->Controls->Add(this->txt_telefonnummer);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->txt_vorname);
			this->Controls->Add(this->txt_personalnummer);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"RegistrierungsFenster";
			this->Text = L"Registrierung Imperium";
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

	String^ getAdresse() {
		return this->txt_adresse->Text;
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

	float^ getArbeitsstunden() {
		return float::Parse(this->txt_arbeitsstunden->Text);
	}

	Int32^ getUrlaubstage() {
		return Int32::Parse(this->txt_urlaubstage->Text);
	}

	//Methode zum Zurücksetzen der Textfelder
	void clear() {
		this->txt_name->Text = "";
		this->txt_vorname->Text = "";
		this->txt_adresse->Text = "";
		this->txt_telefonnummer->Text = "";
		this->txt_email->Text = "";
		this->txt_personalnummer->Text = "";
		this->txt_passwort->Text = "";
		this->txt_arbeitsstunden->Text = "";
		this->txt_urlaubstage->Text = "";
	}


private: System::Void btn_mitarbeiter_hinzufuegen_Click(System::Object^  sender, System::EventArgs^  e) {

	//Eingabepprüfung im Eventhandler
	if (this->txt_name->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;

	}

	else if (this->txt_vorname->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;

	}

	else if (this->txt_adresse->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;

	}

	else if (this->txt_telefonnummer->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;

	}

	else if (this->txt_email->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;

	}

	else if (this->txt_personalnummer->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;

	}

	else if (this->txt_passwort->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;

	}

	else if (this->txt_arbeitsstunden->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;

	}

	else if (this->txt_urlaubstage->Text->Length == 0) {

		this->DialogResult = System::Windows::Forms::DialogResult::None;

	}
	else {

		this->DialogResult = System::Windows::Forms::DialogResult::OK;

	}
	//this->Close();

}

	};
}
