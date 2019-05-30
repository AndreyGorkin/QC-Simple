#include "StdAfx.h"
#include "Static.h"
#include "LodForm.h"
#include "Physics.h"

namespace SimpleQC1_0 {

	System::Void LodForm::lod_term_static() {
		lod_term = "static";
	}

	System::Void LodForm::lod_term_physics() {
		lod_term = "physics";
	}

	System::Void LodForm::lod_load(System::String ^ lod1, System::String ^ lod2, System::String ^ lod3, System::String ^ lod4,
		System::String ^ lod1d, System::String ^ lod2d, System::String ^ lod3d)
	{
		lodbox1->Text = lod1;
		lodbox2->Text = lod2;
		lodbox3->Text = lod3;
		shadowlodbox->Text = lod4;
		lod1_disbox->Text = lod1d;
		lod2_disbox->Text = lod2d;
		lod3_disbox->Text = lod3d;
		return System::Void();
	}


	//FUNCTIONS
	System::Void LodForm::lod_apply_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lod_term == "static")
		{
			parentStatic->lod_event(lodbox1->Text, lodbox2->Text, lodbox3->Text, shadowlodbox->Text, lod1_disbox->Text, lod2_disbox->Text, lod3_disbox->Text);
		}
		else if (lod_term == "physics")
		{
			parentForm2->lod_event(lodbox1->Text, lodbox2->Text, lodbox3->Text, shadowlodbox->Text, lod1_disbox->Text, lod2_disbox->Text, lod3_disbox->Text);
		}
		this->Visible = false;

	}



	System::Void LodForm::lod_enter(System::Object^ sender_box, System::Object^ check)
	{
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "SMD Files(*.smd)|*.SMD|All files (*.*)|*.*";
		openDlg->ShowDialog();
		System::String^ lod1 = System::IO::Path::GetFileName(openDlg->FileName);
		((TextBox^)sender_box)->Text = lod1;
		((CheckBox^)check)->Checked = true;
		((CheckBox^)check)->Enabled = true;
		return System::Void();
	}

	System::Void LodForm::lod_get(System::Object^ sender_box)
	{
		System::String^ lod_string = ((TextBox^)sender_box)->Text;
		return System::Void(lod_string);
	}

	System::Void LodForm::lod1_disbox_SelectedItemChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void LodForm::lod3_disbox_SelectedItemChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void LodForm::lod2_disbox_SelectedItemChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void LodForm::lod1_disbox_SelectedItemChanged_1(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void LodForm::lodcheck_enable(System::Object ^ check)
	{
		((CheckBox^)check)->Enabled = true;
		((CheckBox^)check)->Checked = true;

	}

	System::Void LodForm::clearbox(System::Object ^ box, System::Object^ check)
	{
		if (((CheckBox^)check)->Checked != true)
		{
			((TextBox^)box)->Text = "";
			((CheckBox^)check)->Checked = false;
			((CheckBox^)check)->Enabled = false;
		}
	}

	System::Void LodForm::lodbox1_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		lodcheck_enable(lod1_check);
		return System::Void();
	}

	System::Void LodForm::lodbox2_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		lodcheck_enable(lod2_check);
		return System::Void();
	}

	System::Void LodForm::lodbox3_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		lodcheck_enable(lod3_check);
		return System::Void();
	}

	System::Void LodForm::shadowlodbox_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		lodcheck_enable(shadowlod_check);
		return System::Void();
	}


	System::Void LodForm::DoSomething(System::String^ message) {
		lodbox1->Text = message;
	}

	System::Void LodForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		lod_enter(lodbox1, lod1_check);
		return System::Void();
	}



	System::Void LodForm::lod2_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		lod_enter(lodbox2, lod2_check);
		return System::Void();
	}

	System::Void LodForm::lod3_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		lod_enter(lodbox3, lod3_check);
		return System::Void();
	}

	System::Void LodForm::lodshadow_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		lod_enter(shadowlodbox, shadowlod_check);
		return System::Void();
	}

	System::Void LodForm::lod1_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		clearbox(lodbox1, sender);
		return System::Void();
	}

	System::Void LodForm::lod2_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		clearbox(lodbox2, sender);
		return System::Void();
	}

	System::Void LodForm::lod3_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		clearbox(lodbox3, sender);
		return System::Void();
	}

	System::Void LodForm::shadowlod_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		clearbox(shadowlodbox, sender);
		return System::Void();
	}



}