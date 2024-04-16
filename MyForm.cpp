#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectOpencv::MyForm form;
	Application::Run(% form);
}