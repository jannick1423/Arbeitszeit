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
	/// Zusammenfassung für Statistikfenster
	/// </summary>
	public ref class Statistikfenster : public System::Windows::Forms::Form
	{

	private:

		Angestellter^ angestellter;
		AenderungsantragsFenster^ aenderungsantragsFenster;

	public:
		Statistikfenster(void)
		{
			InitializeComponent();
			aenderungsantragsFenster = gcnew AenderungsantragsFenster;
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Statistikfenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  editBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Statistikfenster::typeid));
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// editBtn
			// 
			this->editBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->editBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->editBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->editBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editBtn.Image")));
			this->editBtn->Location = System::Drawing::Point(37, 173);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(235, 76);
			this->editBtn->TabIndex = 21;
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->Click += gcnew System::EventHandler(this, &Statistikfenster::editBtn_Click);
			// 
			// Statistikfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->editBtn);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Statistikfenster";
			this->Text = L"Statistik";
			this->ResumeLayout(false);

		}
#pragma endregion

	//Klick auf Bearbeiten-Button öffnet Änderungsantragsfenster
	private: System::Void editBtn_Click(System::Object^  sender, System::EventArgs^  e) {

		aenderungsantragsFenster->setAntragssteller(angestellter);
		System::Windows::Forms::DialogResult result = aenderungsantragsFenster->ShowDialog(this);

		//Wenn vom AenderungsantragsFenster OK gegeben wird, wir zunächst eine Abfrage erzeugt, ob der Antrag so in Ordnung ist. Wenn der Mitarbeiter mit "Ja" bestätigt, wird ein neues Objekt vom Typ
		//Urlaubsantrag erstellt. Bei "Nein" wird abgebrochen.
		if (result == System::Windows::Forms::DialogResult::OK) {
			String^ antragAlsText;
			//Der Änderungsantrag als String zusammengefasst
			antragAlsText = "Tag der Änderung: " + aenderungsantragsFenster->p_Tag.ToString("dddd, dd. MMMM yyyy") + "\nNeue Ankunft: " + aenderungsantragsFenster->p_Ankunft.ToString(L"t") + "\nNeues Gehen: " 
				+ aenderungsantragsFenster->p_Gehen.ToString(L"t") + "\nGrund: " + aenderungsantragsFenster->p_Grund + "\nKommentar: " + aenderungsantragsFenster->p_Kommentar;
			
			//Sicherheitsabfrage, ob der Antrag wirklich eingereicht werden soll
			if (MessageBox::Show("Sie wollen folgende Änderung beantragen:\n\n" + antragAlsText +  "\n\nWollen Sie diesen Antrag einreichen?", "Antrag einreichen?", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				//Neuen Änderungsantrag aus Werten aus dem Änderungsfenster erstellen
				Aenderungsantrag ^aenderung = gcnew Aenderungsantrag(aenderungsantragsFenster->p_AntragstellerName, aenderungsantragsFenster->getAntragsteller(), aenderungsantragsFenster->p_Tag, 
					aenderungsantragsFenster->p_Ankunft, aenderungsantragsFenster->p_Gehen, aenderungsantragsFenster->p_Grund, aenderungsantragsFenster->p_Kommentar);

				MessageBox::Show("Änderungsantrag erfolgreich eingereicht!", "Antrag erfolgreich!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Ihr Änderungsantrag wurde nicht eingereicht!", "Antrag abgebrochen!",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			aenderungsantragsFenster->clear(); //Textfelder wieder leeren

		}
		else {
			MessageBox::Show("Änderungsantrag konnte nicht erstellt werden!", "Erstellen fehlgeschlagen",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	public: void setAngestellter(Angestellter^ angestellterUebergabe) {
		this->angestellter = angestellterUebergabe;
	}

	};
}