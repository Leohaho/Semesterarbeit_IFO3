#ifndef Daten�ndern_H
#define Daten�ndern_H


#pragma once
#include "Daten.h"
#include "GlobalClass.h"

void speichern_�ndern();
void read_�ndern();

namespace Semesterarbeit_IFO3 {
	//test
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Zusammenfassung f�r Daten�ndern
	/// </summary>
	public ref class Daten�ndern : public System::Windows::Forms::Form
	{
	public:
		Daten�ndern(void)
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
		~Daten�ndern()
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
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(78, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Speichern";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Daten�ndern::button1_Click);
			// 
			// Daten�ndern
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Name = L"Daten�ndern";
			this->Text = L"Daten�ndern";
			this->Load += gcnew System::EventHandler(this, &Daten�ndern::Daten�ndern_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Daten�ndern_Load(System::Object^  sender, System::EventArgs^  e) {
		read_�ndern();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		speichern_�ndern();
	}
	};
}

#endif
