#pragma once
#include <ctime>
#include "Urlaubsfenster.h"
#include "Statistikfenster.h"
#include "Kalenderfenster.h"
#include "Urlaubsantrag.h"
#include "Mitarbeiter.h"
#include "Unternehmen.h"
//#include "LogInFenster.h"

namespace ProjektLokal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Startseite
	/// </summary>
	public ref class Startseite : public System::Windows::Forms::Form
	{

	private:

		Mitarbeiter^ vorgesetzter;

		static int arbeitsStunden;
		static int arbeitsMinuten;
		static int uhrSekunde;
		static int uhrMinute;
		static int uhrStunde;
		static int pauseStunde;
		static int pauseMinute;
		static int pauseSekunde;

		bool gegangen;

		int restUrlaub;

		String^ minuteS;
		String^ sekundeS;
		String^ stundeS;
		String^ arbeitsStundenS; 
		String^ arbeitsMinutenS;
		String^ pauseStundeS;
		String^ pauseMinuteS;
		String^ pauseSekundeS;
		String^ urlaubString;

		//Unterfenster:
		Urlaubfenster^ urlaubsfenster;
		Statistikfenster^ statistikfenster;
		Kalenderfenster^ kalenderfenster;
		//loginFenster^ loginfenster;

	System::Windows::Forms::Timer^  timerUhr;
	System::Windows::Forms::Label^  datumLbl;
	private: System::Windows::Forms::Label^  arbeitszeitSchriftLbl;
	private: System::Windows::Forms::Label^  resturlaubSchriftLbl;
	private: System::Windows::Forms::Label^  PausenSchriftLbl;
	private: System::Windows::Forms::Label^  nochWochenstundenSchriftLbl;
	private: System::Windows::Forms::Button^  statistikBtn;
	private: System::Windows::Forms::Button^  urlaubBtn;
	private: System::Windows::Forms::Button^  kalenderBtn;
	private: System::Windows::Forms::Label^  nochWochenstundenLbl;
	private: System::Windows::Forms::Label^  pauseLbl;
	private: System::Windows::Forms::Label^  resturlaubLbl;
	private: System::Windows::Forms::CheckBox^  pauseCbox;
	private: System::Windows::Forms::Timer^  timerPause;

	System::Windows::Forms::Label^  uhrzeitLbl;

	public:
		Startseite(void)
		{
			InitializeComponent();
			
			//Unterfenster initialisieren:
			urlaubsfenster = gcnew Urlaubfenster;
			kalenderfenster = gcnew Kalenderfenster;
			statistikfenster = gcnew Statistikfenster;
			//loginfenster = gcnew loginFenster;

		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Startseite()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  kommenBtn;
	private: System::Windows::Forms::Button^  gehenBtn;
	private: System::Windows::Forms::Label^  halloLbl;
	private: System::Windows::Forms::Label^  nameLbl;
	private: System::Windows::Forms::Timer^  timerArbeitszeit;
	private: System::Windows::Forms::Label^  arbeitszeitLbl;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Startseite::typeid));
			this->kommenBtn = (gcnew System::Windows::Forms::Button());
			this->gehenBtn = (gcnew System::Windows::Forms::Button());
			this->halloLbl = (gcnew System::Windows::Forms::Label());
			this->nameLbl = (gcnew System::Windows::Forms::Label());
			this->timerArbeitszeit = (gcnew System::Windows::Forms::Timer(this->components));
			this->arbeitszeitLbl = (gcnew System::Windows::Forms::Label());
			this->timerUhr = (gcnew System::Windows::Forms::Timer(this->components));
			this->uhrzeitLbl = (gcnew System::Windows::Forms::Label());
			this->datumLbl = (gcnew System::Windows::Forms::Label());
			this->arbeitszeitSchriftLbl = (gcnew System::Windows::Forms::Label());
			this->resturlaubSchriftLbl = (gcnew System::Windows::Forms::Label());
			this->PausenSchriftLbl = (gcnew System::Windows::Forms::Label());
			this->nochWochenstundenSchriftLbl = (gcnew System::Windows::Forms::Label());
			this->statistikBtn = (gcnew System::Windows::Forms::Button());
			this->urlaubBtn = (gcnew System::Windows::Forms::Button());
			this->kalenderBtn = (gcnew System::Windows::Forms::Button());
			this->nochWochenstundenLbl = (gcnew System::Windows::Forms::Label());
			this->pauseLbl = (gcnew System::Windows::Forms::Label());
			this->resturlaubLbl = (gcnew System::Windows::Forms::Label());
			this->pauseCbox = (gcnew System::Windows::Forms::CheckBox());
			this->timerPause = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// kommenBtn
			// 
			this->kommenBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->kommenBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kommenBtn.Image")));
			this->kommenBtn->Location = System::Drawing::Point(47, 272);
			this->kommenBtn->Name = L"kommenBtn";
			this->kommenBtn->Size = System::Drawing::Size(200, 130);
			this->kommenBtn->TabIndex = 0;
			this->kommenBtn->UseVisualStyleBackColor = true;
			this->kommenBtn->UseWaitCursor = true;
			this->kommenBtn->Click += gcnew System::EventHandler(this, &Startseite::kommenBtn_Click);
			// 
			// gehenBtn
			// 
			this->gehenBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->gehenBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gehenBtn.Image")));
			this->gehenBtn->Location = System::Drawing::Point(577, 272);
			this->gehenBtn->Name = L"gehenBtn";
			this->gehenBtn->Size = System::Drawing::Size(200, 130);
			this->gehenBtn->TabIndex = 1;
			this->gehenBtn->UseVisualStyleBackColor = true;
			this->gehenBtn->UseWaitCursor = true;
			this->gehenBtn->Click += gcnew System::EventHandler(this, &Startseite::gehenBtn_Click);
			// 
			// halloLbl
			// 
			this->halloLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->halloLbl->AutoSize = true;
			this->halloLbl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->halloLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->halloLbl->Location = System::Drawing::Point(375, 20);
			this->halloLbl->Name = L"halloLbl";
			this->halloLbl->Size = System::Drawing::Size(81, 31);
			this->halloLbl->TabIndex = 3;
			this->halloLbl->Text = L"Hallo";
			this->halloLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->halloLbl->UseWaitCursor = true;
			// 
			// nameLbl
			// 
			this->nameLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->nameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLbl->Location = System::Drawing::Point(1, 67);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->Size = System::Drawing::Size(823, 46);
			this->nameLbl->TabIndex = 4;
			this->nameLbl->Text = L"Beispiel-Name eines MA";
			this->nameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->nameLbl->UseWaitCursor = true;
			// 
			// timerArbeitszeit
			// 
			this->timerArbeitszeit->Interval = 1000;
			this->timerArbeitszeit->Tick += gcnew System::EventHandler(this, &Startseite::timerArbeitszeit_Tick);
			// 
			// arbeitszeitLbl
			// 
			this->arbeitszeitLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->arbeitszeitLbl->AutoSize = true;
			this->arbeitszeitLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arbeitszeitLbl->ForeColor = System::Drawing::Color::Red;
			this->arbeitszeitLbl->Location = System::Drawing::Point(300, 446);
			this->arbeitszeitLbl->Name = L"arbeitszeitLbl";
			this->arbeitszeitLbl->Size = System::Drawing::Size(212, 55);
			this->arbeitszeitLbl->TabIndex = 5;
			this->arbeitszeitLbl->Text = L"00:00:00";
			this->arbeitszeitLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->arbeitszeitLbl->UseWaitCursor = true;
			// 
			// timerUhr
			// 
			this->timerUhr->Enabled = true;
			this->timerUhr->Interval = 1000;
			this->timerUhr->Tick += gcnew System::EventHandler(this, &Startseite::timerUhr_Tick);
			// 
			// uhrzeitLbl
			// 
			this->uhrzeitLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->uhrzeitLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56));
			this->uhrzeitLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->uhrzeitLbl->Location = System::Drawing::Point(0, 176);
			this->uhrzeitLbl->Name = L"uhrzeitLbl";
			this->uhrzeitLbl->Size = System::Drawing::Size(827, 93);
			this->uhrzeitLbl->TabIndex = 6;
			this->uhrzeitLbl->Text = L"00:00:00";
			this->uhrzeitLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->uhrzeitLbl->UseWaitCursor = true;
			// 
			// datumLbl
			// 
			this->datumLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->datumLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datumLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datumLbl->Location = System::Drawing::Point(-1, 126);
			this->datumLbl->Name = L"datumLbl";
			this->datumLbl->Size = System::Drawing::Size(825, 50);
			this->datumLbl->TabIndex = 7;
			this->datumLbl->Text = L"1. Januar 1900";
			this->datumLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->datumLbl->UseWaitCursor = true;
			// 
			// arbeitszeitSchriftLbl
			// 
			this->arbeitszeitSchriftLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->arbeitszeitSchriftLbl->AutoSize = true;
			this->arbeitszeitSchriftLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->arbeitszeitSchriftLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->arbeitszeitSchriftLbl->Location = System::Drawing::Point(297, 405);
			this->arbeitszeitSchriftLbl->Name = L"arbeitszeitSchriftLbl";
			this->arbeitszeitSchriftLbl->Size = System::Drawing::Size(215, 31);
			this->arbeitszeitSchriftLbl->TabIndex = 8;
			this->arbeitszeitSchriftLbl->Text = L"Tagesarbeitszeit";
			this->arbeitszeitSchriftLbl->UseWaitCursor = true;
			// 
			// resturlaubSchriftLbl
			// 
			this->resturlaubSchriftLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->resturlaubSchriftLbl->AutoSize = true;
			this->resturlaubSchriftLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->resturlaubSchriftLbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->resturlaubSchriftLbl->Location = System::Drawing::Point(628, 634);
			this->resturlaubSchriftLbl->Name = L"resturlaubSchriftLbl";
			this->resturlaubSchriftLbl->Size = System::Drawing::Size(116, 25);
			this->resturlaubSchriftLbl->TabIndex = 9;
			this->resturlaubSchriftLbl->Text = L"Resturlaub";
			this->resturlaubSchriftLbl->UseWaitCursor = true;
			// 
			// PausenSchriftLbl
			// 
			this->PausenSchriftLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->PausenSchriftLbl->AutoSize = true;
			this->PausenSchriftLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PausenSchriftLbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->PausenSchriftLbl->Location = System::Drawing::Point(340, 634);
			this->PausenSchriftLbl->Name = L"PausenSchriftLbl";
			this->PausenSchriftLbl->Size = System::Drawing::Size(133, 25);
			this->PausenSchriftLbl->TabIndex = 10;
			this->PausenSchriftLbl->Text = L"Pause heute";
			this->PausenSchriftLbl->UseWaitCursor = true;
			// 
			// nochWochenstundenSchriftLbl
			// 
			this->nochWochenstundenSchriftLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->nochWochenstundenSchriftLbl->AutoSize = true;
			this->nochWochenstundenSchriftLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nochWochenstundenSchriftLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->nochWochenstundenSchriftLbl->Location = System::Drawing::Point(13, 634);
			this->nochWochenstundenSchriftLbl->Name = L"nochWochenstundenSchriftLbl";
			this->nochWochenstundenSchriftLbl->Size = System::Drawing::Size(237, 25);
			this->nochWochenstundenSchriftLbl->TabIndex = 11;
			this->nochWochenstundenSchriftLbl->Text = L"Übrige Wochenstunden";
			this->nochWochenstundenSchriftLbl->UseWaitCursor = true;
			// 
			// statistikBtn
			// 
			this->statistikBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->statistikBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->statistikBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->statistikBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->statistikBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"statistikBtn.Image")));
			this->statistikBtn->Location = System::Drawing::Point(15, 535);
			this->statistikBtn->Name = L"statistikBtn";
			this->statistikBtn->Size = System::Drawing::Size(235, 76);
			this->statistikBtn->TabIndex = 12;
			this->statistikBtn->UseVisualStyleBackColor = false;
			this->statistikBtn->UseWaitCursor = true;
			this->statistikBtn->Click += gcnew System::EventHandler(this, &Startseite::statistikBtn_Click);
			// 
			// urlaubBtn
			// 
			this->urlaubBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->urlaubBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->urlaubBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->urlaubBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->urlaubBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"urlaubBtn.Image")));
			this->urlaubBtn->Location = System::Drawing::Point(570, 535);
			this->urlaubBtn->Name = L"urlaubBtn";
			this->urlaubBtn->Size = System::Drawing::Size(235, 76);
			this->urlaubBtn->TabIndex = 13;
			this->urlaubBtn->UseVisualStyleBackColor = false;
			this->urlaubBtn->UseWaitCursor = true;
			this->urlaubBtn->Click += gcnew System::EventHandler(this, &Startseite::urlaubBtn_Click);
			// 
			// kalenderBtn
			// 
			this->kalenderBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->kalenderBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->kalenderBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->kalenderBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->kalenderBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kalenderBtn.Image")));
			this->kalenderBtn->Location = System::Drawing::Point(293, 535);
			this->kalenderBtn->Name = L"kalenderBtn";
			this->kalenderBtn->Size = System::Drawing::Size(235, 76);
			this->kalenderBtn->TabIndex = 14;
			this->kalenderBtn->UseVisualStyleBackColor = false;
			this->kalenderBtn->UseWaitCursor = true;
			this->kalenderBtn->Click += gcnew System::EventHandler(this, &Startseite::kalenderBtn_Click);
			// 
			// nochWochenstundenLbl
			// 
			this->nochWochenstundenLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->nochWochenstundenLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nochWochenstundenLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->nochWochenstundenLbl->Location = System::Drawing::Point(2, 659);
			this->nochWochenstundenLbl->Name = L"nochWochenstundenLbl";
			this->nochWochenstundenLbl->Size = System::Drawing::Size(270, 50);
			this->nochWochenstundenLbl->TabIndex = 15;
			this->nochWochenstundenLbl->Text = L"00:00 Stunden";
			this->nochWochenstundenLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->nochWochenstundenLbl->UseWaitCursor = true;
			// 
			// pauseLbl
			// 
			this->pauseLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pauseLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pauseLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pauseLbl->Location = System::Drawing::Point(269, 659);
			this->pauseLbl->Name = L"pauseLbl";
			this->pauseLbl->Size = System::Drawing::Size(270, 50);
			this->pauseLbl->TabIndex = 16;
			this->pauseLbl->Text = L"0:00:00 Stunden";
			this->pauseLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pauseLbl->UseWaitCursor = true;
			// 
			// resturlaubLbl
			// 
			this->resturlaubLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->resturlaubLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resturlaubLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->resturlaubLbl->Location = System::Drawing::Point(554, 659);
			this->resturlaubLbl->Name = L"resturlaubLbl";
			this->resturlaubLbl->Size = System::Drawing::Size(258, 50);
			this->resturlaubLbl->TabIndex = 17;
			this->resturlaubLbl->Text = L"0 Tage";
			this->resturlaubLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->resturlaubLbl->UseWaitCursor = true;
			// 
			// pauseCbox
			// 
			this->pauseCbox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pauseCbox->Appearance = System::Windows::Forms::Appearance::Button;
			this->pauseCbox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pauseCbox.Image")));
			this->pauseCbox->Location = System::Drawing::Point(288, 297);
			this->pauseCbox->Name = L"pauseCbox";
			this->pauseCbox->Size = System::Drawing::Size(240, 80);
			this->pauseCbox->TabIndex = 18;
			this->pauseCbox->UseVisualStyleBackColor = true;
			this->pauseCbox->UseWaitCursor = true;
			this->pauseCbox->CheckedChanged += gcnew System::EventHandler(this, &Startseite::pauseCbox_CheckedChanged);
			// 
			// timerPause
			// 
			this->timerPause->Interval = 1000;
			this->timerPause->Tick += gcnew System::EventHandler(this, &Startseite::timerPause_Tick);
			// 
			// Startseite
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(822, 711);
			this->Controls->Add(this->pauseCbox);
			this->Controls->Add(this->resturlaubLbl);
			this->Controls->Add(this->pauseLbl);
			this->Controls->Add(this->nochWochenstundenLbl);
			this->Controls->Add(this->kalenderBtn);
			this->Controls->Add(this->urlaubBtn);
			this->Controls->Add(this->statistikBtn);
			this->Controls->Add(this->nochWochenstundenSchriftLbl);
			this->Controls->Add(this->PausenSchriftLbl);
			this->Controls->Add(this->resturlaubSchriftLbl);
			this->Controls->Add(this->arbeitszeitSchriftLbl);
			this->Controls->Add(this->datumLbl);
			this->Controls->Add(this->uhrzeitLbl);
			this->Controls->Add(this->arbeitszeitLbl);
			this->Controls->Add(this->nameLbl);
			this->Controls->Add(this->halloLbl);
			this->Controls->Add(this->gehenBtn);
			this->Controls->Add(this->kommenBtn);
			this->Name = L"Startseite";
			this->Text = L"Zeiterfassung Startseite";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &Startseite::Startseite_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void timerPause_Tick(System::Object^  sender, System::EventArgs^  e) {
	pauseSekunde++;

	if (pauseSekunde == 60) {
		pauseSekunde = 0;
		pauseMinute++;
		if (pauseMinute == 60) {
			pauseMinute = 0;
			pauseStunde++;
		}
	}

	if (pauseSekunde < 10) {
		pauseSekundeS = "0" + Convert::ToString(pauseSekunde);
	}
	else {
		pauseSekundeS = Convert::ToString(pauseSekunde);
	}

	if (pauseMinute < 10) {
		pauseMinuteS = "0" + Convert::ToString(pauseMinute);
	}
	else {
		pauseMinuteS = Convert::ToString(pauseMinute);
	}

	pauseStundeS = Convert::ToString(pauseStunde);

	pauseLbl->Text = pauseStundeS + ":" + pauseMinuteS + ":" + pauseSekundeS + " Stunden";

}

//Timer für die Arbeitszeit und rückwärts laufend für die restliche Wochenarbeitszeit
private: System::Void timerArbeitszeit_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	uhrSekunde++;
	
	if (uhrSekunde == 60) {
		uhrSekunde = 0;
		uhrMinute++;
		arbeitsMinuten--;
		if (uhrMinute == 60) {
			uhrMinute = 0;
			uhrStunde++;
		}
		if (arbeitsMinuten == -1) {
			arbeitsStunden--;
			arbeitsMinuten = 59;
		}
	}
	
	if (uhrSekunde < 10) {
		sekundeS = "0" + Convert::ToString(uhrSekunde);
	}
	else {
		sekundeS = Convert::ToString(uhrSekunde);
	}

	if (uhrMinute < 10) {
		minuteS = "0" + Convert::ToString(uhrMinute);
	}
	else {
		minuteS = Convert::ToString(uhrMinute);
	}

	if (uhrStunde < 10) {
		stundeS = "0" + Convert::ToString(uhrStunde);
	}
	else {
		stundeS = Convert::ToString(uhrStunde);
	}

	arbeitsStundenS = Convert::ToString(arbeitsStunden);
	if (arbeitsStunden < 10) {
		arbeitsStundenS = "0" + Convert::ToString(arbeitsStunden);
	}
	arbeitsMinutenS = Convert::ToString(arbeitsMinuten);
	if (arbeitsMinuten < 10) {
		arbeitsMinutenS = "0" + Convert::ToString(arbeitsMinuten);
	}

	arbeitszeitLbl->Text = stundeS + ":" + minuteS + ":" + sekundeS;
	nochWochenstundenLbl->Text = arbeitsStundenS + ":" + arbeitsMinutenS + " Stunden";

}

//Uhrzeit und Datum werden in getrennten Labels im gewünschten Format dargestellt
private: System::Void timerUhr_Tick(System::Object^  sender, System::EventArgs^  e) {
	uhrzeitLbl->Text = DateTime::Now.ToString("HH:mm:ss");
	datumLbl->Text = DateTime::Now.ToString("dddd, dd. MMMM yyyy");
}

//Bei Klick auf den Kommen-Button wird der Arbeitszeit-Timer gestartet
private: System::Void kommenBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	//Wenn ein Mitarbeiter schonmal auf "Gehen" geklickt hat, muss er sich neu einloggen, um wieder starten zu können.
	if (!gegangen) {
		timerArbeitszeit->Start();
		this->arbeitszeitLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
		vorgesetzter->fuegeZeitHinzu();
	}
	else {
		MessageBox::Show("Sie haben heute bereits einen Arbeitstag abgeschlossen.\nBitte loggen Sie sich neu ein!", "Beginnen fehlgeschlagen!",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

//Bei Klick auf Gehen-Button wird der Arbeitszeit-Timer gestoppt
private: System::Void gehenBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	//Sicherheitsabfrage, ob der Mitarbeiter wirklich gehen moechte
	if (MessageBox::Show("Sind Sie sicher, dass Sie gehen moechten?\nWenn Sie auf \"Ja\" klicken, wird Ihr Arbeitstag beendet!", "Wirklich gehen?", MessageBoxButtons::YesNo, 
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		timerArbeitszeit->Stop();
		this->arbeitszeitLbl->ForeColor = System::Drawing::Color::Red;
		gegangen = true;
		vorgesetzter->arbeitsTagBeenden(arbeitsStunden, arbeitsMinuten);
	}
}

//Beim Drücken der Pause-Taste wird die Arbeitszeit-Uhr entweder gestartet oder gestoppt
//Gleichzeitig wird der Pause-Timer gestartet bzw. gestoppt
private: System::Void pauseCbox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (timerArbeitszeit->Enabled) {
		timerArbeitszeit->Stop();
		timerPause->Start();
		this->pauseLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
		this->arbeitszeitLbl->ForeColor = System::Drawing::Color::Gray;
		vorgesetzter->fuegeZeitHinzu();
	}
	else {
		timerArbeitszeit->Start();
		timerPause->Stop();
		this->pauseLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
		this->arbeitszeitLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
	}
}

//Klick auf Kalender-Button öffnet Kalender-Fenster
private: System::Void kalenderBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult result = kalenderfenster->ShowDialog(this);
}

//Klick auf Statistik-Button öffnet Statistik-Fenster
private: System::Void statistikBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult result = statistikfenster->ShowDialog(this);
}

//Klick auf Urlaub-Button öffnet Urlaub-Fenster
private: System::Void urlaubBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult result = urlaubsfenster->ShowDialog(this);
	
	//Der Urlaubsantrag als String
	urlaubString = "Beginn: " + urlaubsfenster->p_Anfang.ToString("dddd, dd. MMMM yyyy") + "\nEnde: " + urlaubsfenster->p_Ende.ToString("dddd, dd. MMMM yyyy") + "\nUrlaubstage: " + urlaubsfenster->p_Tage.ToString() + "\n";

	//Wenn vom Urlaubsfenster OK gegeben wird, wir zunächst eine Abfrage erzeugt, ob der Antrag so in Ordnung ist. Wenn der Mitarbeiter mit "Ja" bestätigt, wird ein neues Objekt vom Typ
	//Urlaubsantrag erstellt. Bei "Nein" wird abgebrochen.
	if (result == System::Windows::Forms::DialogResult::OK) {
		if (MessageBox::Show("Sie wollen folgenden Urlaub beantragen:\n" + urlaubString + "\nWollen Sie diesen Antrag einreichen?", "Antrag einreichen?", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			//Neuen Urlaubsantrag aus Werten aus dem Urlaubsfenster erstellen
			Urlaubsantrag ^u = gcnew Urlaubsantrag(urlaubsfenster->p_Anfang, urlaubsfenster->p_Ende, urlaubsfenster->p_Tage);

			MessageBox::Show("Urlaubsantrag erfolgreich eingereicht!", "Antrag erfolgreich!",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Ihr Urlaubsantrag wurde nicht eingereicht!", "Antrag abgebrochen!",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		urlaubsfenster->clear(); //Textfelder wieder leeren

	}
	else {
		MessageBox::Show("Urlaubsantrag konnte nicht erstellt werden!", "Erstellen fehlgeschlagen",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void Startseite_Load(System::Object^  sender, System::EventArgs^  e) {

	

	//Werte auslesen und im Fenster darstellen.
	arbeitsStunden = vorgesetzter->getArbeitStundenNoch();
	arbeitsMinuten = vorgesetzter->getArbeitMinutenNoch();
	nameLbl->Text = vorgesetzter->getVorname() + " " + vorgesetzter->getNachname();

	restUrlaub = vorgesetzter->getAnzUrlaubstage() - vorgesetzter->getGenommenUrlaub();

	//Startwerte Timer setzen:
	uhrSekunde = 0;
	uhrMinute = 0;
	uhrStunde = 0;

	gegangen = false;

	//Noch übrigen Wochenstunden werden beim Öffnen der Seite eingelesen
	arbeitsStundenS = Convert::ToString(arbeitsStunden);
	if (arbeitsStunden < 10) {
		arbeitsStundenS = "0" + Convert::ToString(arbeitsStunden);
	}
	arbeitsMinutenS = Convert::ToString(arbeitsMinuten);
	if (arbeitsMinuten < 10) {
		arbeitsMinutenS = "0" + Convert::ToString(arbeitsMinuten);
	}

	nochWochenstundenLbl->Text = arbeitsStundenS + ":" + arbeitsMinutenS + " Stunden";

	resturlaubLbl->Text = restUrlaub + " Tage";
}

private: System::Void Startseite_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Wollen Sie dieses Fenster wirklich schliessen?", "Fenster schliessen?", MessageBoxButtons::OKCancel,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel) {
		e->Cancel = true;
	}
}

//NEU: ÜBERGABE DES MITARBEITERS
public: void setMitarbeiter(Angestellter^ mitarbeiterUebergabe) {
	this->vorgesetzter = (Mitarbeiter^) mitarbeiterUebergabe;
}

};
}
