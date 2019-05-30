#include "stdafx.h"
#include "SkinForm.h"
#include "LodForm.h"
#include "Static.h"
#include "Physics.h"

using namespace System::IO;

namespace SimpleQC1_0 {

	//STATE
	System::Void SkinForm::skin_term_static() {
		skin_term = "static";
	}

	System::Void SkinForm::skin_term_physics() {
		skin_term = "physics";
	}

	System::Void SkinForm::skin_load(System::String ^ skin1, System::String ^ skin2, System::String ^ skin3, System::String ^ skin4)
	{
		skinbox1->Text = skin1;
		skinbox2->Text = skin2;
		skinbox3->Text = skin3;
		skinbox4->Text = skin4;
		return System::Void();
	}



	//FUNCTIONS

	System::Void SkinForm::check_enable(System::Object ^ check)
	{
		((CheckBox^)check)->Enabled = true;
		((CheckBox^)check)->Checked = true;


	}

	System::Void SkinForm::check_disable(System::Object ^ check)
	{
		((CheckBox^)check)->Enabled = false;
		((CheckBox^)check)->Checked = false;

	}

	System::Void SkinForm::check_term(System::Object ^ box, System::Object ^ check)
	{

		if (((TextBox^)box)->Text == "")
		{
			check_disable((CheckBox^)check);
		}
		else
		{
			check_enable((CheckBox^)check);
		}
		return System::Void();

	}

	System::Void SkinForm::clearbox(System::Object ^ box, System::Object^ check)
	{
		if (((CheckBox^)check)->Checked != true)
		{
			((TextBox^)box)->Text = "";
			((CheckBox^)check)->Checked = false;
			((CheckBox^)check)->Enabled = false;
		}
	}



	System::Void SkinForm::skin_apply_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (skin_term == "static")
		{
			parentLodForm->skin_event(skinbox1->Text, skinbox2->Text, skinbox3->Text, skinbox4->Text);
		}
		else if (skin_term == "physics")
		{
			parentPhysForm->skin_event(skinbox1->Text, skinbox2->Text, skinbox3->Text, skinbox4->Text);
		}
		this->Visible = false;
		return System::Void();

	}


	//////////EVENTS

	System::Void SkinForm::skinbox1_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		check_term(skinbox1, skin1_check);
		return System::Void();
	}

	System::Void SkinForm::skinbox3_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		check_term(skinbox3, skin3_check);
		return System::Void();
	}

	System::Void SkinForm::skinbox2_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		check_term(skinbox2, skin2_check);
		return System::Void();
	}

	System::Void SkinForm::skinbox4_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		check_term(skinbox4, skin4_check);
		return System::Void();
	}
	System::Void SkinForm::skin1_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		clearbox(skinbox1, skin1_check);
		return System::Void();
	}
	System::Void SkinForm::skin3_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		clearbox(skinbox3, skin3_check);
		return System::Void();
	}
	System::Void SkinForm::skin4_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		clearbox(skinbox4, skin4_check);
		return System::Void();
	}
	System::Void SkinForm::skin2_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		clearbox(skinbox2, skin2_check);
		return System::Void();
	}
}

