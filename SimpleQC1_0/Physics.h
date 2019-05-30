#pragma once

namespace SimpleQC1_0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class Physics;
	ref class LodForm;
	ref class ChunkForm;
	ref class SkinForm;
	/// <summary>
	/// —водка дл€ Physics
	/// </summary>
	public ref class Physics : public System::Windows::Forms::Form
	{
	public:
		Physics(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Physics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Body_pick;
	protected:



	public: LodForm^  childLodForm;
	public: ChunkForm^  chunkchildForm;
	public: SkinForm^  skinchildForm;

	private: System::Windows::Forms::TextBox^  BodyBox;
	private: System::Windows::Forms::TextBox^  NameBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  SurfaceBox;
	private: System::Windows::Forms::Label^  surface;
	private: System::Windows::Forms::Button^  material_pick;
	private: System::Windows::Forms::TextBox^  MaterialBox;
	private: System::Windows::Forms::Label^  cdmaterials;
	private: System::Windows::Forms::CheckBox^  skincheck;
	private: System::Windows::Forms::Button^  open_skin_form;
	private: System::Windows::Forms::CheckBox^  lodcheck;
	private: System::Windows::Forms::Button^  openForm2Button;
	private: System::Windows::Forms::Button^  Sequence_pick;
	private: System::Windows::Forms::TextBox^  SequenceBox;
	private: System::Windows::Forms::Label^  sequence;
	private: System::Windows::Forms::Button^  collision_pick;
	private: System::Windows::Forms::TextBox^  collisionBox;
	private: System::Windows::Forms::Label^  collision;

	private: System::Windows::Forms::Button^  chunks_button;
	private: System::Windows::Forms::CheckBox^  chunk_check;
	private: System::Windows::Forms::Label^  prop_data;
	private: System::Windows::Forms::ComboBox^  propdatabox;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::NumericUpDown^  massbox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  concaveBox;

	private: System::Windows::Forms::Label^  Scale;
	private: System::Windows::Forms::TextBox^  ScaleBox;
	private: System::Windows::Forms::TextBox^  ScaleBox2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Physics::typeid));
			this->Body_pick = (gcnew System::Windows::Forms::Button());
			this->BodyBox = (gcnew System::Windows::Forms::TextBox());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SurfaceBox = (gcnew System::Windows::Forms::ComboBox());
			this->surface = (gcnew System::Windows::Forms::Label());
			this->material_pick = (gcnew System::Windows::Forms::Button());
			this->MaterialBox = (gcnew System::Windows::Forms::TextBox());
			this->cdmaterials = (gcnew System::Windows::Forms::Label());
			this->skincheck = (gcnew System::Windows::Forms::CheckBox());
			this->open_skin_form = (gcnew System::Windows::Forms::Button());
			this->lodcheck = (gcnew System::Windows::Forms::CheckBox());
			this->openForm2Button = (gcnew System::Windows::Forms::Button());
			this->Sequence_pick = (gcnew System::Windows::Forms::Button());
			this->SequenceBox = (gcnew System::Windows::Forms::TextBox());
			this->sequence = (gcnew System::Windows::Forms::Label());
			this->collision_pick = (gcnew System::Windows::Forms::Button());
			this->collisionBox = (gcnew System::Windows::Forms::TextBox());
			this->collision = (gcnew System::Windows::Forms::Label());
			this->chunks_button = (gcnew System::Windows::Forms::Button());
			this->chunk_check = (gcnew System::Windows::Forms::CheckBox());
			this->prop_data = (gcnew System::Windows::Forms::Label());
			this->propdatabox = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->massbox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->concaveBox = (gcnew System::Windows::Forms::CheckBox());
			this->Scale = (gcnew System::Windows::Forms::Label());
			this->ScaleBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massbox))->BeginInit();
			this->SuspendLayout();
			this->Body_pick->Location = System::Drawing::Point(252, 83);
			this->Body_pick->Name = L"Body_pick";
			this->Body_pick->Size = System::Drawing::Size(28, 21);
			this->Body_pick->TabIndex = 46;
			this->Body_pick->Text = L"...";
			this->Body_pick->UseVisualStyleBackColor = true;
			this->Body_pick->Click += gcnew System::EventHandler(this, &Physics::Body_pick_Click);
			this->BodyBox->Location = System::Drawing::Point(109, 84);
			this->BodyBox->Name = L"BodyBox";
			this->BodyBox->Size = System::Drawing::Size(134, 20);
			this->BodyBox->TabIndex = 45;
			this->BodyBox->TextChanged += gcnew System::EventHandler(this, &Physics::BodyBox_TextChanged);
			this->NameBox->Location = System::Drawing::Point(109, 32);
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(134, 20);
			this->NameBox->TabIndex = 44;
			this->NameBox->Click += gcnew System::EventHandler(this, &Physics::name_pick_Click);
			this->NameBox->TextChanged += gcnew System::EventHandler(this, &Physics::NameBox_TextChanged);
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Body Model";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label3->Click += gcnew System::EventHandler(this, &Physics::label3_Click);
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Model Name";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Click += gcnew System::EventHandler(this, &Physics::label2_Click);
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
			this->SurfaceBox->Location = System::Drawing::Point(109, 110);
			this->SurfaceBox->Name = L"SurfaceBox";
			this->SurfaceBox->Size = System::Drawing::Size(134, 21);
			this->SurfaceBox->TabIndex = 48;
			this->SurfaceBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Physics::SurfaceBox_SelectedIndexChanged);
			this->surface->AutoSize = true;
			this->surface->Location = System::Drawing::Point(30, 113);
			this->surface->Name = L"surface";
			this->surface->Size = System::Drawing::Size(71, 13);
			this->surface->TabIndex = 47;
			this->surface->Text = L"Surface Type";
			this->surface->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->surface->Click += gcnew System::EventHandler(this, &Physics::surface_Click);
			this->material_pick->Location = System::Drawing::Point(252, 134);
			this->material_pick->Name = L"material_pick";
			this->material_pick->Size = System::Drawing::Size(28, 23);
			this->material_pick->TabIndex = 51;
			this->material_pick->Text = L"...";
			this->material_pick->UseVisualStyleBackColor = true;
			this->material_pick->Click += gcnew System::EventHandler(this, &Physics::material_pick_Click);
			this->MaterialBox->Location = System::Drawing::Point(109, 137);
			this->MaterialBox->Name = L"MaterialBox";
			this->MaterialBox->Size = System::Drawing::Size(134, 20);
			this->MaterialBox->TabIndex = 50;
			this->MaterialBox->TextChanged += gcnew System::EventHandler(this, &Physics::MaterialBox_TextChanged);
			this->cdmaterials->AutoSize = true;
			this->cdmaterials->Location = System::Drawing::Point(25, 140);
			this->cdmaterials->Name = L"cdmaterials";
			this->cdmaterials->Size = System::Drawing::Size(76, 13);
			this->cdmaterials->TabIndex = 49;
			this->cdmaterials->Text = L"Material Folder";
			this->cdmaterials->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->cdmaterials->Click += gcnew System::EventHandler(this, &Physics::cdmaterials_Click);
			this->skincheck->AutoSize = true;
			this->skincheck->Enabled = false;
			this->skincheck->Location = System::Drawing::Point(252, 333);
			this->skincheck->Name = L"skincheck";
			this->skincheck->Size = System::Drawing::Size(15, 14);
			this->skincheck->TabIndex = 55;
			this->skincheck->UseVisualStyleBackColor = true;
			this->skincheck->CheckedChanged += gcnew System::EventHandler(this, &Physics::skincheck_CheckedChanged);
			this->open_skin_form->Location = System::Drawing::Point(27, 328);
			this->open_skin_form->Name = L"open_skin_form";
			this->open_skin_form->Size = System::Drawing::Size(216, 23);
			this->open_skin_form->TabIndex = 54;
			this->open_skin_form->Text = L"Skin families";
			this->open_skin_form->UseVisualStyleBackColor = true;
			this->open_skin_form->Click += gcnew System::EventHandler(this, &Physics::open_skin_form_Click);
			this->lodcheck->AutoSize = true;
			this->lodcheck->Enabled = false;
			this->lodcheck->Location = System::Drawing::Point(252, 303);
			this->lodcheck->Name = L"lodcheck";
			this->lodcheck->Size = System::Drawing::Size(15, 14);
			this->lodcheck->TabIndex = 53;
			this->lodcheck->UseVisualStyleBackColor = true;
			this->lodcheck->CheckedChanged += gcnew System::EventHandler(this, &Physics::lodcheck_CheckedChanged);
			this->openForm2Button->Location = System::Drawing::Point(27, 298);
			this->openForm2Button->Name = L"openForm2Button";
			this->openForm2Button->Size = System::Drawing::Size(216, 23);
			this->openForm2Button->TabIndex = 52;
			this->openForm2Button->Text = L"Lods";
			this->openForm2Button->UseVisualStyleBackColor = true;
			this->openForm2Button->Click += gcnew System::EventHandler(this, &Physics::openForm2Button_Click);
			this->Sequence_pick->Location = System::Drawing::Point(252, 162);
			this->Sequence_pick->Name = L"Sequence_pick";
			this->Sequence_pick->Size = System::Drawing::Size(28, 20);
			this->Sequence_pick->TabIndex = 58;
			this->Sequence_pick->Text = L"...";
			this->Sequence_pick->UseVisualStyleBackColor = true;
			this->Sequence_pick->Click += gcnew System::EventHandler(this, &Physics::Sequence_pick_Click);
			this->SequenceBox->Location = System::Drawing::Point(109, 163);
			this->SequenceBox->Name = L"SequenceBox";
			this->SequenceBox->Size = System::Drawing::Size(134, 20);
			this->SequenceBox->TabIndex = 57;
			this->SequenceBox->TextChanged += gcnew System::EventHandler(this, &Physics::SequenceBox_TextChanged);
			this->sequence->AutoSize = true;
			this->sequence->Location = System::Drawing::Point(16, 166);
			this->sequence->Name = L"sequence";
			this->sequence->Size = System::Drawing::Size(88, 13);
			this->sequence->TabIndex = 56;
			this->sequence->Text = L"Sequence Model";
			this->sequence->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->sequence->Click += gcnew System::EventHandler(this, &Physics::sequence_Click);
			this->collision_pick->Location = System::Drawing::Point(252, 188);
			this->collision_pick->Name = L"collision_pick";
			this->collision_pick->Size = System::Drawing::Size(28, 21);
			this->collision_pick->TabIndex = 61;
			this->collision_pick->Text = L"...";
			this->collision_pick->UseVisualStyleBackColor = true;
			this->collision_pick->Click += gcnew System::EventHandler(this, &Physics::collision_pick_Click);
			this->collisionBox->Location = System::Drawing::Point(109, 189);
			this->collisionBox->Name = L"collisionBox";
			this->collisionBox->Size = System::Drawing::Size(134, 20);
			this->collisionBox->TabIndex = 60;
			this->collisionBox->TextChanged += gcnew System::EventHandler(this, &Physics::collisionBox_TextChanged);
			this->collision->AutoSize = true;
			this->collision->Location = System::Drawing::Point(56, 192);
			this->collision->Name = L"collision";
			this->collision->Size = System::Drawing::Size(45, 13);
			this->collision->TabIndex = 59;
			this->collision->Text = L"Collision";
			this->collision->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->collision->Click += gcnew System::EventHandler(this, &Physics::collision_Click);
			this->chunks_button->Location = System::Drawing::Point(27, 269);
			this->chunks_button->Name = L"chunks_button";
			this->chunks_button->Size = System::Drawing::Size(216, 23);
			this->chunks_button->TabIndex = 63;
			this->chunks_button->Text = L"Chunks";
			this->chunks_button->UseVisualStyleBackColor = true;
			this->chunks_button->Click += gcnew System::EventHandler(this, &Physics::chunks_button_Click);
			this->chunk_check->AutoSize = true;
			this->chunk_check->Enabled = false;
			this->chunk_check->Location = System::Drawing::Point(252, 274);
			this->chunk_check->Name = L"chunk_check";
			this->chunk_check->Size = System::Drawing::Size(15, 14);
			this->chunk_check->TabIndex = 64;
			this->chunk_check->UseVisualStyleBackColor = true;
			this->chunk_check->CheckedChanged += gcnew System::EventHandler(this, &Physics::chunk_check_CheckedChanged);
			this->prop_data->AutoSize = true;
			this->prop_data->Location = System::Drawing::Point(51, 245);
			this->prop_data->Name = L"prop_data";
			this->prop_data->Size = System::Drawing::Size(52, 13);
			this->prop_data->TabIndex = 65;
			this->prop_data->Text = L"Prop Type";
			this->prop_data->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->prop_data->Click += gcnew System::EventHandler(this, &Physics::prop_data_Click);
			this->propdatabox->FormattingEnabled = true;
			this->propdatabox->Items->AddRange(gcnew cli::array< System::Object^  >(33) {
				L"Cardboard.Small", L"Cardboard.Medium", L"Cardboard.Large",
					L"Cloth.Small", L"Cloth.Medium", L"Cloth.Large", L"Wooden.Tiny", L"Wooden.Small", L"Wooden.Medium", L"Wooden.Large", L"Wooden.ExtraLarge",
					L"Wooden.Huge", L"Stone.Small", L"Stone.Medium", L"Stone.Large", L"Stone.Huge", L"Glass.Small", L"Glass.Window", L"Metal.Small",
					L"Metal.Medium", L"Metal.Large", L"Plastic.Small", L"Item.Small", L"Plastic.Medium", L"Item.Medium", L"Plastic.Large", L"Item.Large",
					L"Pottery.Small", L"Pottery.Medium", L"Pottery.Large", L"Pottery.Huge", L"Flesh.Tiny", L"Flesh.Small"
			});
			this->propdatabox->Location = System::Drawing::Point(109, 242);
			this->propdatabox->Name = L"propdatabox";
			this->propdatabox->Size = System::Drawing::Size(134, 21);
			this->propdatabox->TabIndex = 66;
			this->propdatabox->TabStop = false;
			this->propdatabox->SelectedIndexChanged += gcnew System::EventHandler(this, &Physics::propdatabox_SelectedIndexChanged);
			this->button1->Location = System::Drawing::Point(27, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 23);
			this->button1->TabIndex = 67;
			this->button1->Text = L"Get QC";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Physics::button1_Click);
			this->massbox->Location = System::Drawing::Point(109, 216);
			this->massbox->Name = L"massbox";
			this->massbox->Size = System::Drawing::Size(40, 20);
			this->massbox->TabIndex = 69;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Mass";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &Physics::prop_data_Click);
			this->concaveBox->AutoSize = true;
			this->concaveBox->Location = System::Drawing::Point(155, 219);
			this->concaveBox->Name = L"concaveBox";
			this->concaveBox->Size = System::Drawing::Size(69, 17);
			this->concaveBox->TabIndex = 70;
			this->concaveBox->Text = L"Concave";
			this->concaveBox->UseVisualStyleBackColor = true;
			this->concaveBox->CheckedChanged += gcnew System::EventHandler(this, &Physics::concaveBox_CheckedChanged);
			this->Scale->AutoSize = true;
			this->Scale->Location = System::Drawing::Point(67, 60);
			this->Scale->Name = L"Scale";
			this->Scale->Size = System::Drawing::Size(34, 13);
			this->Scale->TabIndex = 72;
			this->Scale->Text = L"Scale";
			this->Scale->Click += gcnew System::EventHandler(this, &Physics::Scale_Click);
			this->ScaleBox2->Location = System::Drawing::Point(108, 57);
			this->ScaleBox2->Name = L"ScaleBox2";
			this->ScaleBox2->Size = System::Drawing::Size(135, 20);
			this->ScaleBox2->TabIndex = 73;
			this->ScaleBox2->Text = L"1";
			this->ScaleBox2->TextChanged += gcnew System::EventHandler(this, &Physics::ScaleBox2_TextChanged);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(309, 429);
			this->Controls->Add(this->ScaleBox2);
			this->Controls->Add(this->Scale);
			this->Controls->Add(this->concaveBox);
			this->Controls->Add(this->massbox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->propdatabox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->prop_data);
			this->Controls->Add(this->chunk_check);
			this->Controls->Add(this->chunks_button);
			this->Controls->Add(this->collision_pick);
			this->Controls->Add(this->collisionBox);
			this->Controls->Add(this->collision);
			this->Controls->Add(this->Sequence_pick);
			this->Controls->Add(this->SequenceBox);
			this->Controls->Add(this->sequence);
			this->Controls->Add(this->skincheck);
			this->Controls->Add(this->open_skin_form);
			this->Controls->Add(this->lodcheck);
			this->Controls->Add(this->openForm2Button);
			this->Controls->Add(this->material_pick);
			this->Controls->Add(this->MaterialBox);
			this->Controls->Add(this->cdmaterials);
			this->Controls->Add(this->SurfaceBox);
			this->Controls->Add(this->surface);
			this->Controls->Add(this->Body_pick);
			this->Controls->Add(this->BodyBox);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Physics";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Physics QC";
			this->Load += gcnew System::EventHandler(this, &Physics::Physics_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->massbox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Physics_Load(System::Object^  sender, System::EventArgs^  e) {
		SurfaceBox->Sorted = true;
		propdatabox->Sorted = true;
		NameBox->ForeColor = System::Drawing::Color::Gray;
		NameBox->Text = "example.mdl";
		button1->Select();
		ScaleBox2->Text = "1";
	}

	public:  System::String^ chunk1_main = "";
	public:  System::String^ chunk2_main = "";
	public:  System::String^ chunk3_main = "";
	public:  System::String^ chunk4_main = "";
	public:  System::String^ chunk5_main = "";
	public:  System::String^ skin1_main = "";
	public:  System::String^ skin2_main = "";
	public:  System::String^ skin3_main = "";
	public:  System::String^ skin4_main = "";
	public:  System::String^ lod1_main = "";
	public:  System::String^ lod2_main = "";
	public:  System::String^ lod3_main = "";
	public:  System::String^ lod1_dis = "";
	public:  System::String^ lod2_dis = "";
	public:  System::String^ lod3_dis = "";
	public:  System::String^ shadowlod_main = "";


	public: System::Void file_pick(System::Object^ box);
	public: System::Void chunk_event(System::String^ chunk1, System::String^ chunk2, System::String^ chunk3, System::String^ chunk4, System::String^ chunk5);
	public: System::Void lod_event(System::String^ lod1, System::String^ lod2, System::String^ lod3, System::String^ shadowlod,
		System::String ^ lod1d, System::String ^ lod2d, System::String ^ lod3d);
	public: System::Void skin_event(System::String^ skin1, System::String^ skin2, System::String^ skin3, System::String^ skin4);
	private: System::Void name_pick_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void propdatabox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void prop_data_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunk_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunks_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void collision_parameters_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void collision_pick_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void collisionBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void collision_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Sequence_pick_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void SequenceBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void sequence_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void skincheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void open_skin_form_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lodcheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void openForm2Button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void material_pick_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MaterialBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cdmaterials_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void SurfaceBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void surface_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Body_pick_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void BodyBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void NameBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void concaveBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ScaleBox_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Scale_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void ScaleBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ScaleBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
