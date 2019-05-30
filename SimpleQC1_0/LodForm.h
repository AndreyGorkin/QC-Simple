#pragma once

namespace SimpleQC1_0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class LodForm;
	ref class Static;
	ref class Physics;
	/// <summary>
	/// Summary for LodForm
	/// </summary>
	public ref class LodForm : public System::Windows::Forms::Form
	{
	public:
		LodForm(Static^ parent)
		{
			InitializeComponent();
			parentStatic = parent;
		}
		LodForm(Physics^ parent)
		{
			InitializeComponent();
			parentForm2 = parent;
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LodForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Static^  parentStatic;
	private: Physics^  parentForm2;
	private: System::Windows::Forms::TextBox^  lodbox1;
	private: System::Windows::Forms::Button^  lod_apply;



	private: System::Windows::Forms::Button^  lod1_pick;
	private: System::Windows::Forms::Button^  lodpick1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  lodbox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  lodbox3;
	private: System::Windows::Forms::Button^  lod2_pick;
	private: System::Windows::Forms::Button^  lod3_pick;
	private: System::Windows::Forms::CheckBox^  lod1_check;
	private: System::Windows::Forms::CheckBox^  lod2_check;
	private: System::Windows::Forms::CheckBox^  lod3_check;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  shadowlodbox;
	private: System::Windows::Forms::CheckBox^  shadowlod_check;
	private: System::Windows::Forms::Button^  lodshadow_pick;
	private: System::Windows::Forms::NumericUpDown^  lod1_disboxbox;
	private: System::Windows::Forms::NumericUpDown^  lod2_disboxbox;
	private: System::Windows::Forms::NumericUpDown^  lod3_disboxbox;
	private: System::Windows::Forms::NumericUpDown^  lod1_disbox;
	private: System::Windows::Forms::NumericUpDown^  lod2_disbox;
	private: System::Windows::Forms::NumericUpDown^  lod3_disbox;





	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LodForm::typeid));
			this->lodbox1 = (gcnew System::Windows::Forms::TextBox());
			this->lod_apply = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lodbox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lodbox3 = (gcnew System::Windows::Forms::TextBox());
			this->lod2_pick = (gcnew System::Windows::Forms::Button());
			this->lod3_pick = (gcnew System::Windows::Forms::Button());
			this->lod1_check = (gcnew System::Windows::Forms::CheckBox());
			this->lod2_check = (gcnew System::Windows::Forms::CheckBox());
			this->lod3_check = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->shadowlodbox = (gcnew System::Windows::Forms::TextBox());
			this->shadowlod_check = (gcnew System::Windows::Forms::CheckBox());
			this->lodshadow_pick = (gcnew System::Windows::Forms::Button());
			this->lod1_disbox = (gcnew System::Windows::Forms::NumericUpDown());
			this->lod2_disbox = (gcnew System::Windows::Forms::NumericUpDown());
			this->lod3_disbox = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lod1_disbox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lod2_disbox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lod3_disbox))->BeginInit();
			this->SuspendLayout();
			this->lodbox1->Location = System::Drawing::Point(93, 28);
			this->lodbox1->Name = L"lodbox1";
			this->lodbox1->Size = System::Drawing::Size(127, 20);
			this->lodbox1->TabIndex = 0;
			this->lodbox1->TextChanged += gcnew System::EventHandler(this, &LodForm::lodbox1_TextChanged);
			this->lod_apply->Location = System::Drawing::Point(93, 147);
			this->lod_apply->Name = L"lod_apply";
			this->lod_apply->Size = System::Drawing::Size(127, 23);
			this->lod_apply->TabIndex = 1;
			this->lod_apply->Text = L"Apply";
			this->lod_apply->UseVisualStyleBackColor = true;
			this->lod_apply->Click += gcnew System::EventHandler(this, &LodForm::lod_apply_Click);
			this->button1->Location = System::Drawing::Point(250, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 20);
			this->button1->TabIndex = 2;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LodForm::button1_Click);
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Lod";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Lod";
			this->lodbox2->Location = System::Drawing::Point(93, 54);
			this->lodbox2->Name = L"lodbox2";
			this->lodbox2->Size = System::Drawing::Size(127, 20);
			this->lodbox2->TabIndex = 5;
			this->lodbox2->TextChanged += gcnew System::EventHandler(this, &LodForm::lodbox2_TextChanged);
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Lod";
			this->lodbox3->Location = System::Drawing::Point(93, 79);
			this->lodbox3->Name = L"lodbox3";
			this->lodbox3->Size = System::Drawing::Size(127, 20);
			this->lodbox3->TabIndex = 7;
			this->lodbox3->TextChanged += gcnew System::EventHandler(this, &LodForm::lodbox3_TextChanged);
			this->lod2_pick->Location = System::Drawing::Point(250, 54);
			this->lod2_pick->Name = L"lod2_pick";
			this->lod2_pick->Size = System::Drawing::Size(34, 20);
			this->lod2_pick->TabIndex = 8;
			this->lod2_pick->Text = L"...";
			this->lod2_pick->UseVisualStyleBackColor = true;
			this->lod2_pick->Click += gcnew System::EventHandler(this, &LodForm::lod2_pick_Click);
			this->lod3_pick->Location = System::Drawing::Point(250, 79);
			this->lod3_pick->Name = L"lod3_pick";
			this->lod3_pick->Size = System::Drawing::Size(34, 20);
			this->lod3_pick->TabIndex = 9;
			this->lod3_pick->Text = L"...";
			this->lod3_pick->UseVisualStyleBackColor = true;
			this->lod3_pick->Click += gcnew System::EventHandler(this, &LodForm::lod3_pick_Click);
			this->lod1_check->AutoSize = true;
			this->lod1_check->Enabled = false;
			this->lod1_check->Location = System::Drawing::Point(226, 30);
			this->lod1_check->Name = L"lod1_check";
			this->lod1_check->Size = System::Drawing::Size(15, 14);
			this->lod1_check->TabIndex = 10;
			this->lod1_check->UseVisualStyleBackColor = true;
			this->lod1_check->Click += gcnew System::EventHandler(this, &LodForm::lod1_check_CheckedChanged);
			this->lod2_check->AutoSize = true;
			this->lod2_check->Enabled = false;
			this->lod2_check->Location = System::Drawing::Point(226, 58);
			this->lod2_check->Name = L"lod2_check";
			this->lod2_check->Size = System::Drawing::Size(15, 14);
			this->lod2_check->TabIndex = 11;
			this->lod2_check->UseVisualStyleBackColor = true;
			this->lod2_check->Click += gcnew System::EventHandler(this, &LodForm::lod2_check_CheckedChanged);
			this->lod3_check->AutoSize = true;
			this->lod3_check->Enabled = false;
			this->lod3_check->Location = System::Drawing::Point(226, 82);
			this->lod3_check->Name = L"lod3_check";
			this->lod3_check->Size = System::Drawing::Size(15, 14);
			this->lod3_check->TabIndex = 12;
			this->lod3_check->UseVisualStyleBackColor = true;
			this->lod3_check->CheckedChanged += gcnew System::EventHandler(this, &LodForm::lod3_check_CheckedChanged);
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Shadow lod";
			this->shadowlodbox->Location = System::Drawing::Point(93, 105);
			this->shadowlodbox->Name = L"shadowlodbox";
			this->shadowlodbox->Size = System::Drawing::Size(127, 20);
			this->shadowlodbox->TabIndex = 7;
			this->shadowlodbox->TextChanged += gcnew System::EventHandler(this, &LodForm::shadowlodbox_TextChanged);
			this->shadowlod_check->AutoSize = true;
			this->shadowlod_check->Enabled = false;
			this->shadowlod_check->Location = System::Drawing::Point(226, 108);
			this->shadowlod_check->Name = L"shadowlod_check";
			this->shadowlod_check->Size = System::Drawing::Size(15, 14);
			this->shadowlod_check->TabIndex = 12;
			this->shadowlod_check->UseVisualStyleBackColor = true;
			this->shadowlod_check->CheckedChanged += gcnew System::EventHandler(this, &LodForm::shadowlod_check_CheckedChanged);
			this->lodshadow_pick->Location = System::Drawing::Point(250, 105);
			this->lodshadow_pick->Name = L"lodshadow_pick";
			this->lodshadow_pick->Size = System::Drawing::Size(34, 20);
			this->lodshadow_pick->TabIndex = 13;
			this->lodshadow_pick->Text = L"...";
			this->lodshadow_pick->UseVisualStyleBackColor = true;
			this->lodshadow_pick->Click += gcnew System::EventHandler(this, &LodForm::lodshadow_pick_Click);
			this->lod1_disbox->Location = System::Drawing::Point(43, 28);
			this->lod1_disbox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->lod1_disbox->Name = L"lod1_disbox";
			this->lod1_disbox->Size = System::Drawing::Size(44, 20);
			this->lod1_disbox->TabIndex = 14;
			this->lod2_disbox->Location = System::Drawing::Point(43, 54);
			this->lod2_disbox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->lod2_disbox->Name = L"lod2_disbox";
			this->lod2_disbox->Size = System::Drawing::Size(44, 20);
			this->lod2_disbox->TabIndex = 14;
			this->lod3_disbox->Location = System::Drawing::Point(43, 79);
			this->lod3_disbox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->lod3_disbox->Name = L"lod3_disbox";
			this->lod3_disbox->Size = System::Drawing::Size(44, 20);
			this->lod3_disbox->TabIndex = 14;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(307, 200);
			this->Controls->Add(this->lod3_disbox);
			this->Controls->Add(this->lod2_disbox);
			this->Controls->Add(this->lod1_disbox);
			this->Controls->Add(this->lodshadow_pick);
			this->Controls->Add(this->shadowlod_check);
			this->Controls->Add(this->lod3_check);
			this->Controls->Add(this->lod2_check);
			this->Controls->Add(this->lod1_check);
			this->Controls->Add(this->lod3_pick);
			this->Controls->Add(this->lod2_pick);
			this->Controls->Add(this->shadowlodbox);
			this->Controls->Add(this->lodbox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lodbox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lod_apply);
			this->Controls->Add(this->lodbox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LodForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simple LOD";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lod1_disbox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lod2_disbox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lod3_disbox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:  System::String^ lod_term = "";
	private: System::Void lod_apply_Click(System::Object^  sender, System::EventArgs^  e);
	public: System::Void DoSomething(System::String^  message);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	public: System::Void lod_enter(System::Object^ sender_box, System::Object ^ sender_check);
	public: System::Void lodcheck_enable(System::Object^ check);
	public: System::Void clearbox(System::Object^ box, System::Object^ check);
	public: System::Void lod_term_static();
	public: System::Void lod_term_physics();
	public: System::Void lod_load(System::String ^ lod1, System::String ^ lod2, System::String ^ lod3, System::String ^ lod4,
		System::String ^ lod1d, System::String ^ lod2d, System::String ^ lod3d);
	private: System::Void lodbox1_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lodbox2_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lodbox3_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void shadowlodbox_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lod2_pick_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lod3_pick_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void lodshadow_pick_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lod1_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lod2_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lod3_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void shadowlod_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lod_get(System::Object^ sender_box);

	private: System::Void lod1_disbox_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lod3_disbox_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lod2_disbox_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lod1_disbox_SelectedItemChanged_1(System::Object^  sender, System::EventArgs^  e);
	};
}
