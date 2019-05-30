#pragma once

namespace SimpleQC1_0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class Static;
	ref class LodForm;
	ref class SkinForm;
	/// <summary>
	/// Summary for Static
	/// </summary>
	public ref class Static : public System::Windows::Forms::Form
	{
	public:
		Static(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Static()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  openLodFormButton;
	protected: 



	private: LodForm^  childLodForm;
	private: SkinForm^  childForm3;
	private: System::Windows::Forms::CheckBox^  lodcheck;
	public:
	private:

	public:
	private: System::Windows::Forms::CheckBox^  concaveBox;
	private: System::Windows::Forms::Button^  collision_pick;
	private: System::Windows::Forms::Button^  Sequence_pick;
	private: System::Windows::Forms::Button^  material_pick;
	private: System::Windows::Forms::Button^  Body_pick;
	private: System::Windows::Forms::TextBox^  collisionBox;
	private: System::Windows::Forms::Label^  collision;

	private: System::Windows::Forms::TextBox^  MaterialBox;
	private: System::Windows::Forms::Label^  cdmaterials;
	private: System::Windows::Forms::ComboBox^  SurfaceBox;
	private: System::Windows::Forms::Label^  surface;

	private: System::Windows::Forms::TextBox^  SequenceBox;
	private: System::Windows::Forms::TextBox^  BodyBox;
	private: System::Windows::Forms::Label^  sequence;
	private: System::Windows::Forms::TextBox^  NameBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  open_skin_form;
	private: System::Windows::Forms::CheckBox^  skincheck;
	private: System::Windows::Forms::TextBox^  ScaleBox;
	private: System::Windows::Forms::Label^  Scale;
	private: System::Windows::Forms::TextBox^  ScaleBox2;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Static::typeid));
			this->openLodFormButton = (gcnew System::Windows::Forms::Button());
			this->lodcheck = (gcnew System::Windows::Forms::CheckBox());
			this->concaveBox = (gcnew System::Windows::Forms::CheckBox());
			this->collision_pick = (gcnew System::Windows::Forms::Button());
			this->Sequence_pick = (gcnew System::Windows::Forms::Button());
			this->material_pick = (gcnew System::Windows::Forms::Button());
			this->Body_pick = (gcnew System::Windows::Forms::Button());
			this->collisionBox = (gcnew System::Windows::Forms::TextBox());
			this->collision = (gcnew System::Windows::Forms::Label());
			this->MaterialBox = (gcnew System::Windows::Forms::TextBox());
			this->cdmaterials = (gcnew System::Windows::Forms::Label());
			this->SurfaceBox = (gcnew System::Windows::Forms::ComboBox());
			this->surface = (gcnew System::Windows::Forms::Label());
			this->SequenceBox = (gcnew System::Windows::Forms::TextBox());
			this->BodyBox = (gcnew System::Windows::Forms::TextBox());
			this->sequence = (gcnew System::Windows::Forms::Label());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->open_skin_form = (gcnew System::Windows::Forms::Button());
			this->skincheck = (gcnew System::Windows::Forms::CheckBox());
			this->ScaleBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			this->openLodFormButton->Location = System::Drawing::Point(33, 219);
			this->openLodFormButton->Name = L"openLodFormButton";
			this->openLodFormButton->Size = System::Drawing::Size(212, 23);
			this->openLodFormButton->TabIndex = 0;
			this->openLodFormButton->Text = L"Lods";
			this->openLodFormButton->UseVisualStyleBackColor = true;
			this->openLodFormButton->Click += gcnew System::EventHandler(this, &Static::openLodFormButton_Click);
			this->lodcheck->AutoSize = true;
			this->lodcheck->Enabled = false;
			this->lodcheck->Location = System::Drawing::Point(254, 224);
			this->lodcheck->Name = L"lodcheck";
			this->lodcheck->Size = System::Drawing::Size(15, 14);
			this->lodcheck->TabIndex = 47;
			this->lodcheck->UseVisualStyleBackColor = true;
			this->lodcheck->CheckedChanged += gcnew System::EventHandler(this, &Static::lodcheck_CheckedChanged);
			this->concaveBox->AutoSize = true;
			this->concaveBox->Location = System::Drawing::Point(111, 196);
			this->concaveBox->Name = L"concaveBox";
			this->concaveBox->Size = System::Drawing::Size(69, 17);
			this->concaveBox->TabIndex = 45;
			this->concaveBox->Text = L"Concave";
			this->concaveBox->UseVisualStyleBackColor = true;
			this->concaveBox->CheckedChanged += gcnew System::EventHandler(this, &Static::concaveBox_CheckedChanged);
			this->collision_pick->Location = System::Drawing::Point(254, 169);
			this->collision_pick->Name = L"collision_pick";
			this->collision_pick->Size = System::Drawing::Size(28, 21);
			this->collision_pick->TabIndex = 44;
			this->collision_pick->Text = L"...";
			this->collision_pick->UseVisualStyleBackColor = true;
			this->collision_pick->Click += gcnew System::EventHandler(this, &Static::collision_pick_Click);
			this->Sequence_pick->Location = System::Drawing::Point(254, 143);
			this->Sequence_pick->Name = L"Sequence_pick";
			this->Sequence_pick->Size = System::Drawing::Size(28, 20);
			this->Sequence_pick->TabIndex = 43;
			this->Sequence_pick->Text = L"...";
			this->Sequence_pick->UseVisualStyleBackColor = true;
			this->Sequence_pick->Click += gcnew System::EventHandler(this, &Static::Sequence_pick_Click);
			this->material_pick->Location = System::Drawing::Point(254, 115);
			this->material_pick->Name = L"material_pick";
			this->material_pick->Size = System::Drawing::Size(28, 23);
			this->material_pick->TabIndex = 42;
			this->material_pick->Text = L"...";
			this->material_pick->UseVisualStyleBackColor = true;
			this->material_pick->Click += gcnew System::EventHandler(this, &Static::material_pick_Click);
			this->Body_pick->Location = System::Drawing::Point(254, 64);
			this->Body_pick->Name = L"Body_pick";
			this->Body_pick->Size = System::Drawing::Size(28, 21);
			this->Body_pick->TabIndex = 41;
			this->Body_pick->Text = L"...";
			this->Body_pick->UseVisualStyleBackColor = true;
			this->Body_pick->Click += gcnew System::EventHandler(this, &Static::Body_pick_Click);
			this->collisionBox->Location = System::Drawing::Point(111, 170);
			this->collisionBox->Name = L"collisionBox";
			this->collisionBox->Size = System::Drawing::Size(134, 20);
			this->collisionBox->TabIndex = 40;
			this->collisionBox->TextChanged += gcnew System::EventHandler(this, &Static::collisionBox_TextChanged);
			this->collision->AutoSize = true;
			this->collision->Location = System::Drawing::Point(60, 173);
			this->collision->Name = L"collision";
			this->collision->Size = System::Drawing::Size(45, 13);
			this->collision->TabIndex = 39;
			this->collision->Text = L"Collision";
			this->collision->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->collision->Click += gcnew System::EventHandler(this, &Static::collision_Click);
			this->MaterialBox->Location = System::Drawing::Point(111, 118);
			this->MaterialBox->Name = L"MaterialBox";
			this->MaterialBox->Size = System::Drawing::Size(134, 20);
			this->MaterialBox->TabIndex = 37;
			this->MaterialBox->TextChanged += gcnew System::EventHandler(this, &Static::MaterialBox_TextChanged);
			this->cdmaterials->AutoSize = true;
			this->cdmaterials->Location = System::Drawing::Point(24, 121);
			this->cdmaterials->Name = L"cdmaterials";
			this->cdmaterials->Size = System::Drawing::Size(81, 13);
			this->cdmaterials->TabIndex = 36;
			this->cdmaterials->Text = L"Materials Folder";
			this->cdmaterials->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cdmaterials->Click += gcnew System::EventHandler(this, &Static::cdmaterials_Click);
			this->SurfaceBox->FormattingEnabled = true;
			this->SurfaceBox->Items->AddRange(gcnew cli::array< System::Object^  >(92) {
				L"default", L"default_silent", L"floatingstandable",
					L"item", L"ladder", L"no_decal", L"player", L"player_control_clip", L"baserock", L"boulder", L"brick", L"concrete", L"concrete_block",
					L"gravel", L"rock", L"canister", L"chain", L"chainlink", L"combine_metal", L"crowbar", L"floating_metal_barrel", L"grenade",
					L"gunship", L"metal", L"metal_barrel", L"metal_bouncy", L"Metal_Box", L"metal_seafloorcar", L"metalgrate", L"metalpanel", L"metalvent",
					L"metalvehicle", L"paintcan", L"popcan", L"roller", L"slipperymetal", L"solidmetal", L"strider", L"weapon", L"Wood", L"Wood_Box",
					L"Wood_Crate", L"Wood_Furniture", L"Wood_LowDensity ", L"Wood_Plank", L"Wood_Panel", L"Wood_Solid", L"dirt", L"grass", L"gravel",
					L"mud", L"quicksand", L"sand", L"slipperyslime", L"antlionsand", L"slime", L"water", L"wade", L"ice", L"snow", L"alienflesh",
					L"antlion", L"armorflesh", L"bloodyflesh", L"flesh", L"foliage", L"watermelon", L"zombieflesh", L"asphalt", L"glass", L"glassbottle",
					L"combine_glass", L"tile", L"paper", L"papercup", L"cardboard", L"plaster", L"plastic_barrel", L"plastic_barrel_buoyant", L"Plastic_Box",
					L"plastic", L"rubber", L"rubbertire", L"slidingrubbertire", L"slidingrubbertire_front", L"slidingrubbertire_rear", L"jeeptire",
					L"brakingrubbertire", L"carpet", L"ceiling_tile", L"computer", L"pottery"
			});
			this->SurfaceBox->Location = System::Drawing::Point(111, 91);
			this->SurfaceBox->Name = L"SurfaceBox";
			this->SurfaceBox->Size = System::Drawing::Size(134, 21);
			this->SurfaceBox->TabIndex = 35;
			this->SurfaceBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Static::SurfaceBox_SelectedIndexChanged);
			this->surface->AutoSize = true;
			this->surface->Location = System::Drawing::Point(34, 94);
			this->surface->Name = L"surface";
			this->surface->Size = System::Drawing::Size(71, 13);
			this->surface->TabIndex = 34;
			this->surface->Text = L"Surface Type";
			this->surface->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->surface->Click += gcnew System::EventHandler(this, &Static::surface_Click);
			this->SequenceBox->Location = System::Drawing::Point(111, 144);
			this->SequenceBox->Name = L"SequenceBox";
			this->SequenceBox->Size = System::Drawing::Size(134, 20);
			this->SequenceBox->TabIndex = 32;
			this->SequenceBox->TextChanged += gcnew System::EventHandler(this, &Static::SequenceBox_TextChanged);
			this->BodyBox->Location = System::Drawing::Point(111, 65);
			this->BodyBox->Name = L"BodyBox";
			this->BodyBox->Size = System::Drawing::Size(134, 20);
			this->BodyBox->TabIndex = 31;
			this->BodyBox->TextChanged += gcnew System::EventHandler(this, &Static::BodyBox_TextChanged);
			this->sequence->AutoSize = true;
			this->sequence->Location = System::Drawing::Point(17, 147);
			this->sequence->Name = L"sequence";
			this->sequence->Size = System::Drawing::Size(88, 13);
			this->sequence->TabIndex = 30;
			this->sequence->Text = L"Sequence Model";
			this->sequence->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sequence->Click += gcnew System::EventHandler(this, &Static::sequence_Click);
			this->NameBox->Location = System::Drawing::Point(111, 12);
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(134, 20);
			this->NameBox->TabIndex = 29;
			this->NameBox->Click += gcnew System::EventHandler(this, &Static::name_pick_Click);
			this->NameBox->TextChanged += gcnew System::EventHandler(this, &Static::NameBox_TextChanged);
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Body Model";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &Static::label3_Click);
			this->button1->Location = System::Drawing::Point(33, 293);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Get QC";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Static::button1_Click);
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Model Name";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Static::label2_Click);
			this->open_skin_form->Location = System::Drawing::Point(33, 249);
			this->open_skin_form->Name = L"open_skin_form";
			this->open_skin_form->Size = System::Drawing::Size(212, 23);
			this->open_skin_form->TabIndex = 48;
			this->open_skin_form->Text = L"Skin families";
			this->open_skin_form->UseVisualStyleBackColor = true;
			this->open_skin_form->Click += gcnew System::EventHandler(this, &Static::open_skin_form_Click);
			this->skincheck->AutoSize = true;
			this->skincheck->Enabled = false;
			this->skincheck->Location = System::Drawing::Point(254, 254);
			this->skincheck->Name = L"skincheck";
			this->skincheck->Size = System::Drawing::Size(15, 14);
			this->skincheck->TabIndex = 49;
			this->skincheck->UseVisualStyleBackColor = true;
			this->skincheck->CheckedChanged += gcnew System::EventHandler(this, &Static::skincheck_CheckedChanged);
			this->ScaleBox2->Location = System::Drawing::Point(111, 39);
			this->ScaleBox2->Name = L"ScaleBox2";
			this->ScaleBox2->Size = System::Drawing::Size(134, 20);
			this->ScaleBox2->TabIndex = 50;
			this->ScaleBox2->Text = L"1";
			this->ScaleBox2->TextChanged += gcnew System::EventHandler(this, &Static::ScaleBox2_TextChanged);
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Scale";
			this->label1->Click += gcnew System::EventHandler(this, &Static::label1_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(315, 341);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ScaleBox2);
			this->Controls->Add(this->skincheck);
			this->Controls->Add(this->open_skin_form);
			this->Controls->Add(this->lodcheck);
			this->Controls->Add(this->concaveBox);
			this->Controls->Add(this->collision_pick);
			this->Controls->Add(this->Sequence_pick);
			this->Controls->Add(this->material_pick);
			this->Controls->Add(this->Body_pick);
			this->Controls->Add(this->collisionBox);
			this->Controls->Add(this->collision);
			this->Controls->Add(this->MaterialBox);
			this->Controls->Add(this->cdmaterials);
			this->Controls->Add(this->SurfaceBox);
			this->Controls->Add(this->surface);
			this->Controls->Add(this->SequenceBox);
			this->Controls->Add(this->BodyBox);
			this->Controls->Add(this->sequence);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->openLodFormButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Static";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Static QC";
			this->Load += gcnew System::EventHandler(this, &Static::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			SurfaceBox->Sorted = true;
			NameBox->ForeColor = System::Drawing::Color::Gray;
			NameBox->Text = "example.mdl";
			button1->Select();
			ScaleBox2->Text = "1";
		}
	private: System::Void openLodFormButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void doSomethingInChildForm_Click(System::Object^  sender, System::EventArgs^  e);
	public: System::Void lod_event(System::String^ lod1, System::String^ lod2, System::String^ lod3, System::String^ shadowlod,
		System::String ^ lod1d, System::String ^ lod2d, System::String ^ lod3d);
	public: System::Void skin_event(System::String^ l);
	public: System::Void lod_info();
	public: System::Void file_pick(System::Object^ box);
	public: System::Void skin_event(System::String^ skin1, System::String^ skin2, System::String^ skin3, System::String^ skin4);
	public: System::Void lod_write(System::String^ lod_main, System::String^ lod_dist);
	private: System::Void NameBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void lodcheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void lodbutton_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void concaveBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void collision_pick_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void Sequence_pick_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void material_pick_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void Body_pick_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void collisionBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void collision_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void loop_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void MaterialBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void cdmaterials_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void SurfaceBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void surface_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void staticprop_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void SequenceBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void BodyBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void sequence_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void testbox_TextChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void name_pick_Click(System::Object^  sender, System::EventArgs^  e);
public:  System::String^ lod1_main = "";
public:  System::String^ lod2_main = "";
public:  System::String^ lod3_main = "";
public:  System::String^ lod1_dis = "";
public:  System::String^ lod2_dis = "";
public:  System::String^ lod3_dis = "";
public:  System::String^ shadowlod_main = "";
	public:  System::String^ skin1_main = "";
public:  System::String^ skin2_main = "";
public:  System::String^ skin3_main = "";
public:  System::String^ skin4_main = "";
private: System::Void open_skin_form_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void skincheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void Scale_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ScaleBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ScaleBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
