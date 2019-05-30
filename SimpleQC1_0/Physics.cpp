#include "stdafx.h"
#include "Physics.h"
#include "Static.h"
#include "ChunkForm.h"
#include "LodForm.h"
#include "SkinForm.h"
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace System::IO;

namespace SimpleQC1_0 {
	System::Void Physics::file_pick(System::Object ^ box)
	{
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "SMD Files(*.smd)|*.SMD|All files (*.*)|*.*";
		openDlg->ShowDialog();
		System::String^ name = System::IO::Path::GetFileName(openDlg->FileName);
		((TextBox^)box)->Text = name;
	}

	System::Void Physics::material_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		FolderBrowserDialog^ openDlg = gcnew FolderBrowserDialog();
		//MaterialBox->Text = gcnew DirectoryInfo(openDlg->SelectedPath)->Name;
		System::IO::DirectoryInfo^ dirs;
		openDlg->ShowDialog();
		//dirs = gcnew System::IO::DirectoryInfo(openDlg->SelectedPath);
		//MaterialBox->Text = dirs->Name;	
		MaterialBox->Text = openDlg->SelectedPath;
		std::string abc = marshal_as<std::string>(this->MaterialBox->Text);
		std::string::size_type i1 = abc.find("material");
		std::string abc2 = "materials";
		i1 = i1 + 10;
		abc.erase(0, i1);
		System::String^ mat_path = marshal_as<String^>(abc);
		MaterialBox->Text = mat_path;
		return System::Void();
	}

	System::Void Physics::Body_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		file_pick(BodyBox);
		return System::Void();
	}

	System::Void Physics::collision_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		file_pick(collisionBox);
		return System::Void();
	}

	System::Void Physics::Sequence_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		file_pick(SequenceBox);
		return System::Void();
	}

	System::Void Physics::chunk_event(System::String^ chunk1, System::String^ chunk2, System::String^ chunk3, System::String^ chunk4, System::String^ chunk5) {
		chunk1_main = chunk1;
		chunk2_main = chunk2;
		chunk3_main = chunk3;
		chunk4_main = chunk4;
		chunk5_main = chunk5;
		chunk_check->Checked = true;
		chunk_check->Enabled = true;
	}

	System::Void Physics::skin_event(System::String^ skin1, System::String^ skin2, System::String^ skin3, System::String^ skin4) {

		skin1_main = skin1;
		skin2_main = skin2;
		skin3_main = skin3;
		skin4_main = skin4;
		skincheck->Checked = true;
		skincheck->Enabled = true;

	}

	System::Void Physics::lod_event(System::String^ lod1, System::String^ lod2, System::String^ lod3, System::String^ shadowlod,
		System::String ^ lod1d, System::String ^ lod2d, System::String ^ lod3d) {
		lod1_main = lod1;
		lod2_main = lod2;
		lod3_main = lod3;
		lod1_dis = lod1d;
		lod2_dis = lod2d;
		lod3_dis = lod3d;
		shadowlod_main = shadowlod;
		lodcheck->Checked = true;
		lodcheck->Enabled = true;
	}

	/*
	QCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQC//////////////////////////////////////////
	QCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQC//////////////////////////////////////////
	QCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQCQ//////////////////////////////////////////
	*/

	System::Void Physics::label2_Click(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::propdatabox_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::prop_data_Click(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::chunk_check_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::chunks_button_Click(System::Object ^ sender, System::EventArgs ^ e) {
		chunkchildForm = gcnew ChunkForm(this);
		chunkchildForm->Show();
		chunkchildForm->chunk_load(chunk1_main, chunk2_main, chunk3_main, chunk4_main, chunk5_main);
	}
	System::Void Physics::collision_parameters_Click(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::collisionBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::collision_Click(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::SequenceBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::sequence_Click(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::concaveBox_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e) {   }
	System::Void Physics::skincheck_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::open_skin_form_Click(System::Object ^ sender, System::EventArgs ^ e) {
		skinchildForm = gcnew SkinForm(this);
		skinchildForm->Show();
		skinchildForm->skin_term_physics();
		skinchildForm->skin_load(skin1_main, skin2_main, skin3_main, skin4_main);
	}
	System::Void Physics::lodcheck_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::openForm2Button_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		childLodForm = gcnew LodForm(this);
		childLodForm->Show();
		childLodForm->lod_term_physics();
		childLodForm->lod_load(lod1_main, lod2_main, lod3_main, shadowlod_main, lod1_dis, lod2_dis, lod3_dis);
	}
	System::Void Physics::MaterialBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}
	System::Void Physics::cdmaterials_Click(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::SurfaceBox_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::surface_Click(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::name_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		NameBox->ForeColor = System::Drawing::Color::Black;
		NameBox->Text = "";
	}
	System::Void Physics::BodyBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::NameBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::label3_Click(System::Object ^ sender, System::EventArgs ^ e) {	}
	System::Void Physics::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

		Stream^ qcStream;
		SaveFileDialog^ qcFileSaveDialog = gcnew SaveFileDialog();
		qcFileSaveDialog->Filter = "QCfiles (*.qc)| *.qc |All files(*.*)|*.*";

		if (qcFileSaveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamWriter ^wr = gcnew StreamWriter(qcFileSaveDialog->FileName);
			wr->WriteLine("$modelname" + "   " + NameBox->Text);
			wr->WriteLine(" ");
			if (ScaleBox2->Text != "1")
			{
				wr->WriteLine("$scale " + ScaleBox2->Text);
				wr->WriteLine(" ");
			}
			wr->WriteLine("$staticprop");
			wr->WriteLine("$bodygroup Body");
			wr->WriteLine("{    ");
			wr->WriteLine("	studio " + BodyBox->Text);
			wr->WriteLine("}");
			wr->WriteLine(" ");
			wr->WriteLine(" ");
			wr->WriteLine();
			if (lodcheck->Checked == true)
			{
				if (lod1_main != "")
				{
					wr->WriteLine("$lod " + lod1_dis);
					wr->WriteLine("{");
					wr->Write("replacemodel ");
					wr->WriteLine(BodyBox->Text + " " + lod1_main);
					wr->WriteLine("}");
				}
				if (lod2_main != "")
				{
					wr->WriteLine("$lod " + lod2_dis);
					wr->WriteLine("{");
					wr->Write("replacemodel ");
					wr->WriteLine(BodyBox->Text + " " + lod2_main);
					wr->WriteLine("}");
				}
				if (lod3_main != "")
				{
					wr->WriteLine("$lod " + lod3_dis);
					wr->WriteLine("{");
					wr->Write("replacemodel ");
					wr->WriteLine(BodyBox->Text + " " + lod3_main);
					wr->WriteLine("}");
				}
				if (shadowlod_main != "")
				{
					wr->WriteLine("$shadowlod");
					wr->WriteLine("{");
					wr->Write("replacemodel ");
					wr->WriteLine(BodyBox->Text + " " + shadowlod_main);
					wr->WriteLine("}");
				}
			}
			wr->WriteLine();
			wr->WriteLine("$surfaceprop  " + SurfaceBox->Text);
			wr->WriteLine("$contents  solid");
			wr->WriteLine();
			wr->WriteLine("$cdmaterials   " + MaterialBox->Text);
			if (skincheck->Checked == true)
			{
				wr->WriteLine("$texturegroup skinfamilies");
				wr->WriteLine("{");
				if (skin1_main != "")
				{
					wr->WriteLine("     { " + skin1_main + " }");
				}
				if (skin2_main != "")
				{
					wr->WriteLine("     { " + skin2_main + " }");
				}
				if (skin3_main != "")
				{
					wr->WriteLine("     { " + skin3_main + " }");
				}
				if (skin4_main != "")
				{
					wr->WriteLine("     { " + skin4_main + " }");
				}
				wr->WriteLine("}");
			}
			wr->WriteLine();
			wr->WriteLine("$sequence \"idle\"" + " {");
			wr->WriteLine("\"" + SequenceBox->Text + "\"");
			wr->WriteLine("fadein 0.2");
			wr->WriteLine("fadeout 0.2");
			wr->WriteLine("fps 30");
			wr->WriteLine("}");
			wr->WriteLine();
			wr->WriteLine("$collisionmodel  " + collisionBox->Text);
			wr->WriteLine("{");
			wr->WriteLine("$mass  " + massbox->Text);
			if (concaveBox->Checked == true)
			{
				wr->WriteLine(" $concave ");
			}
			wr->WriteLine("$maxconvexpieces 1");
			wr->WriteLine("}");
			wr->WriteLine();
			if (chunk_check->Checked == true)
			{
				wr->WriteLine("$collisiontext");
				wr->WriteLine("{");
				if (chunk1_main != "")
				{
					wr->WriteLine("     break");
					wr->WriteLine("     {");
					wr->WriteLine("          model     " + chunk1_main);
					wr->WriteLine("          fadetime     " + "  20");
					wr->WriteLine("     }");
				}
				if (chunk2_main != "")
				{
					wr->WriteLine("     break");
					wr->WriteLine("     {");
					wr->WriteLine("          model     " + chunk2_main);
					wr->WriteLine("          fadetime     " + "  20");
					wr->WriteLine("     }");
				}
				if (chunk3_main != "")
				{
					wr->WriteLine("     break");
					wr->WriteLine("     {");
					wr->WriteLine("          model     " + chunk3_main);
					wr->WriteLine("          fadetime     " + "  20");
					wr->WriteLine("     }");
				}
				if (chunk4_main != "")
				{
					wr->WriteLine("     break");
					wr->WriteLine("     {");
					wr->WriteLine("          model     " + chunk4_main);
					wr->WriteLine("          fadetime     " + "  20");
					wr->WriteLine("     }");
				}
				if (chunk5_main != "")
				{
					wr->WriteLine("     break");
					wr->WriteLine("     {");
					wr->WriteLine("          model     " + chunk5_main);
					wr->WriteLine("          fadetime     " + "  20");
					wr->WriteLine("     }");
				}
				wr->WriteLine("}");
			}
			wr->WriteLine("$keyvalues");
			wr->WriteLine("{");
			wr->WriteLine("    prop_data");
			wr->WriteLine("    {");
			wr->WriteLine("       base" + " " + propdatabox->Text);
			wr->WriteLine("    }");
			wr->WriteLine("}");
			wr->Close();
		}
	}

}