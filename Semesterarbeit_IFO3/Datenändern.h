#ifndef Datenändern_H
#define Datenändern_H


#pragma once
#include "Daten.h"
#include "GlobalClass.h"

void speichern_ändern();
void read_ändern();

namespace Semesterarbeit_IFO3 {
	//test
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Zusammenfassung für Datenändern
	/// </summary>
	public ref class Datenändern : public System::Windows::Forms::Form
	{
	public:
		Datenändern(void)
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
		~Datenändern()
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
			this->button1->Location = System::Drawing::Point(78, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Speichern";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Datenändern::button1_Click);
			// 
			// Datenändern
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Name = L"Datenändern";
			this->Text = L"Datenändern";
			this->Load += gcnew System::EventHandler(this, &Datenändern::Datenändern_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Datenändern_Load(System::Object^  sender, System::EventArgs^  e) {
		read_ändern();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		speichern_ändern();
	}
	};
}

#endif
