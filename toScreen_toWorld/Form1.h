#pragma once
#include "preobrC.h"

namespace toScreen_toWorld {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		String ^tmpS;
		double rworldX, rworldY, worldX, worldY;
		int Xpoint, Ypoint;
		Bitmap ^MyBmp;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Screen;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Iks;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Igrek;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  IksPoint;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  IgrekPoint;
	private: System::Windows::Forms::Button^  OKraz;
	private: System::Windows::Forms::Button^  OKkoord;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;



	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Screen = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Iks = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Igrek = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->IksPoint = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->IgrekPoint = (gcnew System::Windows::Forms::TextBox());
			this->OKraz = (gcnew System::Windows::Forms::Button());
			this->OKkoord = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Screen))->BeginInit();
			this->SuspendLayout();
			// 
			// Screen
			// 
			this->Screen->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Screen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Screen->Location = System::Drawing::Point(12, 132);
			this->Screen->Name = L"Screen";
			this->Screen->Size = System::Drawing::Size(525, 271);
			this->Screen->TabIndex = 0;
			this->Screen->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Размерность мировой с.к.:";
			// 
			// Iks
			// 
			this->Iks->Location = System::Drawing::Point(165, 9);
			this->Iks->Name = L"Iks";
			this->Iks->Size = System::Drawing::Size(76, 20);
			this->Iks->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(248, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"х";
			// 
			// Igrek
			// 
			this->Igrek->Location = System::Drawing::Point(266, 9);
			this->Igrek->Name = L"Igrek";
			this->Igrek->Size = System::Drawing::Size(76, 20);
			this->Igrek->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Координаты точки:";
			// 
			// IksPoint
			// 
			this->IksPoint->Location = System::Drawing::Point(165, 40);
			this->IksPoint->Name = L"IksPoint";
			this->IksPoint->Size = System::Drawing::Size(76, 20);
			this->IksPoint->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(248, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"х";
			// 
			// IgrekPoint
			// 
			this->IgrekPoint->Location = System::Drawing::Point(266, 40);
			this->IgrekPoint->Name = L"IgrekPoint";
			this->IgrekPoint->Size = System::Drawing::Size(76, 20);
			this->IgrekPoint->TabIndex = 8;
			// 
			// OKraz
			// 
			this->OKraz->Location = System::Drawing::Point(370, 7);
			this->OKraz->Name = L"OKraz";
			this->OKraz->Size = System::Drawing::Size(75, 23);
			this->OKraz->TabIndex = 9;
			this->OKraz->Text = L"OK";
			this->OKraz->UseVisualStyleBackColor = true;
			this->OKraz->Click += gcnew System::EventHandler(this, &Form1::OKraz_Click);
			// 
			// OKkoord
			// 
			this->OKkoord->Location = System::Drawing::Point(370, 38);
			this->OKkoord->Name = L"OKkoord";
			this->OKkoord->Size = System::Drawing::Size(75, 23);
			this->OKkoord->TabIndex = 10;
			this->OKkoord->Text = L"OK";
			this->OKkoord->UseVisualStyleBackColor = true;
			this->OKkoord->Click += gcnew System::EventHandler(this, &Form1::OKkoord_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(525, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(451, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 54);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Старт/  Перезагрузка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 415);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->OKkoord);
			this->Controls->Add(this->OKraz);
			this->Controls->Add(this->IgrekPoint);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->IksPoint);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Igrek);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Iks);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Screen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(555, 444);
			this->MinimumSize = System::Drawing::Size(555, 444);
			this->Name = L"Form1";
			this->Text = L"Преобразование координат";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Screen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 tmpS = "Введите размерность мировых координат";
				 textBox1->Text = tmpS;
			 }
	private: System::Void OKraz_Click(System::Object^  sender, System::EventArgs^  e) {
				 rworldX = System::Convert::ToDouble(Iks->Text);
				 rworldY = System::Convert::ToDouble(Igrek->Text);
				 tmpS = "Введите координаты точки в мировой системе координат";
				 textBox1->Text = tmpS;
			 }
	private: System::Void OKkoord_Click(System::Object^  sender, System::EventArgs^  e) {
				 Pen^ pen;
				 Color color;
				 color = System::Drawing::Color::Red;
				 pen = gcnew Pen(color, 1);
				 
				 worldX = System::Convert::ToDouble(IksPoint->Text);
				 worldY = System::Convert::ToDouble(IgrekPoint->Text);

				 Xpoint = Coord(rworldX, worldX, 525);
				 Ypoint = Coord(rworldY, worldY, 271);
				 
				 MyBmp = gcnew Bitmap(525, 271);
				 this->Screen->Image = MyBmp;
				 Graphics^ grBmp;
				 grBmp = Graphics::FromImage(MyBmp);
				 grBmp->FillRectangle(pen->Brush, Xpoint-1, 271-Ypoint+1, 5, 5);
				 this->Screen->Invalidate();
				 
				 tmpS = "Положение точки в окошке ниже получилось таково";
				 textBox1->Text = tmpS;
			 }
};
}

