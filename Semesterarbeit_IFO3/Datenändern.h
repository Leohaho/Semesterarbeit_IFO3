#ifndef Datenändern_H
#define Datenändern_H


#pragma once
#include "Daten.h"
#include "GlobalClass.h"
#include <iostream>
#include <string>
#include <vcclr.h>

void speichern_ändern();
void read_ändern();

namespace Semesterarbeit_IFO3 {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Art;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Inhalt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Art = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Inhalt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Speichern";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Datenändern::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(121, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(244, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Suchen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Datenändern::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(121, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(244, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Übernehmen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Datenändern::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(121, 137);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(121, 163);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 6;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Art, this->Inhalt });
			this->dataGridView1->Location = System::Drawing::Point(325, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(243, 331);
			this->dataGridView1->TabIndex = 7;
			// 
			// Art
			// 
			this->Art->HeaderText = L"Art";
			this->Art->Name = L"Art";
			this->Art->ReadOnly = true;
			// 
			// Inhalt
			// 
			this->Inhalt->HeaderText = L"Inhalt";
			this->Inhalt->Name = L"Inhalt";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(2, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nummer eingeben:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Nummer:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Vorname:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(2, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Nachname";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(90, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Testfelder";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(121, 190);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"button2 inttest";
			// 
			// Datenändern
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 355);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Datenändern";
			this->Text = L"Datenändern";
			this->Load += gcnew System::EventHandler(this, &Datenändern::Datenändern_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int i;
		
#pragma endregion
	private: System::Void Datenändern_Load(System::Object^  sender, System::EventArgs^  e) {
		read_ändern();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		speichern_ändern();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	 // suchen-knopf und daten ausgeben
	
		

		//for (int z = 0; z < 100; z++)
		//	strcpy(MA2[z].VNA, "XYZ");

		//initData();

		String^ nrstring = textBox1->Text;
		int nrint = int::Parse(nrstring);

		Mitarb MA[100];
		readma(MA);
		for ( i = 0; i < 100; i++) {
			if (MA[i].NR == nrint) {
				MessageBox::Show("erfolg"); // für Testzwecke
				String^ vname = gcnew String(MA[i].VNA);
				String^ name = gcnew String(MA[i].NA);
				String^ mobil = gcnew String(MA[i].MNR);
				String^ festnetz = gcnew String(MA[i].FNR);
				String^ mail = gcnew String(MA[i].mail);
				String^ str = gcnew String(MA[i].FNR);
				String^ hausnr = gcnew String(MA[i].HNR);
				String^ plz = gcnew String(MA[i].POST);
				String^ ort = gcnew String(MA[i].ORT);
				String^ abteilung = gcnew String(MA[i].AB);
				String^ abteilungsleiter = gcnew String(MA[i].VG);
				

				dataGridView1->Rows->Add("Nummer", nrint);		//0
				dataGridView1->Rows->Add("Vorname", vname);		//1
				dataGridView1->Rows->Add("Name", name);			//2
				dataGridView1->Rows->Add("Mobil", mobil);		//3
				dataGridView1->Rows->Add("Festnetz", festnetz);	//4
				dataGridView1->Rows->Add("Mail", mail);			//5
				dataGridView1->Rows->Add("Straße", str);		//6
				dataGridView1->Rows->Add("Hausnummer", hausnr);	//7
				dataGridView1->Rows->Add("Postleitzahl", plz);	//8
				dataGridView1->Rows->Add("Ort", ort);			//9
				dataGridView1->Rows->Add("Abteilung", abteilung);//10
				dataGridView1->Rows->Add("Abteilungsleiter", abteilungsleiter);//11

				speichernma(MA);

				//textBox2->Text = vname;
				//textBox3->Text = name;
				//textBox4->Text = mail;
				 
			
			}
		}


			/*int nummer = MA[i].NR;
			String^ nummerstring = nummer.ToString();
			 MessageBox::Show(nummerstring);
		
			if (nrtext == nummerstring) {*/


		}

		//readma(MA2);
	
	//}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	

	//neue Daten einlesen 
	String^ newnr = dataGridView1->Rows[0]->Cells[1]->Value->ToString();
	int x = int::Parse(newnr);

	String^ newvname = dataGridView1->Rows[1]->Cells[1]->Value->ToString();
	String^ newname = dataGridView1->Rows[2]->Cells[1]->Value->ToString();
	String^ newmobil = dataGridView1->Rows[3]->Cells[1]->Value->ToString();
	String^ newfestnetz = dataGridView1->Rows[4]->Cells[1]->Value->ToString();
	String^ newmail = dataGridView1->Rows[5]->Cells[1]->Value->ToString();
	String^ newstr = dataGridView1->Rows[6]->Cells[1]->Value->ToString();
	String^ newhausnr = dataGridView1->Rows[7]->Cells[1]->Value->ToString();
	String^ newplz = dataGridView1->Rows[8]->Cells[1]->Value->ToString();
	String^ newort = dataGridView1->Rows[9]->Cells[1]->Value->ToString();
	String^ newabteilung = dataGridView1->Rows[10]->Cells[1]->Value->ToString();
	String^ newabteilungsleiter = dataGridView1->Rows[11]->Cells[1]->Value->ToString();


	//testfelder

	textBox2->Text = newnr;
	textBox3->Text = newvname;
	textBox4->Text = newname;
	
	Mitarb MA[100];
	readma(MA);
	char newvnamechar[20];
	char newnamechar[20];
	char newmobilchar[20];
	char newfestnetzchar[20];
	char newmailchar[20];
	char newstrchar[20];
	char newhausnrchar[20];
	char newplzchar[20];
	char newortchar[20];
	char newabteilungchar[20];
	char newabteilungsleiterchar[20];
	



	String^ nrstring = textBox1->Text;
	int nrint = int::Parse(nrstring);
	
	textBox5->Text = nrstring;


	// sprintf(char,"%s", systemstring);


	sprintf(newvnamechar, "%s", newvname);
	sprintf(newnamechar, "%s", newname);
	sprintf(newmobilchar, "%s", newmobil);
	sprintf(newfestnetzchar, "%s", newfestnetz);
	sprintf(newmailchar, "%s", newmail);
	sprintf(newstrchar, "%s", newstr);
	sprintf(newplzchar, "%s", newplz);
	sprintf(newortchar, "%s", newort);
	sprintf(newabteilungchar, "%s", newabteilung);
	sprintf(newabteilungsleiterchar, "%s", newabteilungsleiter);
	

	FILE *fpma;
	fpma = fopen("Mitarbeiter.txt", "w");
	//fprintf(fpma, "%s\n", MA[nrint].VNA);
	//
	int Z;

	//strcpy( newvnamechar, MA[nrint].VNA);
	

	//strcpy(MA[Z].VNA, newvnamechar);
	//fprintf(fpma, "%s\n", MA[nrint].VNA);
	strcpy(MA[Z].NA, newnamechar);
	strcpy(MA[Z].MNR, newmobilchar);
	strcpy(MA[Z].FNR, newfestnetzchar);
	strcpy(MA[Z].mail, newmailchar);
	strcpy(MA[Z].STR, newstrchar);
	strcpy(MA[Z].POST, newplzchar);
	strcpy(MA[Z].ORT, newortchar);
	strcpy(MA[Z].AB, newabteilungchar);
	strcpy(MA[Z].VG, newabteilungsleiterchar);

	//speichernma(MA);
	
	for (Z = 0; Z < 100; Z++) {
		int a = Z;
		if (MA[a].NR = nrint) {
	//	//	fprintf(fpma, "%i\n", nrint);
	//		
			strcpy(MA[a].VNA, newvnamechar);
			fprintf(fpma, "%s\n", MA[a].VNA);
	
	//		fprintf(fpma, "%s\n", MA[Z].VNA);
	//		/*fprintf(fpma, "%s\n", newnamechar);
	//		fprintf(fpma, "%s\n", newmobilchar);
	//		fprintf(fpma, "%s\n", newfestnetzchar);
	//		fprintf(fpma, "%s\n", newmailchar);
	//		fprintf(fpma, "%s\n", newstrchar);
	//		fprintf(fpma, "%s\n", newplzchar);
	//		fprintf(fpma, "%s\n", newortchar);
	//		fprintf(fpma, "%s\n", newabteilungchar);
	//		fprintf(fpma, "%s\n", newabteilungsleiterchar);*/
	//		



		}
	}


	fclose(fpma);

	//for (int Z = 0; Z < 100; Z++) {
	//	if (Z == x) {

	//		

	//		 MA[Z].VNA = newvnamechar;
	//	}
	//}

	//speichernma(MA);
	
		//FILE *fpma;
		//int Z;


		//fpma = fopen("Mitarbeiter.txt", "w");
		//if (fpma == NULL) {
		//	printf("Datei konnte nicht ge%cffnet werden", 148);
		//}
		//else {

		//	for (Z = 1; Z < 102; Z++) {

		//		if (MA[Z].NR == Z) { //Vorteil fprintf geschriebene Datei auch ohne Programm lesbar
		//			fprintf(fpma, "%i\n", Z);
		//			fprintf(fpma, "%s\n", MA[Z].NA);
		//			fprintf(fpma, "%s\n", newvnamechar);
		//			fprintf(fpma, "%s\n", MA[Z].EM);
		//			fprintf(fpma, "%s\n", MA[Z].EJ);
		//			fprintf(fpma, "%s\n", MA[Z].STR);
		//			fprintf(fpma, "%s\n", MA[Z].HNR);
		//			fprintf(fpma, "%s\n", MA[Z].POST);
		//			fprintf(fpma, "%s\n", MA[Z].ORT);
		//			fprintf(fpma, "%s\n", MA[Z].MNR);
		//			fprintf(fpma, "%s\n", MA[Z].FNR);
		//			fprintf(fpma, "%s\n", MA[Z].mail);
		//			fprintf(fpma, "%s\n", MA[Z].AB);
		//			fprintf(fpma, "%s\n", MA[Z].VG);
		//		}

		//	}
		//}
		//fclose(fpma);
	




	//ändern-knopf
	//gcnew String(MA[i].VNA)
	//Mitarb MA[100];
	//String^ newname = textBox2->Text;
	//speichernma(MA);
	//MA[i].VNA = newname;
}

};
}

#endif
