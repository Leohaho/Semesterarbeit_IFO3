#pragma once
#ifndef MyForm_h
#define MyForm_h
#include "Daten.h"
#include "Dateneingabe.h"
#include "Datenändern.h"
#include "Datensuchen.h"
#include "Datenausgabe.h"
#include "Datenlöschen.h"


ABL AL[100];
ABT AT[100];
Mitarb MA[100];
int save;

namespace Semesterarbeit_IFO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Datensatz Eingabe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(26, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Datensatz ändern";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(26, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Datensatz suchen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(26, 200);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(145, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Alle Datensätze ausgeben";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(26, 236);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Alle Datensätze speichern";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(26, 164);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(145, 30);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Datensatz löschen";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(297, 320);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 30);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Beenden";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 362);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(400, 400);
			this->Name = L"MyForm";
			this->Text = L"Mitarbeiterverwaltung";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		save = 0;
		Dateneingabe ^ form = gcnew Dateneingabe;

		form->ShowDialog();
	};
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		save = 0;
		Datenändern ^ form = gcnew Datenändern;

		form->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		save = 0;
		Datensuchen ^ form = gcnew Datensuchen;

		form->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		Datenausgabe ^ form = gcnew Datenausgabe;

		form->ShowDialog();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		save = 0;
		Datenlöschen ^ form = gcnew Datenlöschen;

		form->ShowDialog();
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

		if (save != 1) {
			//abfrage Speichern
		}
		else {
			this->Close();
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		//Datenspeichern
		save = 1;
		speichernma(MA);
		speichernal(AT, AL);
	}
	};
}

#endif