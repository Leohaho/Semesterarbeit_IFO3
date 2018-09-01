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

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Art;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Inhalt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label7;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Art = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Inhalt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->textBox2->Location = System::Drawing::Point(121, 167);
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
			this->textBox3->Location = System::Drawing::Point(121, 189);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
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
			this->label2->Location = System::Drawing::Point(2, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Nummer:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Anzeige des geänderten Mitarbeiters/der Abteilung";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(121, 9);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(74, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Mitarbeiter";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(192, 9);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(107, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Abteilung + Leiter";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(2, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Art der Änderung:";
			// 
			// Datenändern
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 355);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
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
		//initData();

		//Mitarbeiter ändern
		if (radioButton1->Checked == true) {

			if (textBox1->Text->Length == 0) {
				MessageBox::Show("Es wurde keine Nummer eingegeben!");
			}
			else {
				String^ nrstring = textBox1->Text;
				int nrint = int::Parse(nrstring);

				Mitarb MA[100];
				readma(MA);
				for (i = 0; i < 100; i++) {
					if (MA[i].NR == nrint && MA[i].NR == i) { // erweiterte Abfrage um ausgabe durch daten im Speicher zu verhindern
						//MessageBox::Show("Datensatz gefunden!"); // für Testzwecke
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
						String^ eintritsmonat = gcnew String(MA[i].EM);
						String^ eintritsjahr = gcnew String(MA[i].EJ);


						dataGridView1->Rows->Add("Nummer", i);		//0
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
						dataGridView1->Rows->Add("Eintrittsmonat", eintritsmonat);
						dataGridView1->Rows->Add("Eintrittsjahr", eintritsjahr);

						speichernma(MA);
					}
					//else { MessageBox::Show("Es wurde kein Datensatz gefunden!"); }
					;

				}
			}
		}
		//Abteilung + Leiter ändern
		else if (radioButton2->Checked == true) {//ABeteilung und Leiter müssen Gleichzeitig eingelsen werden für Posiisiton in Datei.
												 // Abteilung
			if (textBox1->Text->Length == 0) {
				MessageBox::Show("Es wurde keine Nummer eingegeben!");
			}
			else {
				String^ nrstring = textBox1->Text;
				int nrint = int::Parse(nrstring);

				ABT AT[100];
				ABL AL[100];
				readal(AT, AL);


				for (i = 0; i < 100; i++) {
					if (AT[i].ID == nrint && AT[i].ID == i) { // erweiterte Abfrage um ausgabe durch daten im Speicher zu verhindern
						//MessageBox::Show("erfolg"); // für Testzwecke
													//Abteilung
						String^ abteilungname = gcnew String(AT[i].FA);
						String^ abteilungstandort = gcnew String(AT[i].ST);
						String^ abteilungstr = gcnew String(AT[i].STR);
						String^ abteilunghnr = gcnew String(AT[i].HNR);
						String^ abteilungpost = gcnew String(AT[i].POST);
						String^ abteilungort = gcnew String(AT[i].ORT);
						String^ abteilungleiter = gcnew String(AT[i].ABL);
						//Leiter
						String^ leitername = gcnew String(AL[i].NA);
						String^ leitervname = gcnew String(AL[i].VNA);
						String^ leiterabteilung = gcnew String(AL[i].AB);
						String^ leitermnr = gcnew String(AL[i].MNR);
						String^ leiterfestnetz = gcnew String(AL[i].FNR);
						String^ leitermail = gcnew String(AL[i].mail);
						String^ leiterstrasse = gcnew String(AL[i].STR);
						String^ leiterhnr = gcnew String(AL[i].HNR);
						String^ leiterpost = gcnew String(AL[i].POST);
						String^ leiterort = gcnew String(AL[i].ORT);


						//Abteilung
						dataGridView1->Rows->Add("Nummer", i);						//0
						dataGridView1->Rows->Add("Firma Name", abteilungname);		//1
						dataGridView1->Rows->Add("Standort", abteilungstandort);	//2
						dataGridView1->Rows->Add("Straße", abteilungstr);			//3
						dataGridView1->Rows->Add("Hausnummer", abteilunghnr);		//4
						dataGridView1->Rows->Add("Postleitzahl", abteilungpost);	//5
						dataGridView1->Rows->Add("Ort", abteilungort);				//6
						dataGridView1->Rows->Add("Abteilungsleiter", abteilungleiter);	//7
																						//Leiter
						dataGridView1->Rows->Add("Name Leiter", leitername);		//8
						dataGridView1->Rows->Add("Leiter Vorname", leitervname);	//9
						dataGridView1->Rows->Add("Abteilung", leiterabteilung);		//10
						dataGridView1->Rows->Add("Mobil", leitermnr);				//11
						dataGridView1->Rows->Add("Festnetz", leiterfestnetz);		//12
						dataGridView1->Rows->Add("Mail", leitermail);				//13
						dataGridView1->Rows->Add("Straße", leiterstrasse);			//14
						dataGridView1->Rows->Add("Hausnummer", leiterhnr);			//15
						dataGridView1->Rows->Add("Postleitzahl", leiterpost);		//16
						dataGridView1->Rows->Add("Ort", leiterort);					//17

						speichernal(AT, AL);

					}
				}
			}
		}// IF RB2 zu
		else MessageBox::Show("Es wurde nicht ausgewählt, was geändert werden soll!");
	}




	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


		//neue Daten einlesen 
		//Mitarbeiter
		/*	if (dataGridView1->Rows->Count == 0) {
		MessageBox::Show("Es wurden keine Daten eingelesen!");
		}
		else*/
		if (radioButton1->Checked == true) {
			/*	if (dataGridView1->Rows->Count == 0) {
			MessageBox::Show("Es wurden keine Daten eingelesen!");
			}
			else {*/
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
			String^ neweintritsmonat = dataGridView1->Rows[12]->Cells[1]->Value->ToString();
			String^ neweintritsjahr = dataGridView1->Rows[13]->Cells[1]->Value->ToString();

			//testfelder

			textBox2->Text = newnr;

			textBox3->Text = newvname + " " + newname;


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
			char neweintritsmonatchar[20];
			char neweintritsjahrchar[20];

			String^ nrstring = textBox1->Text;
			int nrint = int::Parse(nrstring);

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
			sprintf(neweintritsmonatchar, "%s", neweintritsmonat);
			sprintf(neweintritsjahrchar, "%s", neweintritsjahr);


			FILE *fpma;
			fpma = fopen("Mitarbeiter.txt", "w");
			// abfrage korrektes datei öffnen.
			if (fpma == NULL) {
				MessageBox::Show("Fehler, Datei konnte nicht geöffnet werden");
			}
			else {
				// statt Z als MA.Nr x genommen. Z wurde nur initalisiert x wurde als bearbeiteter MA festgelegt (Zeile 355)

				strcpy(MA[x].VNA, newvnamechar);
				strcpy(MA[x].NA, newnamechar);
				strcpy(MA[x].MNR, newmobilchar);
				strcpy(MA[x].FNR, newfestnetzchar);

				strcpy(MA[x].mail, newvnamechar);			//nötig? abfrage ob Name bzw. Vorname geändert, wenn ja mail adresse anpassen.
				strcat(MA[x].mail, ".");
				strcat(MA[x].mail, newnamechar);
				strcat(MA[x].mail, "@daddeldu.com");

				strcpy(MA[x].STR, newstrchar);
				strcpy(MA[x].POST, newplzchar);
				strcpy(MA[x].ORT, newortchar);
				strcpy(MA[x].AB, newabteilungchar);
				strcpy(MA[x].VG, newabteilungsleiterchar);
				strcpy(MA[x].EM, neweintritsmonatchar);
				strcpy(MA[x].EJ, neweintritsjahrchar);
				// Eintritsmonat-Jahr fehlen?

				for (int Z = 0; Z < 100; Z++) {
					if (MA[Z].NR == Z) {
						// strcpy rausgenommen, da er sonst für jede MA Nummer den geänderten Namen festsetzt
						// new.... gegen MA[Z].... getauscht da sich new... nicht ändert durch die for schleife
						// Überflüssige auskommentierte funktionen gelöscht
						fprintf(fpma, "%i\n", Z);
						fprintf(fpma, "%s\n", MA[Z].NA);
						fprintf(fpma, "%s\n", MA[Z].VNA);
						fprintf(fpma, "%s\n", MA[Z].EM);
						fprintf(fpma, "%s\n", MA[Z].EJ);
						fprintf(fpma, "%s\n", MA[Z].STR);
						fprintf(fpma, "%s\n", MA[Z].HNR);
						fprintf(fpma, "%s\n", MA[Z].POST);
						fprintf(fpma, "%s\n", MA[Z].ORT);
						fprintf(fpma, "%s\n", MA[Z].MNR);
						fprintf(fpma, "%s\n", MA[Z].FNR);
						fprintf(fpma, "%s\n", MA[Z].mail);
						fprintf(fpma, "%s\n", MA[Z].AB);
						fprintf(fpma, "%s\n", MA[Z].VG);

					}; //Semicolon gesetzt, keine Ahnung ob nötig ^^
				}
				// Zeilen kommentiert bzw. geändert von Leo: 299;399;418-462
				fclose(fpma);

			}

		}
		//Abteilung und Leiter
		else if (radioButton2->Checked == true) {

			//Abteilung
			String^ newnr = dataGridView1->Rows[0]->Cells[1]->Value->ToString();
			int x = int::Parse(newnr);
			String^ newabteilungname = dataGridView1->Rows[1]->Cells[1]->Value->ToString();
			String^ newabteilungstandort = dataGridView1->Rows[2]->Cells[1]->Value->ToString();
			String^ newabteilungstr = dataGridView1->Rows[3]->Cells[1]->Value->ToString();
			String^ newabteilunghnr = dataGridView1->Rows[4]->Cells[1]->Value->ToString();
			String^ newabteilungpost = dataGridView1->Rows[5]->Cells[1]->Value->ToString();
			String^ newabteilungort = dataGridView1->Rows[6]->Cells[1]->Value->ToString();
			String^ newabteilungleiter = dataGridView1->Rows[7]->Cells[1]->Value->ToString();
			//Leiter
			String^ newleitername = dataGridView1->Rows[8]->Cells[1]->Value->ToString();
			String^ newleitervname = dataGridView1->Rows[9]->Cells[1]->Value->ToString();
			String^ newleiterabteilung = dataGridView1->Rows[10]->Cells[1]->Value->ToString();
			String^ newleitermnr = dataGridView1->Rows[11]->Cells[1]->Value->ToString();
			String^ newleiterfestnetz = dataGridView1->Rows[12]->Cells[1]->Value->ToString();
			String^ newleitermail = dataGridView1->Rows[13]->Cells[1]->Value->ToString();
			String^ newleiterstrasse = dataGridView1->Rows[14]->Cells[1]->Value->ToString();
			String^ newleiterhnr = dataGridView1->Rows[15]->Cells[1]->Value->ToString();
			String^ newleiterpost = dataGridView1->Rows[16]->Cells[1]->Value->ToString();
			String^ newleiterort = dataGridView1->Rows[17]->Cells[1]->Value->ToString();


			//TESTFELDER
			textBox2->Text = newnr;
			textBox3->Text = newabteilungname;

			ABT AT[100];
			ABL AL[100];
			readal(AT, AL);

			//Abteilung
			char newabteilungnamechar[20];
			char newabteilungstandortchar[20];
			char newabteilungstrchar[20];
			char newabteilunghnrchar[20];
			char newabteilungpostchar[20];
			char newabteilungortchar[20];
			char newabteilungleiterchar[20];
			//Leiter
			char newleiternamechar[20];
			char newleitervnamechar[20];
			char newleiterabteilungchar[20];
			char newleitermnrchar[20];
			char newleiterfestnetzchar[20];
			char newleitermailchar[20];
			char newleiterstrassechar[20];
			char newleiterhnrchar[20];
			char newleiterpostchar[20];
			char newleiterortchar[20];
			//Abteilung
			sprintf(newabteilungnamechar, "%s", newabteilungname);
			sprintf(newabteilungstandortchar, "%s", newabteilungstandort);
			sprintf(newabteilungstrchar, "%s", newabteilungstr);
			sprintf(newabteilunghnrchar, "%s", newabteilunghnr);
			sprintf(newabteilungpostchar, "%s", newabteilungpost);
			sprintf(newabteilungortchar, "%s", newabteilungort);
			sprintf(newabteilungleiterchar, "%s", newabteilungleiter);
			//Leiter
			sprintf(newleiternamechar, "%s", newleitername);
			sprintf(newleitervnamechar, "%s", newleitervname);
			sprintf(newleiterabteilungchar, "%s", newabteilungname);
			sprintf(newleitermnrchar, "%s", newleitermnr);
			sprintf(newleiterfestnetzchar, "%s", newleiterfestnetz);
			sprintf(newleitermailchar, "%s", newleitermail);
			sprintf(newleiterstrassechar, "%s", newleiterstrasse);
			sprintf(newleiterhnrchar, "%s", newleiterhnr);
			sprintf(newleiterpostchar, "%s", newleiterpost);
			sprintf(newleiterortchar, "%s", newleiterort);


			//noch zu bearbeiten
			FILE *fpal;
			fpal = fopen("Abteilung.txt", "w");
			// abfrage korrektes datei öffnen.
			if (fpal == NULL) {
				MessageBox::Show("Fehler, Datei konnte nicht geöffnet werden");
			}
			else {
				//abteilung
				strcpy(AT[x].FA, newabteilungnamechar);
				strcpy(AT[x].ST, newabteilungstandortchar);
				strcpy(AT[x].STR, newabteilungstrchar);
				strcpy(AT[x].HNR, newabteilunghnrchar);
				strcpy(AT[x].POST, newabteilungpostchar);
				strcpy(AT[x].ORT, newabteilungortchar);

				strcpy(AT[x].ABL, newleitervnamechar);
				//strcpy(AT[x].ABL, " ");
				strcat(AT[x].ABL, newleiternamechar);


				//leiter
				strcpy(AL[x].NA, newleiternamechar);
				strcpy(AL[x].VNA, newleitervnamechar);
				strcpy(AL[x].AB, newleiterabteilungchar);
				strcpy(AL[x].MNR, newleitermnrchar);
				strcpy(AL[x].FNR, newleiterfestnetzchar);

				//strcpy(AL[x].mail, newleitermailchar);
				strcpy(AL[x].mail, newleitervnamechar);			//nötig? abfrage ob Name bzw. Vorname geändert, wenn ja mail adresse anpassen.
				strcat(AL[x].mail, ".");
				strcat(AL[x].mail, newleiternamechar);
				strcat(AL[x].mail, "@daddeldu.com");

				strcpy(AL[x].STR, newleiterstrassechar);
				strcpy(AL[x].HNR, newleiterhnrchar);
				strcpy(AL[x].POST, newleiterpostchar);
				strcpy(AL[x].ORT, newleiterortchar);

				for (int Z = 0; Z < 100; Z++) {
					if (AT[Z].ID == Z) {
						//Abteilung
						fprintf(fpal, "%i\n", Z);
						fprintf(fpal, "%s\n", AT[Z].FA);
						fprintf(fpal, "%s\n", AT[Z].ST);
						fprintf(fpal, "%s\n", AT[Z].STR);
						fprintf(fpal, "%s\n", AT[Z].HNR);
						fprintf(fpal, "%s\n", AT[Z].POST);
						fprintf(fpal, "%s\n", AT[Z].ORT);
						fprintf(fpal, "%s\n", AT[Z].ABL);
						//Leiter
						fprintf(fpal, "%s\n", AL[Z].NA);
						fprintf(fpal, "%s\n", AL[Z].VNA);
						fprintf(fpal, "%s\n", AL[Z].AB);
						fprintf(fpal, "%s\n", AL[Z].MNR);
						fprintf(fpal, "%s\n", AL[Z].FNR);
						fprintf(fpal, "%s\n", AL[Z].mail);
						fprintf(fpal, "%s\n", AL[Z].STR);
						fprintf(fpal, "%s\n", AL[Z].HNR);
						fprintf(fpal, "%s\n", AL[Z].POST);
						fprintf(fpal, "%s\n", AL[Z].ORT);

					};//Semicolon gesetzt, keine Ahnung ob nötig ^^
				}


			}//else zu
			fclose(fpal);
		}// IF RB2 ZU
		else MessageBox::Show("Es wurde nicht ausgewählt, was geändert werden soll!");
	}

	};
}

#endif
