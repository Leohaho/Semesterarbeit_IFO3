#ifndef Datenlöschen_H
#define Datenlöschen_H

#pragma once
#include "Daten.h"
#include "GlobalClass.h"

void speichern_löschen();
void read_löschen();

namespace Semesterarbeit_IFO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Datenlöschen
	/// </summary>
	public ref class Datenlöschen : public System::Windows::Forms::Form
	{
	public:
		Datenlöschen(void)
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
		~Datenlöschen()
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
			this->button1->Location = System::Drawing::Point(102, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Speichern";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Datenlöschen::button1_Click);
			// 
			// Datenlöschen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Name = L"Datenlöschen";
			this->Text = L"Datenlöschen";
			this->Load += gcnew System::EventHandler(this, &Datenlöschen::Datenlöschen_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Datenlöschen_Load(System::Object^  sender, System::EventArgs^  e) {
		read_löschen();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		speichern_löschen();
	}
	};
}


#endif
