#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault;
	Application::Run(gcnew LR4OOPpart2::MyForm());
	return 0;
}