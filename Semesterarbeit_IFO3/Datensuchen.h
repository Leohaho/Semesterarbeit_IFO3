#ifndef Datensuche_H
#define Datensuche_H


#pragma once

//#include "Header.h"
//#include "MyForm.h"
#include "Daten.h"
#include "suchen.h"
#include <string>
#include <iostream> // Standard-Ein-/Ausgabe
#include <sstream>  // String-Ein-/Ausgaben
#include <cstring>



namespace Semesterarbeit_IFO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Zusammenfassung für Datensuchen
	/// </summary>
	public ref class Datensuchen : public System::Windows::Forms::Form
	{
		//initData();

	public:


		Datensuchen(void)
		{
			InitializeComponent();
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

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ma_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mobil;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  festnetz;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  strasse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  hausnr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  plz;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ort;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  abteilung;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  abteilungLeiter;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox_Abteilung;
	private: System::Windows::Forms::Label^  lbl_suchen;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox3;



	private:
		//void getMa(int test);

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ma_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mobil = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->festnetz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->strasse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hausnr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->plz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ort = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->abteilung = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->abteilungLeiter = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_Abteilung = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_suchen = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(939, 81);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Zurück";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Datensuchen::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(939, 33);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Suchen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Datensuchen::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Vorname", L"Nachname", L"Mitarbeiternummer",
					L"Abteilung", L"Abteilungsleiter"
			});
			this->comboBox1->Location = System::Drawing::Point(40, 100);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Datensuchen::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &Datensuchen::comboBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(187, 100);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->Visible = false;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(939, 130);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 31);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Bearbeiten";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Datensuchen::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->ma_id,
					this->vname, this->name, this->mobil, this->festnetz, this->mail, this->strasse, this->hausnr, this->plz, this->ort, this->abteilung,
					this->abteilungLeiter
			});
			this->dataGridView1->Location = System::Drawing::Point(40, 182);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1032, 244);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &Datensuchen::dataGridView1_SelectionChanged);
			// 
			// ma_id
			// 
			this->ma_id->HeaderText = L"ID";
			this->ma_id->Name = L"ma_id";
			// 
			// vname
			// 
			this->vname->HeaderText = L"Vorname";
			this->vname->Name = L"vname";
			this->vname->ReadOnly = true;
			// 
			// name
			// 
			this->name->HeaderText = L"Nachname";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// mobil
			// 
			this->mobil->HeaderText = L"Mobil";
			this->mobil->Name = L"mobil";
			this->mobil->ReadOnly = true;
			// 
			// festnetz
			// 
			this->festnetz->HeaderText = L"Festnetz";
			this->festnetz->Name = L"festnetz";
			this->festnetz->ReadOnly = true;
			// 
			// mail
			// 
			this->mail->HeaderText = L"Mail";
			this->mail->Name = L"mail";
			this->mail->ReadOnly = true;
			// 
			// strasse
			// 
			this->strasse->HeaderText = L"Straße";
			this->strasse->Name = L"strasse";
			this->strasse->ReadOnly = true;
			// 
			// hausnr
			// 
			this->hausnr->HeaderText = L"Hausnummer";
			this->hausnr->Name = L"hausnr";
			this->hausnr->ReadOnly = true;
			// 
			// plz
			// 
			this->plz->HeaderText = L"PLZ";
			this->plz->Name = L"plz";
			this->plz->ReadOnly = true;
			// 
			// ort
			// 
			this->ort->HeaderText = L"Ort";
			this->ort->Name = L"ort";
			this->ort->ReadOnly = true;
			// 
			// abteilung
			// 
			this->abteilung->HeaderText = L"Abteilung";
			this->abteilung->Name = L"abteilung";
			this->abteilung->ReadOnly = true;
			// 
			// abteilungLeiter
			// 
			this->abteilungLeiter->HeaderText = L"Abteilungsleiter";
			this->abteilungLeiter->Name = L"abteilungLeiter";
			this->abteilungLeiter->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 11;
			// 
			// comboBox_Abteilung
			// 
			this->comboBox_Abteilung->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Abteilung->FormattingEnabled = true;
			this->comboBox_Abteilung->Location = System::Drawing::Point(187, 100);
			this->comboBox_Abteilung->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_Abteilung->Name = L"comboBox_Abteilung";
			this->comboBox_Abteilung->Size = System::Drawing::Size(121, 24);
			this->comboBox_Abteilung->TabIndex = 12;
			this->comboBox_Abteilung->Visible = false;
			this->comboBox_Abteilung->SelectedIndexChanged += gcnew System::EventHandler(this, &Datensuchen::comboBox_Abteilung_SelectedIndexChanged);
			// 
			// lbl_suchen
			// 
			this->lbl_suchen->AutoSize = true;
			this->lbl_suchen->Location = System::Drawing::Point(36, 44);
			this->lbl_suchen->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_suchen->Name = L"lbl_suchen";
			this->lbl_suchen->Size = System::Drawing::Size(176, 17);
			this->lbl_suchen->TabIndex = 13;
			this->lbl_suchen->Text = L"Was möchten Sie suchen\?";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(239, 44);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(96, 21);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Mitarbeiter";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Datensuchen::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(374, 44);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(126, 21);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Abteilungsleiter";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Vorname", L"Nachname", L"Abteilung" });
			this->comboBox2->Location = System::Drawing::Point(432, 100);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 16;
			this->comboBox2->Visible = false;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Datensuchen::comboBox2_SelectedIndexChanged);
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &Datensuchen::comboBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(586, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 22);
			this->textBox1->TabIndex = 17;
			this->textBox1->Visible = false;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(586, 71);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 18;
			this->comboBox3->Visible = false;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Datensuchen::comboBox3_SelectedIndexChanged);
			// 
			// Datensuchen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1107, 450);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->lbl_suchen);
			this->Controls->Add(this->comboBox_Abteilung);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1125, 497);
			this->MinimumSize = System::Drawing::Size(1125, 497);
			this->Name = L"Datensuchen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Datensuchen";
			this->Load += gcnew System::EventHandler(this, &Datensuchen::Datensuchen_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

	//############# BUTTON Schließen #############
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	//############# BUTTON Suchen #############
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		Mitarb MA2[100];
		ABL aAbteilungsleiter[100];
		ABT aAbteilung[100];
		int suchID = comboBox1->SelectedIndex;
		int suchIDAB = comboBox2->SelectedIndex;
		int erfolg = 1;
		int counter = 0;
		char selected[20];
		char cKontrolle[20];
		int laenge;
		String^ sTextBoxText;
		char cSearchValue[20];
		int i, z;
		
		sTextBoxText = textBox2->Text;
		laenge = sTextBoxText->Length;

		for (int z = 0; z < 100; z++)
		{
			strcpy(MA2[z].VNA, "XYZ");
			strcpy(aAbteilungsleiter[z].VNA, "XYZ");
		}

		readma(MA2);
		readal(aAbteilung, aAbteilungsleiter);
		initData();
		emptyTable();

		if (radioButton1->Checked)
		{
			switch (suchID)
			{
			case 0: //############# Vorname BEGIN #################
				counter = 0;
				textBox2->Visible = true;

				sprintf(cSearchValue, "%s", textBox2->Text);

				for (z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
					if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
						cSearchValue[z] = toupper(cSearchValue[z]);

				for (i = 0; i < 100; i++)
				{
					strcpy(cKontrolle, MA2[i].VNA);
					for (int z = 0; z < strlen(cKontrolle); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cKontrolle[z] >= 'a' && cKontrolle[z] <= 'z')
							cKontrolle[z] = toupper(cKontrolle[z]);

					for (int z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
							cSearchValue[z] = toupper(cSearchValue[z]);

					if (strstr(cKontrolle, cSearchValue) != NULL)
					{
						counter++;
						FillData(MA2, i);
					}
				}

				break;
				//################### Vorname ENDE #################

			case 1: //################### Nachname BEGIN #################
				counter = 0;
				sprintf(cSearchValue, "%s", textBox2->Text);

				for (z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
					if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
						cSearchValue[z] = toupper(cSearchValue[z]);

				for (i = 0; i < 100; i++)
				{
					char cKontrolle[20];
					strcpy(cKontrolle, MA2[i].NA);

					for (int z = 0; z < strlen(cKontrolle); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cKontrolle[z] >= 'a' && cKontrolle[z] <= 'z')
							cKontrolle[z] = toupper(cKontrolle[z]);

					for (int z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
							cSearchValue[z] = toupper(cSearchValue[z]);

					if (strstr(cKontrolle, cSearchValue) != NULL)
					{
						counter++;
						FillData(MA2, i);
					}
				}

				break;
				//################### Nachname ENDE #################

			case 2: //################### Mitarbeiternummer BEGIN #################
				counter = 0;
				label1->Text = "";
				//##################################### Fehler abfangen, wenn keine Zeichen in Textbox und wenn Buchstaben in Textbox
				sprintf(cSearchValue, "%s", textBox2->Text);
				laenge = strlen(cSearchValue);
				i = 0;
				do //Jede Stelle von String durchgehen, bis ein Buchstabe gefunden wurde.
				{
					if (isdigit(cSearchValue[i]) == 0) //Ein Buchstabe gefunden
						erfolg = 0;
					i++;
				} while (i < strlen(cSearchValue) && erfolg == 1);

				if (erfolg)
				{
					counter++;
					FillData(MA2, int::Parse(sTextBoxText));
				}
				else
					label1->Text = "Bitte geben Sie eine Zahl ein.";
				break;
				//################### Mitarbeiternummer ENDE #################

			case 3: //################### Abteilung BEGIN #################
				counter = 0;
				//Combobox auslesen und auf Großbuchstaben umwandeln
				sprintf(selected, "%s", comboBox_Abteilung->SelectedItem->ToString());
				//label1->Text = comboBox_Abteilung->SelectedItem->ToString();
				for (z = 0; z < strlen(selected); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
					if (selected[z] >= 'a' && selected[z] <= 'z')
						selected[z] = toupper(selected[z]);

				//Jeden MA auf Großbuchstaben umwandeln und auf die entsprechenden Wert abgleichen
				for (i = 0; i < 100; i++)
				{
					strcpy(cKontrolle, MA2[i].AB);
					for (int z = 0; z < strlen(cKontrolle); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cKontrolle[z] >= 'a' && cKontrolle[z] <= 'z')
							cKontrolle[z] = toupper(cKontrolle[z]);

					for (int z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
							cSearchValue[z] = toupper(cSearchValue[z]);

					if (strstr(cKontrolle, selected) != NULL)
					{
						counter++;
						FillData(MA2, i);
					}
				}
				break;
				//################### Abteilung ENDE #################

			case 4: //################### Abteilungsleiter BEGIN ###################
				sprintf(selected, "%s", comboBox_Abteilung->SelectedItem->ToString());
				for (z = 0; z < strlen(selected); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
					if (selected[z] >= 'a' && selected[z] <= 'z')
						selected[z] = toupper(selected[z]);

				for (i = 0; i < 100; i++)
				{
					strcpy(cKontrolle, MA2[i].VG);
					for (int z = 0; z < strlen(cKontrolle); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cKontrolle[z] >= 'a' && cKontrolle[z] <= 'z')
							cKontrolle[z] = toupper(cKontrolle[z]);

					for (int z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
							cSearchValue[z] = toupper(cSearchValue[z]);

					if (strstr(cKontrolle, selected) != NULL)
					{
						counter++;
						FillData(MA2, i);
					}
				}
				break;
				//################### Abteilungsleiter ENDE ###################
			default:
				break;
			}

		}
		else if (radioButton2->Checked)
		{
			switch (suchIDAB)
			{
			case 0: //Vorname Abteilungsleiter
				counter = 0;
				sprintf(cSearchValue, "%s", textBox1->Text);

				for (z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
					if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
						cSearchValue[z] = toupper(cSearchValue[z]);

				for (i = 0; i < 100; i++)
				{
					
					strcpy(cKontrolle, aAbteilungsleiter[i].VNA);

					for (int z = 0; z < strlen(cKontrolle); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cKontrolle[z] >= 'a' && cKontrolle[z] <= 'z')
							cKontrolle[z] = toupper(cKontrolle[z]);

					for (int z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
							cSearchValue[z] = toupper(cSearchValue[z]);

					if (strstr(cKontrolle, cSearchValue) != NULL)
					{
						counter++;
						FillDataAB(aAbteilungsleiter, i);
					}
				}

				break;
			case 1: //Nachname Abteilungsleiter
				counter = 0;
				sprintf(cSearchValue, "%s", textBox1->Text);

				for (z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
					if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
						cSearchValue[z] = toupper(cSearchValue[z]);

				for (i = 0; i < 100; i++)
				{

					strcpy(cKontrolle, aAbteilungsleiter[i].NA);

					for (int z = 0; z < strlen(cKontrolle); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cKontrolle[z] >= 'a' && cKontrolle[z] <= 'z')
							cKontrolle[z] = toupper(cKontrolle[z]);

					for (int z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
							cSearchValue[z] = toupper(cSearchValue[z]);

					if (strstr(cKontrolle, cSearchValue) != NULL)
					{
						counter++;
						FillDataAB(aAbteilungsleiter, i);
					}
				}
				break;
			case 2: //Abteilung Abteilungsleiter
					//Combobox auslesen und auf Großbuchstaben umwandeln
				counter = 0;
				sprintf(selected, "%s", comboBox3->SelectedItem->ToString());
				for (z = 0; z < strlen(selected); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
					if (selected[z] >= 'a' && selected[z] <= 'z')
						selected[z] = toupper(selected[z]);

				//Jeden MA auf Großbuchstaben umwandeln und auf die entsprechenden Wert abgleichen
				for (i = 0; i < 100; i++)
				{
					strcpy(cKontrolle, aAbteilungsleiter[i].AB);
					for (int z = 0; z < strlen(cKontrolle); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cKontrolle[z] >= 'a' && cKontrolle[z] <= 'z')
							cKontrolle[z] = toupper(cKontrolle[z]);

					for (int z = 0; z < strlen(cSearchValue); z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
						if (cSearchValue[z] >= 'a' && cSearchValue[z] <= 'z')
							cSearchValue[z] = toupper(cSearchValue[z]);

					if (strstr(cKontrolle, selected) != NULL)
					{
						counter++;
						FillDataAB(aAbteilungsleiter, i);
					}
				}
				break;
			default:
				break;
			}
		}
		if (counter == 0)
			MessageBox::Show("Es wurde kein Datensatz gefunden");
	}

	private: void emptyTable()
	{
		int rowCount = dataGridView1->RowCount;
		dataGridView1->Rows->Add(rowCount, "Anzahl Zeilen");
		for (int i = 0; i < rowCount; i++)
			dataGridView1->Rows->RemoveAt(rowCount - i - 1);
	}

	private: void FillDataAll(Mitarb MA_test[])
	{
		for (int i = 0; i < 100; i++)
			FillData(MA_test, i);
	}

	private: void FillData(Mitarb MA_test[], int ID)
	{
		String^ vname = gcnew String(MA_test[ID].VNA);
		String^ name = gcnew String(MA_test[ID].NA);
		String^ mobil = gcnew String(MA_test[ID].MNR);
		String^ festnetz = gcnew String(MA_test[ID].FNR);
		String^ mail = gcnew String(MA_test[ID].mail);
		String^ str = gcnew String(MA_test[ID].FNR);
		String^ hausnr = gcnew String(MA_test[ID].HNR);
		String^ plz = gcnew String(MA_test[ID].POST);
		String^ ort = gcnew String(MA_test[ID].ORT);
		String^ abteilung = gcnew String(MA_test[ID].AB);
		String^ abteilungsleiter = gcnew String(MA_test[ID].VG);

		if (strcmp("XYZ", MA_test[ID].VNA) != 0)
			dataGridView1->Rows->Add(ID, vname, name, mobil, festnetz, mail, str, hausnr, plz, ort, abteilung, abteilungsleiter);
	}

	private: void FillDataAB(ABL Abteilungsleiter[], int ID)
	{
		String^ vname = gcnew String(Abteilungsleiter[ID].VNA);
		String^ name = gcnew String(Abteilungsleiter[ID].NA);
		String^ mobil = gcnew String(Abteilungsleiter[ID].MNR);
		String^ festnetz = gcnew String(Abteilungsleiter[ID].FNR);
		String^ mail = gcnew String(Abteilungsleiter[ID].mail);
		String^ str = gcnew String(Abteilungsleiter[ID].FNR);
		String^ hausnr = gcnew String(Abteilungsleiter[ID].HNR);
		String^ plz = gcnew String(Abteilungsleiter[ID].POST);
		String^ ort = gcnew String(Abteilungsleiter[ID].ORT);
		String^ abteilung = gcnew String(Abteilungsleiter[ID].AB);


		if ((strcmp("XYZ", Abteilungsleiter[ID].VNA) != 0) && (strcmp(Abteilungsleiter[ID].NA, "000") != 0))
			dataGridView1->Rows->Add(ID, vname, name, mobil, festnetz, mail, str, hausnr, plz, ort, abteilung);
	}

	private: void initData()
	{
		Mitarb MA[100]; //Mitarbeiter
		ABL AL[100]; //Abteilungsleiter
		ABT AT[100]; //Abteilung

		int i;
		for (i = 0; i < 100; i++)
		{
			strcpy(AL[i].VNA, "XYZ");
			strcpy(AL[i].NA, "XYZ");
			strcpy(AT[i].FA, "XYZ");
			strcpy(MA[i].VNA, "XYZ");
			strcpy(AL[i].NA, "XYZ");
		}

		readma(MA);
		readal(AT, AL);
		//emptyATAL();
		for (i = 0; i < 100; i++)
			setATAL(AT[i], i, AL[i], i);

	};

	//############ Button Bearbeiten ############
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		int id;
		int menge = int::Parse(dataGridView1->RowCount.ToString());
		//char cSearchValue[20];

		if (dataGridView1->SelectedCells[0]->RowIndex != menge - 1)
		{
			id = int::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
		}
		else
			label1->Text = "Wählen Sie eine Zeile aus";
	}

	//############ Sichtbarkeit der Suchfelder ############
	private: System::Void comboBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int suchID = comboBox1->SelectedIndex;
		//button2->Enabled = true;
		switch (suchID)
		{
		case 0: //Vorname
			textBox2->Visible = true;
			comboBox_Abteilung->Visible = false;
			button2->Enabled = true;
			break;
		case 1: //Nachname
			textBox2->Visible = true;
			comboBox_Abteilung->Visible = false;
			button2->Enabled = true;
			break;
		case 2: //Mitarbeiternummer
			textBox2->Visible = true;
			comboBox_Abteilung->Visible = false;
			button2->Enabled = true;
			break;
		case 3: //Abteilung
			dropItemsComboBox();
			textBox2->Visible = false;
			comboBox_Abteilung->Visible = true;
			break;
		case 4: //Abteilungsleiter
			dropItemsComboBox();
			textBox2->Visible = false;
			comboBox_Abteilung->Visible = true;
			break;
		default:
			break;
		}
	}

	private: void dropItemsComboBox()
	{
		comboBox_Abteilung->Items->Clear();
		comboBox3->Items->Clear();
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int i = 0;
		ABL abteilungsleiter[100];
		ABT abteilung[100];

		for (int i = 0; i < 100; i++)
		{

			strcpy(abteilung[i].FA, "XYZ");
			strcpy(abteilungsleiter[i].NA, "XYZ");
			abteilung[i] = getAT(i);
			abteilungsleiter[i] = getAL(i);
		}

		if (comboBox1->SelectedIndex == 3) // Abteilung
		{
			for (i = 0; i < 100; i++)
			{
				String^ name = gcnew String(abteilung[i].FA);

				if (strcmp(abteilung[i].FA, "XYZ") != 0)
					comboBox_Abteilung->Items->Add(name);
			}
		}
		else if (comboBox1->SelectedIndex == 4) // Abteilungsleiter
		{
			for (i = 0; i < 100; i++)
			{
				String^ name = gcnew String(abteilungsleiter[i].NA);

				if ((strcmp(abteilungsleiter[i].NA, "XYZ") != 0) && (strcmp(abteilungsleiter[i].NA, "000") != 0)) 
					comboBox_Abteilung->Items->Add(name);
			}

		}
	}

	private: System::Void Datensuchen_Load_1(System::Object^  sender, System::EventArgs^  e) {
		emptyATAL();
		initData();
	}

	private: void emptyDropDown()
	{
		comboBox_Abteilung->Items->Clear();
	}

	private: System::Void dataGridView1_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
		int id;
		int menge = int::Parse(dataGridView1->RowCount.ToString());
		//char cSearchValue[20];

		if (dataGridView1->SelectedCells[0]->RowIndex != menge - 1)
		{
			id = int::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
			button3->Enabled = true;
		}
		else
			button3->Enabled = false;
	}

	private: System::Void comboBox_Abteilung_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox_Abteilung->Text != "")
			button2->Enabled = true;
		else
			button2->Enabled = false;
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	emptyTable();
	if (radioButton1->Checked) //Mitarbeiter
	{
		comboBox2->Visible = false;
		comboBox1->Visible = true;
		comboBox_Abteilung->Visible = false;
		textBox1->Visible = false;
		textBox2->Visible = false;
		button2->Enabled = false;
	}
	else if (radioButton2->Checked) //Abteilungsleiter
	{
		comboBox2->Visible = true;
		comboBox1->Visible = false;
		comboBox_Abteilung->Visible = false;
		textBox1->Visible = false;
		textBox2->Visible = false;
		button2->Enabled = false;
	}
}

	/// <summary>
	/// Abteilungsleiter
	/// </summary>
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int i = 0;
		ABT abteilung[100];

		for (int i = 0; i < 100; i++)
		{
			strcpy(abteilung[i].FA, "XYZ");
			abteilung[i] = getAT(i);
		}
		
		if (comboBox2->SelectedIndex == 2) // Abteilung
			for (i = 0; i < 100; i++)
			{
				String^ name = gcnew String(abteilung[i].FA);
				if ((strcmp(abteilung[i].FA, "XYZ") != 0) && (strcmp(abteilung[i].FA, "0") != 0))
					comboBox3->Items->Add(name);
			}
	}

	/// <summary>
	/// Sichtbarkeit Abteilungsleiter
	/// </summary>
	private: System::Void comboBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int suchID = comboBox2->SelectedIndex;
		//button2->Enabled = true;
		switch (suchID)
		{
		case 0: //Vorname
			textBox1->Visible = true;
			comboBox3->Visible = false;
			button2->Enabled = true;
			break;
		case 1: //Nachname
			textBox1->Visible = true;
			comboBox3->Visible = false;
			button2->Enabled = true;
			break;
		case 2: //Abteilung
			//dropItemsComboBox();
			textBox1->Visible = false;
			comboBox3->Visible = true;
			break;
		default:
			break;
		}
	}
	
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		button2->Enabled = true;
	}
};
}


#endif
