#pragma once

namespace SimpleQC1_0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ QClibrary
	/// </summary>
	public ref class QClibrary : public System::Windows::Forms::Form
	{
	public:
		QClibrary(void)
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
		~QClibrary()
		{
			if (components)
			{
				delete components;
			}
		}

















	private: System::Windows::Forms::GroupBox^  CommonPropsQC;
	private: System::Windows::Forms::Button^  crateQC;
	private: System::Windows::Forms::Button^  Oildrum001ExplosiveQC;
	private: System::Windows::Forms::Button^  Powerbox01aQC;
	private: System::Windows::Forms::Button^  flagsQC;














	protected:

	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(QClibrary::typeid));
			this->CommonPropsQC = (gcnew System::Windows::Forms::GroupBox());
			this->flagsQC = (gcnew System::Windows::Forms::Button());
			this->Powerbox01aQC = (gcnew System::Windows::Forms::Button());
			this->Oildrum001ExplosiveQC = (gcnew System::Windows::Forms::Button());
			this->crateQC = (gcnew System::Windows::Forms::Button());
			this->CommonPropsQC->SuspendLayout();
			this->SuspendLayout();
			// 
			// CommonPropsQC
			// 
			this->CommonPropsQC->Controls->Add(this->flagsQC);
			this->CommonPropsQC->Controls->Add(this->Powerbox01aQC);
			this->CommonPropsQC->Controls->Add(this->Oildrum001ExplosiveQC);
			this->CommonPropsQC->Controls->Add(this->crateQC);
			this->CommonPropsQC->Location = System::Drawing::Point(26, 31);
			this->CommonPropsQC->Name = L"CommonPropsQC";
			this->CommonPropsQC->Size = System::Drawing::Size(144, 142);
			this->CommonPropsQC->TabIndex = 4;
			this->CommonPropsQC->TabStop = false;
			this->CommonPropsQC->Text = L"Common props QC";
			// 
			// flagsQC
			// 
			this->flagsQC->Location = System::Drawing::Point(6, 107);
			this->flagsQC->Name = L"flagsQC";
			this->flagsQC->Size = System::Drawing::Size(122, 23);
			this->flagsQC->TabIndex = 3;
			this->flagsQC->Text = L"flags";
			this->flagsQC->UseVisualStyleBackColor = true;
			this->flagsQC->Click += gcnew System::EventHandler(this, &QClibrary::flagsQC_Click);
			// 
			// Powerbox01aQC
			// 
			this->Powerbox01aQC->Location = System::Drawing::Point(6, 78);
			this->Powerbox01aQC->Name = L"Powerbox01aQC";
			this->Powerbox01aQC->Size = System::Drawing::Size(122, 23);
			this->Powerbox01aQC->TabIndex = 2;
			this->Powerbox01aQC->Text = L"powerbox01a";
			this->Powerbox01aQC->UseVisualStyleBackColor = true;
			this->Powerbox01aQC->Click += gcnew System::EventHandler(this, &QClibrary::Powerbox01aQC_Click);
			// 
			// Oildrum001ExplosiveQC
			// 
			this->Oildrum001ExplosiveQC->Location = System::Drawing::Point(6, 49);
			this->Oildrum001ExplosiveQC->Name = L"Oildrum001ExplosiveQC";
			this->Oildrum001ExplosiveQC->Size = System::Drawing::Size(122, 23);
			this->Oildrum001ExplosiveQC->TabIndex = 1;
			this->Oildrum001ExplosiveQC->Text = L"oildrum001_explosive";
			this->Oildrum001ExplosiveQC->UseVisualStyleBackColor = true;
			this->Oildrum001ExplosiveQC->Click += gcnew System::EventHandler(this, &QClibrary::Oildrum001ExplosiveQC_Click);
			// 
			// crateQC
			// 
			this->crateQC->Location = System::Drawing::Point(6, 20);
			this->crateQC->Name = L"crateQC";
			this->crateQC->Size = System::Drawing::Size(122, 23);
			this->crateQC->TabIndex = 0;
			this->crateQC->Text = L"wood_crate001";
			this->crateQC->UseVisualStyleBackColor = true;
			this->crateQC->Click += gcnew System::EventHandler(this, &QClibrary::crateQC_Click);
			// 
			// QClibrary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(193, 193);
			this->Controls->Add(this->CommonPropsQC);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"QClibrary";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"QClibrary";
			this->CommonPropsQC->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void crateQC_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Oildrum001ExplosiveQC_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Powerbox01aQC_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void flagsQC_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
