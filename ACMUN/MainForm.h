/* Copyright (C) 2016 Dimitrios Alexandridis

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

	You should have received a copy of the GNU General Public License along
	with this program; if not, write to the Free Software Foundation, Inc.,
	51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

	To contact the author: Dimitrios Alexandridis, dimitrisalex@icloud.com
*/

//Dependencies: MSCVR120.dll, MSVCP120.dll

#pragma once
#include <time.h>
#include <string>
#include "AddResolution.h"
#include "ChangeTopic.h"

namespace ACMUN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	int ResCount = 0;
	int CountdownMin = 0;
	int CountdownSec = 0;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  labelTime;
	private: System::Windows::Forms::Timer^  timerLocalTime;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  labelCommitteeName;

	private: System::Windows::Forms::Label^  labelTitle;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comboBoxCountryList;

	private: System::Windows::Forms::Button^  buttonAddSpeaker;
	private: System::Windows::Forms::ComboBox^  comboBoxPriorityNumToAdd;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListView^  listViewSpeakerList;

	private: System::Windows::Forms::ColumnHeader^  priorityNum;
	private: System::Windows::Forms::ColumnHeader^  SpeakerName;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  buttonRemoveSpeaker;

	private: System::Windows::Forms::ComboBox^  comboBoxPriorityNumToRemove;

	private: System::Windows::Forms::Button^  buttonNextSpeaker;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  labelCountrySpeaking;




	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  buttonAddRecord;


	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  buttonAddCurrentSpeaker;

	private: System::Windows::Forms::ComboBox^  comboBoxCurrentSpeakerList;

	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::ListView^  listViewResolutions;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  buttonExit;

	private: System::Windows::Forms::Button^  buttonCrisis;
	private: System::Windows::Forms::Button^  buttonSaveRecord;


	private: System::Windows::Forms::Button^  buttonTimerPause;
	private: System::Windows::Forms::Button^  buttonTimerSet;




	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  labelCountdown;
	private: System::Windows::Forms::Button^  buttonRemoveResolution;


	private: System::Windows::Forms::Button^  buttonAddResolution;

	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::ComboBox^  comboBoxTimerSec;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  comboBoxTimerMin;

	private: System::Windows::Forms::Label^  labelLatestRecord;


	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  labelCommitteeStatus;
	private: System::Windows::Forms::Label^  labelTopic;
	private: System::Windows::Forms::RichTextBox^  richTextBoxRecordToAdd;
private: System::Windows::Forms::TextBox^  textBoxRecord;




	private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Button^  buttonUpdateCommitteeStatus;

private: System::Windows::Forms::ComboBox^  comboBoxCommitteeStatus;



private: System::Windows::Forms::Button^  buttonTopicChange;
private: System::Windows::Forms::ComboBox^  comboBoxResNumToRemove;
private: System::Windows::Forms::Timer^  timerCountdown;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::LinkLabel^  linkLabel1;
private: System::Windows::Forms::PictureBox^  pictureBox1;






	private: System::ComponentModel::IContainer^  components;
	protected:


	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"1",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"2",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"3",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"4",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"5",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"6",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"7",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"8",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"9",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem15 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem16 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem17 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem18 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->timerLocalTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelCountdown = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelCommitteeName = (gcnew System::Windows::Forms::Label());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddCurrentSpeaker = (gcnew System::Windows::Forms::Button());
			this->comboBoxCurrentSpeakerList = (gcnew System::Windows::Forms::ComboBox());
			this->labelCountrySpeaking = (gcnew System::Windows::Forms::Label());
			this->buttonNextSpeaker = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonRemoveSpeaker = (gcnew System::Windows::Forms::Button());
			this->comboBoxPriorityNumToRemove = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxCountryList = (gcnew System::Windows::Forms::ComboBox());
			this->buttonAddSpeaker = (gcnew System::Windows::Forms::Button());
			this->comboBoxPriorityNumToAdd = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listViewSpeakerList = (gcnew System::Windows::Forms::ListView());
			this->priorityNum = (gcnew System::Windows::Forms::ColumnHeader());
			this->SpeakerName = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->labelLatestRecord = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->labelTopic = (gcnew System::Windows::Forms::Label());
			this->textBoxRecord = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonUpdateCommitteeStatus = (gcnew System::Windows::Forms::Button());
			this->comboBoxCommitteeStatus = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelCommitteeStatus = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddRecord = (gcnew System::Windows::Forms::Button());
			this->richTextBoxRecordToAdd = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->comboBoxResNumToRemove = (gcnew System::Windows::Forms::ComboBox());
			this->buttonRemoveResolution = (gcnew System::Windows::Forms::Button());
			this->buttonAddResolution = (gcnew System::Windows::Forms::Button());
			this->listViewResolutions = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxTimerSec = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->buttonTimerSet = (gcnew System::Windows::Forms::Button());
			this->buttonTimerPause = (gcnew System::Windows::Forms::Button());
			this->comboBoxTimerMin = (gcnew System::Windows::Forms::ComboBox());
			this->buttonTopicChange = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonCrisis = (gcnew System::Windows::Forms::Button());
			this->buttonSaveRecord = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->timerCountdown = (gcnew System::Windows::Forms::Timer(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelTime
			// 
			this->labelTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelTime->AutoSize = true;
			this->labelTime->BackColor = System::Drawing::Color::Transparent;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->labelTime->ForeColor = System::Drawing::Color::Black;
			this->labelTime->Location = System::Drawing::Point(848, 9);
			this->labelTime->Margin = System::Windows::Forms::Padding(0);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(230, 22);
			this->labelTime->TabIndex = 1;
			this->labelTime->Text = L"DD/MM/YY HH:MM:SS AM";
			// 
			// timerLocalTime
			// 
			this->timerLocalTime->Enabled = true;
			this->timerLocalTime->Interval = 1000;
			this->timerLocalTime->Tick += gcnew System::EventHandler(this, &MainForm::timerLocalTime_Tick);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->labelCountdown);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->labelCommitteeName);
			this->panel1->Controls->Add(this->labelTitle);
			this->panel1->Controls->Add(this->labelTime);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1087, 118);
			this->panel1->TabIndex = 2;
			// 
			// labelCountdown
			// 
			this->labelCountdown->AutoSize = true;
			this->labelCountdown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->labelCountdown->Location = System::Drawing::Point(542, 75);
			this->labelCountdown->Name = L"labelCountdown";
			this->labelCountdown->Size = System::Drawing::Size(87, 33);
			this->labelCountdown->TabIndex = 4;
			this->labelCountdown->Text = L"00:00";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label2->Location = System::Drawing::Point(450, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 33);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Timer:";
			// 
			// labelCommitteeName
			// 
			this->labelCommitteeName->AutoSize = true;
			this->labelCommitteeName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->labelCommitteeName->Location = System::Drawing::Point(95, 44);
			this->labelCommitteeName->Name = L"labelCommitteeName";
			this->labelCommitteeName->Size = System::Drawing::Size(224, 31);
			this->labelCommitteeName->TabIndex = 3;
			this->labelCommitteeName->Text = L"Committee Name";
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->labelTitle->Location = System::Drawing::Point(94, 7);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(548, 37);
			this->labelTitle->TabIndex = 2;
			this->labelTitle->Text = L"Anatolia College Model United Nations";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->groupBox6);
			this->panel2->Controls->Add(this->labelCountrySpeaking);
			this->panel2->Controls->Add(this->buttonNextSpeaker);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->listViewSpeakerList);
			this->panel2->Location = System::Drawing::Point(0, 121);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(195, 508);
			this->panel2->TabIndex = 3;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->buttonAddCurrentSpeaker);
			this->groupBox6->Controls->Add(this->comboBoxCurrentSpeakerList);
			this->groupBox6->Location = System::Drawing::Point(3, 447);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(182, 57);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Current Speaker";
			// 
			// buttonAddCurrentSpeaker
			// 
			this->buttonAddCurrentSpeaker->Location = System::Drawing::Point(139, 19);
			this->buttonAddCurrentSpeaker->Name = L"buttonAddCurrentSpeaker";
			this->buttonAddCurrentSpeaker->Size = System::Drawing::Size(37, 23);
			this->buttonAddCurrentSpeaker->TabIndex = 1;
			this->buttonAddCurrentSpeaker->Text = L"OK";
			this->buttonAddCurrentSpeaker->UseVisualStyleBackColor = true;
			this->buttonAddCurrentSpeaker->Click += gcnew System::EventHandler(this, &MainForm::buttonAddCurrentSpeaker_Click);
			// 
			// comboBoxCurrentSpeakerList
			// 
			this->comboBoxCurrentSpeakerList->FormattingEnabled = true;
			this->comboBoxCurrentSpeakerList->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Chair", L"Co-Chair", L"China",
					L"France", L"Germany", L"UNHCR"
			});
			this->comboBoxCurrentSpeakerList->Location = System::Drawing::Point(6, 19);
			this->comboBoxCurrentSpeakerList->Name = L"comboBoxCurrentSpeakerList";
			this->comboBoxCurrentSpeakerList->Size = System::Drawing::Size(126, 21);
			this->comboBoxCurrentSpeakerList->TabIndex = 0;
			// 
			// labelCountrySpeaking
			// 
			this->labelCountrySpeaking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(161)));
			this->labelCountrySpeaking->Location = System::Drawing::Point(3, 22);
			this->labelCountrySpeaking->Name = L"labelCountrySpeaking";
			this->labelCountrySpeaking->Size = System::Drawing::Size(182, 26);
			this->labelCountrySpeaking->TabIndex = 8;
			this->labelCountrySpeaking->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttonNextSpeaker
			// 
			this->buttonNextSpeaker->Location = System::Drawing::Point(36, 242);
			this->buttonNextSpeaker->Name = L"buttonNextSpeaker";
			this->buttonNextSpeaker->Size = System::Drawing::Size(108, 29);
			this->buttonNextSpeaker->TabIndex = 7;
			this->buttonNextSpeaker->Text = L"Next Speaker";
			this->buttonNextSpeaker->UseVisualStyleBackColor = true;
			this->buttonNextSpeaker->Click += gcnew System::EventHandler(this, &MainForm::buttonNextSpeaker_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonRemoveSpeaker);
			this->groupBox2->Controls->Add(this->comboBoxPriorityNumToRemove);
			this->groupBox2->Location = System::Drawing::Point(3, 389);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(182, 57);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Remove Speaker";
			// 
			// buttonRemoveSpeaker
			// 
			this->buttonRemoveSpeaker->Location = System::Drawing::Point(66, 19);
			this->buttonRemoveSpeaker->Name = L"buttonRemoveSpeaker";
			this->buttonRemoveSpeaker->Size = System::Drawing::Size(86, 23);
			this->buttonRemoveSpeaker->TabIndex = 1;
			this->buttonRemoveSpeaker->Text = L"Remove";
			this->buttonRemoveSpeaker->UseVisualStyleBackColor = true;
			this->buttonRemoveSpeaker->Click += gcnew System::EventHandler(this, &MainForm::buttonRemoveSpeaker_Click);
			// 
			// comboBoxPriorityNumToRemove
			// 
			this->comboBoxPriorityNumToRemove->FormattingEnabled = true;
			this->comboBoxPriorityNumToRemove->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"1", L"2", L"3", L"4", L"5",
					L"6", L"7", L"8", L"9"
			});
			this->comboBoxPriorityNumToRemove->Location = System::Drawing::Point(9, 19);
			this->comboBoxPriorityNumToRemove->Name = L"comboBoxPriorityNumToRemove";
			this->comboBoxPriorityNumToRemove->Size = System::Drawing::Size(41, 21);
			this->comboBoxPriorityNumToRemove->TabIndex = 0;
			this->comboBoxPriorityNumToRemove->Text = L"#";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBoxCountryList);
			this->groupBox1->Controls->Add(this->buttonAddSpeaker);
			this->groupBox1->Controls->Add(this->comboBoxPriorityNumToAdd);
			this->groupBox1->Location = System::Drawing::Point(3, 277);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(182, 106);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add Speaker";
			// 
			// comboBoxCountryList
			// 
			this->comboBoxCountryList->FormattingEnabled = true;
			this->comboBoxCountryList->Location = System::Drawing::Point(6, 23);
			this->comboBoxCountryList->Name = L"comboBoxCountryList";
			this->comboBoxCountryList->Size = System::Drawing::Size(111, 21);
			this->comboBoxCountryList->TabIndex = 2;
			this->comboBoxCountryList->Text = L"Choose Country";
			// 
			// buttonAddSpeaker
			// 
			this->buttonAddSpeaker->Location = System::Drawing::Point(33, 59);
			this->buttonAddSpeaker->Name = L"buttonAddSpeaker";
			this->buttonAddSpeaker->Size = System::Drawing::Size(99, 23);
			this->buttonAddSpeaker->TabIndex = 4;
			this->buttonAddSpeaker->Text = L"Add Speaker";
			this->buttonAddSpeaker->UseVisualStyleBackColor = true;
			this->buttonAddSpeaker->Click += gcnew System::EventHandler(this, &MainForm::buttonAddSpeaker_Click);
			// 
			// comboBoxPriorityNumToAdd
			// 
			this->comboBoxPriorityNumToAdd->FormattingEnabled = true;
			this->comboBoxPriorityNumToAdd->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->comboBoxPriorityNumToAdd->Location = System::Drawing::Point(123, 23);
			this->comboBoxPriorityNumToAdd->Name = L"comboBoxPriorityNumToAdd";
			this->comboBoxPriorityNumToAdd->Size = System::Drawing::Size(50, 21);
			this->comboBoxPriorityNumToAdd->TabIndex = 3;
			this->comboBoxPriorityNumToAdd->Text = L"#";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label3->Location = System::Drawing::Point(42, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Now Speaking:";
			// 
			// listViewSpeakerList
			// 
			this->listViewSpeakerList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->priorityNum,
					this->SpeakerName
			});
			this->listViewSpeakerList->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(9) {
				listViewItem1,
					listViewItem2, listViewItem3, listViewItem4, listViewItem5, listViewItem6, listViewItem7, listViewItem8, listViewItem9
			});
			this->listViewSpeakerList->Location = System::Drawing::Point(3, 51);
			this->listViewSpeakerList->Name = L"listViewSpeakerList";
			this->listViewSpeakerList->Size = System::Drawing::Size(182, 185);
			this->listViewSpeakerList->TabIndex = 0;
			this->listViewSpeakerList->UseCompatibleStateImageBehavior = false;
			this->listViewSpeakerList->View = System::Windows::Forms::View::Details;
			// 
			// priorityNum
			// 
			this->priorityNum->Text = L"#";
			this->priorityNum->Width = 20;
			// 
			// SpeakerName
			// 
			this->SpeakerName->Text = L"Speaker";
			this->SpeakerName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SpeakerName->Width = 155;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->textBoxRecord);
			this->panel3->Controls->Add(this->groupBox3);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->labelCommitteeStatus);
			this->panel3->Controls->Add(this->groupBox5);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(201, 121);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(682, 508);
			this->panel3->TabIndex = 4;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->labelLatestRecord);
			this->panel7->Location = System::Drawing::Point(220, 119);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(453, 68);
			this->panel7->TabIndex = 17;
			// 
			// labelLatestRecord
			// 
			this->labelLatestRecord->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelLatestRecord->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->labelLatestRecord->Location = System::Drawing::Point(0, 0);
			this->labelLatestRecord->Name = L"labelLatestRecord";
			this->labelLatestRecord->Size = System::Drawing::Size(453, 68);
			this->labelLatestRecord->TabIndex = 11;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->labelTopic);
			this->panel6->Location = System::Drawing::Point(9, 57);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(664, 52);
			this->panel6->TabIndex = 16;
			// 
			// labelTopic
			// 
			this->labelTopic->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelTopic->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->labelTopic->Location = System::Drawing::Point(0, 0);
			this->labelTopic->Name = L"labelTopic";
			this->labelTopic->Size = System::Drawing::Size(664, 52);
			this->labelTopic->TabIndex = 8;
			this->labelTopic->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBoxRecord
			// 
			this->textBoxRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->textBoxRecord->Location = System::Drawing::Point(9, 203);
			this->textBoxRecord->Multiline = true;
			this->textBoxRecord->Name = L"textBoxRecord";
			this->textBoxRecord->ReadOnly = true;
			this->textBoxRecord->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxRecord->Size = System::Drawing::Size(664, 186);
			this->textBoxRecord->TabIndex = 15;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->buttonUpdateCommitteeStatus);
			this->groupBox3->Controls->Add(this->comboBoxCommitteeStatus);
			this->groupBox3->Location = System::Drawing::Point(9, 395);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(160, 53);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Committee status";
			// 
			// buttonUpdateCommitteeStatus
			// 
			this->buttonUpdateCommitteeStatus->Location = System::Drawing::Point(123, 19);
			this->buttonUpdateCommitteeStatus->Name = L"buttonUpdateCommitteeStatus";
			this->buttonUpdateCommitteeStatus->Size = System::Drawing::Size(31, 23);
			this->buttonUpdateCommitteeStatus->TabIndex = 2;
			this->buttonUpdateCommitteeStatus->Text = L"OK";
			this->buttonUpdateCommitteeStatus->UseVisualStyleBackColor = true;
			this->buttonUpdateCommitteeStatus->Click += gcnew System::EventHandler(this, &MainForm::buttonUpdateCommitteeStatus_Click);
			// 
			// comboBoxCommitteeStatus
			// 
			this->comboBoxCommitteeStatus->FormattingEnabled = true;
			this->comboBoxCommitteeStatus->Location = System::Drawing::Point(6, 19);
			this->comboBoxCommitteeStatus->Name = L"comboBoxCommitteeStatus";
			this->comboBoxCommitteeStatus->Size = System::Drawing::Size(111, 21);
			this->comboBoxCommitteeStatus->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(3, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Latest Announcement:";
			// 
			// labelCommitteeStatus
			// 
			this->labelCommitteeStatus->Font = (gcnew System::Drawing::Font(L"Cambria", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->labelCommitteeStatus->Location = System::Drawing::Point(9, 5);
			this->labelCommitteeStatus->Name = L"labelCommitteeStatus";
			this->labelCommitteeStatus->Size = System::Drawing::Size(664, 49);
			this->labelCommitteeStatus->TabIndex = 9;
			this->labelCommitteeStatus->Text = L"Lobbying";
			this->labelCommitteeStatus->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->buttonAddRecord);
			this->groupBox5->Controls->Add(this->richTextBoxRecordToAdd);
			this->groupBox5->Location = System::Drawing::Point(175, 395);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(504, 104);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Add Record";
			// 
			// buttonAddRecord
			// 
			this->buttonAddRecord->Location = System::Drawing::Point(423, 74);
			this->buttonAddRecord->Name = L"buttonAddRecord";
			this->buttonAddRecord->Size = System::Drawing::Size(75, 23);
			this->buttonAddRecord->TabIndex = 1;
			this->buttonAddRecord->Text = L"Add";
			this->buttonAddRecord->UseVisualStyleBackColor = true;
			this->buttonAddRecord->Click += gcnew System::EventHandler(this, &MainForm::buttonAddRecord_Click);
			// 
			// richTextBoxRecordToAdd
			// 
			this->richTextBoxRecordToAdd->EnableAutoDragDrop = true;
			this->richTextBoxRecordToAdd->Location = System::Drawing::Point(6, 20);
			this->richTextBoxRecordToAdd->Name = L"richTextBoxRecordToAdd";
			this->richTextBoxRecordToAdd->Size = System::Drawing::Size(492, 48);
			this->richTextBoxRecordToAdd->TabIndex = 0;
			this->richTextBoxRecordToAdd->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label6->Location = System::Drawing::Point(5, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Session Record:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel4->Controls->Add(this->comboBoxResNumToRemove);
			this->panel4->Controls->Add(this->buttonRemoveResolution);
			this->panel4->Controls->Add(this->buttonAddResolution);
			this->panel4->Controls->Add(this->listViewResolutions);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Location = System::Drawing::Point(889, 121);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(198, 282);
			this->panel4->TabIndex = 5;
			// 
			// comboBoxResNumToRemove
			// 
			this->comboBoxResNumToRemove->FormattingEnabled = true;
			this->comboBoxResNumToRemove->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8"
			});
			this->comboBoxResNumToRemove->Location = System::Drawing::Point(151, 253);
			this->comboBoxResNumToRemove->Name = L"comboBoxResNumToRemove";
			this->comboBoxResNumToRemove->Size = System::Drawing::Size(35, 21);
			this->comboBoxResNumToRemove->TabIndex = 12;
			this->comboBoxResNumToRemove->Text = L"#";
			// 
			// buttonRemoveResolution
			// 
			this->buttonRemoveResolution->Location = System::Drawing::Point(12, 253);
			this->buttonRemoveResolution->Name = L"buttonRemoveResolution";
			this->buttonRemoveResolution->Size = System::Drawing::Size(137, 23);
			this->buttonRemoveResolution->TabIndex = 10;
			this->buttonRemoveResolution->Text = L"Remove Draft Resolution";
			this->buttonRemoveResolution->UseVisualStyleBackColor = true;
			this->buttonRemoveResolution->Click += gcnew System::EventHandler(this, &MainForm::buttonRemoveResolution_Click);
			// 
			// buttonAddResolution
			// 
			this->buttonAddResolution->Location = System::Drawing::Point(12, 224);
			this->buttonAddResolution->Name = L"buttonAddResolution";
			this->buttonAddResolution->Size = System::Drawing::Size(174, 23);
			this->buttonAddResolution->TabIndex = 11;
			this->buttonAddResolution->Text = L"Add Draft Resolution";
			this->buttonAddResolution->UseVisualStyleBackColor = true;
			this->buttonAddResolution->Click += gcnew System::EventHandler(this, &MainForm::buttonAddResolution_Click);
			// 
			// listViewResolutions
			// 
			this->listViewResolutions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->columnHeader1,
					this->columnHeader2
			});
			this->listViewResolutions->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(9) {
				listViewItem10,
					listViewItem11, listViewItem12, listViewItem13, listViewItem14, listViewItem15, listViewItem16, listViewItem17, listViewItem18
			});
			this->listViewResolutions->Location = System::Drawing::Point(12, 34);
			this->listViewResolutions->Name = L"listViewResolutions";
			this->listViewResolutions->Size = System::Drawing::Size(174, 184);
			this->listViewResolutions->TabIndex = 1;
			this->listViewResolutions->UseCompatibleStateImageBehavior = false;
			this->listViewResolutions->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"#";
			this->columnHeader1->Width = 22;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Submitter";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 148;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label8->Location = System::Drawing::Point(25, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(146, 22);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Resolution Panel";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel5->Controls->Add(this->groupBox7);
			this->panel5->Controls->Add(this->buttonTopicChange);
			this->panel5->Controls->Add(this->buttonExit);
			this->panel5->Controls->Add(this->buttonCrisis);
			this->panel5->Controls->Add(this->buttonSaveRecord);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Location = System::Drawing::Point(889, 409);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(198, 220);
			this->panel5->TabIndex = 6;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->comboBoxTimerSec);
			this->groupBox7->Controls->Add(this->label11);
			this->groupBox7->Controls->Add(this->buttonTimerSet);
			this->groupBox7->Controls->Add(this->buttonTimerPause);
			this->groupBox7->Controls->Add(this->comboBoxTimerMin);
			this->groupBox7->Location = System::Drawing::Point(3, 26);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(192, 77);
			this->groupBox7->TabIndex = 9;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Timer";
			// 
			// comboBoxTimerSec
			// 
			this->comboBoxTimerSec->DropDownHeight = 60;
			this->comboBoxTimerSec->DropDownWidth = 38;
			this->comboBoxTimerSec->FormattingEnabled = true;
			this->comboBoxTimerSec->IntegralHeight = false;
			this->comboBoxTimerSec->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"0", L"5", L"10", L"15", L"20", L"25",
					L"30", L"35", L"40", L"45", L"50", L"55"
			});
			this->comboBoxTimerSec->Location = System::Drawing::Point(58, 29);
			this->comboBoxTimerSec->Name = L"comboBoxTimerSec";
			this->comboBoxTimerSec->Size = System::Drawing::Size(40, 21);
			this->comboBoxTimerSec->TabIndex = 7;
			this->comboBoxTimerSec->Text = L"sec";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label11->Location = System::Drawing::Point(44, 31);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 19);
			this->label11->TabIndex = 8;
			this->label11->Text = L":";
			// 
			// buttonTimerSet
			// 
			this->buttonTimerSet->Location = System::Drawing::Point(108, 15);
			this->buttonTimerSet->Name = L"buttonTimerSet";
			this->buttonTimerSet->Size = System::Drawing::Size(75, 23);
			this->buttonTimerSet->TabIndex = 1;
			this->buttonTimerSet->Text = L"Reset";
			this->buttonTimerSet->UseVisualStyleBackColor = true;
			this->buttonTimerSet->Click += gcnew System::EventHandler(this, &MainForm::buttonTimerSet_Click);
			// 
			// buttonTimerPause
			// 
			this->buttonTimerPause->Location = System::Drawing::Point(108, 44);
			this->buttonTimerPause->Name = L"buttonTimerPause";
			this->buttonTimerPause->Size = System::Drawing::Size(75, 23);
			this->buttonTimerPause->TabIndex = 2;
			this->buttonTimerPause->Text = L"Start";
			this->buttonTimerPause->UseVisualStyleBackColor = true;
			this->buttonTimerPause->Click += gcnew System::EventHandler(this, &MainForm::buttonTimerPause_Click);
			// 
			// comboBoxTimerMin
			// 
			this->comboBoxTimerMin->DropDownHeight = 60;
			this->comboBoxTimerMin->FormattingEnabled = true;
			this->comboBoxTimerMin->IntegralHeight = false;
			this->comboBoxTimerMin->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15"
			});
			this->comboBoxTimerMin->Location = System::Drawing::Point(6, 29);
			this->comboBoxTimerMin->MaxDropDownItems = 4;
			this->comboBoxTimerMin->Name = L"comboBoxTimerMin";
			this->comboBoxTimerMin->Size = System::Drawing::Size(38, 21);
			this->comboBoxTimerMin->TabIndex = 6;
			this->comboBoxTimerMin->Text = L"min";
			// 
			// buttonTopicChange
			// 
			this->buttonTopicChange->Location = System::Drawing::Point(56, 107);
			this->buttonTopicChange->Name = L"buttonTopicChange";
			this->buttonTopicChange->Size = System::Drawing::Size(83, 23);
			this->buttonTopicChange->TabIndex = 13;
			this->buttonTopicChange->Text = L"Change Topic";
			this->buttonTopicChange->UseVisualStyleBackColor = true;
			this->buttonTopicChange->Click += gcnew System::EventHandler(this, &MainForm::buttonTopicChange_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(56, 193);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(83, 23);
			this->buttonExit->TabIndex = 5;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MainForm::buttonExit_Click);
			// 
			// buttonCrisis
			// 
			this->buttonCrisis->Location = System::Drawing::Point(56, 137);
			this->buttonCrisis->Name = L"buttonCrisis";
			this->buttonCrisis->Size = System::Drawing::Size(83, 23);
			this->buttonCrisis->TabIndex = 4;
			this->buttonCrisis->Text = L"Crisis";
			this->buttonCrisis->UseVisualStyleBackColor = true;
			this->buttonCrisis->Click += gcnew System::EventHandler(this, &MainForm::buttonCrisis_Click);
			// 
			// buttonSaveRecord
			// 
			this->buttonSaveRecord->Location = System::Drawing::Point(56, 166);
			this->buttonSaveRecord->Name = L"buttonSaveRecord";
			this->buttonSaveRecord->Size = System::Drawing::Size(83, 23);
			this->buttonSaveRecord->TabIndex = 3;
			this->buttonSaveRecord->Text = L"Save Record";
			this->buttonSaveRecord->UseVisualStyleBackColor = true;
			this->buttonSaveRecord->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveRecord_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label9->Location = System::Drawing::Point(60, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 24);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Controls";
			// 
			// timerCountdown
			// 
			this->timerCountdown->Interval = 1000;
			this->timerCountdown->Tick += gcnew System::EventHandler(this, &MainForm::timerCountdown_Tick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 630);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Created by";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(56, 630);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(99, 13);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Dimitris Alexandridis";
			this->linkLabel1->Click += gcnew System::EventHandler(this, &MainForm::linkLabel1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(86, 79);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1087, 643);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"ACMUN";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				
			//Set Time
				DateTime currentDateTime = DateTime::Now;
				this->labelTime->Text = currentDateTime.ToString();
				
			//Load Committee Name
				String^ fileCommitteeName = "settings/committee";
				StreamReader^ din = File::OpenText(fileCommitteeName);
				this->labelCommitteeName->Text = din->ReadLine();

			//Load Officers
				String^ fileOfficerList = "settings/officers";
				din = File::OpenText(fileOfficerList);
				String^ str;
				int count = 0;
				while ((str = din->ReadLine()) != nullptr)
				{
					this->comboBoxCurrentSpeakerList->Items->Add(str);
				}

			//Load Country List
				String^ fileCountryList = "settings/countries";
				din = File::OpenText(fileCountryList);
				str = "";
				count = 0;
				while ((str = din->ReadLine()) != nullptr)
				{
					this->comboBoxCountryList->Items->Add(str);
					this->comboBoxCurrentSpeakerList->Items->Add(str);
				}

			//Load Officers
				String^ fileStatusList = "settings/status";
				din = File::OpenText(fileStatusList);
				str = "";
				count = 0;
				while ((str = din->ReadLine()) != nullptr)
				{
					this->comboBoxCommitteeStatus->Items->Add(str);
				}

	}


	private: System::Void timerLocalTime_Tick(System::Object^  sender, System::EventArgs^  e) {
				 DateTime currentDateTime = DateTime::Now;
				 this->labelTime->Text = currentDateTime.ToString();
	}


	private: System::Void buttonAddSpeaker_Click(System::Object^  sender, System::EventArgs^  e) {
		//Add speaker
		this->listViewSpeakerList->Items[this->comboBoxPriorityNumToAdd->SelectedIndex]->SubItems[1]->Text = comboBoxCountryList->Text;
	}



	private: System::Void buttonRemoveSpeaker_Click(System::Object^  sender, System::EventArgs^  e) {
		//Remove Speaker
		int i = this->comboBoxPriorityNumToRemove->SelectedIndex;
		while (i < 8) {
			this->listViewSpeakerList->Items[i]->SubItems[1]->Text = this->listViewSpeakerList->Items[i + 1]->SubItems[1]->Text;
			i++;
		}
		this->listViewSpeakerList->Items[8]->SubItems[1]->Text = "";
	}


private: System::Void buttonNextSpeaker_Click(System::Object^  sender, System::EventArgs^  e) {
	//--Next Speaker--

	//Set labelCountrySpeaking to country 1
	this->labelCountrySpeaking->Text = listViewSpeakerList->Items[0]->SubItems[1]->Text;

	//Move each speaker one place up
	int i = 0;
	while (i < 8) {
		this->listViewSpeakerList->Items[i]->SubItems[1]->Text = this->listViewSpeakerList->Items[i + 1]->SubItems[1]->Text;
		i++;
	}
	this->listViewSpeakerList->Items[8]->SubItems[1]->Text = "";
}

private: System::Void buttonAddCurrentSpeaker_Click(System::Object^  sender, System::EventArgs^  e) {
	this->labelCountrySpeaking->Text = comboBoxCurrentSpeakerList->Text;
}

private: System::Void buttonUpdateCommitteeStatus_Click(System::Object^  sender, System::EventArgs^  e) {
	this->labelCommitteeStatus->Text = comboBoxCommitteeStatus->Text;
	if (this->textBoxRecord->Text->Length == 0) {
		this->textBoxRecord->AppendText("-");
		this->textBoxRecord->AppendText("Committee currently in: ");
		this->textBoxRecord->AppendText(comboBoxCommitteeStatus->Text);
	}
	else {
		this->textBoxRecord->AppendText("\r\n\r\n");
		this->textBoxRecord->AppendText("-");
		this->textBoxRecord->AppendText("Committee currently in: ");
		this->textBoxRecord->AppendText(comboBoxCommitteeStatus->Text);
	}
}
		
		 /* Copyright (C) 2016 Dimitrios Alexandridis

		 This program is free software; you can redistribute it and/or modify
		 it under the terms of the GNU General Public License as published by
		 the Free Software Foundation; either version 2 of the License, or
		 (at your option) any later version.

		 This program is distributed in the hope that it will be useful,
		 but WITHOUT ANY WARRANTY; without even the implied warranty of
		 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
		 GNU General Public License for more details.

		 You should have received a copy of the GNU General Public License along
		 with this program; if not, write to the Free Software Foundation, Inc.,
		 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

		 To contact the author: Dimitrios Alexandridis, dimitrisalex@icloud.com
		 */

private: System::Void buttonAddRecord_Click(System::Object^  sender, System::EventArgs^  e) {

	if (this->textBoxRecord->Text->Length == 0) {
		this->textBoxRecord->AppendText("-");
		this->textBoxRecord->AppendText(richTextBoxRecordToAdd->Text);
		this->labelLatestRecord->Text = richTextBoxRecordToAdd->Text;
		this->richTextBoxRecordToAdd->Text = "";
	}
	else {
		this->labelLatestRecord->Text = richTextBoxRecordToAdd->Text;
		this->textBoxRecord->AppendText("\r\n\r\n");
		this->textBoxRecord->AppendText("-");
		this->textBoxRecord->AppendText(richTextBoxRecordToAdd->Text);
		this->richTextBoxRecordToAdd->Text = "";
	}
}

	private: System::Void buttonAddResolution_Click(System::Object^  sender, System::EventArgs^  e) {
		AddResolution^ AddResDialog = gcnew AddResolution();
		AddResDialog->ShowDialog();
		if (!(AddResDialog->textBoxSubmitter->Text == "") && ResCount<8) {
			ResCount++;
			this->listViewResolutions->Items[ResCount - 1]->SubItems[0]->Text = Convert::ToString(ResCount);
			this->listViewResolutions->Items[ResCount - 1]->SubItems[1]->Text = AddResDialog->textBoxSubmitter->Text;
		}
	}


	private: System::Void buttonRemoveResolution_Click(System::Object^  sender, System::EventArgs^  e) {
		int i = this->comboBoxResNumToRemove->SelectedIndex;
		if (i < ResCount) {
			while (i < ResCount - 1) {
				this->listViewResolutions->Items[i]->SubItems[1]->Text = this->listViewResolutions->Items[i + 1]->SubItems[1]->Text;
				i++;
			}
			this->listViewResolutions->Items[ResCount - 1]->SubItems[0]->Text = "";
			this->listViewResolutions->Items[ResCount - 1]->SubItems[1]->Text = "";
			ResCount--;
		}
	}
	private: System::Void buttonTimerSet_Click(System::Object^  sender, System::EventArgs^  e) {
		if (comboBoxTimerMin->SelectedIndex > -1 && comboBoxTimerSec->SelectedIndex > -1) {
			CountdownMin = this->comboBoxTimerMin->SelectedIndex;
			CountdownSec = 5 * this->comboBoxTimerSec->SelectedIndex;
			if (CountdownMin < 10 && CountdownSec > 9) {
				this->labelCountdown->Text = "0" + Convert::ToString(CountdownMin) + ":" + Convert::ToString(CountdownSec);
			}
			else if (CountdownSec < 10 && CountdownMin > 9) {
				this->labelCountdown->Text = Convert::ToString(CountdownMin) + ":" + "0" + Convert::ToString(CountdownSec);
			}
			else if (CountdownMin < 10 && CountdownSec < 10) {
				this->labelCountdown->Text = "0" + Convert::ToString(CountdownMin) + ":" + "0" + Convert::ToString(CountdownSec);
			}
			else {
				this->labelCountdown->Text = Convert::ToString(CountdownMin) + ":" + Convert::ToString(CountdownSec);
			}
			this->timerCountdown->Enabled = 0;
			this->buttonTimerPause->Text = "Start";
		}

	}
	private: System::Void timerCountdown_Tick(System::Object^  sender, System::EventArgs^  e) {
		CountdownSec--;
		if (CountdownSec == -1 && CountdownMin != 0) {
			CountdownSec = 59;
			CountdownMin--;
		}
		if (CountdownMin < 10 && CountdownSec > 9) {
			this->labelCountdown->Text = "0" + Convert::ToString(CountdownMin) + ":" + Convert::ToString(CountdownSec);
		} else if (CountdownSec < 10 && CountdownMin > 9) {
			this->labelCountdown->Text = Convert::ToString(CountdownMin) + ":" + "0" + Convert::ToString(CountdownSec);
		} else if (CountdownMin < 10 && CountdownSec < 10) {
			this->labelCountdown->Text = "0" + Convert::ToString(CountdownMin) + ":" + "0" + Convert::ToString(CountdownSec);
		} else {
			this->labelCountdown->Text = Convert::ToString(CountdownMin) + ":" + Convert::ToString(CountdownSec);
		}
		if (CountdownMin == 0 && CountdownSec == -1) {
			this->labelCountdown->Text = "00:00";
			this->buttonTimerPause->Text = "Start";
			this->timerCountdown->Enabled = 0;
		}
	}


private: System::Void buttonTimerPause_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->timerCountdown->Enabled == 0) {
		this->buttonTimerPause->Text = "Pause";
		this->timerCountdown->Enabled = 1;

	}
	else {
		this->buttonTimerPause->Text = "Start";
		this->timerCountdown->Enabled = 0;
	}
}


private: System::Void buttonSaveRecord_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ fileName = "Record " + (DateTime::Now.ToString("yyyy-dd-M--HH-mm-ss")) + ".txt";
	StreamWriter^ rec = gcnew StreamWriter(fileName);
	rec->WriteLine("Committee: " + labelCommitteeName->Text);
	rec->WriteLine("Date: " + DateTime::Now);
	rec->WriteLine("Current Committee Status: " + labelCommitteeStatus->Text);
	rec->WriteLine("Current Topic: " + labelTopic->Text);
	rec->WriteLine("");
	rec->WriteLine("");
	rec->WriteLine("-------Begin ACMUN Committee Record-------");
	rec->WriteLine("");
	rec->Write(this->textBoxRecord->Text);
	rec->WriteLine("");
	rec->WriteLine("");
	rec->WriteLine("-------End ACMUN Committee Record-------");
	rec->Close();
}
private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) {
	this->buttonSaveRecord->PerformClick();
	Form::Close();
	//Application::Exit();
}
private: System::Void buttonTopicChange_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ PreviousTopic = this->labelTopic->Text;
	ChangeTopic^ TopicDialog = gcnew ChangeTopic();
	TopicDialog->textBoxTopic->Text = this->labelTopic->Text;
	TopicDialog->ShowDialog();
	this->labelTopic->Text = TopicDialog->textBoxTopic->Text;

	//If topic has changed.
	if (PreviousTopic != this->labelTopic->Text) {

		this->buttonSaveRecord->PerformClick();

		if (this->textBoxRecord->Text->Length == 0) {
			this->textBoxRecord->AppendText("-Topic: ");
			this->textBoxRecord->AppendText(this->labelTopic->Text);
		}
		else {
			this->textBoxRecord->AppendText("\r\n\r\n");
			this->textBoxRecord->AppendText("-Topic: ");
			this->textBoxRecord->AppendText(this->labelTopic->Text);
		}
	}
}
private: System::Void buttonCrisis_Click(System::Object^  sender, System::EventArgs^  e) {
	MainForm^ CrisisDialog = gcnew MainForm();
	CrisisDialog->Show();
	CrisisDialog->labelCommitteeName->Text = this->labelCommitteeName->Text + ": CRISIS";
	CrisisDialog->buttonCrisis->Enabled = false;
	CrisisDialog->buttonCrisis->Text = "";

}

private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit?", ("ACMUN: " + this->labelCommitteeName->Text), MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::No)
	{
		// Cancel the Closing event from closing the form.
		e->Cancel = true;
	}
	else {
		this->buttonSaveRecord->PerformClick();
		//Application::Exit();
	}

}
private: System::Void linkLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Diagnostics::Process::Start("https://github.com/adimitris");
}
};
}
