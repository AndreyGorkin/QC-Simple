#include "start.h"
#include "StdAfx.h"
#include "Static.h"
#include "Physics.h"
#include "About.h"
#include "QClibrary.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SimpleQC1_0::start form; //WinFormsTest - имя вашего проекта
	Application::Run(%form);
}

System::Void SimpleQC1_0::start::Gen1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Static^ frm = gcnew Static;
	frm->Show();
	return System::Void();
}

System::Void SimpleQC1_0::start::Gen2_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Physics^ frm = gcnew Physics;
	frm->Show();
	return System::Void();
}

System::Void SimpleQC1_0::start::Library_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	QClibrary^ frm = gcnew QClibrary;
	frm->Show();
	return System::Void();
}

System::Void SimpleQC1_0::start::button2_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	About^ frm = gcnew About;
	frm->Show();
	return System::Void();
}
