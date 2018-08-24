#pragma once
#ifndef _LOGINFENSTER_H_
#define _LOGINFENSTER_H_
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
	//hinzugefuegt 
	using namespace System::Collections::Generic;


	/// <summary>
	/// Zusammenfassung für loginFenster
	/// </summary>
	public ref class loginFenster : public System::Windows::Forms::Form
	{
	private:
		Unternehmen ^ unternehmen;
	private: System::Windows::Forms::TextBox^  txt_Kennwort;

			 Startseite^ startseite;
			 VorgesetztenSeite^ vorgesetztenseite;
		
	public:
		loginFenster(void)
		{
			InitializeComponent();
			unternehmen = gcnew Unternehmen();
			startseite = gcnew Startseite();
			vorgesetztenseite = gcnew VorgesetztenSeite();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~loginFenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  logInButton;
	private: System::Windows::Forms::Label^  BenutzernameLabel;
	private: System::Windows::Forms::Label^  KennwortLabel;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  passwortvergessenButton;
	private: System::Windows::Forms::TextBox^  txt_Benutzername;

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
			this->logInButton = (gcnew System::Windows::Forms::Button());
			this->BenutzernameLabel = (gcnew System::Windows::Forms::Label());
			this->KennwortLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->passwortvergessenButton = (gcnew System::Windows::Forms::Button());
			this->txt_Benutzername = (gcnew System::Windows::Forms::TextBox());
			this->txt_Kennwort = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// logInButton
			// 
			this->logInButton->BackColor = System::Drawing::Color::MediumBlue;
			this->logInButton->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logInButton->ForeColor = System::Drawing::SystemColors::Control;
			this->logInButton->Location = System::Drawing::Point(31, 152);
			this->logInButton->Name = L"logInButton";
			this->logInButton->Size = System::Drawing::Size(128, 45);
			this->logInButton->TabIndex = 0;
			this->logInButton->Text = L"Einloggen";
			this->logInButton->UseVisualStyleBackColor = false;
			this->logInButton->Click += gcnew System::EventHandler(this, &loginFenster::logInButton_Click);
			// 
			// BenutzernameLabel
			// 
			this->BenutzernameLabel->AutoSize = true;
			this->BenutzernameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BenutzernameLabel->Location = System::Drawing::Point(27, 33);
			this->BenutzernameLabel->Name = L"BenutzernameLabel";
			this->BenutzernameLabel->Size = System::Drawing::Size(127, 16);
			this->BenutzernameLabel->TabIndex = 2;
			this->BenutzernameLabel->Text = L"Personalnummer";
			// 
			// KennwortLabel
			// 
			this->KennwortLabel->AutoSize = true;
			this->KennwortLabel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KennwortLabel->Location = System::Drawing::Point(27, 81);
			this->KennwortLabel->Name = L"KennwortLabel";
			this->KennwortLabel->Size = System::Drawing::Size(76, 16);
			this->KennwortLabel->TabIndex = 3;
			this->KennwortLabel->Text = L"Kennwort";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(-1, 243);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(517, 178);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// passwortvergessenButton
			// 
			this->passwortvergessenButton->Location = System::Drawing::Point(186, 152);
			this->passwortvergessenButton->Name = L"passwortvergessenButton";
			this->passwortvergessenButton->Size = System::Drawing::Size(112, 45);
			this->passwortvergessenButton->TabIndex = 8;
			this->passwortvergessenButton->Text = L"Passwort vergessen\?";
			this->passwortvergessenButton->UseVisualStyleBackColor = true;
			this->passwortvergessenButton->Click += gcnew System::EventHandler(this, &loginFenster::passwortvergessenButton_Click);
			// 
			// txt_Benutzername
			// 
			this->txt_Benutzername->Location = System::Drawing::Point(198, 33);
			this->txt_Benutzername->Name = L"txt_Benutzername";
			this->txt_Benutzername->Size = System::Drawing::Size(178, 22);
			this->txt_Benutzername->TabIndex = 10;
			// 
			// txt_Kennwort
			// 
			this->txt_Kennwort->Location = System::Drawing::Point(198, 81);
			this->txt_Kennwort->Name = L"txt_Kennwort";
			this->txt_Kennwort->PasswordChar = '*';
			this->txt_Kennwort->Size = System::Drawing::Size(178, 22);
			this->txt_Kennwort->TabIndex = 11;
			// 
			// loginFenster
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(516, 421);
			this->Controls->Add(this->txt_Kennwort);
			this->Controls->Add(this->txt_Benutzername);
			this->Controls->Add(this->passwortvergessenButton);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->KennwortLabel);
			this->Controls->Add(this->BenutzernameLabel);
			this->Controls->Add(this->logInButton);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Name = L"loginFenster";
			this->Text = L"Firma XY";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	public:
		String ^ getBenutzername() {
			return this->txt_Benutzername->Text;
		}

		String^ getKennwort() {
			return this->txt_Kennwort->Text;
		}

		void clear() {
			this->txt_Benutzername->Text = "";
			this->txt_Kennwort->Text = "";
		}
	

	private: System::Void logInButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ personalnummer = getBenutzername();
		String^ passwort = getKennwort();

		bool gefunden = false;
		for (int i = 0; i < unternehmen->getAngestellte()->Count && !gefunden; i++) {
			Angestellter^ angestellter = unternehmen->getAngestellte()[i];

			if (angestellter->getPersonalnummer()->Equals(personalnummer)) {
				gefunden = true;

				if (angestellter->getPasswort()->Equals(passwort)) {
					if (!angestellter->istVorgesetzter()) {
						//ÄNDERUNG ÜBERGABE MITARBEITER:
						startseite->setMitarbeiter(angestellter);
						//ÄNDERUNG
						startseite->setUnternehmen(unternehmen);
						System::Windows::Forms::DialogResult result = startseite->ShowDialog(this);
					}
					else {
						//ÄNDERUNG ÜBERGABE VORGESETZTER:
						vorgesetztenseite->setVorgesetzter(angestellter);
						//ÄNDERUNG
						vorgesetztenseite->setUnternehmen(unternehmen);
						System::Windows::Forms::DialogResult result = vorgesetztenseite->ShowDialog(this);
					}
					this->Close();
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
		
	} 

//Beim Klick auf den Button öffnet sich Fenster
private: System::Void passwortvergessenButton_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Bitte melden Sie sich bei Ihrem Arbeitgeber für ein neues Passwort!", "Passwort vergessen?!",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}

#endif


