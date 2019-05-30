#pragma once

namespace SimpleQC1_0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ start
	/// </summary>
	public ref class start : public System::Windows::Forms::Form
	{
	public:
		start(void)
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
		~start()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  Gen1;

	private: System::Windows::Forms::Button^  Gen2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  Library;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(start::typeid));
			this->Gen1 = (gcnew System::Windows::Forms::Button());
			this->Gen2 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Library = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Gen1
			// 
			this->Gen1->Location = System::Drawing::Point(48, 21);
			this->Gen1->Name = L"Gen1";
			this->Gen1->Size = System::Drawing::Size(184, 40);
			this->Gen1->TabIndex = 1;
			this->Gen1->Text = L"Static";
			this->Gen1->UseVisualStyleBackColor = true;
			this->Gen1->Click += gcnew System::EventHandler(this, &start::Gen1_Click);
			// 
			// Gen2
			// 
			this->Gen2->Location = System::Drawing::Point(48, 68);
			this->Gen2->Name = L"Gen2";
			this->Gen2->Size = System::Drawing::Size(184, 40);
			this->Gen2->TabIndex = 3;
			this->Gen2->Text = L"Physics";
			this->Gen2->UseVisualStyleBackColor = true;
			this->Gen2->Click += gcnew System::EventHandler(this, &start::Gen2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(48, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(184, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"About";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &start::button2_Click);
			// 
			// Library
			// 
			this->Library->Location = System::Drawing::Point(48, 115);
			this->Library->Name = L"Library";
			this->Library->Size = System::Drawing::Size(184, 38);
			this->Library->TabIndex = 7;
			this->Library->Text = L"Library";
			this->Library->UseVisualStyleBackColor = true;
			this->Library->Click += gcnew System::EventHandler(this, &start::Library_Click);
			// 
			// start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(284, 225);
			this->Controls->Add(this->Library);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Gen2);
			this->Controls->Add(this->Gen1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"start";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simple QC";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Gen1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Gen2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Library_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
};
}
