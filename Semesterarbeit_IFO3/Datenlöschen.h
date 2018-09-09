#ifndef Datenl�schen_H
#define Datenl�schen_H

#pragma once
#include "Daten.h"
#include "GlobalClass.h"
#include "Abfragel�schen.h"

void speichern_l�schen();
void read_l�schen();
int finden(char G[20], bool Ma);

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

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;

	private: System::Windows::Forms::MaskedTextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 87);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"L�schen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Datenl�schen::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(258, 14);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(96, 21);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Mitarbeiter";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(258, 41);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(126, 21);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->Text = L"Abteilungsleiter";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 9);
			this->textBox1->Mask = L"999";
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 22);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nummer / ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(83, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 7;
			// 
			// Datenl�schen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 142);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Datenl�schen";
			this->Text = L"Datenl�schen";
			this->Load += gcnew System::EventHandler(this, &Datenl�schen::Datenl�schen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Beim Laden des Fenster werden die Daten aus der Textdatei in die Variablen geladen
	private: System::Void Datenl�schen_Load(System::Object^  sender, System::EventArgs^  e) {
		read_l�schen();
	}

	//Beim Dr�cken von L�schen wird der Datensatz gesucht und die Best�tigung aufgerufen
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^nr = this->textBox1->Text;
		if(nr!=""){
			char text[20];
			sprintf(text, "%s", nr);

			int T = finden(text, this->radioButton1->Checked);

			if (T>100) {
				this->label2->Text = "nicht gefunden";
			}
			else {
				this->label2->Text = "";
				Abfragel�schen ^ form = gcnew Abfragel�schen;
				form->ShowDialog();
			}
		}
	}

};
}


#endif
