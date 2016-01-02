#pragma once

namespace ACMUN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddResolution
	/// </summary>
	public ref class AddResolution : public System::Windows::Forms::Form
	{
	public:
		AddResolution(void)
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
		~AddResolution()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TextBox^  textBoxSubmitter;
	protected:

	private: System::Windows::Forms::Button^  buttonAdd;

	private: System::Windows::Forms::Button^  buttonCancel;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxSubmitter = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Main Submitter:";
			// 
			// textBoxSubmitter
			// 
			this->textBoxSubmitter->Location = System::Drawing::Point(113, 12);
			this->textBoxSubmitter->Name = L"textBoxSubmitter";
			this->textBoxSubmitter->Size = System::Drawing::Size(99, 20);
			this->textBoxSubmitter->TabIndex = 1;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(30, 43);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 2;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &AddResolution::buttonAdd_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(125, 43);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 3;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &AddResolution::buttonCancel_Click);
			// 
			// AddResolution
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(251, 89);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxSubmitter);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AddResolution";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"New Draft Resolution";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBoxSubmitter->Text = "";
		this->Close();
	}
	
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
