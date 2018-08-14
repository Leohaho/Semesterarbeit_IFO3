#include "MyForm.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace Globals;

[STAThread]


void main(array<String^>^ args) {
	
	
	GlobalClass::save = 1;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Semesterarbeit_IFO3::MyForm form;
	Application::Run(%form);
}