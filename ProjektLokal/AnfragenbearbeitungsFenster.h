#pragma once
#include "AenderungsantragsFenster.h"
#include "Aenderungsantrag.h"

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
	public ref class AenderungsbearbeitungsFenster : public System::Windows::Forms::Form
	{
	private:
		
		AenderungsantragsFenster ^ aenderungsantragsfenster;
		Aenderungsantrag^ aenderung;
	
	public:
		AenderungsbearbeitungsFenster(void)
		{
			InitializeComponent();
			aenderungsantragsfenster = gcnew AenderungsantragsFenster();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~AenderungsbearbeitungsFenster()
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
	private: System::Windows::Forms::Label^  lbl_AnfrageDatum;
	private: System::Windows::Forms::Label^  lbl_AnfrageAnkunft;
	private: System::Windows::Forms::Label^  lbl_AnfrageGehen;
	private: System::Windows::Forms::Label^  lbl_ankunft;
	private: System::Windows::Forms::Label^  lbl_gehen;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lbl_AnfrageGrund;
	private: System::Windows::Forms::Label^  lbl_datum;

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
			this->lbl_AnfrageDatum = (gcnew System::Windows::Forms::Label());
			this->lbl_AnfrageAnkunft = (gcnew System::Windows::Forms::Label());
			this->lbl_AnfrageGehen = (gcnew System::Windows::Forms::Label());
			this->lbl_ankunft = (gcnew System::Windows::Forms::Label());
			this->lbl_gehen = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbl_AnfrageGrund = (gcnew System::Windows::Forms::Label());
			this->lbl_datum = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_AenderungBestaetigen
			// 
			this->btn_AenderungBestaetigen->Location = System::Drawing::Point(45, 396);
			this->btn_AenderungBestaetigen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_AenderungBestaetigen->Name = L"btn_AenderungBestaetigen";
			this->btn_AenderungBestaetigen->Size = System::Drawing::Size(128, 61);
			this->btn_AenderungBestaetigen->TabIndex = 0;
			this->btn_AenderungBestaetigen->Text = L"Bestätigen";
			this->btn_AenderungBestaetigen->UseVisualStyleBackColor = true;
			// 
			// btn_AenderungAblehnen
			// 
			this->btn_AenderungAblehnen->Location = System::Drawing::Point(268, 396);
			this->btn_AenderungAblehnen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_AenderungAblehnen->Name = L"btn_AenderungAblehnen";
			this->btn_AenderungAblehnen->Size = System::Drawing::Size(128, 61);
			this->btn_AenderungAblehnen->TabIndex = 1;
			this->btn_AenderungAblehnen->Text = L"Ablehnen";
			this->btn_AenderungAblehnen->UseVisualStyleBackColor = true;
			// 
			// lbl_Aenderungsanfrage
			// 
			this->lbl_Aenderungsanfrage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Aenderungsanfrage->Location = System::Drawing::Point(-1, 9);
			this->lbl_Aenderungsanfrage->Name = L"lbl_Aenderungsanfrage";
			this->lbl_Aenderungsanfrage->Size = System::Drawing::Size(450, 100);
			this->lbl_Aenderungsanfrage->TabIndex = 2;
			this->lbl_Aenderungsanfrage->Text = L"Neue Änderungsanfrage\r\n von ";
			this->lbl_Aenderungsanfrage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_MA
			// 
			this->lbl_MA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_MA->Location = System::Drawing::Point(0, 109);
			this->lbl_MA->Name = L"lbl_MA";
			this->lbl_MA->Size = System::Drawing::Size(443, 40);
			this->lbl_MA->TabIndex = 3;
			this->lbl_MA->Text = L"Beispiel MA";
			this->lbl_MA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_AnfrageDatum
			// 
			this->lbl_AnfrageDatum->AutoSize = true;
			this->lbl_AnfrageDatum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageDatum->Location = System::Drawing::Point(16, 198);
			this->lbl_AnfrageDatum->Name = L"lbl_AnfrageDatum";
			this->lbl_AnfrageDatum->Size = System::Drawing::Size(158, 25);
			this->lbl_AnfrageDatum->TabIndex = 4;
			this->lbl_AnfrageDatum->Text = L"Anfragedatum: \r\n";
			// 
			// lbl_AnfrageAnkunft
			// 
			this->lbl_AnfrageAnkunft->AutoSize = true;
			this->lbl_AnfrageAnkunft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageAnkunft->Location = System::Drawing::Point(16, 241);
			this->lbl_AnfrageAnkunft->Name = L"lbl_AnfrageAnkunft";
			this->lbl_AnfrageAnkunft->Size = System::Drawing::Size(91, 25);
			this->lbl_AnfrageAnkunft->TabIndex = 5;
			this->lbl_AnfrageAnkunft->Text = L"Ankunft:";
			// 
			// lbl_AnfrageGehen
			// 
			this->lbl_AnfrageGehen->AutoSize = true;
			this->lbl_AnfrageGehen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageGehen->Location = System::Drawing::Point(16, 279);
			this->lbl_AnfrageGehen->Name = L"lbl_AnfrageGehen";
			this->lbl_AnfrageGehen->Size = System::Drawing::Size(82, 25);
			this->lbl_AnfrageGehen->TabIndex = 6;
			this->lbl_AnfrageGehen->Text = L"Gehen:";
			// 
			// lbl_ankunft
			// 
			this->lbl_ankunft->AutoSize = true;
			this->lbl_ankunft->Location = System::Drawing::Point(284, 245);
			this->lbl_ankunft->Name = L"lbl_ankunft";
			this->lbl_ankunft->Size = System::Drawing::Size(71, 20);
			this->lbl_ankunft->TabIndex = 7;
			this->lbl_ankunft->Text = L"00:00:00";
			// 
			// lbl_gehen
			// 
			this->lbl_gehen->AutoSize = true;
			this->lbl_gehen->Location = System::Drawing::Point(284, 284);
			this->lbl_gehen->Name = L"lbl_gehen";
			this->lbl_gehen->Size = System::Drawing::Size(71, 20);
			this->lbl_gehen->TabIndex = 8;
			this->lbl_gehen->Text = L"00:00:00";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(284, 325);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Krankheit";
			// 
			// lbl_AnfrageGrund
			// 
			this->lbl_AnfrageGrund->AutoSize = true;
			this->lbl_AnfrageGrund->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageGrund->Location = System::Drawing::Point(16, 320);
			this->lbl_AnfrageGrund->Name = L"lbl_AnfrageGrund";
			this->lbl_AnfrageGrund->Size = System::Drawing::Size(77, 25);
			this->lbl_AnfrageGrund->TabIndex = 10;
			this->lbl_AnfrageGrund->Text = L"Grund:";
			// 
			// lbl_datum
			// 
			this->lbl_datum->AutoSize = true;
			this->lbl_datum->Location = System::Drawing::Point(284, 202);
			this->lbl_datum->Name = L"lbl_datum";
			this->lbl_datum->Size = System::Drawing::Size(89, 20);
			this->lbl_datum->TabIndex = 11;
			this->lbl_datum->Text = L"00.00.0000";
			// 
			// AenderungsbearbeitungsFenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(446, 499);
			this->Controls->Add(this->lbl_datum);
			this->Controls->Add(this->lbl_AnfrageGrund);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lbl_gehen);
			this->Controls->Add(this->lbl_ankunft);
			this->Controls->Add(this->lbl_AnfrageGehen);
			this->Controls->Add(this->lbl_AnfrageAnkunft);
			this->Controls->Add(this->lbl_AnfrageDatum);
			this->Controls->Add(this->lbl_MA);
			this->Controls->Add(this->lbl_Aenderungsanfrage);
			this->Controls->Add(this->btn_AenderungAblehnen);
			this->Controls->Add(this->btn_AenderungBestaetigen);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"AenderungsbearbeitungsFenster";
			this->Text = L"Neue Anfrage";
			this->Load += gcnew System::EventHandler(this, &AenderungsbearbeitungsFenster::AenderungsbearbeitungsFenster_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void setAntrag(Aenderungsantrag^ antrag) {
		this->aenderung = antrag;
	}

	private: System::Void AenderungsbearbeitungsFenster_Load(System::Object^  sender, System::EventArgs^  e) {
		AenderungsantragsFenster^ aenderungsantragsfenster = gcnew AenderungsantragsFenster();
		
		lbl_MA->Text = aenderung->getAntragstellerName();
		
	}
};
}
