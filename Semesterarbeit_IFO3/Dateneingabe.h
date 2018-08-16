#ifndef Dateneingabe_H
#define Dateneingabe_H

#pragma once
#include "GlobalClass.h"
#include "Daten.h"

void read_eingabe();
void speichern_eingabe();
void ausgabe_test(char *test);
void datensatz_laden_mitarbeiter(char *laden_na, char *laden_vna, char *laden_em, char *laden_ej, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_mnr, char *laden_fnr, char *laden_mail, char *laden_ab, char *laden_vg, char *laden_nr, int zähler);
void datensatz_speichern_mitarbeiter(char *speichern_na, char *speichern_vna, char *speichern_em, char *speichern_ej, char *speichern_str, char *speichern_hnr, char *speichern_post, char *speichern_ort, char *speichern_mnr, char *speichern_fnr, char *speichern_mail, char *speichern_ab, char *speichern_vg, char *speichern_nr, int specihern_zähler);
void datensatz_laden_abteilung(char *laden_na, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_abl, char *laden_nr, int laden_zähler);

namespace Semesterarbeit_IFO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;


	/// <summary>
	/// Zusammenfassung für Dateneingabe
	/// </summary>
	public ref class Dateneingabe : public System::Windows::Forms::Form
	{
	public:
		Dateneingabe(void)
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
		~Dateneingabe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_speichern;
	private: System::Windows::Forms::Button^  btn_abbrechen;
	protected:

	private: System::Windows::Forms::Label^  lbl_mitarbeiternummer;
	private: System::Windows::Forms::TextBox^  txt_mitarbeiternummer;
	private: System::Windows::Forms::Label^  lbl_vorname;
	private: System::Windows::Forms::TextBox^  txt_vorname;
	private: System::Windows::Forms::Label^  lbl_name;
	private: System::Windows::Forms::TextBox^  txt_name;


	private: System::Windows::Forms::Label^  lbl_mitarbeitertyp;
	private: System::Windows::Forms::RadioButton^  rdo_mitarbeiter;
	private: System::Windows::Forms::RadioButton^  rdo_abteilungsleiter;
	private: System::Windows::Forms::RadioButton^  rdo_abteilung;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ComboBox^  cbx_monat;
	private: System::Windows::Forms::ComboBox^  cbx_jahr;


	private: System::Windows::Forms::Label^  lbl_eintrittsdatum;
	private: System::Windows::Forms::Label^  lbl_monat;
	private: System::Windows::Forms::Label^  lbl_jahr;
	private: System::Windows::Forms::Label^  lbl_strasse;
	private: System::Windows::Forms::TextBox^  txt_strasse;
	private: System::Windows::Forms::Label^  lbl_hausnummer;
	private: System::Windows::Forms::TextBox^  txt_hausnummer;
	private: System::Windows::Forms::Label^  lbl_postleitzahl;
	private: System::Windows::Forms::TextBox^  txt_postleitzahl;
	private: System::Windows::Forms::Label^  lbl_ort;
	private: System::Windows::Forms::TextBox^  txt_wohnort;
	private: System::Windows::Forms::Label^  lbl_festnetznummer;
	private: System::Windows::Forms::Label^  lbl_mobilnummer;
	private: System::Windows::Forms::TextBox^  txt_festnetznummer;
	private: System::Windows::Forms::TextBox^  txt_mobilnummer;
	private: System::Windows::Forms::Label^  lbl_abteilungsid;
	private: System::Windows::Forms::Label^  lbl_abteilungsname;
	private: System::Windows::Forms::TextBox^  txt_abteilungsname;
	private: System::Windows::Forms::TextBox^  txt_abteilungsid;
	private: System::Windows::Forms::Button^  btn_ausgabe;

	private: System::Windows::Forms::Label^  lbl_error_mitarbeiternr;
	private: System::Windows::Forms::Label^  lbl_error_abteilungsid;








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
			this->btn_speichern = (gcnew System::Windows::Forms::Button());
			this->btn_abbrechen = (gcnew System::Windows::Forms::Button());
			this->lbl_mitarbeiternummer = (gcnew System::Windows::Forms::Label());
			this->txt_mitarbeiternummer = (gcnew System::Windows::Forms::TextBox());
			this->lbl_vorname = (gcnew System::Windows::Forms::Label());
			this->txt_vorname = (gcnew System::Windows::Forms::TextBox());
			this->lbl_name = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->lbl_mitarbeitertyp = (gcnew System::Windows::Forms::Label());
			this->rdo_mitarbeiter = (gcnew System::Windows::Forms::RadioButton());
			this->rdo_abteilungsleiter = (gcnew System::Windows::Forms::RadioButton());
			this->rdo_abteilung = (gcnew System::Windows::Forms::RadioButton());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->cbx_monat = (gcnew System::Windows::Forms::ComboBox());
			this->cbx_jahr = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_eintrittsdatum = (gcnew System::Windows::Forms::Label());
			this->lbl_monat = (gcnew System::Windows::Forms::Label());
			this->lbl_jahr = (gcnew System::Windows::Forms::Label());
			this->lbl_strasse = (gcnew System::Windows::Forms::Label());
			this->txt_strasse = (gcnew System::Windows::Forms::TextBox());
			this->lbl_hausnummer = (gcnew System::Windows::Forms::Label());
			this->txt_hausnummer = (gcnew System::Windows::Forms::TextBox());
			this->lbl_postleitzahl = (gcnew System::Windows::Forms::Label());
			this->txt_postleitzahl = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ort = (gcnew System::Windows::Forms::Label());
			this->txt_wohnort = (gcnew System::Windows::Forms::TextBox());
			this->lbl_festnetznummer = (gcnew System::Windows::Forms::Label());
			this->lbl_mobilnummer = (gcnew System::Windows::Forms::Label());
			this->txt_festnetznummer = (gcnew System::Windows::Forms::TextBox());
			this->txt_mobilnummer = (gcnew System::Windows::Forms::TextBox());
			this->lbl_abteilungsid = (gcnew System::Windows::Forms::Label());
			this->lbl_abteilungsname = (gcnew System::Windows::Forms::Label());
			this->txt_abteilungsname = (gcnew System::Windows::Forms::TextBox());
			this->txt_abteilungsid = (gcnew System::Windows::Forms::TextBox());
			this->btn_ausgabe = (gcnew System::Windows::Forms::Button());
			this->lbl_error_mitarbeiternr = (gcnew System::Windows::Forms::Label());
			this->lbl_error_abteilungsid = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_speichern
			// 
			this->btn_speichern->Location = System::Drawing::Point(34, 400);
			this->btn_speichern->Name = L"btn_speichern";
			this->btn_speichern->Size = System::Drawing::Size(101, 25);
			this->btn_speichern->TabIndex = 0;
			this->btn_speichern->Text = L"Speichern";
			this->btn_speichern->UseVisualStyleBackColor = true;
			this->btn_speichern->Click += gcnew System::EventHandler(this, &Dateneingabe::button1_Click);
			// 
			// btn_abbrechen
			// 
			this->btn_abbrechen->Location = System::Drawing::Point(456, 400);
			this->btn_abbrechen->Name = L"btn_abbrechen";
			this->btn_abbrechen->Size = System::Drawing::Size(101, 25);
			this->btn_abbrechen->TabIndex = 1;
			this->btn_abbrechen->Text = L"Abbrechen";
			this->btn_abbrechen->UseVisualStyleBackColor = true;
			this->btn_abbrechen->Click += gcnew System::EventHandler(this, &Dateneingabe::button2_Click);
			// 
			// lbl_mitarbeiternummer
			// 
			this->lbl_mitarbeiternummer->AutoSize = true;
			this->lbl_mitarbeiternummer->Location = System::Drawing::Point(12, 97);
			this->lbl_mitarbeiternummer->Name = L"lbl_mitarbeiternummer";
			this->lbl_mitarbeiternummer->Size = System::Drawing::Size(93, 13);
			this->lbl_mitarbeiternummer->TabIndex = 2;
			this->lbl_mitarbeiternummer->Text = L"Mitarbeiternummer";
			// 
			// txt_mitarbeiternummer
			// 
			this->txt_mitarbeiternummer->Location = System::Drawing::Point(112, 93);
			this->txt_mitarbeiternummer->Name = L"txt_mitarbeiternummer";
			this->txt_mitarbeiternummer->Size = System::Drawing::Size(100, 20);
			this->txt_mitarbeiternummer->TabIndex = 3;
			this->txt_mitarbeiternummer->TextChanged += gcnew System::EventHandler(this, &Dateneingabe::txt_mitarbeiternummer_TextChanged);
			// 
			// lbl_vorname
			// 
			this->lbl_vorname->AutoSize = true;
			this->lbl_vorname->Location = System::Drawing::Point(12, 149);
			this->lbl_vorname->Name = L"lbl_vorname";
			this->lbl_vorname->Size = System::Drawing::Size(49, 13);
			this->lbl_vorname->TabIndex = 4;
			this->lbl_vorname->Text = L"Vorname";
			// 
			// txt_vorname
			// 
			this->txt_vorname->Location = System::Drawing::Point(112, 145);
			this->txt_vorname->Name = L"txt_vorname";
			this->txt_vorname->Size = System::Drawing::Size(100, 20);
			this->txt_vorname->TabIndex = 5;
			// 
			// lbl_name
			// 
			this->lbl_name->AutoSize = true;
			this->lbl_name->Location = System::Drawing::Point(12, 175);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(35, 13);
			this->lbl_name->TabIndex = 6;
			this->lbl_name->Text = L"Name";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(112, 171);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(100, 20);
			this->txt_name->TabIndex = 7;
			// 
			// lbl_mitarbeitertyp
			// 
			this->lbl_mitarbeitertyp->AutoSize = true;
			this->lbl_mitarbeitertyp->Location = System::Drawing::Point(12, 37);
			this->lbl_mitarbeitertyp->Name = L"lbl_mitarbeitertyp";
			this->lbl_mitarbeitertyp->Size = System::Drawing::Size(139, 13);
			this->lbl_mitarbeitertyp->TabIndex = 8;
			this->lbl_mitarbeitertyp->Text = L"Was möchten Sie erstellen\?";
			// 
			// rdo_mitarbeiter
			// 
			this->rdo_mitarbeiter->AutoSize = true;
			this->rdo_mitarbeiter->Checked = true;
			this->rdo_mitarbeiter->Location = System::Drawing::Point(188, 35);
			this->rdo_mitarbeiter->Name = L"rdo_mitarbeiter";
			this->rdo_mitarbeiter->Size = System::Drawing::Size(74, 17);
			this->rdo_mitarbeiter->TabIndex = 9;
			this->rdo_mitarbeiter->TabStop = true;
			this->rdo_mitarbeiter->Text = L"Mitarbeiter";
			this->rdo_mitarbeiter->UseVisualStyleBackColor = true;
			this->rdo_mitarbeiter->CheckedChanged += gcnew System::EventHandler(this, &Dateneingabe::rdo_mitarbeiter_CheckedChanged);
			// 
			// rdo_abteilungsleiter
			// 
			this->rdo_abteilungsleiter->AutoSize = true;
			this->rdo_abteilungsleiter->Location = System::Drawing::Point(311, 35);
			this->rdo_abteilungsleiter->Name = L"rdo_abteilungsleiter";
			this->rdo_abteilungsleiter->Size = System::Drawing::Size(96, 17);
			this->rdo_abteilungsleiter->TabIndex = 10;
			this->rdo_abteilungsleiter->TabStop = true;
			this->rdo_abteilungsleiter->Text = L"Abteilungsleiter";
			this->rdo_abteilungsleiter->UseVisualStyleBackColor = true;
			this->rdo_abteilungsleiter->CheckedChanged += gcnew System::EventHandler(this, &Dateneingabe::rdo_abteilungsleiter_CheckedChanged);
			// 
			// rdo_abteilung
			// 
			this->rdo_abteilung->AutoSize = true;
			this->rdo_abteilung->Location = System::Drawing::Point(456, 35);
			this->rdo_abteilung->Name = L"rdo_abteilung";
			this->rdo_abteilung->Size = System::Drawing::Size(69, 17);
			this->rdo_abteilung->TabIndex = 11;
			this->rdo_abteilung->TabStop = true;
			this->rdo_abteilung->Text = L"Abteilung";
			this->rdo_abteilung->UseVisualStyleBackColor = true;
			this->rdo_abteilung->CheckedChanged += gcnew System::EventHandler(this, &Dateneingabe::rdo_abteilung_CheckedChanged);
			// 
			// cbx_monat
			// 
			this->cbx_monat->FormattingEnabled = true;
			this->cbx_monat->Location = System::Drawing::Point(112, 353);
			this->cbx_monat->Name = L"cbx_monat";
			this->cbx_monat->Size = System::Drawing::Size(51, 21);
			this->cbx_monat->TabIndex = 12;
			// 
			// cbx_jahr
			// 
			this->cbx_jahr->FormattingEnabled = true;
			this->cbx_jahr->Location = System::Drawing::Point(210, 353);
			this->cbx_jahr->Name = L"cbx_jahr";
			this->cbx_jahr->Size = System::Drawing::Size(51, 21);
			this->cbx_jahr->TabIndex = 13;
			// 
			// lbl_eintrittsdatum
			// 
			this->lbl_eintrittsdatum->AutoSize = true;
			this->lbl_eintrittsdatum->Location = System::Drawing::Point(12, 357);
			this->lbl_eintrittsdatum->Name = L"lbl_eintrittsdatum";
			this->lbl_eintrittsdatum->Size = System::Drawing::Size(70, 13);
			this->lbl_eintrittsdatum->TabIndex = 14;
			this->lbl_eintrittsdatum->Text = L"Eintrittsdatum";
			// 
			// lbl_monat
			// 
			this->lbl_monat->AutoSize = true;
			this->lbl_monat->Location = System::Drawing::Point(168, 357);
			this->lbl_monat->Name = L"lbl_monat";
			this->lbl_monat->Size = System::Drawing::Size(37, 13);
			this->lbl_monat->TabIndex = 15;
			this->lbl_monat->Text = L"Monat";
			// 
			// lbl_jahr
			// 
			this->lbl_jahr->AutoSize = true;
			this->lbl_jahr->Location = System::Drawing::Point(266, 357);
			this->lbl_jahr->Name = L"lbl_jahr";
			this->lbl_jahr->Size = System::Drawing::Size(27, 13);
			this->lbl_jahr->TabIndex = 16;
			this->lbl_jahr->Text = L"Jahr";
			// 
			// lbl_strasse
			// 
			this->lbl_strasse->AutoSize = true;
			this->lbl_strasse->Location = System::Drawing::Point(12, 201);
			this->lbl_strasse->Name = L"lbl_strasse";
			this->lbl_strasse->Size = System::Drawing::Size(38, 13);
			this->lbl_strasse->TabIndex = 17;
			this->lbl_strasse->Text = L"Straße";
			// 
			// txt_strasse
			// 
			this->txt_strasse->Location = System::Drawing::Point(112, 197);
			this->txt_strasse->Name = L"txt_strasse";
			this->txt_strasse->Size = System::Drawing::Size(100, 20);
			this->txt_strasse->TabIndex = 18;
			// 
			// lbl_hausnummer
			// 
			this->lbl_hausnummer->AutoSize = true;
			this->lbl_hausnummer->Location = System::Drawing::Point(12, 227);
			this->lbl_hausnummer->Name = L"lbl_hausnummer";
			this->lbl_hausnummer->Size = System::Drawing::Size(69, 13);
			this->lbl_hausnummer->TabIndex = 19;
			this->lbl_hausnummer->Text = L"Hausnummer";
			// 
			// txt_hausnummer
			// 
			this->txt_hausnummer->Location = System::Drawing::Point(112, 223);
			this->txt_hausnummer->Name = L"txt_hausnummer";
			this->txt_hausnummer->Size = System::Drawing::Size(100, 20);
			this->txt_hausnummer->TabIndex = 20;
			// 
			// lbl_postleitzahl
			// 
			this->lbl_postleitzahl->AutoSize = true;
			this->lbl_postleitzahl->Location = System::Drawing::Point(12, 253);
			this->lbl_postleitzahl->Name = L"lbl_postleitzahl";
			this->lbl_postleitzahl->Size = System::Drawing::Size(60, 13);
			this->lbl_postleitzahl->TabIndex = 21;
			this->lbl_postleitzahl->Text = L"Postleitzahl";
			// 
			// txt_postleitzahl
			// 
			this->txt_postleitzahl->Location = System::Drawing::Point(112, 249);
			this->txt_postleitzahl->Name = L"txt_postleitzahl";
			this->txt_postleitzahl->Size = System::Drawing::Size(100, 20);
			this->txt_postleitzahl->TabIndex = 22;
			// 
			// lbl_ort
			// 
			this->lbl_ort->AutoSize = true;
			this->lbl_ort->Location = System::Drawing::Point(12, 279);
			this->lbl_ort->Name = L"lbl_ort";
			this->lbl_ort->Size = System::Drawing::Size(48, 13);
			this->lbl_ort->TabIndex = 23;
			this->lbl_ort->Text = L"Wohnort";
			// 
			// txt_wohnort
			// 
			this->txt_wohnort->Location = System::Drawing::Point(112, 275);
			this->txt_wohnort->Name = L"txt_wohnort";
			this->txt_wohnort->Size = System::Drawing::Size(100, 20);
			this->txt_wohnort->TabIndex = 24;
			// 
			// lbl_festnetznummer
			// 
			this->lbl_festnetznummer->AutoSize = true;
			this->lbl_festnetznummer->Location = System::Drawing::Point(12, 305);
			this->lbl_festnetznummer->Name = L"lbl_festnetznummer";
			this->lbl_festnetznummer->Size = System::Drawing::Size(84, 13);
			this->lbl_festnetznummer->TabIndex = 25;
			this->lbl_festnetznummer->Text = L"Festnetznummer";
			// 
			// lbl_mobilnummer
			// 
			this->lbl_mobilnummer->AutoSize = true;
			this->lbl_mobilnummer->Location = System::Drawing::Point(12, 331);
			this->lbl_mobilnummer->Name = L"lbl_mobilnummer";
			this->lbl_mobilnummer->Size = System::Drawing::Size(69, 13);
			this->lbl_mobilnummer->TabIndex = 26;
			this->lbl_mobilnummer->Text = L"Mobilnummer";
			// 
			// txt_festnetznummer
			// 
			this->txt_festnetznummer->Location = System::Drawing::Point(112, 301);
			this->txt_festnetznummer->Name = L"txt_festnetznummer";
			this->txt_festnetznummer->Size = System::Drawing::Size(100, 20);
			this->txt_festnetznummer->TabIndex = 27;
			// 
			// txt_mobilnummer
			// 
			this->txt_mobilnummer->Location = System::Drawing::Point(112, 327);
			this->txt_mobilnummer->Name = L"txt_mobilnummer";
			this->txt_mobilnummer->Size = System::Drawing::Size(100, 20);
			this->txt_mobilnummer->TabIndex = 28;
			// 
			// lbl_abteilungsid
			// 
			this->lbl_abteilungsid->AutoSize = true;
			this->lbl_abteilungsid->Location = System::Drawing::Point(12, 71);
			this->lbl_abteilungsid->Name = L"lbl_abteilungsid";
			this->lbl_abteilungsid->Size = System::Drawing::Size(70, 13);
			this->lbl_abteilungsid->TabIndex = 29;
			this->lbl_abteilungsid->Text = L"Abteilungs ID";
			this->lbl_abteilungsid->Visible = false;
			// 
			// lbl_abteilungsname
			// 
			this->lbl_abteilungsname->AutoSize = true;
			this->lbl_abteilungsname->Location = System::Drawing::Point(12, 123);
			this->lbl_abteilungsname->Name = L"lbl_abteilungsname";
			this->lbl_abteilungsname->Size = System::Drawing::Size(82, 13);
			this->lbl_abteilungsname->TabIndex = 30;
			this->lbl_abteilungsname->Text = L"Abteilungsname";
			// 
			// txt_abteilungsname
			// 
			this->txt_abteilungsname->Location = System::Drawing::Point(112, 119);
			this->txt_abteilungsname->Name = L"txt_abteilungsname";
			this->txt_abteilungsname->Size = System::Drawing::Size(100, 20);
			this->txt_abteilungsname->TabIndex = 31;
			// 
			// txt_abteilungsid
			// 
			this->txt_abteilungsid->Location = System::Drawing::Point(112, 67);
			this->txt_abteilungsid->Name = L"txt_abteilungsid";
			this->txt_abteilungsid->Size = System::Drawing::Size(100, 20);
			this->txt_abteilungsid->TabIndex = 32;
			this->txt_abteilungsid->Visible = false;
			this->txt_abteilungsid->TextChanged += gcnew System::EventHandler(this, &Dateneingabe::txt_abteilungsid_TextChanged);
			// 
			// btn_ausgabe
			// 
			this->btn_ausgabe->Location = System::Drawing::Point(246, 400);
			this->btn_ausgabe->Name = L"btn_ausgabe";
			this->btn_ausgabe->Size = System::Drawing::Size(101, 25);
			this->btn_ausgabe->TabIndex = 33;
			this->btn_ausgabe->Text = L"Ausgabe";
			this->btn_ausgabe->UseVisualStyleBackColor = true;
			this->btn_ausgabe->Click += gcnew System::EventHandler(this, &Dateneingabe::button1_Click_1);
			// 
			// lbl_error_mitarbeiternr
			// 
			this->lbl_error_mitarbeiternr->AutoSize = true;
			this->lbl_error_mitarbeiternr->ForeColor = System::Drawing::Color::Red;
			this->lbl_error_mitarbeiternr->Location = System::Drawing::Point(246, 97);
			this->lbl_error_mitarbeiternr->Name = L"lbl_error_mitarbeiternr";
			this->lbl_error_mitarbeiternr->Size = System::Drawing::Size(147, 17);
			this->lbl_error_mitarbeiternr->TabIndex = 35;
			this->lbl_error_mitarbeiternr->Text = L"Mitarbeiternrnummer belegt!";
			this->lbl_error_mitarbeiternr->UseCompatibleTextRendering = true;
			this->lbl_error_mitarbeiternr->Visible = false;
			// 
			// lbl_error_abteilungsid
			// 
			this->lbl_error_abteilungsid->AutoSize = true;
			this->lbl_error_abteilungsid->ForeColor = System::Drawing::Color::Red;
			this->lbl_error_abteilungsid->Location = System::Drawing::Point(246, 71);
			this->lbl_error_abteilungsid->Name = L"lbl_error_abteilungsid";
			this->lbl_error_abteilungsid->Size = System::Drawing::Size(105, 13);
			this->lbl_error_abteilungsid->TabIndex = 36;
			this->lbl_error_abteilungsid->Text = L"Abteilungs ID belegt!";
			this->lbl_error_abteilungsid->Visible = false;
			// 
			// Dateneingabe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 454);
			this->Controls->Add(this->lbl_error_abteilungsid);
			this->Controls->Add(this->lbl_error_mitarbeiternr);
			this->Controls->Add(this->btn_ausgabe);
			this->Controls->Add(this->txt_abteilungsid);
			this->Controls->Add(this->txt_abteilungsname);
			this->Controls->Add(this->lbl_abteilungsname);
			this->Controls->Add(this->lbl_abteilungsid);
			this->Controls->Add(this->txt_mobilnummer);
			this->Controls->Add(this->txt_festnetznummer);
			this->Controls->Add(this->lbl_mobilnummer);
			this->Controls->Add(this->lbl_festnetznummer);
			this->Controls->Add(this->txt_wohnort);
			this->Controls->Add(this->lbl_ort);
			this->Controls->Add(this->txt_postleitzahl);
			this->Controls->Add(this->lbl_postleitzahl);
			this->Controls->Add(this->txt_hausnummer);
			this->Controls->Add(this->lbl_hausnummer);
			this->Controls->Add(this->txt_strasse);
			this->Controls->Add(this->lbl_strasse);
			this->Controls->Add(this->lbl_jahr);
			this->Controls->Add(this->lbl_monat);
			this->Controls->Add(this->lbl_eintrittsdatum);
			this->Controls->Add(this->cbx_jahr);
			this->Controls->Add(this->cbx_monat);
			this->Controls->Add(this->rdo_abteilung);
			this->Controls->Add(this->rdo_abteilungsleiter);
			this->Controls->Add(this->rdo_mitarbeiter);
			this->Controls->Add(this->lbl_mitarbeitertyp);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->lbl_name);
			this->Controls->Add(this->txt_vorname);
			this->Controls->Add(this->lbl_vorname);
			this->Controls->Add(this->txt_mitarbeiternummer);
			this->Controls->Add(this->lbl_mitarbeiternummer);
			this->Controls->Add(this->btn_abbrechen);
			this->Controls->Add(this->btn_speichern);
			this->Name = L"Dateneingabe";
			this->Text = L"Dateneingabe";
			this->Load += gcnew System::EventHandler(this, &Dateneingabe::Dateneingabe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Dateneingabe_Load(System::Object^  sender, System::EventArgs^  e) {

		read_eingabe();
	}
	//Beim laden des Fenster werden die Mitarbeiterdaten aus der Textdatei in die Variablen geladen
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		char speichern_na[20];
		char speichern_vna[20];
		char speichern_em[20];
		char speichern_ej[20];
		char speichern_str[20];
		char speichern_hnr[20];
		char speichern_post[20];
		char speichern_ort[20];
		char speichern_mnr[20];
		char speichern_fnr[20];
		char speichern_mail[20];
		char speichern_ab[20];
		char speichern_vg[20];
		char speichern_nr[20];

		String ^na;
		txt_name->Text = na;
		sprintf(speichern_na, "%s", na);

		String ^mitarbeiternummer = txt_mitarbeiternummer->Text;
		char text[20];
		sprintf(text, "%s", mitarbeiternummer);
		int speichern_zähler = atoi(text);


		datensatz_speichern_mitarbeiter(speichern_na, speichern_vna, speichern_em, speichern_ej, speichern_str, speichern_hnr, speichern_post, speichern_ort, speichern_mnr, speichern_fnr, speichern_mail, speichern_ab, speichern_vg, speichern_nr, speichern_zähler);

		speichern_eingabe();
		
	}
	//Bei drücken von Speichern werden die Variablen in der textdatei gespeichert
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Close();
		
	}
	//Bei drücken von Abbrechen wird das Fenster geschlossen
	private: System::Void rdo_mitarbeiter_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		lbl_abteilungsid->Visible = false;
		txt_abteilungsid->Visible = false;

		lbl_mitarbeiternummer->Visible = true;
		txt_mitarbeiternummer->Visible = true;
		lbl_eintrittsdatum->Visible = true;
		lbl_monat->Visible = true;
		lbl_jahr->Visible = true;
		cbx_monat->Visible = true;
		cbx_jahr->Visible = true;
		lbl_vorname->Visible = true;
		txt_vorname->Visible = true;
		lbl_name->Visible = true;
		txt_name->Visible = true;
		
	}
	//Sichtbarkeit der Felder bei Mitarbeiter
	private: System::Void rdo_abteilungsleiter_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		lbl_abteilungsid->Visible = false;
		txt_abteilungsid->Visible = false;
		lbl_mitarbeiternummer->Visible = false;
		txt_mitarbeiternummer->Visible = false;
		lbl_eintrittsdatum->Visible = false;
		lbl_monat->Visible = false;
		lbl_jahr->Visible = false;
		cbx_monat->Visible = false;
		cbx_jahr->Visible = false;

		lbl_vorname->Visible = true;
		txt_vorname->Visible = true;
		lbl_name->Visible = true;
		txt_name->Visible = true;
		
	}
	//Sichtbarkeit der Felder bei Abteilungleiter
	private: System::Void rdo_abteilung_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		lbl_vorname->Visible = false;
		txt_vorname->Visible = false;
		lbl_name->Visible = false;
		txt_name->Visible = false;
		lbl_mitarbeiternummer->Visible = false;
		txt_mitarbeiternummer->Visible = false;
		lbl_eintrittsdatum->Visible = false;
		lbl_monat->Visible = false;
		lbl_jahr->Visible = false;
		cbx_monat->Visible = false;
		cbx_jahr->Visible = false;

		lbl_abteilungsid->Visible = true;
		txt_abteilungsid->Visible = true;
		
	}
	//Sichtbarkeit der Felder bei Abteilungen
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

		char laden_na[20];
		char laden_vna[20];
		char laden_em[20];
		char laden_ej[20];
		char laden_str[20];
		char laden_hnr[20];
		char laden_post[20];
		char laden_ort[20];
		char laden_mnr[20];
		char laden_fnr[20];
		char laden_mail[20];
		char laden_ab[20];
		char laden_vg[20];
		char laden_nr[20];
		int zähler = 10;

		datensatz_laden_mitarbeiter(laden_na, laden_vna, laden_em, laden_ej, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_vg, laden_nr, zähler);

		String ^test3 = gcnew String(laden_na);
		txt_name->Text = test3;

		String ^test4 = gcnew String(laden_nr);
		txt_mitarbeiternummer->Text = test4;

	}
	//Ausgabe des engegeben Mitarbeiter nur zum TESTEN
	private: System::Void txt_mitarbeiternummer_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		char laden_na[20];
		char laden_vna[20];
		char laden_em[20];
		char laden_ej[20];
		char laden_str[20];
		char laden_hnr[20];
		char laden_post[20];
		char laden_ort[20];
		char laden_mnr[20];
		char laden_fnr[20];
		char laden_mail[20];
		char laden_ab[20];
		char laden_vg[20];
		char laden_nr[20];

		String ^mitarbeiternummer = txt_mitarbeiternummer->Text;
		char text[20];
		sprintf(text, "%s", mitarbeiternummer);
		int zähler = atoi(text);

		datensatz_laden_mitarbeiter(laden_na, laden_vna, laden_em, laden_ej, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_vg, laden_nr, zähler);

		if (*laden_na != '\0')
		{
			lbl_error_mitarbeiternr->Visible = true;
			btn_speichern->Visible = false;
		}
		if (*laden_na == '\0')
		{
			lbl_error_mitarbeiternr->Visible = false;
			btn_speichern->Visible = true;
		}
	}
	//Prüfung ob Mitarbeiternummer schon vorhanden ist
	private: System::Void txt_abteilungsid_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		char laden_na[20];
		char laden_str[20];
		char laden_hnr[20];
		char laden_post[20];
		char laden_ort[20];
		char laden_mail[20];
		char laden_abl[20];
		char laden_nr[20];

		String ^abteilungsid = txt_abteilungsid->Text;
		char text[20];
		sprintf(text, "%s", abteilungsid);
		int zähler = atoi(text);

		datensatz_laden_abteilung(laden_na, laden_str, laden_hnr, laden_post, laden_ort, laden_abl, laden_nr, zähler);

		if (*laden_na != '\0')
		{
			lbl_error_abteilungsid->Visible = true;
			btn_speichern->Visible = false;

		}
		if (*laden_na == '\0')
		{
			lbl_error_abteilungsid->Visible = false;
			btn_speichern->Visible = true;
		}

	}
	//Prüfung ob Abteilungs ID schon vorhanden ist
};
}

#endif