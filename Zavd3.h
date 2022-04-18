#include <iostream>
#include <string.h>
#include <fstream>
#include <filesystem>

namespace SemeniukLr9TxPrZS {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Security;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Zavd3
	/// </summary>
	public ref class Zavd3 : public System::Windows::Forms::Form
	{
	public:
		Zavd3(void)
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
		~Zavd3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
		String^ path;
		String^ word;
		int k=0;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;


	protected:
		
	public:

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Press the button to enter file path( \\ for parter)";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(12, 115);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(347, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Zavd3::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter word (register matters)";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox3->Location = System::Drawing::Point(12, 154);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(347, 20);
			this->textBox3->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(347, 47);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Zavd3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(347, 61);
			this->button2->TabIndex = 6;
			this->button2->Text = L"File path";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Zavd3::button2_Click);
			// 
			// Zavd3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(371, 246);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Name = L"Zavd3";
			this->Text = L"Zavd3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ reader = gcnew StreamReader(path);
	String^ allr;
	allr = reader->ReadToEnd();
	Array^ words = allr->Split(' ','\t');
	for (int i = 0; i < words->Length; i++) {
		if ( word->Equals(words->GetValue(i))){
			k++;
		}
	}
	textBox3->Text = "Your word is " + word + " and it was used " + k + " times";
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	word = textBox2->Text;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->ShowDialog();
	path = openFileDialog1->FileName;
	Process::Start(path);
}
};
}
