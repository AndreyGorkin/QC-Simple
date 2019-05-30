#include "stdafx.h"
#include "ChunkForm.h"
#include "Physics.h"



namespace SimpleQC1_0
{


	System::Void ChunkForm::check_enable(System::Object ^ check)
	{
		((CheckBox^)check)->Enabled = true;
		((CheckBox^)check)->Checked = true;


	}

	System::Void ChunkForm::check_disable(System::Object ^ check)
	{
		((CheckBox^)check)->Enabled = false;
		((CheckBox^)check)->Checked = false;

	}

	System::Void ChunkForm::check_term(System::Object ^ box, System::Object ^ check)
	{

		if (((TextBox^)box)->Text != "example.mdl")
		{
			if (((TextBox^)box)->Text == "")
			{
				check_disable((CheckBox^)check);
			}
			else
			{
				check_enable((CheckBox^)check);
			}
		}
		return System::Void();

	}

	System::Void ChunkForm::chunk_load(System::String ^ chunk1, System::String ^ chunk2, System::String ^ chunk3, System::String ^ chunk4, System::String ^ chunk5)
	{
		chunkbox1->Text = chunk1;
		chunkbox2->Text = chunk2;
		chunkbox3->Text = chunk3;
		chunkbox4->Text = chunk4;
		chunkbox5->Text = chunk5;
		return System::Void();
	}

	System::Void ChunkForm::clearbox(System::Object ^ box, System::Object^ check)
	{
		if (((CheckBox^)check)->Checked != true)
		{
			((TextBox^)box)->Text = "";
			((CheckBox^)check)->Checked = false;
			((CheckBox^)check)->Enabled = false;
		}
	}

	System::Void ChunkForm::chunk_enter(System::Object^ sender_box, System::Object^ check)
	{
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "MDL Files(*.mdl)|*.MDL|All files (*.*)|*.*";
		openDlg->ShowDialog();
		System::String^ chunk = System::IO::Path::GetFileName(openDlg->FileName);
		((TextBox^)sender_box)->Text = chunk;
		((CheckBox^)check)->Checked = true;
		((CheckBox^)check)->Enabled = true;
		return System::Void();
	}




	System::Void ChunkForm::chunkbox1_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		check_term(chunkbox1, chunk1_check);
		return System::Void();
	}

	System::Void ChunkForm::chunk5_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void ChunkForm::chunk4_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void ChunkForm::chunk3_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void ChunkForm::chunk2_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void ChunkForm::chunk1_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void ChunkForm::chunkbox5_button_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		chunk_enter(chunkbox5, chunk5_check);
		return System::Void();
	}

	System::Void ChunkForm::chunkbox4_button_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		chunk_enter(chunkbox4, chunk4_check);
		return System::Void();
	}

	System::Void ChunkForm::chunkbox3_button_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		chunk_enter(chunkbox3, chunk3_check);
		return System::Void();
	}

	System::Void ChunkForm::chunkbox2_button_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		chunk_enter(chunkbox2, chunk2_check);
		return System::Void();
	}

	System::Void ChunkForm::chunkbox1_button_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		chunk_enter(chunkbox1, chunk1_check);
		return System::Void();
	}

	System::Void ChunkForm::chunkbox5_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		check_term(chunkbox5, chunk5_check);
		return System::Void();
	}

	System::Void ChunkForm::chunkbox4_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		check_term(chunkbox4, chunk4_check);
		return System::Void();
	}

	System::Void ChunkForm::chunkbox3_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		check_term(chunkbox3, chunk3_check);
		return System::Void();
	}

	System::Void ChunkForm::chunkbox2_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		check_term(chunkbox2, chunk2_check);

		return System::Void();
	}

	System::Void ChunkForm::chunk_apply_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		parentStatic->chunk_event(chunkbox1->Text, chunkbox2->Text, chunkbox3->Text, chunkbox4->Text, chunkbox5->Text);
		this->Visible = false;
		return System::Void();
	}

}