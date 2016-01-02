#include "MainForm.h"
#include "windows.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ACMUN::MainForm form;
	Application::Run(%form);
}