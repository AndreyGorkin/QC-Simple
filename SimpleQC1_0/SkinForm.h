#pragma once

namespace SimpleQC1_0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class SkinForm;
	ref class Static;
	ref class Physics;

	/// <summary>
	/// —водка дл€ SkinForm
	/// </summary>
	public ref class SkinForm : public System::Windows::Forms::Form
	{
	public:
		SkinForm(Static^ parent)
		{
			InitializeComponent();
			parentLodForm = parent;
		}
		SkinForm(Physics^ parent)
		{
			InitializeComponent();
			parentPhysForm = parent;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SkinForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: Static^  parentLodForm;
	public: Physics^  parentPhysForm;
	private: System::Windows::Forms::TextBox^  skinbox1;
	private: System::Windows::Forms::TextBox^  skinbox2;
	private: System::Windows::Forms::TextBox^  skinbox3;
	private: System::Windows::Forms::TextBox^  skinbox4;
	private: System::Windows::Forms::Button^  skin_apply;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  skin1_check;
	private: System::Windows::Forms::CheckBox^  skin2_check;
	private: System::Windows::Forms::CheckBox^  skin3_check;
	private: System::Windows::Forms::CheckBox^  skin4_check;

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SkinForm::typeid));
			this->skinbox1 = (gcnew System::Windows::Forms::TextBox());
			this->skinbox2 = (gcnew System::Windows::Forms::TextBox());
			this->skinbox3 = (gcnew System::Windows::Forms::TextBox());
			this->skinbox4 = (gcnew System::Windows::Forms::TextBox());
			this->skin_apply = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->skin1_check = (gcnew System::Windows::Forms::CheckBox());
			this->skin2_check = (gcnew System::Windows::Forms::CheckBox());
			this->skin3_check = (gcnew System::Windows::Forms::CheckBox());
			this->skin4_check = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			this->skinbox1->Location = System::Drawing::Point(24, 37);
			this->skinbox1->Name = L"skinbox1";
			this->skinbox1->Size = System::Drawing::Size(128, 20);
			this->skinbox1->TabIndex = 0;
			this->skinbox1->TextChanged += gcnew System::EventHandler(this, &SkinForm::skinbox1_TextChanged);
			this->skinbox2->Location = System::Drawing::Point(24, 75);
			this->skinbox2->Name = L"skinbox2";
			this->skinbox2->Size = System::Drawing::Size(128, 20);
			this->skinbox2->TabIndex = 0;
			this->skinbox2->TextChanged += gcnew System::EventHandler(this, &SkinForm::skinbox2_TextChanged);
			this->skinbox3->Location = System::Drawing::Point(24, 113);
			this->skinbox3->Name = L"skinbox3";
			this->skinbox3->Size = System::Drawing::Size(128, 20);
			this->skinbox3->TabIndex = 0;
			this->skinbox3->TextChanged += gcnew System::EventHandler(this, &SkinForm::skinbox3_TextChanged);
			this->skinbox4->Location = System::Drawing::Point(24, 150);
			this->skinbox4->Name = L"skinbox4";
			this->skinbox4->Size = System::Drawing::Size(128, 20);
			this->skinbox4->TabIndex = 0;
			this->skinbox4->TextChanged += gcnew System::EventHandler(this, &SkinForm::skinbox4_TextChanged);
			this->skin_apply->Location = System::Drawing::Point(24, 202);
			this->skin_apply->Name = L"skin_apply";
			this->skin_apply->Size = System::Drawing::Size(128, 23);
			this->skin_apply->TabIndex = 1;
			this->skin_apply->Text = L"Apply";
			this->skin_apply->UseVisualStyleBackColor = true;
			this->skin_apply->Click += gcnew System::EventHandler(this, &SkinForm::skin_apply_Click);
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Skin 1";
			this->label1->Click += gcnew System::EventHandler(this, &SkinForm::label1_Click);
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Skin 2";
			this->label2->Click += gcnew System::EventHandler(this, &SkinForm::label2_Click);
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Skin 3";
			this->label3->Click += gcnew System::EventHandler(this, &SkinForm::label3_Click);
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Skin 4";
			this->label4->Click += gcnew System::EventHandler(this, &SkinForm::label4_Click);
			this->skin1_check->AutoSize = true;
			this->skin1_check->Enabled = false;
			this->skin1_check->Location = System::Drawing::Point(159, 37);
			this->skin1_check->Name = L"skin1_check";
			this->skin1_check->Size = System::Drawing::Size(15, 14);
			this->skin1_check->TabIndex = 3;
			this->skin1_check->UseVisualStyleBackColor = true;
			this->skin1_check->CheckedChanged += gcnew System::EventHandler(this, &SkinForm::skin1_check_CheckedChanged);
			this->skin2_check->AutoSize = true;
			this->skin2_check->Enabled = false;
			this->skin2_check->Location = System::Drawing::Point(159, 78);
			this->skin2_check->Name = L"skin2_check";
			this->skin2_check->Size = System::Drawing::Size(15, 14);
			this->skin2_check->TabIndex = 3;
			this->skin2_check->UseVisualStyleBackColor = true;
			this->skin2_check->CheckedChanged += gcnew System::EventHandler(this, &SkinForm::skin2_check_CheckedChanged);
			this->skin3_check->AutoSize = true;
			this->skin3_check->Enabled = false;
			this->skin3_check->Location = System::Drawing::Point(159, 116);
			this->skin3_check->Name = L"skin3_check";
			this->skin3_check->Size = System::Drawing::Size(15, 14);
			this->skin3_check->TabIndex = 3;
			this->skin3_check->UseVisualStyleBackColor = true;
			this->skin3_check->CheckedChanged += gcnew System::EventHandler(this, &SkinForm::skin3_check_CheckedChanged);
			this->skin4_check->AutoSize = true;
			this->skin4_check->Enabled = false;
			this->skin4_check->Location = System::Drawing::Point(158, 153);
			this->skin4_check->Name = L"skin4_check";
			this->skin4_check->Size = System::Drawing::Size(15, 14);
			this->skin4_check->TabIndex = 3;
			this->skin4_check->UseVisualStyleBackColor = true;
			this->skin4_check->CheckedChanged += gcnew System::EventHandler(this, &SkinForm::skin4_check_CheckedChanged);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(196, 261);
			this->Controls->Add(this->skin4_check);
			this->Controls->Add(this->skin3_check);
			this->Controls->Add(this->skin2_check);
			this->Controls->Add(this->skin1_check);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->skin_apply);
			this->Controls->Add(this->skinbox4);
			this->Controls->Add(this->skinbox3);
			this->Controls->Add(this->skinbox2);
			this->Controls->Add(this->skinbox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SkinForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simple Skin";
			this->Load += gcnew System::EventHandler(this, &SkinForm::SkinForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:  System::String^ skin_term = "";

	public: System::Void check_enable(System::Object ^ check);
	public: System::Void check_disable(System::Object ^ check);
	public: System::Void clearbox(System::Object ^ box, System::Object^ check);
	public: System::Void check_term(System::Object ^ box, System::Object ^ check);
	public: System::Void skin_term_static();
	public: System::Void skin_term_physics();
	public: System::Void skin_load(System::String ^ skin1, System::String ^ skin2, System::String ^ skin3, System::String ^ skin4);
	private: System::Void skin_apply_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void skinbox1_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void skinbox3_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void skinbox2_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void skinbox4_TextChanged(System::Object^  sender, System::EventArgs^  e);



	private: System::Void skin1_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void skin3_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void skin4_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void skin2_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void SkinForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
