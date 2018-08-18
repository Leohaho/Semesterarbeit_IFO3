#pragma once
//#include "Header.h"
//#include "MyForm.h"
#include "Daten.h"
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
			//
			//TODO: Konstruktorcode hier hinzufügen.
			/*Mitarb MA[100];
			ABL AL[100];
			ABT AT[100];
			readma(MA);
			readal(AT, AL);//*/
			/*for (int i = 0; i < 100; i++)
			{
				String^ test = gcnew String(MA[i].NA);
				if (test != "")
				{
					label1->Text = test;
					textBox1->AppendText(i + test + "\n");
				}
			}

			//*/
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












	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(841, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Schließen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Datensuchen::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(841, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Suchen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Datensuchen::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Vorname", L"Nachname", L"Abteilung", L"Geb.-Datum",
					L"Adresse\?\?\?"
			});
			this->comboBox1->Location = System::Drawing::Point(40, 100);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(186, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->Enter += gcnew System::EventHandler(this, &Datensuchen::textBox2_Enter);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(841, 136);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 23);
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
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(888, 244);
			this->dataGridView1->TabIndex = 8;
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(560, 66);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(235, 110);
			this->textBox1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(307, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"label1";
			// 
			// Datensuchen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(990, 460);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Datensuchen";
			this->Text = L"Datensuchen";
			this->Load += gcnew System::EventHandler(this, &Datensuchen::Datensuchen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		
		//Close();
	}
	private: System::Void Datensuchen_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}

	//Suchenbutton
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		Mitarb MA2[100];

		for (int z = 0; z < 100; z++)
			strcpy(MA2[z].VNA, "XYZ");

		


		readma(MA2);
		initData();
		emptyTable();
		FillData(MA2);
	}

	private: void emptyTable()
	{
		int rowCount = dataGridView1->RowCount;
		dataGridView1->Rows->Add(rowCount, "Anzahl Zeilen");
		for (int i = 0; i < rowCount; i++)
			dataGridView1->Rows->RemoveAt(rowCount - i-1);
	}


	private: void FillData(Mitarb MA_test[])
	{
		for (int i = 0; i < 100; i++)
		{

			//String^ ma_id = gcnew String(intostr(MA_test[i].NR));
			String^ vname = gcnew String(MA_test[i].VNA);
			String^ name = gcnew String(MA_test[i].NA);
			String^ mobil = gcnew String(MA_test[i].MNR);
			String^ festnetz = gcnew String(MA_test[i].FNR);
			String^ mail = gcnew String(MA_test[i].mail);
			String^ str = gcnew String(MA_test[i].FNR);
			String^ hausnr = gcnew String(MA_test[i].HNR);
			String^ plz = gcnew String(MA_test[i].POST);
			String^ ort = gcnew String(MA_test[i].ORT);
			String^ abteilung = gcnew String(MA_test[i].AB);
			String^ abteilungsleiter = gcnew String(MA_test[i].VG);
		
			if (strcmp("XYZ", MA_test[i].VNA) != 0)
			{
				textBox1->AppendText(i+1 + vname + "\n");
				dataGridView1->Rows->Add(i, vname, name, mobil, festnetz, mail, str, hausnr, plz, ort, abteilung, abteilungsleiter);
			}
		}
	}

	

	public: void initData()
	{
		Mitarb MA[100];
		ABL AL[100];
		ABT AT[100];
		readma(MA);
		readal(AT, AL);//*/
	};
	private: System::Void textBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		button2->Enabled = true;
	}

		 //Button Bearbeiten
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = comboBox1->Text;
	}
};
}
