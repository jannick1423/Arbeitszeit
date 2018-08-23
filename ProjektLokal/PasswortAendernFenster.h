#pragma once
#include "Mitarbeiter.h"
#include "Vorgesetzter.h"
#include "Unternehmen.h"
#include "Startseite.h"
#include "VorgesetztenSeite.h"

namespace ProjektLokal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für PasswortAendernFenster
	/// </summary>
	public ref class PasswortAendernFenster : public System::Windows::Forms::Form
	{
	private:
		Unternehmen ^ unternehmen;
		Startseite^ startseite;
		VorgesetztenSeite^ vorgesetztenseite;
	public:
		PasswortAendernFenster(void)
		{
			InitializeComponent();
			//unternehmen = gcnew Unternehmen();
			startseite = gcnew Startseite();
			vorgesetztenseite = gcnew VorgesetztenSeite();
			
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~PasswortAendernFenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_bestätigen;
	private: System::Windows::Forms::Button^  btn_abbrechen;
	protected:


	private: System::Windows::Forms::Label^  lbl_benutzername;
	private: System::Windows::Forms::Label^  lbl_altesPasswort;
	private: System::Windows::Forms::Label^  lbl_neuesPasswort;
	private: System::Windows::Forms::Label^  lbl_neuesPasswortbestättigen;
	private: System::Windows::Forms::TextBox^  txt_benutzername;
	private: System::Windows::Forms::TextBox^  txt_altespasswort;
	private: System::Windows::Forms::TextBox^  txt_neuespasswort;
	private: System::Windows::Forms::TextBox^  txt_passwortwiederholen;









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
			this->btn_bestätigen = (gcnew System::Windows::Forms::Button());
			this->btn_abbrechen = (gcnew System::Windows::Forms::Button());
			this->lbl_benutzername = (gcnew System::Windows::Forms::Label());
			this->lbl_altesPasswort = (gcnew System::Windows::Forms::Label());
			this->lbl_neuesPasswort = (gcnew System::Windows::Forms::Label());
			this->lbl_neuesPasswortbestättigen = (gcnew System::Windows::Forms::Label());
			this->txt_benutzername = (gcnew System::Windows::Forms::TextBox());
			this->txt_altespasswort = (gcnew System::Windows::Forms::TextBox());
			this->txt_neuespasswort = (gcnew System::Windows::Forms::TextBox());
			this->txt_passwortwiederholen = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_bestätigen
			// 
			this->btn_bestätigen->Location = System::Drawing::Point(51, 221);
			this->btn_bestätigen->Name = L"btn_bestätigen";
			this->btn_bestätigen->Size = System::Drawing::Size(92, 44);
			this->btn_bestätigen->TabIndex = 0;
			this->btn_bestätigen->Text = L"Bestätigen";
			this->btn_bestätigen->UseVisualStyleBackColor = true;
			this->btn_bestätigen->Click += gcnew System::EventHandler(this, &PasswortAendernFenster::btn_bestätigen_Click);
			// 
			// btn_abbrechen
			// 
			this->btn_abbrechen->Location = System::Drawing::Point(228, 221);
			this->btn_abbrechen->Name = L"btn_abbrechen";
			this->btn_abbrechen->Size = System::Drawing::Size(92, 44);
			this->btn_abbrechen->TabIndex = 1;
			this->btn_abbrechen->Text = L"Abbrechen";
			this->btn_abbrechen->UseVisualStyleBackColor = true;
			// 
			// lbl_benutzername
			// 
			this->lbl_benutzername->AutoSize = true;
			this->lbl_benutzername->Location = System::Drawing::Point(12, 24);
			this->lbl_benutzername->Name = L"lbl_benutzername";
			this->lbl_benutzername->Size = System::Drawing::Size(100, 17);
			this->lbl_benutzername->TabIndex = 2;
			this->lbl_benutzername->Text = L"Benutzername";
			// 
			// lbl_altesPasswort
			// 
			this->lbl_altesPasswort->AutoSize = true;
			this->lbl_altesPasswort->Location = System::Drawing::Point(12, 65);
			this->lbl_altesPasswort->Name = L"lbl_altesPasswort";
			this->lbl_altesPasswort->Size = System::Drawing::Size(100, 17);
			this->lbl_altesPasswort->TabIndex = 3;
			this->lbl_altesPasswort->Text = L"Altes Passwort";
			// 
			// lbl_neuesPasswort
			// 
			this->lbl_neuesPasswort->AutoSize = true;
			this->lbl_neuesPasswort->Location = System::Drawing::Point(11, 113);
			this->lbl_neuesPasswort->Name = L"lbl_neuesPasswort";
			this->lbl_neuesPasswort->Size = System::Drawing::Size(110, 17);
			this->lbl_neuesPasswort->TabIndex = 4;
			this->lbl_neuesPasswort->Text = L"Neues Passwort";
			// 
			// lbl_neuesPasswortbestättigen
			// 
			this->lbl_neuesPasswortbestättigen->AutoSize = true;
			this->lbl_neuesPasswortbestättigen->Location = System::Drawing::Point(11, 156);
			this->lbl_neuesPasswortbestättigen->Name = L"lbl_neuesPasswortbestättigen";
			this->lbl_neuesPasswortbestättigen->Size = System::Drawing::Size(145, 17);
			this->lbl_neuesPasswortbestättigen->TabIndex = 5;
			this->lbl_neuesPasswortbestättigen->Text = L"Passwort wiederholen";
			// 
			// txt_benutzername
			// 
			this->txt_benutzername->Location = System::Drawing::Point(191, 24);
			this->txt_benutzername->Name = L"txt_benutzername";
			this->txt_benutzername->Size = System::Drawing::Size(143, 22);
			this->txt_benutzername->TabIndex = 6;
			// 
			// txt_altespasswort
			// 
			this->txt_altespasswort->Location = System::Drawing::Point(191, 62);
			this->txt_altespasswort->Name = L"txt_altespasswort";
			this->txt_altespasswort->Size = System::Drawing::Size(143, 22);
			this->txt_altespasswort->TabIndex = 7;
			// 
			// txt_neuespasswort
			// 
			this->txt_neuespasswort->Location = System::Drawing::Point(191, 108);
			this->txt_neuespasswort->Name = L"txt_neuespasswort";
			this->txt_neuespasswort->Size = System::Drawing::Size(143, 22);
			this->txt_neuespasswort->TabIndex = 8;
			// 
			// txt_passwortwiederholen
			// 
			this->txt_passwortwiederholen->Location = System::Drawing::Point(191, 156);
			this->txt_passwortwiederholen->Name = L"txt_passwortwiederholen";
			this->txt_passwortwiederholen->Size = System::Drawing::Size(143, 22);
			this->txt_passwortwiederholen->TabIndex = 9;
			// 
			// PasswortAendernFenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(373, 277);
			this->Controls->Add(this->txt_passwortwiederholen);
			this->Controls->Add(this->txt_neuespasswort);
			this->Controls->Add(this->txt_altespasswort);
			this->Controls->Add(this->txt_benutzername);
			this->Controls->Add(this->lbl_neuesPasswortbestättigen);
			this->Controls->Add(this->lbl_neuesPasswort);
			this->Controls->Add(this->lbl_altesPasswort);
			this->Controls->Add(this->lbl_benutzername);
			this->Controls->Add(this->btn_abbrechen);
			this->Controls->Add(this->btn_bestätigen);
			this->Name = L"PasswortAendernFenster";
			this->Text = L"PasswortAendernFenster";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:

			void setUnternehmen(Unternehmen^ unternehmen) {
				this->unternehmen = unternehmen;
			}
			String ^ getBenutzername() {
				return this->txt_benutzername->Text;
			}

			String^ getAltesPasswort() {
				return this->txt_altespasswort->Text;
			}

			String^ getNeuesPasswort() {
				return this->txt_neuespasswort->Text;
			}

			String^ getPasswortWiederholen() {
				return this->txt_passwortwiederholen->Text;
			}

			void clear() {
				this->txt_benutzername->Text = "";
				this->txt_altespasswort->Text = "";
			}
	private: System::Void btn_bestätigen_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ personalnummer = getBenutzername();
		String^ passwort = getAltesPasswort();
		String^ neuespasswort = getNeuesPasswort();
		String^ passwortwiederholen = getPasswortWiederholen();

		bool gefunden = false;
		for (int i = 0; i < unternehmen->getAngestellte()->Count && !gefunden; i++) {
			Angestellter^ angestellter = unternehmen->getAngestellte()[i];

			if (angestellter->getPersonalnummer()->Equals(personalnummer)) {
				gefunden = true;

				if (angestellter->getPasswort()->Equals(passwort)) {
					if (!angestellter->istVorgesetzter()) {


						gefunden = true;
					}
					
					
				}
				else {
					MessageBox::Show("Passwort falsch!", "Fehler!",
						MessageBoxButtons::OK, MessageBoxIcon::Information);

				}

			}

		}

		if (!gefunden) {
			MessageBox::Show("Benutzer nicht vorhanden!", "Fehler!",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if (neuespasswort->Equals(passwortwiederholen)) {
			this->Close();
		}
	}
	
private: System::Void btn_abbrechen_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
