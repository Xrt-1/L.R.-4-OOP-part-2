#pragma once
#include "Model.h"
namespace LR4OOPpart2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static int A = 0, B = 0, C = 0;
	static Model model;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numUpDwnA;
	private: System::Windows::Forms::NumericUpDown^ numUpDwnB;
	private: System::Windows::Forms::NumericUpDown^ numUpDwnC;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ tBoxA;

	private: System::Windows::Forms::TextBox^ tBoxB;
	private: System::Windows::Forms::TextBox^ tBoxC;



	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::TrackBar^ trackBar3;

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
			this->numUpDwnA = (gcnew System::Windows::Forms::NumericUpDown());
			this->numUpDwnB = (gcnew System::Windows::Forms::NumericUpDown());
			this->numUpDwnC = (gcnew System::Windows::Forms::NumericUpDown());
			this->tBoxA = (gcnew System::Windows::Forms::TextBox());
			this->tBoxB = (gcnew System::Windows::Forms::TextBox());
			this->tBoxC = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDwnA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDwnB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDwnC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->SuspendLayout();
			// 
			// numUpDwnA
			// 
			this->numUpDwnA->Location = System::Drawing::Point(57, 136);
			this->numUpDwnA->Name = L"numUpDwnA";
			this->numUpDwnA->Size = System::Drawing::Size(120, 22);
			this->numUpDwnA->TabIndex = 0;
			this->numUpDwnA->ValueChanged += gcnew System::EventHandler(this, &MyForm::numUpDwnA_ValueChanged);
			// 
			// numUpDwnB
			// 
			this->numUpDwnB->Location = System::Drawing::Point(220, 136);
			this->numUpDwnB->Name = L"numUpDwnB";
			this->numUpDwnB->Size = System::Drawing::Size(120, 22);
			this->numUpDwnB->TabIndex = 1;
			this->numUpDwnB->ValueChanged += gcnew System::EventHandler(this, &MyForm::numUpDwnB_ValueChanged);
			// 
			// numUpDwnC
			// 
			this->numUpDwnC->Location = System::Drawing::Point(377, 136);
			this->numUpDwnC->Name = L"numUpDwnC";
			this->numUpDwnC->Size = System::Drawing::Size(120, 22);
			this->numUpDwnC->TabIndex = 2;
			this->numUpDwnC->ValueChanged += gcnew System::EventHandler(this, &MyForm::numUpDwnC_ValueChanged);
			// 
			// tBoxA
			// 
			this->tBoxA->BackColor = System::Drawing::SystemColors::Control;
			this->tBoxA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tBoxA->Font = (gcnew System::Drawing::Font(L"Montserrat", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tBoxA->Location = System::Drawing::Point(98, 40);
			this->tBoxA->Name = L"tBoxA";
			this->tBoxA->Size = System::Drawing::Size(34, 53);
			this->tBoxA->TabIndex = 10;
			this->tBoxA->Text = L"A";
			this->tBoxA->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// tBoxB
			// 
			this->tBoxB->BackColor = System::Drawing::SystemColors::Control;
			this->tBoxB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tBoxB->Font = (gcnew System::Drawing::Font(L"Montserrat", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tBoxB->Location = System::Drawing::Point(266, 40);
			this->tBoxB->Name = L"tBoxB";
			this->tBoxB->Size = System::Drawing::Size(38, 53);
			this->tBoxB->TabIndex = 11;
			this->tBoxB->Text = L"B";
			// 
			// tBoxC
			// 
			this->tBoxC->BackColor = System::Drawing::SystemColors::Control;
			this->tBoxC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tBoxC->Font = (gcnew System::Drawing::Font(L"Montserrat", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tBoxC->Location = System::Drawing::Point(423, 40);
			this->tBoxC->Name = L"tBoxC";
			this->tBoxC->Size = System::Drawing::Size(37, 53);
			this->tBoxC->TabIndex = 12;
			this->tBoxC->Text = L"C";
			this->tBoxC->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(57, 108);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(120, 22);
			this->textBox3->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(220, 108);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(120, 22);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(377, 108);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(120, 22);
			this->textBox6->TabIndex = 15;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(57, 165);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(120, 56);
			this->trackBar1->TabIndex = 16;
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(220, 165);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(120, 56);
			this->trackBar2->TabIndex = 17;
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(377, 165);
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(120, 56);
			this->trackBar3->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 253);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->tBoxC);
			this->Controls->Add(this->tBoxB);
			this->Controls->Add(this->tBoxA);
			this->Controls->Add(this->numUpDwnC);
			this->Controls->Add(this->numUpDwnB);
			this->Controls->Add(this->numUpDwnA);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDwnA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDwnB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDwnC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numUpDwnA_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	model.setA(int(numUpDwnA->Value));
	numUpDwnA->Value = model.getA();
}
private: System::Void numUpDwnB_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	model.setB(int(numUpDwnB->Value));
	numUpDwnB->Value = model.getB();
}
private: System::Void numUpDwnC_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	model.setC(int(numUpDwnC->Value));
	numUpDwnC->Value = model.getC();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	model.addObserver(numUpDwnA_ValueChanged);
	/*model.addObserver(std::bind(&MyForm::numUpDwnA_ValueChanged, this));
	model.addObserver(std::bind(&MyForm::numUpDwnB_ValueChanged, this));
	model.addObserver(std::bind(&MyForm::numUpDwnC_ValueChanged, this));*/
	
}
private: System::Void MyForm_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	MessageBox::Show((model.getB()).ToString());
}

};
}
