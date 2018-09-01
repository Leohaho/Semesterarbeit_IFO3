#ifndef Dateneingabe_H
#define Dateneingabe_H

#pragma once
#include "GlobalClass.h"
#include "Daten.h"

void read_eingabe();
void speichern_eingabe();
void datensatz_laden_mitarbeiter(char *laden_na, char *laden_vna, char *laden_em, char *laden_ej, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_mnr, char *laden_fnr, char *laden_mail, char *laden_ab, char *laden_vg, char *laden_nr, int laden_zähler);
void datensatz_speichern_mitarbeiter(char *speichern_na, char *speichern_vna, char *speichern_em, char *speichern_ej, char *speichern_str, char *speichern_hnr, char *speichern_post, char *speichern_ort, char *speichern_mnr, char *speichern_fnr, char *speichern_mail, char *speichern_ab, char *speichern_vg, char *speichern_nr, int specihern_zähler);
void datensatz_laden_abteilung(char *laden_na, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_abl, char *laden_nr, char *laden_st, int laden_zähler);
void datensatz_speichern_abteilung(char *speichern_str, char *speichern_hnr, char *speichern_post, char *speichern_ort, char *speichern_ab, char *speichern_id, char *speichern_abl, char *speichern_st, int speichern_zähler);
void datensatz_laden_abteilungsleiter(char *laden_na, char *laden_vna, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_mnr, char *laden_fnr, char *laden_mail, char *laden_ab, int laden_zähler, char *laden_atid, char *laden_atfa, char *laden_atabl);
void datensatz_speichern_abteilungsleiter(char *speichern_na, char *speichern_vna, char *speichern_str, char *speichern_hnr, char *speichern_post, char *speichern_ort, char *speichern_mnr, char *speichern_fnr, char *speichern_mail, char *speichern_ab, char *speichern_abl, int speichern_zähler);

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



	private: System::Windows::Forms::Label^  lbl_error_mitarbeiternr;
	private: System::Windows::Forms::Label^  lbl_error_abteilungsid;
	private: System::Windows::Forms::HelpProvider^  helpProvider1;
	private: System::Windows::Forms::Label^  lbl_error_abteilung;
	private: System::Windows::Forms::Label^  lbl_error_abteilungsleiter;
	private: System::Windows::Forms::Label^  lbl_error_abteilungsname;
	private: System::Windows::Forms::Label^  lbl_standort;
	private: System::Windows::Forms::TextBox^  txt_standort;
	private: System::Windows::Forms::MaskedTextBox^  mtxt_abteilingsid;
	private: System::Windows::Forms::Label^  lbl_error_mabteilungsid;


	private: System::Windows::Forms::MaskedTextBox^  mtxt_mitarbeiternummer;
	private: System::Windows::Forms::Label^  lbl_error_mmitarbeiternummer;
	private: System::Windows::Forms::ComboBox^  cbx_Abteilung;









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
			this->lbl_error_mitarbeiternr = (gcnew System::Windows::Forms::Label());
			this->lbl_error_abteilungsid = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->lbl_error_abteilung = (gcnew System::Windows::Forms::Label());
			this->lbl_error_abteilungsleiter = (gcnew System::Windows::Forms::Label());
			this->lbl_error_abteilungsname = (gcnew System::Windows::Forms::Label());
			this->lbl_standort = (gcnew System::Windows::Forms::Label());
			this->txt_standort = (gcnew System::Windows::Forms::TextBox());
			this->mtxt_abteilingsid = (gcnew System::Windows::Forms::MaskedTextBox());
			this->lbl_error_mabteilungsid = (gcnew System::Windows::Forms::Label());
			this->mtxt_mitarbeiternummer = (gcnew System::Windows::Forms::MaskedTextBox());
			this->lbl_error_mmitarbeiternummer = (gcnew System::Windows::Forms::Label());
			this->cbx_Abteilung = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btn_speichern
			// 
			this->btn_speichern->Location = System::Drawing::Point(100, 425);
			this->btn_speichern->Name = L"btn_speichern";
			this->btn_speichern->Size = System::Drawing::Size(101, 25);
			this->btn_speichern->TabIndex = 0;
			this->btn_speichern->Text = L"Speichern";
			this->btn_speichern->UseVisualStyleBackColor = true;
			this->btn_speichern->Click += gcnew System::EventHandler(this, &Dateneingabe::button1_Click);
			// 
			// btn_abbrechen
			// 
			this->btn_abbrechen->Location = System::Drawing::Point(395, 425);
			this->btn_abbrechen->Name = L"btn_abbrechen";
			this->btn_abbrechen->Size = System::Drawing::Size(101, 25);
			this->btn_abbrechen->TabIndex = 1;
			this->btn_abbrechen->Text = L"Zurück";
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
			// lbl_vorname
			// 
			this->lbl_vorname->AutoSize = true;
			this->lbl_vorname->Location = System::Drawing::Point(12, 175);
			this->lbl_vorname->Name = L"lbl_vorname";
			this->lbl_vorname->Size = System::Drawing::Size(49, 13);
			this->lbl_vorname->TabIndex = 4;
			this->lbl_vorname->Text = L"Vorname";
			// 
			// txt_vorname
			// 
			this->txt_vorname->Location = System::Drawing::Point(112, 171);
			this->txt_vorname->Name = L"txt_vorname";
			this->txt_vorname->Size = System::Drawing::Size(100, 20);
			this->txt_vorname->TabIndex = 5;
			// 
			// lbl_name
			// 
			this->lbl_name->AutoSize = true;
			this->lbl_name->Location = System::Drawing::Point(12, 201);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(35, 13);
			this->lbl_name->TabIndex = 6;
			this->lbl_name->Text = L"Name";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(112, 197);
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
			this->cbx_monat->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbx_monat->FormattingEnabled = true;
			this->cbx_monat->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->cbx_monat->Location = System::Drawing::Point(112, 379);
			this->cbx_monat->Name = L"cbx_monat";
			this->cbx_monat->Size = System::Drawing::Size(51, 21);
			this->cbx_monat->TabIndex = 12;
			// 
			// cbx_jahr
			// 
			this->cbx_jahr->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbx_jahr->FormattingEnabled = true;
			this->cbx_jahr->Items->AddRange(gcnew cli::array< System::Object^  >(70) {
				L"1950", L"1951", L"1952", L"1953", L"1954", L"1955",
					L"1956", L"1957", L"1958", L"1959", L"1960", L"1961", L"1962", L"1963", L"1964", L"1965", L"1966", L"1967", L"1968", L"1969",
					L"1970", L"1971", L"1972", L"1973", L"1974", L"1975", L"1976", L"1977", L"1978", L"1979", L"1980", L"1981", L"1982", L"1983",
					L"1984", L"1985", L"1986", L"1987", L"1988", L"1989", L"1990", L"1991", L"1992", L"1993", L"1994", L"1995", L"1996", L"1997",
					L"1998", L"1999", L"2000", L"2001", L"2002", L"2003", L"2004", L"2005", L"2006", L"2007", L"2008", L"2009", L"2010", L"2011",
					L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018", L"2019"
			});
			this->cbx_jahr->Location = System::Drawing::Point(210, 379);
			this->cbx_jahr->Name = L"cbx_jahr";
			this->cbx_jahr->Size = System::Drawing::Size(51, 21);
			this->cbx_jahr->TabIndex = 13;
			// 
			// lbl_eintrittsdatum
			// 
			this->lbl_eintrittsdatum->AutoSize = true;
			this->lbl_eintrittsdatum->Location = System::Drawing::Point(12, 383);
			this->lbl_eintrittsdatum->Name = L"lbl_eintrittsdatum";
			this->lbl_eintrittsdatum->Size = System::Drawing::Size(70, 13);
			this->lbl_eintrittsdatum->TabIndex = 14;
			this->lbl_eintrittsdatum->Text = L"Eintrittsdatum";
			// 
			// lbl_monat
			// 
			this->lbl_monat->AutoSize = true;
			this->lbl_monat->Location = System::Drawing::Point(168, 383);
			this->lbl_monat->Name = L"lbl_monat";
			this->lbl_monat->Size = System::Drawing::Size(37, 13);
			this->lbl_monat->TabIndex = 15;
			this->lbl_monat->Text = L"Monat";
			// 
			// lbl_jahr
			// 
			this->lbl_jahr->AutoSize = true;
			this->lbl_jahr->Location = System::Drawing::Point(266, 383);
			this->lbl_jahr->Name = L"lbl_jahr";
			this->lbl_jahr->Size = System::Drawing::Size(27, 13);
			this->lbl_jahr->TabIndex = 16;
			this->lbl_jahr->Text = L"Jahr";
			// 
			// lbl_strasse
			// 
			this->lbl_strasse->AutoSize = true;
			this->lbl_strasse->Location = System::Drawing::Point(12, 227);
			this->lbl_strasse->Name = L"lbl_strasse";
			this->lbl_strasse->Size = System::Drawing::Size(38, 13);
			this->lbl_strasse->TabIndex = 17;
			this->lbl_strasse->Text = L"Straße";
			// 
			// txt_strasse
			// 
			this->txt_strasse->Location = System::Drawing::Point(112, 223);
			this->txt_strasse->Name = L"txt_strasse";
			this->txt_strasse->Size = System::Drawing::Size(100, 20);
			this->txt_strasse->TabIndex = 18;
			// 
			// lbl_hausnummer
			// 
			this->lbl_hausnummer->AutoSize = true;
			this->lbl_hausnummer->Location = System::Drawing::Point(12, 253);
			this->lbl_hausnummer->Name = L"lbl_hausnummer";
			this->lbl_hausnummer->Size = System::Drawing::Size(69, 13);
			this->lbl_hausnummer->TabIndex = 19;
			this->lbl_hausnummer->Text = L"Hausnummer";
			// 
			// txt_hausnummer
			// 
			this->txt_hausnummer->Location = System::Drawing::Point(112, 249);
			this->txt_hausnummer->Name = L"txt_hausnummer";
			this->txt_hausnummer->Size = System::Drawing::Size(100, 20);
			this->txt_hausnummer->TabIndex = 20;
			// 
			// lbl_postleitzahl
			// 
			this->lbl_postleitzahl->AutoSize = true;
			this->lbl_postleitzahl->Location = System::Drawing::Point(12, 279);
			this->lbl_postleitzahl->Name = L"lbl_postleitzahl";
			this->lbl_postleitzahl->Size = System::Drawing::Size(60, 13);
			this->lbl_postleitzahl->TabIndex = 21;
			this->lbl_postleitzahl->Text = L"Postleitzahl";
			// 
			// txt_postleitzahl
			// 
			this->txt_postleitzahl->Location = System::Drawing::Point(112, 275);
			this->txt_postleitzahl->Name = L"txt_postleitzahl";
			this->txt_postleitzahl->Size = System::Drawing::Size(100, 20);
			this->txt_postleitzahl->TabIndex = 22;
			// 
			// lbl_ort
			// 
			this->lbl_ort->AutoSize = true;
			this->lbl_ort->Location = System::Drawing::Point(12, 305);
			this->lbl_ort->Name = L"lbl_ort";
			this->lbl_ort->Size = System::Drawing::Size(48, 13);
			this->lbl_ort->TabIndex = 23;
			this->lbl_ort->Text = L"Wohnort";
			// 
			// txt_wohnort
			// 
			this->txt_wohnort->Location = System::Drawing::Point(112, 301);
			this->txt_wohnort->Name = L"txt_wohnort";
			this->txt_wohnort->Size = System::Drawing::Size(100, 20);
			this->txt_wohnort->TabIndex = 24;
			// 
			// lbl_festnetznummer
			// 
			this->lbl_festnetznummer->AutoSize = true;
			this->lbl_festnetznummer->Location = System::Drawing::Point(12, 331);
			this->lbl_festnetznummer->Name = L"lbl_festnetznummer";
			this->lbl_festnetznummer->Size = System::Drawing::Size(84, 13);
			this->lbl_festnetznummer->TabIndex = 25;
			this->lbl_festnetznummer->Text = L"Festnetznummer";
			// 
			// lbl_mobilnummer
			// 
			this->lbl_mobilnummer->AutoSize = true;
			this->lbl_mobilnummer->Location = System::Drawing::Point(12, 357);
			this->lbl_mobilnummer->Name = L"lbl_mobilnummer";
			this->lbl_mobilnummer->Size = System::Drawing::Size(69, 13);
			this->lbl_mobilnummer->TabIndex = 26;
			this->lbl_mobilnummer->Text = L"Mobilnummer";
			// 
			// txt_festnetznummer
			// 
			this->txt_festnetznummer->Location = System::Drawing::Point(112, 327);
			this->txt_festnetznummer->Name = L"txt_festnetznummer";
			this->txt_festnetznummer->Size = System::Drawing::Size(100, 20);
			this->txt_festnetznummer->TabIndex = 27;
			// 
			// txt_mobilnummer
			// 
			this->txt_mobilnummer->Location = System::Drawing::Point(112, 353);
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
			this->txt_abteilungsname->TextChanged += gcnew System::EventHandler(this, &Dateneingabe::txt_abteilungsname_TextChanged);
			// 
			// lbl_error_mitarbeiternr
			// 
			this->lbl_error_mitarbeiternr->AutoSize = true;
			this->lbl_error_mitarbeiternr->ForeColor = System::Drawing::Color::Red;
			this->lbl_error_mitarbeiternr->Location = System::Drawing::Point(246, 97);
			this->lbl_error_mitarbeiternr->Name = L"lbl_error_mitarbeiternr";
			this->lbl_error_mitarbeiternr->Size = System::Drawing::Size(136, 17);
			this->lbl_error_mitarbeiternr->TabIndex = 35;
			this->lbl_error_mitarbeiternr->Text = L"Mitarbeiternummer belegt!";
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
			// lbl_error_abteilung
			// 
			this->lbl_error_abteilung->AutoSize = true;
			this->lbl_error_abteilung->ForeColor = System::Drawing::Color::Red;
			this->lbl_error_abteilung->Location = System::Drawing::Point(246, 121);
			this->lbl_error_abteilung->Name = L"lbl_error_abteilung";
			this->lbl_error_abteilung->Size = System::Drawing::Size(124, 17);
			this->lbl_error_abteilung->TabIndex = 37;
			this->lbl_error_abteilung->Text = L"Abteilung existiert nicht!";
			this->lbl_error_abteilung->UseCompatibleTextRendering = true;
			this->lbl_error_abteilung->Visible = false;
			// 
			// lbl_error_abteilungsleiter
			// 
			this->lbl_error_abteilungsleiter->AutoSize = true;
			this->lbl_error_abteilungsleiter->ForeColor = System::Drawing::Color::Red;
			this->lbl_error_abteilungsleiter->Location = System::Drawing::Point(246, 121);
			this->lbl_error_abteilungsleiter->Name = L"lbl_error_abteilungsleiter";
			this->lbl_error_abteilungsleiter->Size = System::Drawing::Size(119, 17);
			this->lbl_error_abteilungsleiter->TabIndex = 38;
			this->lbl_error_abteilungsleiter->Text = L"Abteilungsleiter belegt!";
			this->lbl_error_abteilungsleiter->UseCompatibleTextRendering = true;
			this->lbl_error_abteilungsleiter->Visible = false;
			// 
			// lbl_error_abteilungsname
			// 
			this->lbl_error_abteilungsname->AutoSize = true;
			this->lbl_error_abteilungsname->ForeColor = System::Drawing::Color::Red;
			this->lbl_error_abteilungsname->Location = System::Drawing::Point(246, 121);
			this->lbl_error_abteilungsname->Name = L"lbl_error_abteilungsname";
			this->lbl_error_abteilungsname->Size = System::Drawing::Size(168, 17);
			this->lbl_error_abteilungsname->TabIndex = 39;
			this->lbl_error_abteilungsname->Text = L"Abteilungsname existiert bereits!";
			this->lbl_error_abteilungsname->UseCompatibleTextRendering = true;
			this->lbl_error_abteilungsname->Visible = false;
			// 
			// lbl_standort
			// 
			this->lbl_standort->AutoSize = true;
			this->lbl_standort->Location = System::Drawing::Point(12, 149);
			this->lbl_standort->Name = L"lbl_standort";
			this->lbl_standort->Size = System::Drawing::Size(80, 13);
			this->lbl_standort->TabIndex = 40;
			this->lbl_standort->Text = L"Standort/Etage";
			this->lbl_standort->Visible = false;
			// 
			// txt_standort
			// 
			this->txt_standort->Location = System::Drawing::Point(112, 145);
			this->txt_standort->Name = L"txt_standort";
			this->txt_standort->Size = System::Drawing::Size(100, 20);
			this->txt_standort->TabIndex = 41;
			this->txt_standort->Visible = false;
			// 
			// mtxt_abteilingsid
			// 
			this->mtxt_abteilingsid->Location = System::Drawing::Point(112, 68);
			this->mtxt_abteilingsid->Mask = L"999";
			this->mtxt_abteilingsid->Name = L"mtxt_abteilingsid";
			this->mtxt_abteilingsid->Size = System::Drawing::Size(100, 20);
			this->mtxt_abteilingsid->TabIndex = 42;
			this->mtxt_abteilingsid->Visible = false;
			this->mtxt_abteilingsid->TextChanged += gcnew System::EventHandler(this, &Dateneingabe::mtxt_abteilingsid_TextChanged);
			// 
			// lbl_error_mabteilungsid
			// 
			this->lbl_error_mabteilungsid->AutoSize = true;
			this->lbl_error_mabteilungsid->ForeColor = System::Drawing::Color::Red;
			this->lbl_error_mabteilungsid->Location = System::Drawing::Point(416, 71);
			this->lbl_error_mabteilungsid->Name = L"lbl_error_mabteilungsid";
			this->lbl_error_mabteilungsid->Size = System::Drawing::Size(140, 13);
			this->lbl_error_mabteilungsid->TabIndex = 43;
			this->lbl_error_mabteilungsid->Text = L"Nur Zahlen zwischen 1-100!";
			this->lbl_error_mabteilungsid->Visible = false;
			// 
			// mtxt_mitarbeiternummer
			// 
			this->mtxt_mitarbeiternummer->Location = System::Drawing::Point(112, 94);
			this->mtxt_mitarbeiternummer->Mask = L"999";
			this->mtxt_mitarbeiternummer->Name = L"mtxt_mitarbeiternummer";
			this->mtxt_mitarbeiternummer->Size = System::Drawing::Size(100, 20);
			this->mtxt_mitarbeiternummer->TabIndex = 44;
			this->mtxt_mitarbeiternummer->TextChanged += gcnew System::EventHandler(this, &Dateneingabe::mtxt_mitarbeiternummer_TextChanged);
			// 
			// lbl_error_mmitarbeiternummer
			// 
			this->lbl_error_mmitarbeiternummer->AutoSize = true;
			this->lbl_error_mmitarbeiternummer->ForeColor = System::Drawing::Color::Red;
			this->lbl_error_mmitarbeiternummer->Location = System::Drawing::Point(416, 99);
			this->lbl_error_mmitarbeiternummer->Name = L"lbl_error_mmitarbeiternummer";
			this->lbl_error_mmitarbeiternummer->Size = System::Drawing::Size(140, 13);
			this->lbl_error_mmitarbeiternummer->TabIndex = 45;
			this->lbl_error_mmitarbeiternummer->Text = L"Nur Zahlen zwischen 1-100!";
			this->lbl_error_mmitarbeiternummer->Visible = false;
			// 
			// cbx_Abteilung
			// 
			this->cbx_Abteilung->FormattingEnabled = true;
			this->cbx_Abteilung->Location = System::Drawing::Point(112, 119);
			this->cbx_Abteilung->Name = L"cbx_Abteilung";
			this->cbx_Abteilung->Size = System::Drawing::Size(100, 21);
			this->cbx_Abteilung->TabIndex = 46;
			// 
			// Dateneingabe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 471);
			this->Controls->Add(this->cbx_Abteilung);
			this->Controls->Add(this->lbl_error_mmitarbeiternummer);
			this->Controls->Add(this->mtxt_mitarbeiternummer);
			this->Controls->Add(this->lbl_error_mabteilungsid);
			this->Controls->Add(this->mtxt_abteilingsid);
			this->Controls->Add(this->txt_standort);
			this->Controls->Add(this->lbl_standort);
			this->Controls->Add(this->lbl_error_abteilungsname);
			this->Controls->Add(this->lbl_error_abteilungsleiter);
			this->Controls->Add(this->lbl_error_abteilung);
			this->Controls->Add(this->lbl_error_abteilungsid);
			this->Controls->Add(this->lbl_error_mitarbeiternr);
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
		char laden_na[20];
		char laden_vna[20];
		char laden_str[20];
		char laden_hnr[20];
		char laden_post[20];
		char laden_ort[20];
		char laden_nr[20];
		char laden_st[20];
		char laden_abl[20];

		int zähler = 0;
		int laden_zähler;
		int done = 1;

		read_eingabe();
		mtxt_abteilingsid->HidePromptOnLeave = true;
		mtxt_mitarbeiternummer->HidePromptOnLeave = true;
		do {
			zähler++;
			laden_zähler = zähler;
			datensatz_laden_abteilung(laden_na, laden_str, laden_hnr, laden_post, laden_ort, laden_abl, laden_nr, laden_st, laden_zähler);
			
			if (strlen(laden_na) != 0) {
				String ^na = gcnew String(laden_na);
				cbx_Abteilung->Items->Add(na);
			}

			if (zähler == 100) {
				done = 0;
			}
		} while (done == 1);

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
		char speichern_id[20];
		char speichern_abl[20];
		char speichern_st[20];
		
		int speichern_zähler;

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
		char laden_atfa[20];
		char laden_atid[20];
		char laden_atabl[20];
		char laden_st[20];
		char laden_abl[20];

		int done = 1;
		int zähler = 0;
		int laden_zähler = 0;
		int felderlöschen = 0;

		String ^leer = "";
		String ^entleeren = "";

		if (rdo_mitarbeiter->Checked==true)//Mitarbeiter speichern
		{
			if (mtxt_mitarbeiternummer->Text == leer || cbx_Abteilung->Text == leer || txt_vorname->Text == leer || txt_name->Text == leer || txt_strasse->Text == leer || txt_hausnummer->Text == leer || txt_postleitzahl->Text == leer || txt_wohnort->Text == leer || txt_festnetznummer->Text == leer || txt_mobilnummer->Text == leer || cbx_monat->Text == leer || cbx_jahr->Text == leer)
			{
				MessageBox::Show("Bitte füllen sie den Datensatz komplett aus!");
				felderlöschen = 1;
			}
			else
			{
				String ^nr = mtxt_mitarbeiternummer->Text;
				char text[20];
				sprintf(text, "%s", nr);
				speichern_zähler = atoi(text);

				String ^na;
				na = txt_name->Text;
				sprintf(speichern_na, "%s", na);

				String ^vna;
				vna = txt_vorname->Text;
				sprintf(speichern_vna, "%s", vna);

				sprintf(speichern_mail, "%s.%s@daddeldu.com", vna, na);

				String ^str;
				str = txt_strasse->Text;
				sprintf(speichern_str, "%s", str);

				String ^hnr;
				hnr = txt_hausnummer->Text;
				sprintf(speichern_hnr, "%s", hnr);

				String ^post;
				post = txt_postleitzahl->Text;
				sprintf(speichern_post, "%s", post);

				String ^ort;
				ort = txt_wohnort->Text;
				sprintf(speichern_ort, "%s", ort);

				String ^mnr;
				mnr = txt_mobilnummer->Text;
				sprintf(speichern_mnr, "%s", mnr);

				String ^fnr;
				fnr = txt_festnetznummer->Text;
				sprintf(speichern_fnr, "%s", fnr);

				String ^em;
				em = cbx_monat->Text;
				sprintf(speichern_em, "%s", em);

				String ^ej;
				ej = cbx_jahr->Text;
				sprintf(speichern_ej, "%s", ej);

				String ^ab;
				ab = cbx_Abteilung->Text;
				sprintf(speichern_ab, "%s", ab);

				
				sprintf(speichern_vg, "test");

				do//Mitarbeiter wird Vorgesetzter zugeordnet
				{
					zähler++;
					laden_zähler = zähler;
					datensatz_laden_abteilung(laden_na, laden_str, laden_hnr, laden_post, laden_ort, laden_abl, laden_nr, laden_st, laden_zähler);
					if (strcmp(speichern_ab, laden_na) == 0)
					{
						sprintf(speichern_vg, "%s", laden_abl);
						done = 0;
					}
					if (zähler == 100)
					{
						done = 0;
					}
				} while (done == 1);

				datensatz_speichern_mitarbeiter(speichern_na, speichern_vna, speichern_em, speichern_ej, speichern_str, speichern_hnr, speichern_post, speichern_ort, speichern_mnr, speichern_fnr, speichern_mail, speichern_ab, speichern_vg, speichern_nr, speichern_zähler);

				speichern_eingabe();

				//Ausgabe des eingegebenen Mitarbeiters

				laden_zähler = speichern_zähler;

				datensatz_laden_mitarbeiter(laden_na, laden_vna, laden_em, laden_ej, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_vg, laden_nr, laden_zähler);

				String ^sna = gcnew String(laden_na);
				String ^snr = gcnew String(laden_nr);
				String ^smail = gcnew String(laden_mail);
				String ^svna = gcnew String(laden_vna);
				String ^sem = gcnew String(laden_em);
				String ^sej = gcnew String(laden_ej);
				String ^sstr = gcnew String(laden_str);
				String ^shnr = gcnew String(laden_hnr);
				String ^spost = gcnew String(laden_post);
				String ^sort = gcnew String(laden_ort);
				String ^smnr = gcnew String(laden_mnr);
				String ^sfnr = gcnew String(laden_fnr);
				String ^sab = gcnew String(laden_ab);
				String ^svg = gcnew String(laden_vg);

				MessageBox::Show("Mitarbeiter erfolgreich gespeichert!\n\nMitarbeiternummer: " + snr + "\nAbteilungsname: " + sab + "\nVorname: " + svna + "\nName: " + sna + "\nStraße: " + sstr + "\nHausnummer: " + shnr + "\nPostleitzahl: " + spost + "\nWohnort: " + sort + "\nFestnetznummer: " + sfnr + "\nMobilnummer: " + smnr + "\nEintrittsmonat: " + sem + "\nEintrittsjahr: " + sej + "\nVorgesetzer: " + svg + "\n");

			}
			
		}
		
		if (rdo_abteilungsleiter->Checked == true)//Abteilungsleiter speichern
		{
			if (cbx_Abteilung->Text == leer || txt_vorname->Text == leer || txt_name->Text == leer || txt_strasse->Text == leer || txt_hausnummer->Text == leer || txt_postleitzahl->Text == leer || txt_wohnort->Text == leer || txt_festnetznummer->Text == leer || txt_mobilnummer->Text == leer)
			{
				MessageBox::Show("Bitte füllen sie den Datensatz komplett aus!");
				felderlöschen = 1;
			}
			else
			{
				String ^na;
				na = txt_name->Text;
				sprintf(speichern_na, "%s", na);

				String ^vna;
				vna = txt_vorname->Text;
				sprintf(speichern_vna, "%s", vna);

				sprintf(speichern_mail, "%s.%s@daddeldu.com", vna, na);

				String ^str;
				str = txt_strasse->Text;
				sprintf(speichern_str, "%s", str);

				String ^hnr;
				hnr = txt_hausnummer->Text;
				sprintf(speichern_hnr, "%s", hnr);

				String ^post;
				post = txt_postleitzahl->Text;
				sprintf(speichern_post, "%s", post);

				String ^ort;
				ort = txt_wohnort->Text;
				sprintf(speichern_ort, "%s", ort);

				String ^mnr;
				mnr = txt_mobilnummer->Text;
				sprintf(speichern_mnr, "%s", mnr);

				String ^fnr;
				fnr = txt_festnetznummer->Text;
				sprintf(speichern_fnr, "%s", fnr);

				String ^ab;
				ab = cbx_Abteilung->Text;
				sprintf(speichern_ab, "%s", ab);

				do//Abteilungsleitername wird Abteilung zugeordnet
				{
					zähler++;
					laden_zähler = zähler;
					datensatz_laden_abteilungsleiter(laden_na, laden_vna, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_zähler, laden_atid, laden_atfa, laden_atabl);
					if (strcmp(speichern_ab, laden_atfa) == 0)
					{
						sprintf(speichern_abl, "%s %s", speichern_vna, speichern_na);
						done = 0;
					}
					if (zähler == 100)
					{
						done = 0;
					}
				} while (done == 1);

				speichern_zähler = zähler;

				datensatz_speichern_abteilungsleiter(speichern_na, speichern_vna, speichern_str, speichern_hnr, speichern_post, speichern_ort, speichern_mnr, speichern_fnr, speichern_mail, speichern_ab, speichern_abl, speichern_zähler);

				speichern_eingabe();

				//Ausgabe des eingegebenen Abteilungsleiters

				laden_zähler = speichern_zähler;

				datensatz_laden_abteilungsleiter(laden_na, laden_vna, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_zähler, laden_atid, laden_atfa, laden_atabl);

				String ^sna = gcnew String(laden_na);
				String ^snr = gcnew String(laden_nr);
				String ^smail = gcnew String(laden_mail);
				String ^svna = gcnew String(laden_vna);
				String ^sstr = gcnew String(laden_str);
				String ^shnr = gcnew String(laden_hnr);
				String ^spost = gcnew String(laden_post);
				String ^sort = gcnew String(laden_ort);
				String ^smnr = gcnew String(laden_mnr);
				String ^sfnr = gcnew String(laden_fnr);
				String ^sab = gcnew String(laden_ab);


				MessageBox::Show("Abteilungsleiter erfolgreich gespeichert!\n\nAbteilungsname: " + sab + "\nVorname: " + svna + "\nName: " + sna + "\nStraße: " + sstr + "\nHausnummer: " + shnr + "\nPostleitzahl: " + spost + "\nWohnort: " + sort + "\nFestnetznummer: " + sfnr + "\nMobilnummer: " + smnr + "\n");
			}
		}

		if (rdo_abteilung->Checked == true)//Abteilung speichern
		{
			if (mtxt_abteilingsid->Text == leer || txt_abteilungsname->Text == leer || txt_strasse->Text == leer || txt_hausnummer->Text == leer || txt_postleitzahl->Text == leer || txt_wohnort->Text == leer || txt_standort->Text == leer)
			{
				MessageBox::Show("Bitte füllen sie den Datensatz komplett aus!");
				felderlöschen = 1;
			}
			else
			{
				String ^str;
				str = txt_strasse->Text;
				sprintf(speichern_str, "%s", str);

				String ^hnr;
				hnr = txt_hausnummer->Text;
				sprintf(speichern_hnr, "%s", hnr);

				String ^post;
				post = txt_postleitzahl->Text;
				sprintf(speichern_post, "%s", post);

				String ^ort;
				ort = txt_wohnort->Text;
				sprintf(speichern_ort, "%s", ort);

				String ^ab;
				ab = txt_abteilungsname->Text;
				sprintf(speichern_ab, "%s", ab);

				String ^id = mtxt_abteilingsid->Text;
				char text[20];
				sprintf(text, "%s", id);
				speichern_zähler = atoi(text);

				String ^st;
				st = txt_standort->Text;
				sprintf(speichern_st, "%s", st);

				sprintf(speichern_abl, "nicht besetzt");

				datensatz_speichern_abteilung(speichern_str, speichern_hnr, speichern_post, speichern_ort, speichern_ab, speichern_id, speichern_abl, speichern_st, speichern_zähler);

				speichern_eingabe();

				//Ausgabe des eingegebene Abteilung

				laden_zähler = speichern_zähler;

				datensatz_laden_abteilung(laden_na, laden_str, laden_hnr, laden_post, laden_ort, laden_abl, laden_nr, laden_st, laden_zähler);

				String ^sstr = gcnew String(laden_str);
				String ^shnr = gcnew String(laden_hnr);
				String ^spost = gcnew String(laden_post);
				String ^sort = gcnew String(laden_ort);
				String ^sab = gcnew String(laden_na);
				String ^sst = gcnew String(laden_st);
				String ^sid = gcnew String(laden_nr);

				MessageBox::Show("Abteilung erfolgreich gespeichert!\n\nAbteilungs ID: " + sid + "\nAbteilungsname: " + sab + "\nStraße: " + sstr + "\nHausnummer: " + shnr + "\nPostleitzahl: " + spost + "\nWohnort: " + sort + "\nStandort: " + sst + "\n");
			}
		}
		
		if (felderlöschen==0)//Eingabefelder bereinigen
		{
			mtxt_abteilingsid->Text = entleeren;
			mtxt_mitarbeiternummer->Text = entleeren;
			txt_abteilungsname->Text = entleeren;
			txt_standort->Text = entleeren;
			txt_vorname->Text = entleeren;
			txt_name->Text = entleeren;
			txt_strasse->Text = entleeren;
			txt_hausnummer->Text = entleeren;
			txt_postleitzahl->Text = entleeren;
			txt_wohnort->Text = entleeren;
			txt_festnetznummer->Text = entleeren;
			txt_mobilnummer->Text = entleeren;
			cbx_jahr->SelectedIndex = -1;
			cbx_monat->SelectedIndex = -1;
			cbx_Abteilung->SelectedIndex = -1;
		}
	}
	//Bei drücken von Speichern werden die Variablen in der textdatei gespeichert
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Close();
		
	}
	//Bei drücken von Abbrechen wird das Fenster geschlossen
	private: System::Void rdo_mitarbeiter_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		lbl_abteilungsid->Visible = false;
		mtxt_abteilingsid->Visible = false;
		lbl_standort->Visible = false;
		txt_standort->Visible = false;

		cbx_Abteilung->Visible = true;
		txt_abteilungsname->Visible = false;

		lbl_mitarbeiternummer->Visible = true;
		mtxt_mitarbeiternummer->Visible = true;
		lbl_eintrittsdatum->Visible = true;
		lbl_monat->Visible = true;
		lbl_jahr->Visible = true;
		cbx_monat->Visible = true;
		cbx_jahr->Visible = true;
		lbl_vorname->Visible = true;
		txt_vorname->Visible = true;
		lbl_name->Visible = true;
		txt_name->Visible = true;
		lbl_festnetznummer->Visible = true;
		txt_festnetznummer->Visible = true;
		lbl_mobilnummer->Visible = true;
		txt_mobilnummer->Visible = true;

		//Eingabefelder bereinigen
		String ^entleeren = "";

		mtxt_abteilingsid->Text = entleeren;
		mtxt_mitarbeiternummer->Text = entleeren;
		txt_abteilungsname->Text = entleeren;
		txt_standort->Text = entleeren;
		txt_vorname->Text = entleeren;
		txt_name->Text = entleeren;
		txt_strasse->Text = entleeren;
		txt_hausnummer->Text = entleeren;
		txt_postleitzahl->Text = entleeren;
		txt_wohnort->Text = entleeren;
		txt_festnetznummer->Text = entleeren;
		txt_mobilnummer->Text = entleeren;
		cbx_jahr->SelectedIndex = -1;
		cbx_monat->SelectedIndex = -1;
		cbx_Abteilung->SelectedIndex = -1;
		
	}
	//Sichtbarkeit der Felder bei Mitarbeiter
	private: System::Void rdo_abteilungsleiter_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		lbl_abteilungsid->Visible = false;
		mtxt_abteilingsid->Visible = false;
		lbl_mitarbeiternummer->Visible = false;
		mtxt_mitarbeiternummer->Visible = false;

		cbx_Abteilung->Visible = true;
		txt_abteilungsname->Visible = false;

		lbl_eintrittsdatum->Visible = false;
		lbl_monat->Visible = false;
		lbl_jahr->Visible = false;
		cbx_monat->Visible = false;
		cbx_jahr->Visible = false;
		lbl_standort->Visible = false;
		txt_standort->Visible = false;

		lbl_vorname->Visible = true;
		txt_vorname->Visible = true;
		lbl_name->Visible = true;
		txt_name->Visible = true;
		lbl_festnetznummer->Visible = true;
		txt_festnetznummer->Visible = true;
		lbl_mobilnummer->Visible = true;
		txt_mobilnummer->Visible = true;
		
		//Eingabefelder bereinigen
		String ^entleeren = "";

		mtxt_abteilingsid->Text = entleeren;
		mtxt_mitarbeiternummer->Text = entleeren;
		txt_abteilungsname->Text = entleeren;
		txt_standort->Text = entleeren;
		txt_vorname->Text = entleeren;
		txt_name->Text = entleeren;
		txt_strasse->Text = entleeren;
		txt_hausnummer->Text = entleeren;
		txt_postleitzahl->Text = entleeren;
		txt_wohnort->Text = entleeren;
		txt_festnetznummer->Text = entleeren;
		txt_mobilnummer->Text = entleeren;
		cbx_jahr->SelectedIndex = -1;
		cbx_monat->SelectedIndex = -1;
		cbx_Abteilung->SelectedIndex = -1;
	}
	//Sichtbarkeit der Felder bei Abteilungleiter
	private: System::Void rdo_abteilung_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		lbl_vorname->Visible = false;
		txt_vorname->Visible = false;
		lbl_name->Visible = false;
		txt_name->Visible = false;
		lbl_mitarbeiternummer->Visible = false;
		mtxt_mitarbeiternummer->Visible = false;
		cbx_Abteilung->Visible = false;
		txt_abteilungsname->Visible = true;

		lbl_eintrittsdatum->Visible = false;
		lbl_monat->Visible = false;
		lbl_jahr->Visible = false;
		cbx_monat->Visible = false;
		cbx_jahr->Visible = false;
		lbl_festnetznummer->Visible = false;
		txt_festnetznummer->Visible = false;
		lbl_mobilnummer->Visible = false;
		txt_mobilnummer->Visible = false;

		lbl_abteilungsid->Visible = true;
		mtxt_abteilingsid->Visible = true;
		lbl_standort->Visible = true;
		txt_standort->Visible = true;

		//Eingabefelder bereinigen
		String ^entleeren = "";

		mtxt_abteilingsid->Text = entleeren;
		mtxt_mitarbeiternummer->Text = entleeren;
		txt_abteilungsname->Text = entleeren;
		txt_standort->Text = entleeren;
		txt_vorname->Text = entleeren;
		txt_name->Text = entleeren;
		txt_strasse->Text = entleeren;
		txt_hausnummer->Text = entleeren;
		txt_postleitzahl->Text = entleeren;
		txt_wohnort->Text = entleeren;
		txt_festnetznummer->Text = entleeren;
		txt_mobilnummer->Text = entleeren;
		cbx_jahr->SelectedIndex = -1;
		cbx_monat->SelectedIndex = -1;
		cbx_Abteilung->SelectedIndex = -1;
		
	}
	//Sichtbarkeit der Felder bei Abteilungen
	private: System::Void txt_abteilungsname_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		char laden_na[20];
		char laden_vna[20];
		char laden_str[20];
		char laden_hnr[20];
		char laden_post[20];
		char laden_ort[20];
		char laden_mnr[20];
		char laden_fnr[20];
		char laden_mail[20];
		char laden_ab[20];
		char laden_atfa[20];
		char laden_atid[20];
		char laden_atabl[20];
		int done = 1;
		int zähler = 0;
		int laden_zähler = 0;

		lbl_error_abteilungsname->Visible = false;
		lbl_error_abteilung->Visible = false;
		lbl_error_abteilungsleiter->Visible = false;

		char text[20];
		String ^abteilungsname = txt_abteilungsname->Text;
		sprintf(text, "%s", abteilungsname);

		if (rdo_mitarbeiter->Checked==true)//Mitarbeiter
		{
			lbl_error_abteilungsleiter->Visible = false;
			lbl_error_abteilungsname->Visible = false;
			do//Abfrage ob Abteilungs existiert
			{
				zähler++;
				laden_zähler = zähler;
				datensatz_laden_abteilungsleiter(laden_na, laden_vna, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_zähler, laden_atid, laden_atfa, laden_atabl);
				if (strcmp(text, laden_atfa) == 0)
				{
					lbl_error_abteilung->Visible = false;
					btn_speichern->Visible = true;
					done = 0;
				}
				else
				{
					lbl_error_abteilung->Visible = true;
					btn_speichern->Visible = false;
				}
				if (zähler == 100)
				{
					done = 0;
				}
			} while (done == 1);
		}

		if (rdo_abteilungsleiter->Checked==true)//Abteilungsleiter
		{
			lbl_error_abteilungsname->Visible = false;
			do//Abfrage ob Abteilungs existiert
			{
				zähler++;
				laden_zähler = zähler;
				datensatz_laden_abteilungsleiter(laden_na, laden_vna, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_zähler, laden_atid, laden_atfa, laden_atabl);
				if (strcmp(text, laden_atfa) == 0)
				{
					lbl_error_abteilung->Visible = false;
					btn_speichern->Visible = true;
					done = 0;
				}
				else
				{
					lbl_error_abteilung->Visible = true;
					btn_speichern->Visible = false;
				}
				if (zähler == 100)
				{
					done = 0;
				}
			} while (done==1);
			
			if (done==0)//Abfrage wenn eine Abteilung existiert ob eine Abteilungsleiter vorhanden ist
			{
					laden_zähler = zähler;
					datensatz_laden_abteilungsleiter(laden_na, laden_vna, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_zähler, laden_atid, laden_atfa, laden_atabl);
					if (strcmp(laden_atabl,"nicht besetzt")==0)
					{
						lbl_error_abteilungsleiter->Visible = false;
						btn_speichern->Visible = true;
					}
					else
					{
						lbl_error_abteilungsleiter->Visible = true;
						btn_speichern->Visible = false;
					}

			}
		}
		if (rdo_abteilung->Checked==true)//Abteilung
		{
			lbl_error_abteilungsleiter->Visible = false;
			lbl_error_abteilung->Visible = false;
			do//Abfrage ob ein Abteilungsname schon vorhanden ist
			{
				zähler++;
				laden_zähler = zähler;
				datensatz_laden_abteilungsleiter(laden_na, laden_vna, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_zähler, laden_atid, laden_atfa, laden_atabl);
				if (strcmp(text, laden_atfa) == 0)
				{
					lbl_error_abteilungsname->Visible = true;
					btn_speichern->Visible = false;
					done = 0;
				}
				else
				{
					lbl_error_abteilungsname->Visible = false;
					btn_speichern->Visible = true;
				}
				if (zähler == 100)
				{
					done = 0;
				}
			} while (done == 1);
		}
	}
	//Prüfung ob Abteilung vorhanden ist bzw Abteilungsleiter besetzt ist
	private: System::Void mtxt_abteilingsid_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		char laden_na[20];
		char laden_str[20];
		char laden_hnr[20];
		char laden_post[20];
		char laden_ort[20];
		char laden_mail[20];
		char laden_abl[20];
		char laden_nr[20];
		char laden_st[20];

		String ^abteilungsid = mtxt_abteilingsid->Text;
		char text[20];
		sprintf(text, "%s", abteilungsid);
		int laden_zähler = atoi(text);

		if (laden_zähler>100)//Abfrage ob richtiger Zahlenbereich eingegeben wurde 1-100
		{
			lbl_error_mabteilungsid->Visible = true;
			btn_speichern->Visible = false;
		}
		if (laden_zähler<=100)
		{
			lbl_error_mabteilungsid->Visible = false;
			btn_speichern->Visible = true;
		}

		datensatz_laden_abteilung(laden_na, laden_str, laden_hnr, laden_post, laden_ort, laden_abl, laden_nr, laden_st, laden_zähler);

		if (*laden_na != '\0')//Abfrage ob Abteilungs ID belegt ist
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
	//Prüfung ob die Abteilungs ID schon belegt ist und obn sie sich im richtigen Zahlenbereich befindet
	private: System::Void mtxt_mitarbeiternummer_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
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

		String ^mitarbeiternummer = mtxt_mitarbeiternummer->Text;
		char text[20];
		sprintf(text, "%s", mitarbeiternummer);
		int zähler = atoi(text);

		if (zähler>100)//Abfrage ob richtiger Zahlenbereich eingegeben wurde 1-100
		{
			lbl_error_mmitarbeiternummer->Visible = true;
			btn_speichern->Visible = false;
		}
		if (zähler <= 100)
		{
			lbl_error_mmitarbeiternummer->Visible = false;
			btn_speichern->Visible = true;
		}

		datensatz_laden_mitarbeiter(laden_na, laden_vna, laden_em, laden_ej, laden_str, laden_hnr, laden_post, laden_ort, laden_mnr, laden_fnr, laden_mail, laden_ab, laden_vg, laden_nr, zähler);

		if (*laden_na != '\0')//Abfrage ob Mitarbeiternummer belegt ist
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
};
}

#endif