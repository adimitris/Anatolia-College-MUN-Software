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

//DEPENDENCIES from Visual C++ Redistributable Packages: MSCVR120.dll, MSVCP120.dll

#pragma once


#include <time.h>  //Library for time
#include <string>
#include "AddResolution.h"  //Include dialog for Resolution Submission
#include "ChangeTopic.h"  //Include dialog that changes Topic TextBox

namespace ACMUN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	//Variables declared and initialized
	int ResCount = 0; //Number of Resolutions submitted
	int CountdownMin = 0; //Minutes selected for countdown
	int CountdownSec = 0; //Seconds selected for countdown
	int CountdownHour = 0; //Hours selected for countdown
	bool isSpeakerSlotOccupied[25] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }; //Speaker slots status
	bool isRecordReadOnly = 1; //Variable that defines whether the Record is editable or read-only


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
	//Declare graphics objects
	private: System::Windows::Forms::Label^  labelTime;
	private: System::Windows::Forms::Timer^  timerLocalTime;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  labelCommitteeName;
	private: System::Windows::Forms::Label^  labelTitle;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comboBoxCountryList;
	private: System::Windows::Forms::Button^  buttonAddSpeaker;
	private: System::Windows::Forms::ComboBox^  comboBoxPriorityNum;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListView^  listViewSpeakerList;
	private: System::Windows::Forms::ColumnHeader^  priorityNum;
	private: System::Windows::Forms::ColumnHeader^  SpeakerName;
	private: System::Windows::Forms::Button^  buttonRemoveSpeaker;
	private: System::Windows::Forms::Button^  buttonNextSpeaker;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  labelSessionRecord;
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
	private: System::Windows::Forms::Button^  buttonRemoveResolution;
	private: System::Windows::Forms::Button^  buttonAddResolution;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::ComboBox^  comboBoxTimerSec;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  comboBoxTimerMin;
	private: System::Windows::Forms::Label^  labelCommitteeStatus;
	private: System::Windows::Forms::RichTextBox^  richTextBoxRecordToAdd;
	private: System::Windows::Forms::TextBox^  textBoxRecord;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  buttonUpdateCommitteeStatus;
	private: System::Windows::Forms::ComboBox^  comboBoxCommitteeStatus;
	private: System::Windows::Forms::Button^  buttonTopicChange;
	private: System::Windows::Forms::ComboBox^  comboBoxResNumToRemove;
	private: System::Windows::Forms::Timer^  timerCountdown;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  labelCountdown;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBoxTimerHour;
	private: System::Windows::Forms::Button^  buttonEditRecord;
	private: System::Windows::Forms::Label^  labelTopic;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"1",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"2",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"3",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"4",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"5",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"6",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"7",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"8",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"9",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"10",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"11",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"12",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"13",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"14",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem15 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"15",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem16 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"16",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem17 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"17",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem18 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"18",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem19 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"19",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem20 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"20",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem21 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"21",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem22 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"22",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem23 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"23",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem24 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"24",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem25 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"25",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem26 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem27 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem28 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem29 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			System::Windows::Forms::ListViewItem^  listViewItem30 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"",
					L""
			}, -1, System::Drawing::SystemColors::WindowText, System::Drawing::SystemColors::Window, (gcnew System::Drawing::Font(L"Calibri",
			14.25F))));
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->timerLocalTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelCommitteeName = (gcnew System::Windows::Forms::Label());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddCurrentSpeaker = (gcnew System::Windows::Forms::Button());
			this->comboBoxCurrentSpeakerList = (gcnew System::Windows::Forms::ComboBox());
			this->labelCountrySpeaking = (gcnew System::Windows::Forms::Label());
			this->buttonNextSpeaker = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonRemoveSpeaker = (gcnew System::Windows::Forms::Button());
			this->comboBoxCountryList = (gcnew System::Windows::Forms::ComboBox());
			this->buttonAddSpeaker = (gcnew System::Windows::Forms::Button());
			this->comboBoxPriorityNum = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listViewSpeakerList = (gcnew System::Windows::Forms::ListView());
			this->priorityNum = (gcnew System::Windows::Forms::ColumnHeader());
			this->SpeakerName = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddRecord = (gcnew System::Windows::Forms::Button());
			this->richTextBoxRecordToAdd = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonUpdateCommitteeStatus = (gcnew System::Windows::Forms::Button());
			this->comboBoxCommitteeStatus = (gcnew System::Windows::Forms::ComboBox());
			this->labelCountdown = (gcnew System::Windows::Forms::Label());
			this->textBoxRecord = (gcnew System::Windows::Forms::TextBox());
			this->labelCommitteeStatus = (gcnew System::Windows::Forms::Label());
			this->labelSessionRecord = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->comboBoxResNumToRemove = (gcnew System::Windows::Forms::ComboBox());
			this->buttonRemoveResolution = (gcnew System::Windows::Forms::Button());
			this->buttonAddResolution = (gcnew System::Windows::Forms::Button());
			this->listViewResolutions = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->buttonEditRecord = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTimerHour = (gcnew System::Windows::Forms::ComboBox());
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
			this->labelTopic = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->BackColor = System::Drawing::Color::Transparent;
			this->labelTime->Dock = System::Windows::Forms::DockStyle::Right;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->labelTime->ForeColor = System::Drawing::Color::White;
			this->labelTime->Location = System::Drawing::Point(768, 0);
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
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->labelCommitteeName);
			this->panel1->Controls->Add(this->labelTitle);
			this->panel1->Controls->Add(this->labelTime);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(998, 77);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 73);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// labelCommitteeName
			// 
			this->labelCommitteeName->AutoSize = true;
			this->labelCommitteeName->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Italic));
			this->labelCommitteeName->ForeColor = System::Drawing::Color::White;
			this->labelCommitteeName->Location = System::Drawing::Point(95, 40);
			this->labelCommitteeName->Name = L"labelCommitteeName";
			this->labelCommitteeName->Size = System::Drawing::Size(209, 32);
			this->labelCommitteeName->TabIndex = 3;
			this->labelCommitteeName->Text = L"Committee Name";
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Cambria", 24));
			this->labelTitle->ForeColor = System::Drawing::Color::White;
			this->labelTitle->Location = System::Drawing::Point(94, 1);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(548, 37);
			this->labelTitle->TabIndex = 2;
			this->labelTitle->Text = L"Anatolia College Model United Nations";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->panel2->Controls->Add(this->groupBox6);
			this->panel2->Controls->Add(this->labelCountrySpeaking);
			this->panel2->Controls->Add(this->buttonNextSpeaker);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->listViewSpeakerList);
			this->panel2->Location = System::Drawing::Point(0, 149);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(211, 463);
			this->panel2->TabIndex = 3;
			// 
			// groupBox6
			// 
			this->groupBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox6->Controls->Add(this->buttonAddCurrentSpeaker);
			this->groupBox6->Controls->Add(this->comboBoxCurrentSpeakerList);
			this->groupBox6->ForeColor = System::Drawing::Color::White;
			this->groupBox6->Location = System::Drawing::Point(3, 408);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(204, 50);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Current Speaker";
			// 
			// buttonAddCurrentSpeaker
			// 
			this->buttonAddCurrentSpeaker->ForeColor = System::Drawing::Color::Black;
			this->buttonAddCurrentSpeaker->Location = System::Drawing::Point(161, 17);
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
			this->comboBoxCurrentSpeakerList->Location = System::Drawing::Point(5, 19);
			this->comboBoxCurrentSpeakerList->Name = L"comboBoxCurrentSpeakerList";
			this->comboBoxCurrentSpeakerList->Size = System::Drawing::Size(147, 21);
			this->comboBoxCurrentSpeakerList->TabIndex = 0;
			// 
			// labelCountrySpeaking
			// 
			this->labelCountrySpeaking->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold));
			this->labelCountrySpeaking->ForeColor = System::Drawing::Color::White;
			this->labelCountrySpeaking->Location = System::Drawing::Point(0, 23);
			this->labelCountrySpeaking->Name = L"labelCountrySpeaking";
			this->labelCountrySpeaking->Size = System::Drawing::Size(208, 35);
			this->labelCountrySpeaking->TabIndex = 8;
			this->labelCountrySpeaking->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttonNextSpeaker
			// 
			this->buttonNextSpeaker->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonNextSpeaker->Location = System::Drawing::Point(47, 303);
			this->buttonNextSpeaker->Name = L"buttonNextSpeaker";
			this->buttonNextSpeaker->Size = System::Drawing::Size(108, 30);
			this->buttonNextSpeaker->TabIndex = 7;
			this->buttonNextSpeaker->Text = L"Next Speaker";
			this->buttonNextSpeaker->UseVisualStyleBackColor = true;
			this->buttonNextSpeaker->Click += gcnew System::EventHandler(this, &MainForm::buttonNextSpeaker_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox1->Controls->Add(this->buttonRemoveSpeaker);
			this->groupBox1->Controls->Add(this->comboBoxCountryList);
			this->groupBox1->Controls->Add(this->buttonAddSpeaker);
			this->groupBox1->Controls->Add(this->comboBoxPriorityNum);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(3, 334);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(204, 73);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Speaker List";
			// 
			// buttonRemoveSpeaker
			// 
			this->buttonRemoveSpeaker->ForeColor = System::Drawing::Color::Black;
			this->buttonRemoveSpeaker->Location = System::Drawing::Point(113, 45);
			this->buttonRemoveSpeaker->Name = L"buttonRemoveSpeaker";
			this->buttonRemoveSpeaker->Size = System::Drawing::Size(70, 23);
			this->buttonRemoveSpeaker->TabIndex = 1;
			this->buttonRemoveSpeaker->Text = L"Remove";
			this->buttonRemoveSpeaker->UseVisualStyleBackColor = true;
			this->buttonRemoveSpeaker->Click += gcnew System::EventHandler(this, &MainForm::buttonRemoveSpeaker_Click);
			// 
			// comboBoxCountryList
			// 
			this->comboBoxCountryList->FormattingEnabled = true;
			this->comboBoxCountryList->Location = System::Drawing::Point(6, 19);
			this->comboBoxCountryList->Name = L"comboBoxCountryList";
			this->comboBoxCountryList->Size = System::Drawing::Size(136, 21);
			this->comboBoxCountryList->TabIndex = 2;
			this->comboBoxCountryList->Text = L"Choose Country";
			// 
			// buttonAddSpeaker
			// 
			this->buttonAddSpeaker->ForeColor = System::Drawing::Color::Black;
			this->buttonAddSpeaker->Location = System::Drawing::Point(24, 46);
			this->buttonAddSpeaker->Name = L"buttonAddSpeaker";
			this->buttonAddSpeaker->Size = System::Drawing::Size(71, 23);
			this->buttonAddSpeaker->TabIndex = 4;
			this->buttonAddSpeaker->Text = L"Add";
			this->buttonAddSpeaker->UseVisualStyleBackColor = true;
			this->buttonAddSpeaker->Click += gcnew System::EventHandler(this, &MainForm::buttonAddSpeaker_Click);
			// 
			// comboBoxPriorityNum
			// 
			this->comboBoxPriorityNum->FormattingEnabled = true;
			this->comboBoxPriorityNum->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
			});
			this->comboBoxPriorityNum->Location = System::Drawing::Point(148, 19);
			this->comboBoxPriorityNum->Name = L"comboBoxPriorityNum";
			this->comboBoxPriorityNum->Size = System::Drawing::Size(50, 21);
			this->comboBoxPriorityNum->TabIndex = 3;
			this->comboBoxPriorityNum->Text = L"#";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(3, -1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 27);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Now Speaking:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// listViewSpeakerList
			// 
			this->listViewSpeakerList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listViewSpeakerList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->priorityNum,
					this->SpeakerName
			});
			this->listViewSpeakerList->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F));
			this->listViewSpeakerList->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(25) {
				listViewItem1,
					listViewItem2, listViewItem3, listViewItem4, listViewItem5, listViewItem6, listViewItem7, listViewItem8, listViewItem9, listViewItem10,
					listViewItem11, listViewItem12, listViewItem13, listViewItem14, listViewItem15, listViewItem16, listViewItem17, listViewItem18,
					listViewItem19, listViewItem20, listViewItem21, listViewItem22, listViewItem23, listViewItem24, listViewItem25
			});
			this->listViewSpeakerList->Location = System::Drawing::Point(-6, 61);
			this->listViewSpeakerList->Name = L"listViewSpeakerList";
			this->listViewSpeakerList->Size = System::Drawing::Size(214, 236);
			this->listViewSpeakerList->TabIndex = 0;
			this->listViewSpeakerList->UseCompatibleStateImageBehavior = false;
			this->listViewSpeakerList->View = System::Windows::Forms::View::Details;
			// 
			// priorityNum
			// 
			this->priorityNum->Text = L"#";
			this->priorityNum->Width = 28;
			// 
			// SpeakerName
			// 
			this->SpeakerName->Text = L"Speaker";
			this->SpeakerName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SpeakerName->Width = 165;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->groupBox5);
			this->panel3->Controls->Add(this->groupBox3);
			this->panel3->Controls->Add(this->labelCountdown);
			this->panel3->Controls->Add(this->textBoxRecord);
			this->panel3->Controls->Add(this->labelCommitteeStatus);
			this->panel3->Controls->Add(this->labelSessionRecord);
			this->panel3->Location = System::Drawing::Point(213, 149);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(569, 463);
			this->panel3->TabIndex = 4;
			// 
			// groupBox5
			// 
			this->groupBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox5->Controls->Add(this->buttonAddRecord);
			this->groupBox5->Controls->Add(this->richTextBoxRecordToAdd);
			this->groupBox5->ForeColor = System::Drawing::Color::Black;
			this->groupBox5->Location = System::Drawing::Point(173, 351);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(390, 97);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Add Record";
			// 
			// buttonAddRecord
			// 
			this->buttonAddRecord->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonAddRecord->Location = System::Drawing::Point(297, 68);
			this->buttonAddRecord->Name = L"buttonAddRecord";
			this->buttonAddRecord->Size = System::Drawing::Size(75, 23);
			this->buttonAddRecord->TabIndex = 1;
			this->buttonAddRecord->Text = L"Add";
			this->buttonAddRecord->UseVisualStyleBackColor = true;
			this->buttonAddRecord->Click += gcnew System::EventHandler(this, &MainForm::buttonAddRecord_Click);
			// 
			// richTextBoxRecordToAdd
			// 
			this->richTextBoxRecordToAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBoxRecordToAdd->EnableAutoDragDrop = true;
			this->richTextBoxRecordToAdd->Location = System::Drawing::Point(6, 20);
			this->richTextBoxRecordToAdd->Name = L"richTextBoxRecordToAdd";
			this->richTextBoxRecordToAdd->Size = System::Drawing::Size(378, 43);
			this->richTextBoxRecordToAdd->TabIndex = 0;
			this->richTextBoxRecordToAdd->Text = L"";
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox3->Controls->Add(this->buttonUpdateCommitteeStatus);
			this->groupBox3->Controls->Add(this->comboBoxCommitteeStatus);
			this->groupBox3->ForeColor = System::Drawing::Color::Black;
			this->groupBox3->Location = System::Drawing::Point(7, 351);
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
			// labelCountdown
			// 
			this->labelCountdown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelCountdown->Font = (gcnew System::Drawing::Font(L"Calibri", 39.75F));
			this->labelCountdown->Location = System::Drawing::Point(7, 59);
			this->labelCountdown->Name = L"labelCountdown";
			this->labelCountdown->Size = System::Drawing::Size(556, 59);
			this->labelCountdown->TabIndex = 4;
			this->labelCountdown->Text = L"00:00:00";
			this->labelCountdown->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBoxRecord
			// 
			this->textBoxRecord->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->textBoxRecord->Location = System::Drawing::Point(7, 144);
			this->textBoxRecord->Multiline = true;
			this->textBoxRecord->Name = L"textBoxRecord";
			this->textBoxRecord->ReadOnly = true;
			this->textBoxRecord->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxRecord->Size = System::Drawing::Size(556, 201);
			this->textBoxRecord->TabIndex = 15;
			// 
			// labelCommitteeStatus
			// 
			this->labelCommitteeStatus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelCommitteeStatus->Font = (gcnew System::Drawing::Font(L"Calibri", 36));
			this->labelCommitteeStatus->Location = System::Drawing::Point(4, 5);
			this->labelCommitteeStatus->Name = L"labelCommitteeStatus";
			this->labelCommitteeStatus->Size = System::Drawing::Size(563, 56);
			this->labelCommitteeStatus->TabIndex = 9;
			this->labelCommitteeStatus->Text = L"Lobbying";
			this->labelCommitteeStatus->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelSessionRecord
			// 
			this->labelSessionRecord->AutoSize = true;
			this->labelSessionRecord->Font = (gcnew System::Drawing::Font(L"Calibri", 18));
			this->labelSessionRecord->Location = System::Drawing::Point(4, 112);
			this->labelSessionRecord->Name = L"labelSessionRecord";
			this->labelSessionRecord->Size = System::Drawing::Size(166, 29);
			this->labelSessionRecord->TabIndex = 4;
			this->labelSessionRecord->Text = L"Session Record:";
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->panel4->Controls->Add(this->comboBoxResNumToRemove);
			this->panel4->Controls->Add(this->buttonRemoveResolution);
			this->panel4->Controls->Add(this->buttonAddResolution);
			this->panel4->Controls->Add(this->listViewResolutions);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Location = System::Drawing::Point(785, 149);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(213, 239);
			this->panel4->TabIndex = 5;
			// 
			// comboBoxResNumToRemove
			// 
			this->comboBoxResNumToRemove->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->comboBoxResNumToRemove->FormattingEnabled = true;
			this->comboBoxResNumToRemove->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8"
			});
			this->comboBoxResNumToRemove->Location = System::Drawing::Point(160, 211);
			this->comboBoxResNumToRemove->Name = L"comboBoxResNumToRemove";
			this->comboBoxResNumToRemove->Size = System::Drawing::Size(35, 21);
			this->comboBoxResNumToRemove->TabIndex = 12;
			this->comboBoxResNumToRemove->Text = L"#";
			// 
			// buttonRemoveResolution
			// 
			this->buttonRemoveResolution->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonRemoveResolution->Location = System::Drawing::Point(14, 210);
			this->buttonRemoveResolution->Name = L"buttonRemoveResolution";
			this->buttonRemoveResolution->Size = System::Drawing::Size(137, 23);
			this->buttonRemoveResolution->TabIndex = 10;
			this->buttonRemoveResolution->Text = L"Remove Draft Resolution";
			this->buttonRemoveResolution->UseVisualStyleBackColor = true;
			this->buttonRemoveResolution->Click += gcnew System::EventHandler(this, &MainForm::buttonRemoveResolution_Click);
			// 
			// buttonAddResolution
			// 
			this->buttonAddResolution->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonAddResolution->Location = System::Drawing::Point(14, 181);
			this->buttonAddResolution->Name = L"buttonAddResolution";
			this->buttonAddResolution->Size = System::Drawing::Size(181, 23);
			this->buttonAddResolution->TabIndex = 11;
			this->buttonAddResolution->Text = L"Add Draft Resolution";
			this->buttonAddResolution->UseVisualStyleBackColor = true;
			this->buttonAddResolution->Click += gcnew System::EventHandler(this, &MainForm::buttonAddResolution_Click);
			// 
			// listViewResolutions
			// 
			this->listViewResolutions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listViewResolutions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->columnHeader1,
					this->columnHeader2
			});
			this->listViewResolutions->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F));
			this->listViewResolutions->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(5) {
				listViewItem26,
					listViewItem27, listViewItem28, listViewItem29, listViewItem30
			});
			this->listViewResolutions->Location = System::Drawing::Point(3, 34);
			this->listViewResolutions->Name = L"listViewResolutions";
			this->listViewResolutions->Size = System::Drawing::Size(210, 138);
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
			this->columnHeader2->Width = 167;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(25, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(154, 26);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Resolution Panel";
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->panel5->Controls->Add(this->buttonEditRecord);
			this->panel5->Controls->Add(this->groupBox7);
			this->panel5->Controls->Add(this->buttonTopicChange);
			this->panel5->Controls->Add(this->buttonExit);
			this->panel5->Controls->Add(this->buttonCrisis);
			this->panel5->Controls->Add(this->buttonSaveRecord);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Location = System::Drawing::Point(785, 393);
			this->panel5->Margin = System::Windows::Forms::Padding(0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(213, 219);
			this->panel5->TabIndex = 6;
			// 
			// buttonEditRecord
			// 
			this->buttonEditRecord->Location = System::Drawing::Point(113, 160);
			this->buttonEditRecord->Name = L"buttonEditRecord";
			this->buttonEditRecord->Size = System::Drawing::Size(83, 23);
			this->buttonEditRecord->TabIndex = 14;
			this->buttonEditRecord->Text = L"Edit Record";
			this->buttonEditRecord->UseVisualStyleBackColor = true;
			this->buttonEditRecord->Click += gcnew System::EventHandler(this, &MainForm::buttonEditRecord_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label5);
			this->groupBox7->Controls->Add(this->comboBoxTimerHour);
			this->groupBox7->Controls->Add(this->comboBoxTimerSec);
			this->groupBox7->Controls->Add(this->label11);
			this->groupBox7->Controls->Add(this->buttonTimerSet);
			this->groupBox7->Controls->Add(this->buttonTimerPause);
			this->groupBox7->Controls->Add(this->comboBoxTimerMin);
			this->groupBox7->ForeColor = System::Drawing::Color::White;
			this->groupBox7->Location = System::Drawing::Point(10, 27);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(192, 77);
			this->groupBox7->TabIndex = 9;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Timer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(53, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L":";
			// 
			// comboBoxTimerHour
			// 
			this->comboBoxTimerHour->DropDownHeight = 60;
			this->comboBoxTimerHour->FormattingEnabled = true;
			this->comboBoxTimerHour->IntegralHeight = false;
			this->comboBoxTimerHour->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->comboBoxTimerHour->Location = System::Drawing::Point(9, 17);
			this->comboBoxTimerHour->MaxDropDownItems = 4;
			this->comboBoxTimerHour->Name = L"comboBoxTimerHour";
			this->comboBoxTimerHour->Size = System::Drawing::Size(38, 21);
			this->comboBoxTimerHour->TabIndex = 9;
			this->comboBoxTimerHour->Text = L"hh";
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
			this->comboBoxTimerSec->Location = System::Drawing::Point(143, 17);
			this->comboBoxTimerSec->Name = L"comboBoxTimerSec";
			this->comboBoxTimerSec->Size = System::Drawing::Size(40, 21);
			this->comboBoxTimerSec->TabIndex = 7;
			this->comboBoxTimerSec->Text = L"sec";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(121, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 19);
			this->label11->TabIndex = 8;
			this->label11->Text = L":";
			// 
			// buttonTimerSet
			// 
			this->buttonTimerSet->ForeColor = System::Drawing::Color::Black;
			this->buttonTimerSet->Location = System::Drawing::Point(14, 44);
			this->buttonTimerSet->Name = L"buttonTimerSet";
			this->buttonTimerSet->Size = System::Drawing::Size(75, 23);
			this->buttonTimerSet->TabIndex = 1;
			this->buttonTimerSet->Text = L"Set";
			this->buttonTimerSet->UseVisualStyleBackColor = true;
			this->buttonTimerSet->Click += gcnew System::EventHandler(this, &MainForm::buttonTimerSet_Click);
			// 
			// buttonTimerPause
			// 
			this->buttonTimerPause->ForeColor = System::Drawing::Color::Black;
			this->buttonTimerPause->Location = System::Drawing::Point(98, 44);
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
			this->comboBoxTimerMin->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25",
					L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43",
					L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->comboBoxTimerMin->Location = System::Drawing::Point(77, 17);
			this->comboBoxTimerMin->MaxDropDownItems = 4;
			this->comboBoxTimerMin->Name = L"comboBoxTimerMin";
			this->comboBoxTimerMin->Size = System::Drawing::Size(38, 21);
			this->comboBoxTimerMin->TabIndex = 6;
			this->comboBoxTimerMin->Text = L"min";
			// 
			// buttonTopicChange
			// 
			this->buttonTopicChange->Location = System::Drawing::Point(63, 108);
			this->buttonTopicChange->Name = L"buttonTopicChange";
			this->buttonTopicChange->Size = System::Drawing::Size(83, 23);
			this->buttonTopicChange->TabIndex = 13;
			this->buttonTopicChange->Text = L"Change Topic";
			this->buttonTopicChange->UseVisualStyleBackColor = true;
			this->buttonTopicChange->Click += gcnew System::EventHandler(this, &MainForm::buttonTopicChange_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(63, 189);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(83, 23);
			this->buttonExit->TabIndex = 5;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MainForm::buttonExit_Click);
			// 
			// buttonCrisis
			// 
			this->buttonCrisis->Location = System::Drawing::Point(63, 134);
			this->buttonCrisis->Name = L"buttonCrisis";
			this->buttonCrisis->Size = System::Drawing::Size(83, 23);
			this->buttonCrisis->TabIndex = 4;
			this->buttonCrisis->Text = L"Crisis";
			this->buttonCrisis->UseVisualStyleBackColor = true;
			this->buttonCrisis->Click += gcnew System::EventHandler(this, &MainForm::buttonCrisis_Click);
			// 
			// buttonSaveRecord
			// 
			this->buttonSaveRecord->Location = System::Drawing::Point(16, 160);
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
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(65, 4);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 26);
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
			this->label4->Location = System::Drawing::Point(3, 1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Created by";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(59, 1);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(99, 13);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Dimitris Alexandridis";
			this->linkLabel1->Click += gcnew System::EventHandler(this, &MainForm::linkLabel1_Click);
			// 
			// labelTopic
			// 
			this->labelTopic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->labelTopic->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelTopic->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->labelTopic->ForeColor = System::Drawing::Color::White;
			this->labelTopic->Location = System::Drawing::Point(0, 0);
			this->labelTopic->Name = L"labelTopic";
			this->labelTopic->Size = System::Drawing::Size(998, 66);
			this->labelTopic->TabIndex = 8;
			this->labelTopic->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel7->AutoSize = true;
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->panel7->Controls->Add(this->labelTopic);
			this->panel7->Location = System::Drawing::Point(0, 80);
			this->panel7->Margin = System::Windows::Forms::Padding(1);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(998, 66);
			this->panel7->TabIndex = 9;
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->linkLabel1);
			this->panel6->Location = System::Drawing::Point(-1, 612);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(999, 18);
			this->panel6->TabIndex = 16;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->ClientSize = System::Drawing::Size(998, 627);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel6);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ACMUN";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
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
				//Update time on labelTime every second.
				 DateTime currentDateTime = DateTime::Now;
				 this->labelTime->Text = currentDateTime.ToString();
	}


	private: System::Void buttonAddSpeaker_Click(System::Object^  sender, System::EventArgs^  e) {
		//Add speaker
		if (comboBoxCountryList->SelectedIndex != -1) {
			if (comboBoxPriorityNum->SelectedIndex == -1) {
				int i = 0;
				while (i < 25) {
					if (isSpeakerSlotOccupied[i] == 0) { break; }
					i++;
				}

				this->listViewSpeakerList->Items[i]->SubItems[1]->Text = comboBoxCountryList->Text;
				isSpeakerSlotOccupied[i] = 1;
			}
			else {
				int i = 23;
				while (i > this->comboBoxPriorityNum->SelectedIndex - 1) {
					this->listViewSpeakerList->Items[i + 1]->SubItems[1]->Text = this->listViewSpeakerList->Items[i]->SubItems[1]->Text;
					if (this->listViewSpeakerList->Items[i + 1]->SubItems[1]->Text != "") { isSpeakerSlotOccupied[i + 1] = 1; }
					i--;
				}
				isSpeakerSlotOccupied[this->comboBoxPriorityNum->SelectedIndex] = 1;
				this->listViewSpeakerList->Items[this->comboBoxPriorityNum->SelectedIndex]->SubItems[1]->Text = comboBoxCountryList->Text;
			}
			comboBoxPriorityNum->SelectedIndex = -1;
			comboBoxPriorityNum->Text = "#";
			comboBoxCountryList->SelectedIndex = -1;
			comboBoxCountryList->Text = "Choose Country";
		}
	}



	private: System::Void buttonRemoveSpeaker_Click(System::Object^  sender, System::EventArgs^  e) {
		if (comboBoxPriorityNum->SelectedIndex != -1) {
			//Remove Speaker
			int i = this->comboBoxPriorityNum->SelectedIndex;
			while (i < 24) {
				this->listViewSpeakerList->Items[i]->SubItems[1]->Text = this->listViewSpeakerList->Items[i + 1]->SubItems[1]->Text;
				if (this->listViewSpeakerList->Items[i]->SubItems[1]->Text == "") { isSpeakerSlotOccupied[i] = 0; }
				i++;
			}
			this->listViewSpeakerList->Items[24]->SubItems[1]->Text = "";
			isSpeakerSlotOccupied[24] = 0;
			comboBoxPriorityNum->SelectedIndex = -1;
			comboBoxPriorityNum->Text = "#";
			comboBoxCountryList->SelectedIndex = -1;
			comboBoxCountryList->Text = "Choose Country";
		}
	}


private: System::Void buttonNextSpeaker_Click(System::Object^  sender, System::EventArgs^  e) {
	//--Next Speaker--

	//Set labelCountrySpeaking to country 1
	this->labelCountrySpeaking->Text = listViewSpeakerList->Items[0]->SubItems[1]->Text;
	this->comboBoxCurrentSpeakerList->Text = listViewSpeakerList->Items[0]->SubItems[1]->Text;

	//Move each speaker one place up
	int i = 0;
	while (i < 24) {
		this->listViewSpeakerList->Items[i]->SubItems[1]->Text = this->listViewSpeakerList->Items[i + 1]->SubItems[1]->Text;
		i++;
		if (listViewSpeakerList->Items[i]->SubItems[1]->Text == "") { isSpeakerSlotOccupied[i] = 0; isSpeakerSlotOccupied[i-1] = 0; }
	}
	this->listViewSpeakerList->Items[24]->SubItems[1]->Text = "";
	isSpeakerSlotOccupied[24] = 0;
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
		this->textBoxRecord->AppendText(DateTime::Now.ToString("HH:mm:ss") + "-");
		this->textBoxRecord->AppendText(richTextBoxRecordToAdd->Text);
		//this->labelLatestRecord->Text = richTextBoxRecordToAdd->Text;
		this->richTextBoxRecordToAdd->Text = "";
	}
	else {
		//this->labelLatestRecord->Text = richTextBoxRecordToAdd->Text;
		this->textBoxRecord->AppendText("\r\n\r\n");
		this->textBoxRecord->AppendText(DateTime::Now.ToString("HH:mm:ss") + "-");
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
		if (comboBoxResNumToRemove->SelectedIndex != -1) {
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
	}
	private: System::Void buttonTimerSet_Click(System::Object^  sender, System::EventArgs^  e) {
		CountdownSec = 0;
		CountdownMin = 0;
		CountdownSec = 0;
		if (comboBoxTimerMin->SelectedIndex > -1) {
			CountdownMin = this->comboBoxTimerMin->SelectedIndex;
		}
		if (comboBoxTimerSec->SelectedIndex > -1) {
			CountdownSec = 5 * this->comboBoxTimerSec->SelectedIndex;
		}
		if (comboBoxTimerHour->SelectedIndex > -1) {
			CountdownHour = this->comboBoxTimerHour->SelectedIndex;
		}
		if (CountdownMin < 10 && CountdownSec > 9) {
			this->labelCountdown->Text = "0" + Convert::ToString(CountdownHour) + ":" + "0" + Convert::ToString(CountdownMin) + ":" + Convert::ToString(CountdownSec);
			}
			else if (CountdownSec < 10 && CountdownMin > 9) {
				this->labelCountdown->Text = "0" + Convert::ToString(CountdownHour) + ":" + Convert::ToString(CountdownMin) + ":" + "0" + Convert::ToString(CountdownSec);
			}
			else if (CountdownMin < 10 && CountdownSec < 10) {
				this->labelCountdown->Text = "0" + Convert::ToString(CountdownHour) + ":" + "0" + Convert::ToString(CountdownMin) + ":" + "0" + Convert::ToString(CountdownSec);
			}
			else {
				this->labelCountdown->Text = "0" + Convert::ToString(CountdownHour) + ":" + Convert::ToString(CountdownMin) + ":" + Convert::ToString(CountdownSec);
			}
			this->timerCountdown->Enabled = 0;
			this->buttonTimerPause->Text = "Start";

	}
	private: System::Void timerCountdown_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (CountdownHour < 1 && CountdownMin < 1 && CountdownSec < 1) {
			this->labelCountdown->Text = "00:00:00";
			this->buttonTimerPause->Text = "Start";
			this->timerCountdown->Enabled = 0;
			return;
		}
		CountdownSec--;
		if (CountdownSec == -1 && CountdownMin > -1) {
			CountdownSec = 59;
			CountdownMin--;
		}
		if (CountdownMin == -1 && CountdownHour > 0) {
			CountdownMin = 59;
			CountdownHour--;
		}
		if (CountdownMin < 10 && CountdownSec > 9) {
			this->labelCountdown->Text = "0" + Convert::ToString(CountdownHour) + ":" + "0" + Convert::ToString(CountdownMin) + ":" + Convert::ToString(CountdownSec);
		} else if (CountdownSec < 10 && CountdownMin > 9) {
			this->labelCountdown->Text = "0" + Convert::ToString(CountdownHour) + ":" + Convert::ToString(CountdownMin) + ":" + "0" + Convert::ToString(CountdownSec);
		} else if (CountdownMin < 10 && CountdownSec < 10) {
			this->labelCountdown->Text = "0" + Convert::ToString(CountdownHour) + ":" + "0" + Convert::ToString(CountdownMin) + ":" + "0" + Convert::ToString(CountdownSec);
		} else {
			this->labelCountdown->Text = "0" + Convert::ToString(CountdownHour) + ":" + Convert::ToString(CountdownMin) + ":" + Convert::ToString(CountdownSec);
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

	//Adjust Font Size
	if (this->labelTopic->Width < System::Windows::Forms::TextRenderer::MeasureText(TopicDialog->textBoxTopic->Text,
		gcnew System::Drawing::Font(this->labelTopic->Font->FontFamily, this->labelTopic->Font->Size, this->labelTopic->Font->Style)).Width)
	{
		this->labelTopic->Font = gcnew System::Drawing::Font(this->labelTopic->Font->FontFamily, 20, this->labelTopic->Font->Style);
	}
	else {
		this->labelTopic->Font = gcnew System::Drawing::Font(this->labelTopic->Font->FontFamily, 22, this->labelTopic->Font->Style);
	}

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
	CrisisDialog->BackColor = System::Drawing::Color::FromArgb(196, 51, 44);
	//CrisisDialog->BackColor = System::Drawing::Color::FromArgb(255, 148, 141);
	CrisisDialog->buttonCrisis->Text = "";
	CrisisDialog->labelCommitteeStatus->ForeColor = System::Drawing::Color::White;
	CrisisDialog->labelCountdown->ForeColor = System::Drawing::Color::White;
	CrisisDialog->labelSessionRecord->ForeColor = System::Drawing::Color::White;
	CrisisDialog->groupBox3->ForeColor = System::Drawing::Color::White;
	CrisisDialog->groupBox5->ForeColor = System::Drawing::Color::White;
	CrisisDialog->label4->ForeColor = System::Drawing::Color::White;
	CrisisDialog->buttonAddRecord->ForeColor = System::Drawing::Color::Black;
	CrisisDialog->buttonUpdateCommitteeStatus->ForeColor = System::Drawing::Color::Black;
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
private: System::Void buttonEditRecord_Click(System::Object^  sender, System::EventArgs^  e) {
	if (isRecordReadOnly) {
		isRecordReadOnly = 0;
		this->textBoxRecord->ReadOnly = 0;
		this->buttonEditRecord->Text = "Lock Record";
		this->labelSessionRecord->Text = "Session Record: (EDIT)";
	}
	else {
		isRecordReadOnly = 1;
		this->textBoxRecord->ReadOnly = 1;
		this->buttonEditRecord->Text = "Edit Record";
		this->labelSessionRecord->Text = "Session Record:";
	}
}
};
}
