#ifndef Datensuche_H
#define Datensuche_H


#pragma once
#include "Daten.h"
#include "GlobalClass.h"

void speichern_suche();
void read_suche();

namespace Semesterarbeit_IFO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Datensuchen
	/// </summary>
	public ref class Datensuchen : public System::Windows::Forms::Form
	{
	public:
		Datensuchen(void)
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
		~Datensuchen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(78, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Speichern";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Datensuchen::button1_Click);
			// 
			// Datensuchen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Name = L"Datensuchen";
			this->Text = L"Datensuchen";
			this->Load += gcnew System::EventHandler(this, &Datensuchen::Datensuchen_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Datensuchen_Load(System::Object^  sender, System::EventArgs^  e) {
		read_suche();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		speichern_suche();
	}
	};
}


#endif
