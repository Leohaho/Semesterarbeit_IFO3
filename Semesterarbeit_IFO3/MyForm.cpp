#include "MyForm.h"
#include "Daten.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Semesterarbeit_IFO3::MyForm form;
	Application::Run(%form);

}