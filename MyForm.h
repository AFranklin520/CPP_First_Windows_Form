#pragma once
#include "AlaskanCruise.h"
#include "Date.h"
#include "UtilityFunctions.h"

namespace FrankliniP5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	AlaskanCruise cruise;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			AlaskanCruise cruise;
			string text = cruise.PresentCruiseInfo();
			labelInfo->Text = gcnew String(text.c_str());

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Label^ label9Day;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ labelRes;
	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::Label^ labelPass;
	private: System::Windows::Forms::Label^ labelLength;
	private: System::Windows::Forms::Label^ labelExcursions;
	private: System::Windows::Forms::Label^ labelDate;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPass;


	private: System::Windows::Forms::NumericUpDown^ numericUpDownExc;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDepart;
	private: System::Windows::Forms::Button^ buttonRes;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Label^ labelResConf;
	private: System::Windows::Forms::Label^ labelInfo;
	private: System::Windows::Forms::RadioButton^ radioButton9Day;
	private: System::Windows::Forms::RadioButton^ radioButton7Day;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9Day = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelRes = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelPass = (gcnew System::Windows::Forms::Label());
			this->labelLength = (gcnew System::Windows::Forms::Label());
			this->labelExcursions = (gcnew System::Windows::Forms::Label());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->numericUpDownPass = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownExc = (gcnew System::Windows::Forms::NumericUpDown());
			this->dateTimePickerDepart = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonRes = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->labelResConf = (gcnew System::Windows::Forms::Label());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->radioButton9Day = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7Day = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownExc))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox2->Location = System::Drawing::Point(1009, 889);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(206, 21);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"background-mania.com";
			// 
			// label9Day
			// 
			this->label9Day->AutoSize = true;
			this->label9Day->BackColor = System::Drawing::Color::Transparent;
			this->label9Day->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9Day->ForeColor = System::Drawing::SystemColors::Control;
			this->label9Day->Location = System::Drawing::Point(582, 272);
			this->label9Day->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9Day->Name = L"label9Day";
			this->label9Day->Size = System::Drawing::Size(0, 32);
			this->label9Day->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label3->Location = System::Drawing::Point(155, 32);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(833, 49);
			this->label3->TabIndex = 5;
			this->label3->Text = L"***WELCOME TO C++ CRUISE LINE!!!***";
			// 
			// labelRes
			// 
			this->labelRes->AutoSize = true;
			this->labelRes->BackColor = System::Drawing::Color::Transparent;
			this->labelRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelRes->Location = System::Drawing::Point(13, 372);
			this->labelRes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelRes->Name = L"labelRes";
			this->labelRes->Size = System::Drawing::Size(235, 29);
			this->labelRes->TabIndex = 7;
			this->labelRes->Text = L"Reservation Name:";
			// 
			// textBoxName
			// 
			this->textBoxName->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxName->Location = System::Drawing::Point(315, 372);
			this->textBoxName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(353, 37);
			this->textBoxName->TabIndex = 8;
			// 
			// labelPass
			// 
			this->labelPass->AutoSize = true;
			this->labelPass->BackColor = System::Drawing::Color::Transparent;
			this->labelPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPass->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelPass->Location = System::Drawing::Point(13, 422);
			this->labelPass->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPass->Name = L"labelPass";
			this->labelPass->Size = System::Drawing::Size(158, 58);
			this->labelPass->TabIndex = 9;
			this->labelPass->Text = L"Number of \r\nPassengers:";
			// 
			// labelLength
			// 
			this->labelLength->AutoSize = true;
			this->labelLength->BackColor = System::Drawing::Color::Transparent;
			this->labelLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLength->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelLength->Location = System::Drawing::Point(13, 502);
			this->labelLength->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelLength->Name = L"labelLength";
			this->labelLength->Size = System::Drawing::Size(182, 29);
			this->labelLength->TabIndex = 10;
			this->labelLength->Text = L"Cruise Length:";
			// 
			// labelExcursions
			// 
			this->labelExcursions->AutoSize = true;
			this->labelExcursions->BackColor = System::Drawing::Color::Transparent;
			this->labelExcursions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelExcursions->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelExcursions->Location = System::Drawing::Point(13, 578);
			this->labelExcursions->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelExcursions->Name = L"labelExcursions";
			this->labelExcursions->Size = System::Drawing::Size(147, 58);
			this->labelExcursions->TabIndex = 11;
			this->labelExcursions->Text = L"Number of\r\nExcursions:";
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->BackColor = System::Drawing::Color::Transparent;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelDate->Location = System::Drawing::Point(13, 671);
			this->labelDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(197, 29);
			this->labelDate->TabIndex = 12;
			this->labelDate->Text = L"Departure Date:";
			// 
			// numericUpDownPass
			// 
			this->numericUpDownPass->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->numericUpDownPass->Location = System::Drawing::Point(323, 438);
			this->numericUpDownPass->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownPass->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownPass->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownPass->Name = L"numericUpDownPass";
			this->numericUpDownPass->ReadOnly = true;
			this->numericUpDownPass->Size = System::Drawing::Size(55, 29);
			this->numericUpDownPass->TabIndex = 13;
			this->numericUpDownPass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDownPass->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownExc
			// 
			this->numericUpDownExc->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->numericUpDownExc->Location = System::Drawing::Point(315, 591);
			this->numericUpDownExc->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownExc->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDownExc->Name = L"numericUpDownExc";
			this->numericUpDownExc->Size = System::Drawing::Size(63, 29);
			this->numericUpDownExc->TabIndex = 16;
			this->numericUpDownExc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dateTimePickerDepart
			// 
			this->dateTimePickerDepart->CalendarMonthBackground = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dateTimePickerDepart->Location = System::Drawing::Point(315, 671);
			this->dateTimePickerDepart->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDepart->Name = L"dateTimePickerDepart";
			this->dateTimePickerDepart->Size = System::Drawing::Size(342, 29);
			this->dateTimePickerDepart->TabIndex = 17;
			this->dateTimePickerDepart->Value = System::DateTime(2022, 5, 3, 0, 0, 0, 0);
			// 
			// buttonRes
			// 
			this->buttonRes->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->buttonRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRes->Location = System::Drawing::Point(702, 361);
			this->buttonRes->Margin = System::Windows::Forms::Padding(4);
			this->buttonRes->Name = L"buttonRes";
			this->buttonRes->Size = System::Drawing::Size(187, 76);
			this->buttonRes->TabIndex = 18;
			this->buttonRes->Text = L"Confirm\r\nReservation";
			this->buttonRes->UseVisualStyleBackColor = false;
			this->buttonRes->Click += gcnew System::EventHandler(this, &MyForm::buttonRes_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->Location = System::Drawing::Point(947, 361);
			this->buttonClear->Margin = System::Windows::Forms::Padding(4);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(174, 76);
			this->buttonClear->TabIndex = 19;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// labelResConf
			// 
			this->labelResConf->AutoSize = true;
			this->labelResConf->BackColor = System::Drawing::Color::Transparent;
			this->labelResConf->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelResConf->ForeColor = System::Drawing::Color::Aqua;
			this->labelResConf->Location = System::Drawing::Point(697, 451);
			this->labelResConf->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelResConf->Name = L"labelResConf";
			this->labelResConf->Size = System::Drawing::Size(0, 29);
			this->labelResConf->TabIndex = 20;
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->BackColor = System::Drawing::Color::Transparent;
			this->labelInfo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInfo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelInfo->Location = System::Drawing::Point(32, 96);
			this->labelInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(0, 24);
			this->labelInfo->TabIndex = 21;
			// 
			// radioButton9Day
			// 
			this->radioButton9Day->AutoSize = true;
			this->radioButton9Day->BackColor = System::Drawing::Color::Transparent;
			this->radioButton9Day->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton9Day->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton9Day->Location = System::Drawing::Point(481, 502);
			this->radioButton9Day->Margin = System::Windows::Forms::Padding(4);
			this->radioButton9Day->Name = L"radioButton9Day";
			this->radioButton9Day->Size = System::Drawing::Size(127, 33);
			this->radioButton9Day->TabIndex = 15;
			this->radioButton9Day->Text = L"9 DAYS";
			this->radioButton9Day->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton9Day->UseVisualStyleBackColor = false;
			// 
			// radioButton7Day
			// 
			this->radioButton7Day->AutoSize = true;
			this->radioButton7Day->BackColor = System::Drawing::Color::Transparent;
			this->radioButton7Day->Checked = true;
			this->radioButton7Day->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton7Day->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton7Day->Location = System::Drawing::Point(315, 502);
			this->radioButton7Day->Margin = System::Windows::Forms::Padding(4);
			this->radioButton7Day->Name = L"radioButton7Day";
			this->radioButton7Day->Size = System::Drawing::Size(127, 33);
			this->radioButton7Day->TabIndex = 14;
			this->radioButton7Day->TabStop = true;
			this->radioButton7Day->Text = L"7 DAYS";
			this->radioButton7Day->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton7Day->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(461, 217);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(147, 29);
			this->radioButton1->TabIndex = 22;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(627, 217);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(147, 29);
			this->radioButton2->TabIndex = 23;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1228, 914);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->labelResConf);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonRes);
			this->Controls->Add(this->dateTimePickerDepart);
			this->Controls->Add(this->numericUpDownExc);
			this->Controls->Add(this->radioButton9Day);
			this->Controls->Add(this->radioButton7Day);
			this->Controls->Add(this->numericUpDownPass);
			this->Controls->Add(this->labelDate);
			this->Controls->Add(this->labelExcursions);
			this->Controls->Add(this->labelLength);
			this->Controls->Add(this->labelPass);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelRes);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9Day);
			this->Controls->Add(this->textBox2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"My First CPP Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownExc))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonRes_Click(System::Object^ sender, System::EventArgs^ e) {
	//Getting Name
	String^ mess = textBoxName->Text;
	string name;
	To_string(mess, name);

	//Getting # Passengers
	int numPass = (int)numericUpDownPass->Value;

	//Getting cruise length
	int numDays;
	if (radioButton7Day->Checked == true)
		numDays = 7;
	else
		numDays = 9;

	// # Excursions
	int numEx = (int)numericUpDownExc->Value;

	//Booking and departure date
	Date book;
	book.SetDesc("Booking Date");
	int month = dateTimePickerDepart->Value.Month;
	int day = dateTimePickerDepart->Value.Day;
	int year = dateTimePickerDepart->Value.Year;
	Date dep(month, day, year, "Departure Date");

	//Create Object
	AlaskanCruise cruise(name, numPass, numDays, numEx, book, dep);

	//Writing reservation to a .txt file
	string filename;
	bool bWrite = cruise.WriteReservationConfirmation(filename);

	if (bWrite)
	{
		labelResConf->Text = gcnew String(cruise.GetReservationConfirmation().c_str());
	}
	else
		labelResConf->Text += "\r\nError! Unable to write confirmation file!";
}
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxName->Clear();
	labelResConf->Text = gcnew String("");
	numericUpDownExc->Value = 0;
	numericUpDownPass->Value = 1;

	dateTimePickerDepart->Value = DateTime::Today;
	radioButton7Day->Checked = true;
	radioButton9Day->Checked = false;

}
};
}
