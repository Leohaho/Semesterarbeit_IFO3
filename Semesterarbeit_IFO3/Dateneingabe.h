#pragma once
#include "GlobalClass.h"
#include "Daten.h"

void read_eingabe();
void speichern_eingabe();

namespace Semesterarbeit_IFO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;

	static Mitarb MA[100];
	static ABL AL[100];
	static ABT AT[100];

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
	private: System::Windows::Forms::Button^  button1;
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Speichern";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dateneingabe::button1_Click);
			// 
			// Dateneingabe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Name = L"Dateneingabe";
			this->Text = L"Dateneingabe";
			this->Load += gcnew System::EventHandler(this, &Dateneingabe::Dateneingabe_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void Dateneingabe_Load(System::Object^  sender, System::EventArgs^  e) {
	
		read_eingabe();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		speichern_eingabe();
	}

	};
}
