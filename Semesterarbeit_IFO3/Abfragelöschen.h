#ifndef Abfragel�schen_H
#define Abfragel�schen_H


#pragma once
#include "Daten.h"
#include "GlobalClass.h"

void l�schen();
char* namel�schen();

namespace Semesterarbeit_IFO3 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Zusammenfassung f�r Daten�ndern
	/// </summary>
	public ref class Abfragel�schen : public System::Windows::Forms::Form
	{
	public:
		Abfragel�schen(void)
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
		~Abfragel�schen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Sind Sie sich sicher, dass Sie \ndiese Daten l�schen m�chten?";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(78, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Abfragel�schen::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(78, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 35);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Abbrechen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Abfragel�schen::button2_Click);
			// 
			// Daten�ndern
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(274, 201);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Name = L"Abfragel�schen";
			this->Text = L"Best�tigen"; 
			this->Load += gcnew System::EventHandler(this, &Abfragel�schen::Abfragel�schen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	
	//Beim Laden des Fenster wird der Name des Mitarbeiter oder des Abteilungsleiter geladen
	private: System::Void Abfragel�schen_Load(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = "Sind Sie sich sicher, dass Sie die Daten von\n" +gcnew System::String(namel�schen()) + " l�schen m�chten?";
	}

	//Beim Dr�cken von Ok werden die Daten gel�scht
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		l�schen(); 
		this->Close();
	}

	//Beim Dr�cken von Abbrechen wird das Fenster geschlossen ohne die Daten zu l�schen
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	};
}

#endif
