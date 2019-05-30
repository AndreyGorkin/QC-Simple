#include "stdafx.h"
#include "QClibrary.h"

using namespace System::IO;

namespace SimpleQC1_0
{
	System::Void QClibrary::crateQC_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		SaveFileDialog^ qcFileSaveDialog = gcnew SaveFileDialog();
		qcFileSaveDialog->Filter = "QCfiles (*.qc)| *.qc |All files(*.*)|*.*";

		if (qcFileSaveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamWriter ^wr = gcnew StreamWriter(qcFileSaveDialog->FileName);
			wr->WriteLine("$modelname wood_crate001.mdl");
			wr->WriteLine("");
			wr->WriteLine("$staticprop");
			wr->WriteLine("");
			wr->WriteLine("$bodygroup Body");
			wr->WriteLine("{");
			wr->WriteLine("	studio wood_crate001a_reference.smd");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$lod 200");
			wr->WriteLine("{");
			wr->WriteLine("	replacemodel wood_crate001a_reference.smd wood_crate001a_reference_lod1.smd");
			wr->WriteLine("	nofacial");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$surfaceprop Wood_Crate");
			wr->WriteLine("$contents solid");
			wr->WriteLine("");
			wr->WriteLine("$illumposition 0 -0.125 0");
			wr->WriteLine("$cdmaterials models\props_junk");
			wr->WriteLine("");
			wr->WriteLine("$texturegroup skinfamilies");
			wr->WriteLine("{");
			wr->WriteLine("{ woodcrates01a }");
			wr->WriteLine("{ WoodCrates02a }");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$definebone static_prop  0 0 0 0 0 0 0 0 0 0 0 0");
			wr->WriteLine("");
			wr->WriteLine("$sequence idle {");
			wr->WriteLine("	wood_crate001a_anims\idle.smd");
			wr->WriteLine("	fadein 0.2");
			wr->WriteLine("	fadeout 0.2");
			wr->WriteLine("	fps 30");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$collisionmodel wood_crate001a_physics.smd");
			wr->WriteLine("{");
			wr->WriteLine("	$mass 30");
			wr->WriteLine("	$inertia 1");
			wr->WriteLine(" $damping 0");
			wr->WriteLine(" $rotdamping 0");
			wr->WriteLine(" $rootbone");
			wr->WriteLine(" $concave");
			wr->WriteLine(" $maxconvexpieces 1");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$collisiontext");
			wr->WriteLine("{");
			wr->WriteLine("");
			wr->WriteLine("break ");
			wr->WriteLine("{");
			wr->WriteLine("model		props_junk/wood_crate001a_Chunk01");
			wr->WriteLine("fadetime		20");
			wr->WriteLine("}");
			wr->WriteLine("break ");
			wr->WriteLine("{");
			wr->WriteLine("model		props_junk/wood_crate001a_Chunk02");
			wr->WriteLine("fadetime		20");
			wr->WriteLine("}");
			wr->WriteLine("break ");
			wr->WriteLine("{");
			wr->WriteLine("model		props_junk/wood_crate001a_Chunk03");
			wr->WriteLine("fadetime		20");
			wr->WriteLine("}");
			wr->WriteLine("break");
			wr->WriteLine("{");
			wr->WriteLine("model		props_junk/wood_crate001a_Chunk04");
			wr->WriteLine("fadetime		20");
			wr->WriteLine("}");
			wr->WriteLine("break ");
			wr->WriteLine("{");
			wr->WriteLine("model		props_junk/wood_crate001a_Chunk05");
			wr->WriteLine("fadetime		20");
			wr->WriteLine("}");
			wr->WriteLine("break");
			wr->WriteLine("{");
			wr->WriteLine("model		props_junk/wood_crate001a_Chunk07");
			wr->WriteLine("fadetime		20");
			wr->WriteLine("}");
			wr->WriteLine("break ");
			wr->WriteLine("{");
			wr->WriteLine("model		props_junk/wood_crate001a_Chunk09");
			wr->WriteLine("fadetime		20");
			wr->WriteLine("}");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$keyvalues");
			wr->WriteLine("{");
			wr->WriteLine("prop_data ");
			wr->WriteLine("{");
			wr->WriteLine("base		Wooden.Medium");
			wr->WriteLine("}");
			wr->WriteLine("}");
			wr->Close();

			return System::Void();
		}
	}
	System::Void QClibrary::Oildrum001ExplosiveQC_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		SaveFileDialog^ qcFileSaveDialog = gcnew SaveFileDialog();
		qcFileSaveDialog->Filter = "QCfiles (*.qc)| *.qc |All files(*.*)|*.*";

		if (qcFileSaveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamWriter ^wr = gcnew StreamWriter(qcFileSaveDialog->FileName);
			wr->WriteLine("$modelname props_c17\oildrum001_explosive.mdl");
			wr->WriteLine("");
			wr->WriteLine("$staticprop");
			wr->WriteLine("");
			wr->WriteLine("$bodygroup Body");
			wr->WriteLine("{");
			wr->WriteLine("     studio oildrum001_explosive_reference.smd");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$lod 30");
			wr->WriteLine("{");
			wr->WriteLine("     replacemodel oildrum001_explosive_reference.smd oildrum001_explosive_reference_lod1.smd");
			wr->WriteLine("     nofacial");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$surfaceprop floating_metal_barrel");
			wr->WriteLine("$contents solid");
			wr->WriteLine("$illumposition 0 0 22.5");
			wr->WriteLine("$noforcedfade");
			wr->WriteLine("$cdmaterials models\props_c17");
			wr->WriteLine("");
			wr->WriteLine("$cbox 0 0 0 0 0 0");
			wr->WriteLine("");
			wr->WriteLine("$bbox -14.5 -14.5 -0.281 14.5 14.5 45.281");
			wr->WriteLine("$definebone static_prop  0 0 0 0 0 0 0 0 0 0 0 0");
			wr->WriteLine("");
			wr->WriteLine("$sequence idle {");
			wr->WriteLine("oildrum001_explosive_anims\idle.smd");
			wr->WriteLine("fadein 0.2");
			wr->WriteLine("fadeout 0.2");
			wr->WriteLine("fps 5");
			wr->WriteLine("loop");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$collisionmodel oildrum001_explosive_physics.smd");
			wr->WriteLine("{");
			wr->WriteLine("$mass 35");
			wr->WriteLine("$inertia 1");
			wr->WriteLine("$damping 0");
			wr->WriteLine("$rotdamping 0");
			wr->WriteLine("$rootbone");
			wr->WriteLine("$concave");
			wr->WriteLine("$maxconvexpieces 1");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$collisiontext");
			wr->WriteLine("{");
			wr->WriteLine("break");
			wr->WriteLine("{");
			wr->WriteLine("model		props_c17/oildrumchunk01a");
			wr->WriteLine("health		10");
			wr->WriteLine("fadetime		10");
			wr->WriteLine("burst		100");
			wr->WriteLine("}");
			wr->WriteLine("break ");
			wr->WriteLine("{");
			wr->WriteLine("model		props_c17/oildrumchunk01b");
			wr->WriteLine("health		10");
			wr->WriteLine("fadetime		10");
			wr->WriteLine("burst		100");
			wr->WriteLine("}");
			wr->WriteLine("break");
			wr->WriteLine("{");
			wr->WriteLine("model		props_c17/oildrumchunk01c");
			wr->WriteLine("health		10");
			wr->WriteLine("fadetime		10");
			wr->WriteLine("burst		100");
			wr->WriteLine("}");
			wr->WriteLine("break ");
			wr->WriteLine("{");
			wr->WriteLine("model		props_c17/oildrumchunk01d");
			wr->WriteLine("health		10");
			wr->WriteLine("fadetime		10");
			wr->WriteLine("burst		100");
			wr->WriteLine("}");
			wr->WriteLine("break");
			wr->WriteLine("{");
			wr->WriteLine("model		props_c17/oildrumchunk01e");
			wr->WriteLine("health		10");
			wr->WriteLine("fadetime		10");
			wr->WriteLine("burst		100");
			wr->WriteLine("}");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$keyvalues");
			wr->WriteLine("{");
			wr->WriteLine("prop_data ");
			wr->WriteLine("{");
			wr->WriteLine("dmg.bullets		1.0");
			wr->WriteLine("dmg.club		1.0");
			wr->WriteLine("dmg.explosive		1.0");
			wr->WriteLine("health		20");
			wr->WriteLine("explosive_damage		120");
			wr->WriteLine("explosive_radius		256");
			wr->WriteLine("}");
			wr->WriteLine("physgun_interactions ");
			wr->WriteLine("{");
			wr->WriteLine("onfirstimpact		break");
			wr->WriteLine("}");
			wr->WriteLine("fire_interactions ");
			wr->WriteLine("flammable		yes");
			wr->WriteLine("explosive_resist		yes");
			wr->WriteLine("ignite		halfhealth");
			wr->WriteLine("}");
			wr->WriteLine("}");
			wr->Close();
		}
		return System::Void();
	}
	System::Void QClibrary::Powerbox01aQC_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		SaveFileDialog^ qcFileSaveDialog = gcnew SaveFileDialog();
		qcFileSaveDialog->Filter = "QCfiles (*.qc)| *.qc |All files(*.*)|*.*";

		if (qcFileSaveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamWriter ^wr = gcnew StreamWriter(qcFileSaveDialog->FileName);
			wr->WriteLine("$modelname props_lab / powerbox01a.mdl");
			wr->WriteLine("");
			wr->WriteLine("$bodygroup Body");
			wr->WriteLine("{");
			wr->WriteLine("studio powerbox01a_reference.smd");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$lod 40");
			wr->WriteLine("{");
			wr->WriteLine("replacemodel powerbox01a_reference.smd powerbox01a_reference_lod1.smd");
			wr->WriteLine("nofacial");
			wr->WriteLine("}");
			wr->WriteLine("$lod 55");
			wr->WriteLine("{");
			wr->WriteLine("replacemodel powerbox01a_reference.smd powerbox01a_reference_lod2.smd");
			wr->WriteLine("	nofacial");
			wr->WriteLine("}");
			wr->WriteLine("$lod 75");
			wr->WriteLine("{");
			wr->WriteLine("replacemodel powerbox01a_reference.smd powerbox01a_reference_lod3.smd");
			wr->WriteLine("nofacial");
			wr->WriteLine("}");
			wr->WriteLine("$lod 150");
			wr->WriteLine("{");
			wr->WriteLine("replacemodel powerbox01a_reference.smd powerbox01a_reference_lod4.smd");
			wr->WriteLine("nofacial");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$surfaceprop metal");
			wr->WriteLine("");
			wr->WriteLine("$contents solid");
			wr->WriteLine("$illumposition 0 0 0");
			wr->WriteLine("$cdmaterials models\props_lab");
			wr->WriteLine("$cbox 0 0 0 0 0 0");
			wr->WriteLine("");
			wr->WriteLine("$bbox -13.754 -16.136 -25.511 13.642 15.968 26.289");
			wr->WriteLine("");
			wr->WriteLine("$definebone static_prop  0 0 0 0 0 0 0 0 0 0 0 0");
			wr->WriteLine("");
			wr->WriteLine("$sequence idle {");
			wr->WriteLine("powerbox01a_anims\idle.smd");
			wr->WriteLine("fadein 0.2");
			wr->WriteLine("fadeout 0.2");
			wr->WriteLine("fps 30");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$collisionmodel powerbox01a_physics.smd");
			wr->WriteLine("{");
			wr->WriteLine("$mass 150");
			wr->WriteLine("$inertia 1");
			wr->WriteLine("$damping 0");
			wr->WriteLine("$rotdamping 0");
			wr->WriteLine("$rootbone  ");
			wr->WriteLine("$concave");
			wr->WriteLine("$maxconvexpieces 1");
			wr->WriteLine("}");
			wr->Close();
			return System::Void();
		}
	}
	System::Void QClibrary::flagsQC_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		SaveFileDialog^ qcFileSaveDialog = gcnew SaveFileDialog();
		qcFileSaveDialog->Filter = "QCfiles (*.qc)| *.qc |All files(*.*)|*.*";

		if (qcFileSaveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamWriter ^wr = gcnew StreamWriter(qcFileSaveDialog->FileName);
			wr->WriteLine("$modelname mapmodels\flags.mdl");
			wr->WriteLine("$bodygroup flags");
			wr->WriteLine("{");
			wr->WriteLine("studio flags_flag_german.smd");
			wr->WriteLine("studio flags_flag_american.smd");
			wr->WriteLine("studio flags_flag_british.smd");
			wr->WriteLine("studio flags_flag_neutral.smd");
			wr->WriteLine("studio flags_bigflag_german.smd");
			wr->WriteLine("studio flags_bigflag_american.smd");
			wr->WriteLine("studio flags_bigflag_british.smd");
			wr->WriteLine("studio flags_bigflag_neutral.smd");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$surfaceprop solidmetal");
			wr->WriteLine("$contents solid");
			wr->WriteLine("$illumposition 1.756 -15.762 41.69");
			wr->WriteLine("");
			wr->WriteLine("$cdmaterials models\mapmodels\flags");
			wr->WriteLine("");
			wr->WriteLine("$cbox 0 0 0 0 0 0");
			wr->WriteLine("");
			wr->WriteLine("$bbox -5.148 -10.888 -24.767 36.669 14.399 108.147");
			wr->WriteLine("");

			wr->WriteLine("$definebone null  0.01959 1.146123 90.746826 - 89.999983 89.999983 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone root null 10.088097 0.164281 1.568963 0 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone root 0 0 0 - 66.051208 - 179.067071 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone1 bone 8.061314 0 0 5.310742 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone2 bone1 10.321329 0 0 - 1.516161 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone3 bone2 8.786701 0 0.000008 0.088981 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone4 bone3 8.176785 0 - 0.000008 1.896665 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone root3 root - 0.408981 - 0.00666 11.733115 0 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone10 root3 0 0 0 - 65.956419 - 179.067057 - 0.000019 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone11 bone10 8.366043 0 0.000008 - 3.999417 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone12 bone11 9.149378 0 0 1.313908 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone root4 root3 0.545311 0.00888 14.188886 0 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone13 root4 0 0 0 - 74.587278 - 179.067057 0.000019 0 0 0 0 0 0");
			wr->WriteLine("$definebone root1 null 6.134651 0.0999 1.432531 0 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone5 root1 0 0 0 - 54.479782 - 179.067057 - 0.000019 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone6 bone5 8.213615 0 0.000008 0.000001 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone7 bone6 8.213619 0 0 0.168965 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone root2 null 0.408974 0.00666 1.2961 0 0 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone8 root2 0 0 0 - 48.198193 - 179.067071 0 0 0 0 0 0 0");
			wr->WriteLine("$definebone bone9 bone8 6.954685 0 0 1.815818 0 0 0 0 0 0 0 0");

			wr->WriteLine("$sequence flag_idle1 {");
			wr->WriteLine("	flags_anims\flag_idle1.smd");
			wr->WriteLine("	fadein 0.2");
			wr->WriteLine("	fadeout 0.2");
			wr->WriteLine("	fps 30");
			wr->WriteLine("	loop");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$sequence flag_idle2 {");
			wr->WriteLine("	flags_anims\flag_idle2.smd");
			wr->WriteLine("	fadein 0.2");
			wr->WriteLine("	fadeout 0.2");
			wr->WriteLine("	fps 30");
			wr->WriteLine("	loop");
			wr->WriteLine("}");
			wr->WriteLine("");
			wr->WriteLine("$sequence bigflag_idle1 {");
			wr->WriteLine("	flags_anims\bigflag_idle1.smd");
			wr->WriteLine("	fadein 0.2");
			wr->WriteLine("	fadeout 0.2");
			wr->WriteLine("	fps 30");
			wr->WriteLine("	loop");
			wr->WriteLine("}");
			wr->Close();
			return System::Void();
		}
	}
}