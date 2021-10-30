/*#include "NumMetForm.h"

#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int Main(cli::array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	zadanie::MyForm form;
	Application::Run(% form);
	return 0;
}*/

#include <Windows.h>
#include "NumMetForm.h"

//using namespace NumericalMethods;
using namespace System;
using namespace System::Windows::Forms;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	

	NumericalMethods::MyForm form;
	Application::Run(% form);

	return 0;
}


