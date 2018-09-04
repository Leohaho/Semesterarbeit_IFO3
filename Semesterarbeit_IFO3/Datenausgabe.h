#ifndef Datenausgabe_H
#define Datenausgabe_H

#pragma once

#include<string>
#include<cstring>

#include "Daten.h"
#include "GlobalClass.h"

void read_ausgabe();
char* ausgeben2(int i);

namespace Semesterarbeit_IFO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Zusammenfassung für Datenausgabe
	/// </summary>
	public ref class Datenausgabe : public System::Windows::Forms::Form
	{
	public:
		Datenausgabe(void)
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
		~Datenausgabe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;


	private: System::Windows::Forms::DataGridView^  dataGridView1;

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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(174, 26);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ausgeben";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Datenausgabe::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(12, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(96, 21);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Mitarbeiter";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 39);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(126, 21);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"Abteilungsleiter";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 66);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(104, 21);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->Text = L"Abteilungen";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 93);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 130;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(200, 100);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->Visible = false;
			// 
			// Datenausgabe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 305);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Datenausgabe";
			this->Text = L"Datenausgabe";
			this->Load += gcnew System::EventHandler(this, &Datenausgabe::Datenausgabe_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Datenausgabe_Load(System::Object^  sender, System::EventArgs^  e) {
		read_ausgabe();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//speichern_ausgabe(); wozu?
		this->dataGridView1->Visible = true;
		int i = 0;
		int j = 0;
		int h = 0;
		this->dataGridView1->ColumnCount = 0;
		if (this->radioButton1->Checked) {
			this->dataGridView1->Size = System::Drawing::Size(600, 318);
			this->ClientSize = System::Drawing::Size(640, 423);
			i = 1;
			this->dataGridView1->RowCount = 14;
			this->dataGridView1->Rows[0]->HeaderCell->Value = "Nummer";
			this->dataGridView1->Rows[1]->HeaderCell->Value = "Name";
			this->dataGridView1->Rows[2]->HeaderCell->Value = "Vorname";
			this->dataGridView1->Rows[3]->HeaderCell->Value = "Eintritsmonat";
			this->dataGridView1->Rows[4]->HeaderCell->Value = "Eintritsjahr";
			this->dataGridView1->Rows[5]->HeaderCell->Value = "Mobiltelefonnummer";
			this->dataGridView1->Rows[6]->HeaderCell->Value = "Festnetznummer";
			this->dataGridView1->Rows[7]->HeaderCell->Value = "Abteilung";
			this->dataGridView1->Rows[8]->HeaderCell->Value = "Vorgesetzter";
			this->dataGridView1->Rows[9]->HeaderCell->Value = "Mailadresse";
			this->dataGridView1->Rows[10]->HeaderCell->Value = "Strasse";
			this->dataGridView1->Rows[11]->HeaderCell->Value = "Hausnummer";
			this->dataGridView1->Rows[12]->HeaderCell->Value = "Postleitzahl";
			this->dataGridView1->Rows[13]->HeaderCell->Value = "Ort/Stadt";

		}
		if (this->radioButton2->Checked) {
			this->dataGridView1->Size = System::Drawing::Size(600, 228);
			this->ClientSize = System::Drawing::Size(640, 333);
			i = 2;
			this->dataGridView1->RowCount = 10;
			this->dataGridView1->Rows[0]->HeaderCell->Value = "Name";
			this->dataGridView1->Rows[1]->HeaderCell->Value = "Vorname";
			this->dataGridView1->Rows[2]->HeaderCell->Value = "Abteilung";
			this->dataGridView1->Rows[3]->HeaderCell->Value = "Mobiltelefonnummer";
			this->dataGridView1->Rows[4]->HeaderCell->Value = "Festnetznummer";
			this->dataGridView1->Rows[5]->HeaderCell->Value = "Mailadresse";
			this->dataGridView1->Rows[6]->HeaderCell->Value = "Straße";
			this->dataGridView1->Rows[7]->HeaderCell->Value = "Hausnummer";
			this->dataGridView1->Rows[8]->HeaderCell->Value = "Postleitzahl";
			this->dataGridView1->Rows[9]->HeaderCell->Value = "Ort/Stadt";
		}
		if (this->radioButton3->Checked) {
			this->dataGridView1->Size = System::Drawing::Size(600, 188);
			this->ClientSize = System::Drawing::Size(640, 280);
			i = 3;
			this->dataGridView1->RowCount = 8;

			this->dataGridView1->Rows[0]->HeaderCell->Value = "ID";
			this->dataGridView1->Rows[1]->HeaderCell->Value = "Name";
			this->dataGridView1->Rows[2]->HeaderCell->Value = "Standort";
			this->dataGridView1->Rows[3]->HeaderCell->Value = "Leiter";
			this->dataGridView1->Rows[4]->HeaderCell->Value = "Straße";
			this->dataGridView1->Rows[5]->HeaderCell->Value = "Hausnummer";
			this->dataGridView1->Rows[6]->HeaderCell->Value = "Postleitzahl";
			this->dataGridView1->Rows[7]->HeaderCell->Value = "Ort/Stadt";
		}
		char* text= ausgeben2(i);

		char *table = strtok(text, "§");
		while (table != NULL) {
			
			switch (i)
			{
			case 1: {
				this->dataGridView1->Rows[j]->Cells[h]->Value = gcnew System::String(table);
				if (j==13) {
					j = 0;
					h++;
					this->dataGridView1->ColumnCount++;
				}
				else {
				j++;
				}
				break;
			}
			case 2: {
				this->dataGridView1->Rows[j]->Cells[h]->Value = gcnew System::String(table);
				if (j == 9) {
					j = 0;
					h++;
					this->dataGridView1->ColumnCount++;
				}
				else {
					j++;
				}
				break;
			}
			case 3: {
				this->dataGridView1->Rows[j]->Cells[h]->Value = gcnew System::String(table);
				if (j == 7) {
					j = 0;
					h++;
					this->dataGridView1->ColumnCount++;
				}
				else {
					j++;
				}
				break;
			}
			default:
				break;
			}
			table = strtok(NULL, "§");
		}
	}

};
}

#endif