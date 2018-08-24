#pragma once
#include "AenderungsantragsFenster.h"

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
	public:
		AenderungsbearbeitungsFenster(void)
		{
			InitializeComponent();

			aenderungsantragsfenster = gcnew AenderungsantragsFenster();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
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
			this->lbl_Aenderungsanfrage->Location = System::Drawing::Point(12, 22);
			this->lbl_Aenderungsanfrage->Name = L"lbl_Aenderungsanfrage";
			this->lbl_Aenderungsanfrage->Size = System::Drawing::Size(362, 72);
			this->lbl_Aenderungsanfrage->TabIndex = 2;
			this->lbl_Aenderungsanfrage->Text = L"Neue Änderungsanfrage\r\n              von ";
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
			// lbl_AnfrageDatum
			// 
			this->lbl_AnfrageDatum->AutoSize = true;
			this->lbl_AnfrageDatum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageDatum->Location = System::Drawing::Point(12, 158);
			this->lbl_AnfrageDatum->Name = L"lbl_AnfrageDatum";
			this->lbl_AnfrageDatum->Size = System::Drawing::Size(123, 20);
			this->lbl_AnfrageDatum->TabIndex = 4;
			this->lbl_AnfrageDatum->Text = L"Anfragedatum: \r\n";
			// 
			// lbl_AnfrageAnkunft
			// 
			this->lbl_AnfrageAnkunft->AutoSize = true;
			this->lbl_AnfrageAnkunft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageAnkunft->Location = System::Drawing::Point(14, 193);
			this->lbl_AnfrageAnkunft->Name = L"lbl_AnfrageAnkunft";
			this->lbl_AnfrageAnkunft->Size = System::Drawing::Size(70, 20);
			this->lbl_AnfrageAnkunft->TabIndex = 5;
			this->lbl_AnfrageAnkunft->Text = L"Ankunft:";
			// 
			// lbl_AnfrageGehen
			// 
			this->lbl_AnfrageGehen->AutoSize = true;
			this->lbl_AnfrageGehen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageGehen->Location = System::Drawing::Point(15, 227);
			this->lbl_AnfrageGehen->Name = L"lbl_AnfrageGehen";
			this->lbl_AnfrageGehen->Size = System::Drawing::Size(63, 20);
			this->lbl_AnfrageGehen->TabIndex = 6;
			this->lbl_AnfrageGehen->Text = L"Gehen:";
			// 
			// lbl_ankunft
			// 
			this->lbl_ankunft->AutoSize = true;
			this->lbl_ankunft->Location = System::Drawing::Point(252, 193);
			this->lbl_ankunft->Name = L"lbl_ankunft";
			this->lbl_ankunft->Size = System::Drawing::Size(64, 17);
			this->lbl_ankunft->TabIndex = 7;
			this->lbl_ankunft->Text = L"00:00:00";
			// 
			// lbl_gehen
			// 
			this->lbl_gehen->AutoSize = true;
			this->lbl_gehen->Location = System::Drawing::Point(252, 227);
			this->lbl_gehen->Name = L"lbl_gehen";
			this->lbl_gehen->Size = System::Drawing::Size(64, 17);
			this->lbl_gehen->TabIndex = 8;
			this->lbl_gehen->Text = L"00:00:00";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(252, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Krankheit";
			// 
			// lbl_AnfrageGrund
			// 
			this->lbl_AnfrageGrund->AutoSize = true;
			this->lbl_AnfrageGrund->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_AnfrageGrund->Location = System::Drawing::Point(18, 258);
			this->lbl_AnfrageGrund->Name = L"lbl_AnfrageGrund";
			this->lbl_AnfrageGrund->Size = System::Drawing::Size(60, 20);
			this->lbl_AnfrageGrund->TabIndex = 10;
			this->lbl_AnfrageGrund->Text = L"Grund:";
			// 
			// lbl_datum
			// 
			this->lbl_datum->AutoSize = true;
			this->lbl_datum->Location = System::Drawing::Point(252, 168);
			this->lbl_datum->Name = L"lbl_datum";
			this->lbl_datum->Size = System::Drawing::Size(80, 17);
			this->lbl_datum->TabIndex = 11;
			this->lbl_datum->Text = L"00.00.0000";
			// 
			// AenderungsbearbeitungsFenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 399);
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
			this->Name = L"AenderungsbearbeitungsFenster";
			this->Text = L"Neue Anfrage";
			this->Load += gcnew System::EventHandler(this, &AenderungsbearbeitungsFenster::AenderungsbearbeitungsFenster_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		

	private: System::Void AenderungsbearbeitungsFenster_Load(System::Object^  sender, System::EventArgs^  e) {
		AenderungsantragsFenster^ aenderungsantragsfenster = gcnew AenderungsantragsFenster();
		
		lbl_MA->Text = aenderungsantragsfenster->getAntragsteller()->getVorname() + " " + aenderungsantragsfenster->getAntragsteller()->getNachname();
		
	}
};
}
