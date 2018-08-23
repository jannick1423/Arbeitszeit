#pragma once
#include "Mitarbeiter.h"
#include "Vorgesetzter.h"

namespace ProjektLokal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r Urlaubsfenster
	/// </summary>
	public ref class Urlaubfenster : public System::Windows::Forms::Form
	{

	private:

		static int vergleichDaten;
		static int vergleichMitHeute;
		Angestellter^ angestellter;
		Int32 restUrlaub;

	public:
		Urlaubfenster(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Urlaubfenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  urlaubBeginnDTP;
	private: System::Windows::Forms::Label^  urlaubsabtragLbl;
	private: System::Windows::Forms::Button^  einreichenBtn;
	private: System::Windows::Forms::Label^  urlaubBeginnLbl;
	private: System::Windows::Forms::DateTimePicker^  urlaubEndeDTP;
	private: System::Windows::Forms::Button^  abbrechenBtn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tageTxt;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->urlaubBeginnDTP = (gcnew System::Windows::Forms::DateTimePicker());
			this->urlaubsabtragLbl = (gcnew System::Windows::Forms::Label());
			this->einreichenBtn = (gcnew System::Windows::Forms::Button());
			this->urlaubBeginnLbl = (gcnew System::Windows::Forms::Label());
			this->urlaubEndeDTP = (gcnew System::Windows::Forms::DateTimePicker());
			this->abbrechenBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tageTxt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// urlaubBeginnDTP
			// 
			this->urlaubBeginnDTP->Location = System::Drawing::Point(203, 138);
			this->urlaubBeginnDTP->Name = L"urlaubBeginnDTP";
			this->urlaubBeginnDTP->Size = System::Drawing::Size(200, 20);
			this->urlaubBeginnDTP->TabIndex = 0;
			// 
			// urlaubsabtragLbl
			// 
			this->urlaubsabtragLbl->AutoSize = true;
			this->urlaubsabtragLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->urlaubsabtragLbl->Location = System::Drawing::Point(41, 36);
			this->urlaubsabtragLbl->Name = L"urlaubsabtragLbl";
			this->urlaubsabtragLbl->Size = System::Drawing::Size(340, 55);
			this->urlaubsabtragLbl->TabIndex = 2;
			this->urlaubsabtragLbl->Text = L"Urlaubsantrag";
			// 
			// einreichenBtn
			// 
			this->einreichenBtn->Location = System::Drawing::Point(45, 332);
			this->einreichenBtn->Name = L"einreichenBtn";
			this->einreichenBtn->Size = System::Drawing::Size(122, 37);
			this->einreichenBtn->TabIndex = 3;
			this->einreichenBtn->Text = L"Einreichen";
			this->einreichenBtn->UseVisualStyleBackColor = true;
			this->einreichenBtn->Click += gcnew System::EventHandler(this, &Urlaubfenster::Einreichen_Click);
			// 
			// urlaubBeginnLbl
			// 
			this->urlaubBeginnLbl->AutoSize = true;
			this->urlaubBeginnLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->urlaubBeginnLbl->Location = System::Drawing::Point(29, 136);
			this->urlaubBeginnLbl->Name = L"urlaubBeginnLbl";
			this->urlaubBeginnLbl->Size = System::Drawing::Size(153, 24);
			this->urlaubBeginnLbl->TabIndex = 5;
			this->urlaubBeginnLbl->Text = L"Erster Urlaubstag";
			// 
			// urlaubEndeDTP
			// 
			this->urlaubEndeDTP->Location = System::Drawing::Point(203, 195);
			this->urlaubEndeDTP->Name = L"urlaubEndeDTP";
			this->urlaubEndeDTP->Size = System::Drawing::Size(200, 20);
			this->urlaubEndeDTP->TabIndex = 9;
			// 
			// abbrechenBtn
			// 
			this->abbrechenBtn->Location = System::Drawing::Point(259, 332);
			this->abbrechenBtn->Name = L"abbrechenBtn";
			this->abbrechenBtn->Size = System::Drawing::Size(122, 37);
			this->abbrechenBtn->TabIndex = 10;
			this->abbrechenBtn->Text = L"Abbrechen";
			this->abbrechenBtn->UseVisualStyleBackColor = true;
			this->abbrechenBtn->Click += gcnew System::EventHandler(this, &Urlaubfenster::abbrechenBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 24);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Letzter Urlaubstag";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Urlaubstage";
			// 
			// tageTxt
			// 
			this->tageTxt->Location = System::Drawing::Point(203, 256);
			this->tageTxt->Name = L"tageTxt";
			this->tageTxt->Size = System::Drawing::Size(47, 20);
			this->tageTxt->TabIndex = 13;
			// 
			// Urlaubfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(433, 381);
			this->Controls->Add(this->tageTxt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->abbrechenBtn);
			this->Controls->Add(this->urlaubEndeDTP);
			this->Controls->Add(this->urlaubBeginnLbl);
			this->Controls->Add(this->einreichenBtn);
			this->Controls->Add(this->urlaubsabtragLbl);
			this->Controls->Add(this->urlaubBeginnDTP);
			this->Name = L"Urlaubfenster";
			this->Text = L"Urlaubsantrag";
			this->Load += gcnew System::EventHandler(this, &Urlaubfenster::Urlaubfenster_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public:

	//Properties f�r das Auslesen der eingegebenen Daten
	property DateTime p_Anfang 
	{
		DateTime get() {
			return this->urlaubBeginnDTP->Value.Date;
		}
	}

	property DateTime p_Ende 
	{
		DateTime get() {
			return this->urlaubEndeDTP->Value.Date;
		}
	}

	property Int32 p_Tage 
	{
		Int32 get() {
			Int32 tageKonvertiert;
			if (tageTxt->Text->Length > 0) {
				String^ tageS = this->tageTxt->Text;
				tageKonvertiert = Convert::ToInt32(tageS);
			}
			else {
				tageKonvertiert = 0;
			}
			return tageKonvertiert;
		}
	}

	//Eingaben werden zur�ckgesetzt
	void clear() 
	{
		this->urlaubBeginnDTP->Value = DateTime::Today;
		this->urlaubEndeDTP->Value = DateTime::Today;
		this->tageTxt->Text = "";
	}

//Beim Klick auf "Einreichen" wird das Fenster geschlossen und OK gesendet, falls: Die Tage eingetragen wurden und die Zahl positiv ist,
//der Beginn nicht nach dem Ende liegt und der Beginn nicht in der Vergangenheit liegt.
private: System::Void Einreichen_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//Vergleich der Daten wird in Integern gespeichert
	vergleichDaten = DateTime::Compare(p_Anfang, p_Ende);
	vergleichMitHeute = DateTime::Compare(DateTime::Today.Date, p_Anfang);

	if (this->tageTxt->Text->Length == 0) {
		this->DialogResult = System::Windows::Forms::DialogResult::None;
		MessageBox::Show("Bitte tragen Sie die Anzahl der Urlaubstage ein!", "Absenden nicht m�glich!",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	if (p_Tage <= 0) {
		this->DialogResult = System::Windows::Forms::DialogResult::None;
		MessageBox::Show("Bitte tragen Sie eine gueltige Anzahl Urlaubstage ein!", "Absenden nicht m�glich!",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (vergleichDaten > 0) {
		this->DialogResult = System::Windows::Forms::DialogResult::None;
		MessageBox::Show("Ihr Urlaubsende darf nicht vor Ihrem Urlaubsbeginn liegen!\nBitte korrigieren Sie die Eingaben!", "Absenden nicht m�glich!",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (vergleichMitHeute > 0) {
		this->DialogResult = System::Windows::Forms::DialogResult::None;
		MessageBox::Show("Ihr Urlaubsbeginn darf nicht in der Vergangenheit liegen!\nBitte korrigieren Sie die Eingaben!", "Absenden nicht m�glich!",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (p_Tage > restUrlaub) {
		this->DialogResult = System::Windows::Forms::DialogResult::None;
		MessageBox::Show("Ihre gewuenschten Urlaubstage ueberschreiten Ihren Resturlaub!\nBitte korrigieren Sie die Eingaben!", "Absenden nicht m�glich!",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close(); //Fenster wird nur geschlossen, wenn alle Angaben gemacht wurden und OK sind.
	}
}

private: System::Void abbrechenBtn_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
}

private: System::Void Urlaubfenster_Load(System::Object^  sender, System::EventArgs^  e) 
{
}

//NEU: Angestellter wird gesetzt:
public: void setAngestellter(Angestellter^ angestellterUebergabe) 
{
	Angestellter^ angestellter = angestellterUebergabe;
	restUrlaub = angestellter->getAnzUrlaubstage() - angestellter->getGenommenUrlaub();
}

};
}
