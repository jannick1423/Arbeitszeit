#pragma once
#pragma once
#include <ctime>

namespace ProjektLokal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für VorgesetztenSeite
	/// </summary>
	public ref class VorgesetztenSeite : public System::Windows::Forms::Form
	{

	private:
		static int arbeitsStunden;
		static int arbeitsMinuten;
		static int sekunde;
		static int minute;
		static int stunde;
		static int pauseStunde;
		static int pauseMinute;
		static int pauseSekunde;

		String^ minuteS;
		String^ sekundeS;
		String^ stundeS;
		String^ arbeitsStundenS;
		String^ arbeitsMinutenS;
		String^ pauseStundeS;
		String^ pauseMinuteS;
		String^ pauseSekundeS;


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
	private: System::Windows::Forms::Button^  editBtn;
	private: System::Windows::Forms::Button^  personalBtn;
	private: System::Windows::Forms::Button^  AddBtn;



			 System::Windows::Forms::Label^  uhrzeitLbl;

	public:
		VorgesetztenSeite(void)
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
		~VorgesetztenSeite()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  kommenBtn;
	protected:
	private: System::Windows::Forms::Button^  gehenBtn;

	private: System::Windows::Forms::Label^  hallo;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VorgesetztenSeite::typeid));
			this->kommenBtn = (gcnew System::Windows::Forms::Button());
			this->gehenBtn = (gcnew System::Windows::Forms::Button());
			this->hallo = (gcnew System::Windows::Forms::Label());
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
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->personalBtn = (gcnew System::Windows::Forms::Button());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// kommenBtn
			// 
			this->kommenBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->kommenBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kommenBtn.Image")));
			this->kommenBtn->Location = System::Drawing::Point(65, 475);
			this->kommenBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->kommenBtn->Name = L"kommenBtn";
			this->kommenBtn->Size = System::Drawing::Size(300, 200);
			this->kommenBtn->TabIndex = 0;
			this->kommenBtn->UseVisualStyleBackColor = true;
			this->kommenBtn->UseWaitCursor = true;
			this->kommenBtn->Click += gcnew System::EventHandler(this, &VorgesetztenSeite::kommenBtn_Click);
			// 
			// gehenBtn
			// 
			this->gehenBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->gehenBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gehenBtn.Image")));
			this->gehenBtn->Location = System::Drawing::Point(949, 475);
			this->gehenBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->gehenBtn->Name = L"gehenBtn";
			this->gehenBtn->Size = System::Drawing::Size(300, 200);
			this->gehenBtn->TabIndex = 1;
			this->gehenBtn->UseVisualStyleBackColor = true;
			this->gehenBtn->UseWaitCursor = true;
			this->gehenBtn->Click += gcnew System::EventHandler(this, &VorgesetztenSeite::gehenBtn_Click);
			// 
			// hallo
			// 
			this->hallo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->hallo->AutoSize = true;
			this->hallo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hallo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hallo->Location = System::Drawing::Point(613, 43);
			this->hallo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->hallo->Name = L"hallo";
			this->hallo->Size = System::Drawing::Size(121, 47);
			this->hallo->TabIndex = 3;
			this->hallo->Text = L"Hallo";
			this->hallo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->hallo->UseWaitCursor = true;
			// 
			// nameLbl
			// 
			this->nameLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->nameLbl->AutoSize = true;
			this->nameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLbl->Location = System::Drawing::Point(332, 112);
			this->nameLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->Size = System::Drawing::Size(685, 69);
			this->nameLbl->TabIndex = 4;
			this->nameLbl->Text = L"Beispiel-Name eines MA";
			this->nameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->nameLbl->UseWaitCursor = true;
			// 
			// timerArbeitszeit
			// 
			this->timerArbeitszeit->Interval = 1000;
			this->timerArbeitszeit->Tick += gcnew System::EventHandler(this, &VorgesetztenSeite::timerArbeitszeit_Tick);
			// 
			// arbeitszeitLbl
			// 
			this->arbeitszeitLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->arbeitszeitLbl->AutoSize = true;
			this->arbeitszeitLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arbeitszeitLbl->ForeColor = System::Drawing::Color::Red;
			this->arbeitszeitLbl->Location = System::Drawing::Point(497, 745);
			this->arbeitszeitLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->arbeitszeitLbl->Name = L"arbeitszeitLbl";
			this->arbeitszeitLbl->Size = System::Drawing::Size(315, 82);
			this->arbeitszeitLbl->TabIndex = 5;
			this->arbeitszeitLbl->Text = L"00:00:00";
			this->arbeitszeitLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->arbeitszeitLbl->UseWaitCursor = true;
			// 
			// timerUhr
			// 
			this->timerUhr->Enabled = true;
			this->timerUhr->Interval = 1000;
			this->timerUhr->Tick += gcnew System::EventHandler(this, &VorgesetztenSeite::timerUhr_Tick);
			// 
			// uhrzeitLbl
			// 
			this->uhrzeitLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->uhrzeitLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56));
			this->uhrzeitLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->uhrzeitLbl->Location = System::Drawing::Point(281, 298);
			this->uhrzeitLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->uhrzeitLbl->Name = L"uhrzeitLbl";
			this->uhrzeitLbl->Size = System::Drawing::Size(750, 142);
			this->uhrzeitLbl->TabIndex = 6;
			this->uhrzeitLbl->Text = L"14:30:00";
			this->uhrzeitLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->uhrzeitLbl->UseWaitCursor = true;
			// 
			// datumLbl
			// 
			this->datumLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->datumLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datumLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datumLbl->Location = System::Drawing::Point(65, 222);
			this->datumLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->datumLbl->Name = L"datumLbl";
			this->datumLbl->Size = System::Drawing::Size(1184, 77);
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
			this->arbeitszeitSchriftLbl->Location = System::Drawing::Point(493, 680);
			this->arbeitszeitSchriftLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->arbeitszeitSchriftLbl->Name = L"arbeitszeitSchriftLbl";
			this->arbeitszeitSchriftLbl->Size = System::Drawing::Size(325, 47);
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
			this->resturlaubSchriftLbl->Location = System::Drawing::Point(1004, 1198);
			this->resturlaubSchriftLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resturlaubSchriftLbl->Name = L"resturlaubSchriftLbl";
			this->resturlaubSchriftLbl->Size = System::Drawing::Size(171, 37);
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
			this->PausenSchriftLbl->Location = System::Drawing::Point(535, 1198);
			this->PausenSchriftLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PausenSchriftLbl->Name = L"PausenSchriftLbl";
			this->PausenSchriftLbl->Size = System::Drawing::Size(195, 37);
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
			this->nochWochenstundenSchriftLbl->Location = System::Drawing::Point(38, 1198);
			this->nochWochenstundenSchriftLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nochWochenstundenSchriftLbl->Name = L"nochWochenstundenSchriftLbl";
			this->nochWochenstundenSchriftLbl->Size = System::Drawing::Size(352, 37);
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
			this->statistikBtn->Location = System::Drawing::Point(45, 906);
			this->statistikBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->statistikBtn->Name = L"statistikBtn";
			this->statistikBtn->Size = System::Drawing::Size(352, 118);
			this->statistikBtn->TabIndex = 12;
			this->statistikBtn->UseVisualStyleBackColor = false;
			this->statistikBtn->UseWaitCursor = true;
			// 
			// urlaubBtn
			// 
			this->urlaubBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->urlaubBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->urlaubBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->urlaubBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->urlaubBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"urlaubBtn.Image")));
			this->urlaubBtn->Location = System::Drawing::Point(920, 906);
			this->urlaubBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->urlaubBtn->Name = L"urlaubBtn";
			this->urlaubBtn->Size = System::Drawing::Size(352, 118);
			this->urlaubBtn->TabIndex = 13;
			this->urlaubBtn->UseVisualStyleBackColor = false;
			this->urlaubBtn->UseWaitCursor = true;
			// 
			// kalenderBtn
			// 
			this->kalenderBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->kalenderBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->kalenderBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->kalenderBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->kalenderBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kalenderBtn.Image")));
			this->kalenderBtn->Location = System::Drawing::Point(481, 906);
			this->kalenderBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->kalenderBtn->Name = L"kalenderBtn";
			this->kalenderBtn->Size = System::Drawing::Size(352, 118);
			this->kalenderBtn->TabIndex = 14;
			this->kalenderBtn->UseVisualStyleBackColor = false;
			this->kalenderBtn->UseWaitCursor = true;
			// 
			// nochWochenstundenLbl
			// 
			this->nochWochenstundenLbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->nochWochenstundenLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nochWochenstundenLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->nochWochenstundenLbl->Location = System::Drawing::Point(5, 1237);
			this->nochWochenstundenLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nochWochenstundenLbl->Name = L"nochWochenstundenLbl";
			this->nochWochenstundenLbl->Size = System::Drawing::Size(405, 77);
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
			this->pauseLbl->Location = System::Drawing::Point(435, 1237);
			this->pauseLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pauseLbl->Name = L"pauseLbl";
			this->pauseLbl->Size = System::Drawing::Size(405, 77);
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
			this->resturlaubLbl->Location = System::Drawing::Point(890, 1237);
			this->resturlaubLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resturlaubLbl->Name = L"resturlaubLbl";
			this->resturlaubLbl->Size = System::Drawing::Size(405, 77);
			this->resturlaubLbl->TabIndex = 17;
			this->resturlaubLbl->Text = L"26 Tage";
			this->resturlaubLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->resturlaubLbl->UseWaitCursor = true;
			// 
			// pauseCbox
			// 
			this->pauseCbox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pauseCbox->Appearance = System::Windows::Forms::Appearance::Button;
			this->pauseCbox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pauseCbox.Image")));
			this->pauseCbox->Location = System::Drawing::Point(481, 514);
			this->pauseCbox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pauseCbox->Name = L"pauseCbox";
			this->pauseCbox->Size = System::Drawing::Size(360, 123);
			this->pauseCbox->TabIndex = 18;
			this->pauseCbox->UseVisualStyleBackColor = true;
			this->pauseCbox->UseWaitCursor = true;
			this->pauseCbox->CheckedChanged += gcnew System::EventHandler(this, &VorgesetztenSeite::pauseCbox_CheckedChanged);
			// 
			// timerPause
			// 
			this->timerPause->Interval = 1000;
			this->timerPause->Tick += gcnew System::EventHandler(this, &VorgesetztenSeite::timerPause_Tick);
			// 
			// editBtn
			// 
			this->editBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->editBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->editBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->editBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editBtn.Image")));
			this->editBtn->Location = System::Drawing::Point(45, 1049);
			this->editBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(352, 118);
			this->editBtn->TabIndex = 19;
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->UseWaitCursor = true;
			// 
			// personalBtn
			// 
			this->personalBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->personalBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->personalBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->personalBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->personalBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"personalBtn.Image")));
			this->personalBtn->Location = System::Drawing::Point(481, 1049);
			this->personalBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->personalBtn->Name = L"personalBtn";
			this->personalBtn->Size = System::Drawing::Size(352, 118);
			this->personalBtn->TabIndex = 20;
			this->personalBtn->UseVisualStyleBackColor = false;
			this->personalBtn->UseWaitCursor = true;
			// 
			// AddBtn
			// 
			this->AddBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AddBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->AddBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->AddBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->AddBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddBtn.Image")));
			this->AddBtn->Location = System::Drawing::Point(920, 1049);
			this->AddBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(352, 118);
			this->AddBtn->TabIndex = 21;
			this->AddBtn->UseVisualStyleBackColor = false;
			this->AddBtn->UseWaitCursor = true;
			// 
			// VorgesetztenSeite
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(1326, 1050);
			this->Controls->Add(this->AddBtn);
			this->Controls->Add(this->personalBtn);
			this->Controls->Add(this->editBtn);
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
			this->Controls->Add(this->hallo);
			this->Controls->Add(this->gehenBtn);
			this->Controls->Add(this->kommenBtn);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"VorgesetztenSeite";
			this->Text = L"Zeiterfassung Startseite";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &VorgesetztenSeite::Startseite_Load);
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

	private: System::Void timerArbeitszeit_Tick(System::Object^  sender, System::EventArgs^  e) {

		sekunde++;

		if (sekunde == 60) {
			sekunde = 0;
			minute++;
			arbeitsMinuten--;
			if (minute == 60) {
				minute = 0;
				stunde++;
			}
			if (arbeitsMinuten == -1) {
				arbeitsStunden--;
				arbeitsMinuten = 59;
			}
		}

		if (sekunde < 10) {
			sekundeS = "0" + Convert::ToString(sekunde);
		}
		else {
			sekundeS = Convert::ToString(sekunde);
		}

		if (minute < 10) {
			minuteS = "0" + Convert::ToString(minute);
		}
		else {
			minuteS = Convert::ToString(minute);
		}

		if (stunde < 10) {
			stundeS = "0" + Convert::ToString(stunde);
		}
		else {
			stundeS = Convert::ToString(stunde);
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

	private: System::Void timerUhr_Tick(System::Object^  sender, System::EventArgs^  e) {
		uhrzeitLbl->Text = DateTime::Now.ToString("HH:mm:ss");
		datumLbl->Text = DateTime::Now.ToString("dddd, dd. MMMM yyyy");
	}

	private: System::Void kommenBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		timerArbeitszeit->Start();
		this->arbeitszeitLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
	}

	private: System::Void gehenBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		timerArbeitszeit->Stop();
		this->arbeitszeitLbl->ForeColor = System::Drawing::Color::Red;
	}

			 //Beim Drücken der Pause-Taste wird die Arbeitszeit-Uhr entweder gestartet oder gestoppt
			 //Gleichzeitig wird der Pause-Timer gestartet bzw. gestoppt
	private: System::Void pauseCbox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (timerArbeitszeit->Enabled) {
			timerArbeitszeit->Stop();
			timerPause->Start();
			this->pauseLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->arbeitszeitLbl->ForeColor = System::Drawing::Color::Gray;
		}
		else {
			timerArbeitszeit->Start();
			timerPause->Stop();
			this->pauseLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->arbeitszeitLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
		}
	}

	private: System::Void Startseite_Load(System::Object^  sender, System::EventArgs^  e) {

		//Startwerte werden gesetzt
		arbeitsStunden = 40;
		arbeitsMinuten = 0;
		sekunde = 0;
		minute = 0;
		stunde = 0;

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
	}

	};
}