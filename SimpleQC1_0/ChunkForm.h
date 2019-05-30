#pragma once

namespace SimpleQC1_0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class ChunkForm;
	ref class Physics;
	/// <summary>
	/// —водка дл€ ChunkForm
	/// </summary>
	public ref class ChunkForm : public System::Windows::Forms::Form
	{
	public:
		ChunkForm(Physics^ parent)
		{
			InitializeComponent();
			parentStatic = parent;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~ChunkForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Physics^  parentStatic;

	private: System::Windows::Forms::TextBox^  chunkbox1;
	private: System::Windows::Forms::TextBox^  chunkbox2;
	private: System::Windows::Forms::TextBox^  chunkbox3;
	private: System::Windows::Forms::TextBox^  chunkbox4;
	private: System::Windows::Forms::TextBox^  chunkbox5;
	private: System::Windows::Forms::Button^  chunkbox1_button;
	private: System::Windows::Forms::Button^  chunkbox2_button;
	private: System::Windows::Forms::Button^  chunkbox3_button;
	private: System::Windows::Forms::Button^  chunkbox4_button;
	private: System::Windows::Forms::Button^  chunkbox5_button;
	private: System::Windows::Forms::CheckBox^  chunk1_check;
	private: System::Windows::Forms::CheckBox^  chunk2_check;
	private: System::Windows::Forms::CheckBox^  chunk3_check;
	private: System::Windows::Forms::CheckBox^  chunk4_check;
	private: System::Windows::Forms::CheckBox^  chunk5_check;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  chunk_apply;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ChunkForm::typeid));
			this->chunkbox1 = (gcnew System::Windows::Forms::TextBox());
			this->chunkbox2 = (gcnew System::Windows::Forms::TextBox());
			this->chunkbox3 = (gcnew System::Windows::Forms::TextBox());
			this->chunkbox4 = (gcnew System::Windows::Forms::TextBox());
			this->chunkbox5 = (gcnew System::Windows::Forms::TextBox());
			this->chunkbox1_button = (gcnew System::Windows::Forms::Button());
			this->chunkbox2_button = (gcnew System::Windows::Forms::Button());
			this->chunkbox3_button = (gcnew System::Windows::Forms::Button());
			this->chunkbox4_button = (gcnew System::Windows::Forms::Button());
			this->chunkbox5_button = (gcnew System::Windows::Forms::Button());
			this->chunk1_check = (gcnew System::Windows::Forms::CheckBox());
			this->chunk2_check = (gcnew System::Windows::Forms::CheckBox());
			this->chunk3_check = (gcnew System::Windows::Forms::CheckBox());
			this->chunk4_check = (gcnew System::Windows::Forms::CheckBox());
			this->chunk5_check = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chunk_apply = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			this->chunkbox1->Location = System::Drawing::Point(103, 17);
			this->chunkbox1->Name = L"chunkbox1";
			this->chunkbox1->Size = System::Drawing::Size(123, 20);
			this->chunkbox1->TabIndex = 0;
			this->chunkbox1->Click += gcnew System::EventHandler(this, &ChunkForm::chunk_pick_Click);
			this->chunkbox1->TextChanged += gcnew System::EventHandler(this, &ChunkForm::chunkbox1_TextChanged);
			this->chunkbox2->Location = System::Drawing::Point(103, 42);
			this->chunkbox2->Name = L"chunkbox2";
			this->chunkbox2->Size = System::Drawing::Size(123, 20);
			this->chunkbox2->TabIndex = 1;
			this->chunkbox2->TextChanged += gcnew System::EventHandler(this, &ChunkForm::chunkbox2_TextChanged);
			this->chunkbox3->Location = System::Drawing::Point(103, 67);
			this->chunkbox3->Name = L"chunkbox3";
			this->chunkbox3->Size = System::Drawing::Size(123, 20);
			this->chunkbox3->TabIndex = 2;
			this->chunkbox3->TextChanged += gcnew System::EventHandler(this, &ChunkForm::chunkbox3_TextChanged);
			this->chunkbox4->Location = System::Drawing::Point(103, 93);
			this->chunkbox4->Name = L"chunkbox4";
			this->chunkbox4->Size = System::Drawing::Size(123, 20);
			this->chunkbox4->TabIndex = 3;
			this->chunkbox4->TextChanged += gcnew System::EventHandler(this, &ChunkForm::chunkbox4_TextChanged);
			this->chunkbox5->Location = System::Drawing::Point(103, 120);
			this->chunkbox5->Name = L"chunkbox5";
			this->chunkbox5->Size = System::Drawing::Size(123, 20);
			this->chunkbox5->TabIndex = 4;
			this->chunkbox5->TextChanged += gcnew System::EventHandler(this, &ChunkForm::chunkbox5_TextChanged);
			this->chunkbox1_button->Location = System::Drawing::Point(254, 17);
			this->chunkbox1_button->Name = L"chunkbox1_button";
			this->chunkbox1_button->Size = System::Drawing::Size(28, 20);
			this->chunkbox1_button->TabIndex = 5;
			this->chunkbox1_button->Text = L"...";
			this->chunkbox1_button->UseVisualStyleBackColor = true;
			this->chunkbox1_button->Click += gcnew System::EventHandler(this, &ChunkForm::chunkbox1_button_Click);
			this->chunkbox2_button->Location = System::Drawing::Point(254, 42);
			this->chunkbox2_button->Name = L"chunkbox2_button";
			this->chunkbox2_button->Size = System::Drawing::Size(28, 20);
			this->chunkbox2_button->TabIndex = 5;
			this->chunkbox2_button->Text = L"...";
			this->chunkbox2_button->UseVisualStyleBackColor = true;
			this->chunkbox2_button->Click += gcnew System::EventHandler(this, &ChunkForm::chunkbox2_button_Click);
			this->chunkbox3_button->Location = System::Drawing::Point(254, 67);
			this->chunkbox3_button->Name = L"chunkbox3_button";
			this->chunkbox3_button->Size = System::Drawing::Size(28, 20);
			this->chunkbox3_button->TabIndex = 5;
			this->chunkbox3_button->Text = L"...";
			this->chunkbox3_button->UseVisualStyleBackColor = true;
			this->chunkbox3_button->Click += gcnew System::EventHandler(this, &ChunkForm::chunkbox3_button_Click);
			this->chunkbox4_button->Location = System::Drawing::Point(254, 94);
			this->chunkbox4_button->Name = L"chunkbox4_button";
			this->chunkbox4_button->Size = System::Drawing::Size(28, 20);
			this->chunkbox4_button->TabIndex = 5;
			this->chunkbox4_button->Text = L"...";
			this->chunkbox4_button->UseVisualStyleBackColor = true;
			this->chunkbox4_button->Click += gcnew System::EventHandler(this, &ChunkForm::chunkbox4_button_Click);
			this->chunkbox5_button->Location = System::Drawing::Point(254, 120);
			this->chunkbox5_button->Name = L"chunkbox5_button";
			this->chunkbox5_button->Size = System::Drawing::Size(28, 20);
			this->chunkbox5_button->TabIndex = 5;
			this->chunkbox5_button->Text = L"...";
			this->chunkbox5_button->UseVisualStyleBackColor = true;
			this->chunkbox5_button->Click += gcnew System::EventHandler(this, &ChunkForm::chunkbox5_button_Click);
			this->chunk1_check->AutoSize = true;
			this->chunk1_check->Enabled = false;
			this->chunk1_check->Location = System::Drawing::Point(233, 20);
			this->chunk1_check->Name = L"chunk1_check";
			this->chunk1_check->Size = System::Drawing::Size(15, 14);
			this->chunk1_check->TabIndex = 6;
			this->chunk1_check->UseVisualStyleBackColor = true;
			this->chunk1_check->CheckedChanged += gcnew System::EventHandler(this, &ChunkForm::chunk1_check_CheckedChanged);
			this->chunk2_check->AutoSize = true;
			this->chunk2_check->Enabled = false;
			this->chunk2_check->Location = System::Drawing::Point(233, 45);
			this->chunk2_check->Name = L"chunk2_check";
			this->chunk2_check->Size = System::Drawing::Size(15, 14);
			this->chunk2_check->TabIndex = 7;
			this->chunk2_check->UseVisualStyleBackColor = true;
			this->chunk2_check->CheckedChanged += gcnew System::EventHandler(this, &ChunkForm::chunk2_check_CheckedChanged);
			this->chunk3_check->AutoSize = true;
			this->chunk3_check->Enabled = false;
			this->chunk3_check->Location = System::Drawing::Point(233, 70);
			this->chunk3_check->Name = L"chunk3_check";
			this->chunk3_check->Size = System::Drawing::Size(15, 14);
			this->chunk3_check->TabIndex = 8;
			this->chunk3_check->UseVisualStyleBackColor = true;
			this->chunk3_check->CheckedChanged += gcnew System::EventHandler(this, &ChunkForm::chunk3_check_CheckedChanged);
			this->chunk4_check->AutoSize = true;
			this->chunk4_check->Enabled = false;
			this->chunk4_check->Location = System::Drawing::Point(233, 97);
			this->chunk4_check->Name = L"chunk4_check";
			this->chunk4_check->Size = System::Drawing::Size(15, 14);
			this->chunk4_check->TabIndex = 9;
			this->chunk4_check->UseVisualStyleBackColor = true;
			this->chunk4_check->CheckedChanged += gcnew System::EventHandler(this, &ChunkForm::chunk4_check_CheckedChanged);
			this->chunk5_check->AutoSize = true;
			this->chunk5_check->Enabled = false;
			this->chunk5_check->Location = System::Drawing::Point(233, 123);
			this->chunk5_check->Name = L"chunk5_check";
			this->chunk5_check->Size = System::Drawing::Size(15, 14);
			this->chunk5_check->TabIndex = 10;
			this->chunk5_check->UseVisualStyleBackColor = true;
			this->chunk5_check->CheckedChanged += gcnew System::EventHandler(this, &ChunkForm::chunk5_check_CheckedChanged);
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Chunk 1 model";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Chunk 2 model";
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Chunk 3 model";
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Chunk 4 model";
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Chunk 5 model";
			this->chunk_apply->Location = System::Drawing::Point(103, 169);
			this->chunk_apply->Name = L"chunk_apply";
			this->chunk_apply->Size = System::Drawing::Size(123, 23);
			this->chunk_apply->TabIndex = 13;
			this->chunk_apply->Text = L"Apply";
			this->chunk_apply->UseVisualStyleBackColor = true;
			this->chunk_apply->Click += gcnew System::EventHandler(this, &ChunkForm::chunk_apply_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 206);
			this->Controls->Add(this->chunk_apply);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chunk5_check);
			this->Controls->Add(this->chunk4_check);
			this->Controls->Add(this->chunk3_check);
			this->Controls->Add(this->chunk2_check);
			this->Controls->Add(this->chunk1_check);
			this->Controls->Add(this->chunkbox5_button);
			this->Controls->Add(this->chunkbox4_button);
			this->Controls->Add(this->chunkbox3_button);
			this->Controls->Add(this->chunkbox2_button);
			this->Controls->Add(this->chunkbox1_button);
			this->Controls->Add(this->chunkbox5);
			this->Controls->Add(this->chunkbox4);
			this->Controls->Add(this->chunkbox3);
			this->Controls->Add(this->chunkbox2);
			this->Controls->Add(this->chunkbox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ChunkForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simple Chunk";
			this->Load += gcnew System::EventHandler(this, &ChunkForm::ChunkForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ChunkForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	public: System::Void check_enable(System::Object ^ check);
	public: System::Void check_disable(System::Object ^ check);
	public: System::Void check_term(System::Object ^ box, System::Object ^ check);
	public: System::Void chunk_load(System::String ^ chunk1, System::String ^ chunk2, System::String ^ chunk3, System::String ^ chunk4, System::String ^ chunk5);
	public: System::Void clearbox(System::Object ^ box, System::Object^ check);
	public: System::Void chunk_enter(System::Object^ sender_box, System::Object^ check);
			System::Void chunk_pick_Click(System::Object ^ sender, System::EventArgs ^ e)
			{

			}

	private: System::Void chunkbox1_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunk5_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunk4_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunk3_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunk2_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunk1_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunkbox5_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunkbox4_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunkbox3_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunkbox2_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunkbox1_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunkbox5_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunkbox4_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunkbox3_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunkbox2_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void chunk_apply_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
