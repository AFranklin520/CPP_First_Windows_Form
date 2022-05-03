#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	First_CPP_Form::MyForm form;
	Application::Run(% form);
}

