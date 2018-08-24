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
	public ref class AenderungsbearbeitungsFenster : public System::Windows::Forms::Form
	{
	public:
		AenderungsbearbeitungsFenster(void)
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
	private: System::Windows::Forms::Label^  label1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 87);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Anfragedatum: \r\nZeitraum:\r\nGrund:";
			// 
			// AenderungsbearbeitungsFenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 399);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_MA);
			this->Controls->Add(this->lbl_Aenderungsanfrage);
			this->Controls->Add(this->btn_AenderungAblehnen);
			this->Controls->Add(this->btn_AenderungBestaetigen);
			this->Name = L"AenderungsbearbeitungsFenster";
			this->Text = L"Neue Anfrage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
