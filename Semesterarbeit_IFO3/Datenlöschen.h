#ifndef Datenl�schen_H
#define Datenl�schen_H

#pragma once
#include "Daten.h"
#include "GlobalClass.h"

void speichern_l�schen();
void read_l�schen();

namespace Semesterarbeit_IFO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r Datenl�schen
	/// </summary>
	public ref class Datenl�schen : public System::Windows::Forms::Form
	{
	public:
		Datenl�schen(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Datenl�schen()
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
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
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
			this->button1->Click += gcnew System::EventHandler(this, &Datenl�schen::button1_Click);
			// 
			// Datenl�schen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Name = L"Datenl�schen";
			this->Text = L"Datenl�schen";
			this->Load += gcnew System::EventHandler(this, &Datenl�schen::Datenl�schen_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Datenl�schen_Load(System::Object^  sender, System::EventArgs^  e) {
		read_l�schen();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		speichern_l�schen();
	}
	};
}


#endif
