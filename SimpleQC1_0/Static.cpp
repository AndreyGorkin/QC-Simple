#include "StdAfx.h"
#include "Static.h"
#include "LodForm.h"
#include "SkinForm.h"
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace System::IO;



namespace SimpleQC1_0 {

	System::Void Static::file_pick(System::Object ^ box)
	{

	}

	System::Void Static::openLodFormButton_Click(System::Object^  sender, System::EventArgs^  e) {

		childLodForm = gcnew LodForm(this);
		childLodForm->Show();
		childLodForm->lod_term_static();
		childLodForm->lod_load(lod1_main, lod2_main, lod3_main, shadowlod_main, lod1_dis, lod2_dis, lod3_dis);
	}

	System::Void Static::doSomethingInChildForm_Click(System::Object^  sender, System::EventArgs^  e) {

	}


	System::Void Static::lod_event(System::String^ lod1, System::String^ lod2, System::String^ lod3, System::String^ shadowlod,
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

	System::Void Static::skin_event(System::String^ skin1, System::String^ skin2, System::String^ skin3, System::String^ skin4) {

		skin1_main = skin1;
		skin2_main = skin2;
		skin3_main = skin3;
		skin4_main = skin4;
		skincheck->Checked = true;
		skincheck->Enabled = true;

	}

	System::Void Static::skin_event(System::String^ l) {

		skincheck->Checked = true;
		skincheck->Enabled = true;
	}

	System::Void Static::lod_write(System::String^ lod_main, System::String^ lod_dist)
	{

	}

	System::Void Static::NameBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::label2_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::lodcheck_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::lodbutton_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::concaveBox_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::collision_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "SMD Files(*.smd)|*.SMD|All files (*.*)|*.*";
		openDlg->ShowDialog();
		System::String^ name = System::IO::Path::GetFileName(openDlg->FileName);
		collisionBox->Text = name;
	}
	System::Void Static::lod_info()
	{

	}
	System::Void Static::Sequence_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "SMD Files(*.smd)|*.SMD|All files (*.*)|*.*";
		openDlg->ShowDialog();
		System::String^ name = System::IO::Path::GetFileName(openDlg->FileName);
		SequenceBox->Text = name;
	}

	System::Void Static::material_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
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
	}

	System::Void Static::Body_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		System::Windows::Forms::Button btn;
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "SMD Files(*.smd)|*.SMD|All files (*.*)|*.*";
		openDlg->ShowDialog();
		System::String^ name = System::IO::Path::GetFileName(openDlg->FileName);
		BodyBox->Text = name;
	}

	System::Void Static::name_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		NameBox->ForeColor = System::Drawing::Color::Black;
		NameBox->Text = "";
	}

	System::Void Static::open_skin_form_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		childForm3 = gcnew SkinForm(this);
		childForm3->Show();
		childForm3->skin_term_static();
		childForm3->skin_load(skin1_main, skin2_main, skin3_main, skin4_main);
		return System::Void();
	}

	System::Void Static::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
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
			wr->WriteLine("$body mybody" + "   " + BodyBox->Text);
			wr->WriteLine(" ");
			wr->WriteLine("$staticprop");
			wr->WriteLine(" ");
			wr->WriteLine("$surfaceprop" + "   " + SurfaceBox->Text);
			wr->WriteLine(" ");
			wr->WriteLine("$cdmaterials" + "   " + MaterialBox->Text);
			wr->WriteLine();
			/////////////////SKIN FAMILIES///////////////////////
			if (skincheck->Checked == true)
			{
				wr->WriteLine("$texturegroup skinfamilies");
				wr->WriteLine("{");
				if (skin1_main != "")
				{
					wr->WriteLine("{ " + skin1_main + " }");
				}
				if (skin2_main != "")
				{
					wr->WriteLine("{ " + skin2_main + " }");
				}
				if (skin3_main != "")
				{
					wr->WriteLine("{ " + skin3_main + " }");
				}
				if (skin4_main != "")
				{
					wr->WriteLine("{ " + skin4_main + " }");
				}
				wr->WriteLine("}");
			}
			wr->WriteLine();
			wr->WriteLine("$sequence idle" + "   " + SequenceBox->Text + "   " + "loop fps 30");
			wr->WriteLine("$collisionmodel" + "   " + collisionBox->Text);

			if (concaveBox->Checked == true)
			{
				wr->Write(" ");
				wr->WriteLine("{ $concave }");
			}
			else
			{
				wr->WriteLine();
			}

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


			wr->Close();
		}
		else
		{
			return;
		}
	}

	System::Void Static::testbox_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}



	System::Void Static::skincheck_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		return System::Void();
	}

	System::Void Static::collisionBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::collision_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::loop_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::MaterialBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::cdmaterials_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::SurfaceBox_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::surface_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::staticprop_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::SequenceBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::BodyBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::sequence_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

	System::Void Static::label3_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}

}
