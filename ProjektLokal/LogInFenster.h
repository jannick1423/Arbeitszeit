#pragma once

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
		List<User^> user_list;
		///	private List<Person^>
	public:
		loginFenster(void)
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
	private: System::Windows::Forms::MaskedTextBox^  benutzernameBox;
	private: System::Windows::Forms::MaskedTextBox^  passwortBox;
	private: System::Windows::Forms::Button^  passwortvergessenButton;




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
			this->logInButton = (gcnew System::Windows::Forms::Button());
			this->BenutzernameLabel = (gcnew System::Windows::Forms::Label());
			this->KennwortLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->benutzernameBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->passwortBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->passwortvergessenButton = (gcnew System::Windows::Forms::Button());
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
			// 
			// BenutzernameLabel
			// 
			this->BenutzernameLabel->AutoSize = true;
			this->BenutzernameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BenutzernameLabel->Location = System::Drawing::Point(27, 33);
			this->BenutzernameLabel->Name = L"BenutzernameLabel";
			this->BenutzernameLabel->Size = System::Drawing::Size(121, 19);
			this->BenutzernameLabel->TabIndex = 2;
			this->BenutzernameLabel->Text = L"Benutzername";
			// 
			// KennwortLabel
			// 
			this->KennwortLabel->AutoSize = true;
			this->KennwortLabel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KennwortLabel->Location = System::Drawing::Point(27, 81);
			this->KennwortLabel->Name = L"KennwortLabel";
			this->KennwortLabel->Size = System::Drawing::Size(84, 19);
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
			// benutzernameBox
			// 
			this->benutzernameBox->Location = System::Drawing::Point(186, 30);
			this->benutzernameBox->Name = L"benutzernameBox";
			this->benutzernameBox->Size = System::Drawing::Size(209, 25);
			this->benutzernameBox->TabIndex = 6;
			// 
			// passwortBox
			// 
			this->passwortBox->Location = System::Drawing::Point(186, 78);
			this->passwortBox->Name = L"passwortBox";
			this->passwortBox->Size = System::Drawing::Size(209, 25);
			this->passwortBox->TabIndex = 7;
			// 
			// passwortvergessenButton
			// 
			this->passwortvergessenButton->Location = System::Drawing::Point(186, 152);
			this->passwortvergessenButton->Name = L"passwortvergessenButton";
			this->passwortvergessenButton->Size = System::Drawing::Size(112, 45);
			this->passwortvergessenButton->TabIndex = 8;
			this->passwortvergessenButton->Text = L"Passwort vergessen\?";
			this->passwortvergessenButton->UseVisualStyleBackColor = true;
			// 
			// loginFenster
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(516, 421);
			this->Controls->Add(this->passwortvergessenButton);
			this->Controls->Add(this->passwortBox);
			this->Controls->Add(this->benutzernameBox);
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
		String ^ getName() {
			return this->benutzernameBox->Text;
		}

		String^ getPasswort() {
			return this->passwortBox->Text;
		}

		void clear() {
			this->benutzernameBox->Text = "";
			this->passwortBox->Text = "";
		}
	private: System::Void benutzernameBox_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {

		if (this->benutzernameBox->Text->Length == 0) {

			this->DialogResult = System::Windows::Forms::DialogResult::None;

		}

		else if (this->passwortBox->Text->Length == 0) {

			this->DialogResult = System::Windows::Forms::DialogResult::None;

		}

		else {

			this->DialogResult = System::Windows::Forms::DialogResult::OK;

		}
		this->Close();
	}

	private: System::Void passwortBox_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	}

			 //private: System::Void logInButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //private: System::Void logInButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //System::Windows::Forms::DialogResult result = this->ShowDialog(this);

			 //if (result == System::Windows::Forms::DialogResult::OK) {




			 //	MessageBox::Show("LogIn.", "Einloggen...", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 //}
			 //else {
			 //	MessageBox::Show("Error", "falscher Benutzername", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 //}


			 //}

	private: System::Void passwortvergessenButton_Click(System::Object^  sender, System::EventArgs^  e) {

		MessageBox::Show("Passwort vergessen", "Bitte melden Sie sich bei Ihremn Arbeitgeber!", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}


	};
}


