#include "MyForm.h"
#include "FormMenu.h" 
using namespace System;
using namespace System::Windows::Forms; [STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);  Application::Run(gcnew
		TRABAJOFINALPROGRA::FormMenu()); //Project 1 es el nombre del proyecto
}