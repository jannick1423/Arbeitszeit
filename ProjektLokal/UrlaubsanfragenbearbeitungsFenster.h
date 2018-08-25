#pragma once

namespace ProjektLokal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für AenderungsbearbeitungsFenster
	/// </summary>
	public ref class UrlaubsanfragenbearbeitungsFenster : public System::Windows::Forms::Form
	{
	private:
		
	public:
		UrlaubsanfragenbearbeitungsFenster(void)
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
		~UrlaubsanfragenbearbeitungsFenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_AenderungBestaetigen;
	private: System::Windows::Forms::Button^  btn_AenderungAblehnen;
	private: System::Windows::Forms::Label^  lbl_Aenderungsanfrage;
	private: System::Windows::Forms::Label^  lbl_MA;
	private: System::Windows::Forms::Label^  lbl_AnfrageErsterTag;
	private: System::Windows::Forms::Label^  lbl_AnfrageLetzterUrlaubstag;
	private: System::Windows::Forms::Label^  lbl_AnfrageAnzahlUrlaubstage;






	private: System::Windows::Forms::Label^  lbl_ankunft;
	private: System::Windows::Forms::Label^  lbl_gehen;








	private: System::Windows::Forms::Label^  lbl_datum;


	protected:


	protected:

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
			this->btn_AenderungBestaetigen = (gcnew System::Windows::Forms::Button());
			this->btn_AenderungAblehnen = (gcnew System::Windows::Forms::Button());
			this->lbl_Aenderungsanfrage = (gcnew System::Windows::Forms::Label());
			this->lbl_MA = (gcnew System::Windows::Forms::Label());
			this->lbl_AnfrageErsterTag = (gcnew System::Windows::Forms::Label());
			this->lbl_AnfrageLetzterUrlaubstag = (gcnew System::Windows::Forms::Label());
			this->lbl_AnfrageAnzahlUrlaubstage = (gcnew System::Windows::Forms::Label());
			this->lbl_ankunft = (gcnew System::Windows::Forms::Label());
			this->lbl_gehen = (gcnew System::Windows::Forms::Label());
			this->lbl_datum = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_AenderungBestaetigen
			// 
			this->btn_AenderungBestaetigen->Location = System::Drawing::Point(40, 317);
			this->btn_AenderungBestaetigen->Name = L"btn_AenderungBestaetigen";
			this->btn_AenderungBestaetigen->Size = System::Drawing::Size(114, 49);
			this->btn_AenderungBestaetigen->TabIndex = 0;
			this->btn_AenderungBestaetigen->Text = L"Bestätigen";
			this->btn_AenderungBestaetigen->UseVisualStyleBackColor = true;
			// 
			// btn_AenderungAblehnen
			// 
			this->btn_AenderungAblehnen->Location = System::Drawing::Point(238, 317);
			this->btn_AenderungAblehnen->Name = L"btn_AenderungAblehnen";
			this->btn_AenderungAblehnen->Size = System::Drawing::Size(114, 49);
			this->btn_AenderungAblehnen->TabIndex = 1;
			this->btn_AenderungAblehnen->Text = L"Ablehnen";
			this->btn_AenderungAblehnen->UseVisualStyleBackColor = true;
			// 
			// lbl_Aenderungsanfrage
			// 
			this->lbl_Aenderungsanfrage->AutoSize = true;
			this->lbl_Aenderungsanfrage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Aenderungsanfrage->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lbl_Aenderungsanfrage->Location = System::Drawing::Point(35, 19);
			this->lbl_Aenderungsanfrage->Name = L"lbl_Aenderungsanfrage";
			this->lbl_Aenderungsanfrage->Size = System::Drawing::Size(317, 72);
			this->lbl_Aenderungsanfrage->TabIndex = 2;
			this->lbl_Aenderungsanfrage->Text = L"Neue Urlaubsanfrage\r\n              von ";
			// 
			// lbl_MA
			// 
			this->lbl_MA->AutoSize = true;
			this->lbl_MA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_MA->Location = System::Drawing::Point(106, 108);
			this->lbl_MA->Name = L"lbl_MA";
			this->lbl_MA->Size = System::Drawing::Size(142, 29);
			this->lbl_MA->TabIndex = 3;
			this->lbl_MA->Text = L"Beispiel MA";
			// 
			// lbl_AnfrageErsterTag
			// 
			this->lbl_AnfrageErsterTag->AutoSize = true;
			this->lbl_AnfrageErsterTag->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageErsterTag->Location = System::Drawing::Point(12, 158);
			this->lbl_AnfrageErsterTag->Name = L"lbl_AnfrageErsterTag";
			this->lbl_AnfrageErsterTag->Size = System::Drawing::Size(146, 20);
			this->lbl_AnfrageErsterTag->TabIndex = 4;
			this->lbl_AnfrageErsterTag->Text = L"Erster Urlaubstag:";
			// 
			// lbl_AnfrageLetzterUrlaubstag
			// 
			this->lbl_AnfrageLetzterUrlaubstag->AutoSize = true;
			this->lbl_AnfrageLetzterUrlaubstag->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageLetzterUrlaubstag->Location = System::Drawing::Point(14, 193);
			this->lbl_AnfrageLetzterUrlaubstag->Name = L"lbl_AnfrageLetzterUrlaubstag";
			this->lbl_AnfrageLetzterUrlaubstag->Size = System::Drawing::Size(153, 20);
			this->lbl_AnfrageLetzterUrlaubstag->TabIndex = 5;
			this->lbl_AnfrageLetzterUrlaubstag->Text = L"Letzter Urlaubstag:";
			// 
			// lbl_AnfrageAnzahlUrlaubstage
			// 
			this->lbl_AnfrageAnzahlUrlaubstage->AutoSize = true;
			this->lbl_AnfrageAnzahlUrlaubstage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageAnzahlUrlaubstage->Location = System::Drawing::Point(15, 227);
			this->lbl_AnfrageAnzahlUrlaubstage->Name = L"lbl_AnfrageAnzahlUrlaubstage";
			this->lbl_AnfrageAnzahlUrlaubstage->Size = System::Drawing::Size(160, 20);
			this->lbl_AnfrageAnzahlUrlaubstage->TabIndex = 6;
			this->lbl_AnfrageAnzahlUrlaubstage->Text = L"Anzahl Urlaubstage:";
			// 
			// lbl_ankunft
			// 
			this->lbl_ankunft->AutoSize = true;
			this->lbl_ankunft->Location = System::Drawing::Point(252, 193);
			this->lbl_ankunft->Name = L"lbl_ankunft";
			this->lbl_ankunft->Size = System::Drawing::Size(80, 17);
			this->lbl_ankunft->TabIndex = 7;
			this->lbl_ankunft->Text = L"00.00.0000";
			// 
			// lbl_gehen
			// 
			this->lbl_gehen->AutoSize = true;
			this->lbl_gehen->Location = System::Drawing::Point(252, 227);
			this->lbl_gehen->Name = L"lbl_gehen";
			this->lbl_gehen->Size = System::Drawing::Size(24, 17);
			this->lbl_gehen->TabIndex = 8;
			this->lbl_gehen->Text = L"00";
			this->lbl_gehen->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// lbl_datum
			// 
			this->lbl_datum->AutoSize = true;
			this->lbl_datum->Location = System::Drawing::Point(252, 168);
			this->lbl_datum->Name = L"lbl_datum";
			this->lbl_datum->Size = System::Drawing::Size(80, 17);
			this->lbl_datum->TabIndex = 11;
			this->lbl_datum->Text = L"00.00.0000";
			this->lbl_datum->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// UrlaubsanfragenbearbeitungsFenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 399);
			this->Controls->Add(this->lbl_datum);
			this->Controls->Add(this->lbl_gehen);
			this->Controls->Add(this->lbl_ankunft);
			this->Controls->Add(this->lbl_AnfrageAnzahlUrlaubstage);
			this->Controls->Add(this->lbl_AnfrageLetzterUrlaubstag);
			this->Controls->Add(this->lbl_AnfrageErsterTag);
			this->Controls->Add(this->lbl_MA);
			this->Controls->Add(this->lbl_Aenderungsanfrage);
			this->Controls->Add(this->btn_AenderungAblehnen);
			this->Controls->Add(this->btn_AenderungBestaetigen);
			this->Name = L"UrlaubsanfragenbearbeitungsFenster";
			this->Text = L"Neue Anfrage";
			this->Load += gcnew System::EventHandler(this, &UrlaubsanfragenbearbeitungsFenster::AenderungsbearbeitungsFenster_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:


	private: System::Void AenderungsbearbeitungsFenster_Load(System::Object^  sender, System::EventArgs^  e) {
	
	}
	};
}
