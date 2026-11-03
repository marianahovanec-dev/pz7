#pragma once
#include <string>
#using <Microsoft.VisualBasic.dll>

namespace pz7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Обов'язкова ініціалізація черг
			numbersQueue = gcnew System::Collections::Generic::Queue<int>();
			myQueue = gcnew System::Collections::Generic::Queue<int>();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			   this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			   this->tabControl1->SuspendLayout();
			   this->tabPage1->SuspendLayout();
			   this->tabPage2->SuspendLayout();
			   this->tabPage3->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // tabControl1
			   // 
			   this->tabControl1->Controls->Add(this->tabPage1);
			   this->tabControl1->Controls->Add(this->tabPage2);
			   this->tabControl1->Controls->Add(this->tabPage3);
			   this->tabControl1->Location = System::Drawing::Point(0, 0);
			   this->tabControl1->Name = L"tabControl1";
			   this->tabControl1->SelectedIndex = 0;
			   this->tabControl1->Size = System::Drawing::Size(473, 555);
			   this->tabControl1->TabIndex = 0;
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->button3);
			   this->tabPage1->Controls->Add(this->textBox2);
			   this->tabPage1->Controls->Add(this->button2);
			   this->tabPage1->Controls->Add(this->checkBox3);
			   this->tabPage1->Controls->Add(this->checkBox2);
			   this->tabPage1->Controls->Add(this->checkBox1);
			   this->tabPage1->Controls->Add(this->button1);
			   this->tabPage1->Controls->Add(this->textBox1);
			   this->tabPage1->Location = System::Drawing::Point(4, 22);
			   this->tabPage1->Name = L"tabPage1";
			   this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage1->Size = System::Drawing::Size(465, 529);
			   this->tabPage1->TabIndex = 0;
			   this->tabPage1->Text = L"tabPage1";
			   this->tabPage1->UseVisualStyleBackColor = true;
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(301, 256);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(75, 23);
			   this->button3->TabIndex = 11;
			   this->button3->Text = L"Очистити чергу";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(301, 157);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(100, 20);
			   this->textBox2->TabIndex = 10;
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(192, 154);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(90, 47);
			   this->button2->TabIndex = 9;
			   this->button2->Text = L"Додати нові значення";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // checkBox3
			   // 
			   this->checkBox3->AutoSize = true;
			   this->checkBox3->Location = System::Drawing::Point(260, 70);
			   this->checkBox3->Name = L"checkBox3";
			   this->checkBox3->Size = System::Drawing::Size(161, 17);
			   this->checkBox3->TabIndex = 8;
			   this->checkBox3->Text = L"Видалити перший елемент";
			   this->checkBox3->UseVisualStyleBackColor = true;
			   // 
			   // checkBox2
			   // 
			   this->checkBox2->AutoSize = true;
			   this->checkBox2->Location = System::Drawing::Point(260, 47);
			   this->checkBox2->Name = L"checkBox2";
			   this->checkBox2->Size = System::Drawing::Size(163, 17);
			   this->checkBox2->TabIndex = 7;
			   this->checkBox2->Text = L"Кількість елементів в черзі";
			   this->checkBox2->UseVisualStyleBackColor = true;
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Location = System::Drawing::Point(260, 24);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(141, 17);
			   this->checkBox1->TabIndex = 6;
			   this->checkBox1->Text = L"Верхній елемент черги";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(74, 283);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(122, 33);
			   this->button1->TabIndex = 3;
			   this->button1->Text = L"Вивести чергу";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(38, 22);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(132, 179);
			   this->textBox1->TabIndex = 0;
			   // 
			   // tabPage2
			   // 
			   this->tabPage2->Controls->Add(this->label1);
			   this->tabPage2->Controls->Add(this->textBox3);
			   this->tabPage2->Controls->Add(this->listBox1);
			   this->tabPage2->Controls->Add(this->button6);
			   this->tabPage2->Controls->Add(this->button5);
			   this->tabPage2->Controls->Add(this->button4);
			   this->tabPage2->Location = System::Drawing::Point(4, 22);
			   this->tabPage2->Name = L"tabPage2";
			   this->tabPage2->Size = System::Drawing::Size(465, 529);
			   this->tabPage2->TabIndex = 1;
			   this->tabPage2->Text = L"tabPage2";
			   this->tabPage2->UseVisualStyleBackColor = true;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(65, 61);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(113, 13);
			   this->label1->TabIndex = 5;
			   this->label1->Text = L"Введіть розмір черги";
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(209, 58);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(100, 20);
			   this->textBox3->TabIndex = 4;
			   // 
			   // listBox1
			   // 
			   this->listBox1->FormattingEnabled = true;
			   this->listBox1->Location = System::Drawing::Point(58, 104);
			   this->listBox1->Name = L"listBox1";
			   this->listBox1->Size = System::Drawing::Size(120, 95);
			   this->listBox1->TabIndex = 3;
			   // 
			   // button6
			   // 
			   this->button6->Location = System::Drawing::Point(175, 236);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(75, 23);
			   this->button6->TabIndex = 2;
			   this->button6->Text = L"Обчислити";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(262, 168);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(113, 43);
			   this->button5->TabIndex = 1;
			   this->button5->Text = L"Видалити елементи";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			   // 
			   // button4
			   // 
			   this->button4->Location = System::Drawing::Point(262, 104);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(107, 40);
			   this->button4->TabIndex = 0;
			   this->button4->Text = L"Додати значення";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // tabPage3
			   // 
			   this->tabPage3->Controls->Add(this->textBox4);
			   this->tabPage3->Controls->Add(this->label2);
			   this->tabPage3->Controls->Add(this->button9);
			   this->tabPage3->Controls->Add(this->button8);
			   this->tabPage3->Controls->Add(this->button7);
			   this->tabPage3->Controls->Add(this->listBox2);
			   this->tabPage3->Location = System::Drawing::Point(4, 22);
			   this->tabPage3->Name = L"tabPage3";
			   this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage3->Size = System::Drawing::Size(465, 529);
			   this->tabPage3->TabIndex = 2;
			   this->tabPage3->Text = L"tabPage3";
			   this->tabPage3->UseVisualStyleBackColor = true;
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(205, 70);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(100, 20);
			   this->textBox4->TabIndex = 9;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(60, 70);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(113, 13);
			   this->label2->TabIndex = 8;
			   this->label2->Text = L"Введіть розмір черги";
			   // 
			   // button9
			   // 
			   this->button9->Location = System::Drawing::Point(195, 253);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(75, 23);
			   this->button9->TabIndex = 7;
			   this->button9->Text = L"Обчислити";
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			   // 
			   // button8
			   // 
			   this->button8->Location = System::Drawing::Point(233, 185);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(113, 43);
			   this->button8->TabIndex = 6;
			   this->button8->Text = L"Видалити елементи";
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			   // 
// button7
// 
			   this->button7->Location = System::Drawing::Point(239, 110);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(107, 40);
			   this->button7->TabIndex = 5;
			   this->button7->Text = L"Додати елементи черги";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			   // 
			   // listBox2
			   // 
			   this->listBox2->FormattingEnabled = true;
			   this->listBox2->Location = System::Drawing::Point(41, 110);
			   this->listBox2->Name = L"listBox2";
			   this->listBox2->Size = System::Drawing::Size(120, 95);
			   this->listBox2->TabIndex = 4;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(876, 594);
			   this->Controls->Add(this->tabControl1);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->tabControl1->ResumeLayout(false);
			   this->tabPage1->ResumeLayout(false);
			   this->tabPage1->PerformLayout();
			   this->tabPage2->ResumeLayout(false);
			   this->tabPage2->PerformLayout();
			   this->tabPage3->ResumeLayout(false);
			   this->tabPage3->PerformLayout();
			   this->ResumeLayout(false);

		   }

#pragma endregion

	private:
		// Оголошення обох черг тут
		System::Collections::Generic::Queue<int>^ numbersQueue;
		System::Collections::Generic::Queue<int>^ myQueue;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();

		if (checkBox3->Checked) {
			if (numbersQueue->Count > 0) {
				int removed = numbersQueue->Dequeue();
				textBox1->AppendText("Видалено елемент: " + removed + "\r\n\r\n");
			}
			else {
				textBox1->AppendText("Черга порожня! Неможливо видалити.\r\n\r\n");
			}
		}

		if (checkBox1->Checked) {
			if (numbersQueue->Count > 0) {
				int peeked = numbersQueue->Peek();
				textBox1->AppendText("Верхній елемент: " + peeked + "\r\n\r\n");
			}
			else {
				textBox1->AppendText("Черга порожня!\r\n\r\n");
			}
		}

		if (checkBox2->Checked) {
			textBox1->AppendText("Кількість елементів: " + numbersQueue->Count + "\r\n\r\n");
		}

		textBox1->AppendText("Склад черги:\r\n");
		if (numbersQueue->Count == 0) {
			textBox1->AppendText("[Черга порожня]");
		}
		else {
			for each (int item in numbersQueue) {
				textBox1->AppendText(item + " ");
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int value;
		if (Int32::TryParse(textBox2->Text, value)) {
			numbersQueue->Enqueue(value);
			textBox2->Clear();
			MessageBox::Show("Число " + value + " додано в чергу!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Введіть коректне ціле число!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		numbersQueue->Clear();
		textBox1->Clear();
		MessageBox::Show("Чергу очищено!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int size;
		if (Int32::TryParse(textBox3->Text, size) && size > 0) {
			myQueue->Clear();
			listBox1->Items->Clear();

			Random^ rand = gcnew Random();
			for (int i = 0; i < size; i++) {
				int val = rand->Next(1, 50);
				myQueue->Enqueue(val);
				listBox1->Items->Add(val);
			}
			MessageBox::Show("Чергу успішно створено та заповнено!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Введіть коректний розмір черги!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (myQueue->Count > 0) {
			int removed = myQueue->Dequeue();
			listBox1->Items->Clear();
			for each (int item in myQueue) {
				listBox1->Items->Add(item);
			}
			MessageBox::Show("Видалено елемент: " + removed, "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Черга порожня!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (myQueue->Count == 0) {
			MessageBox::Show("Спочатку створіть та заповніть чергу!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int sum = 0;
		int count = 0;

		for each (int item in myQueue) {
			if (item % 2 == 0 && item >= 10 && item <= 20) {
				sum += item;
				count++;
			}
		}

		if (count > 0) {
			double average = (double)sum / count;
			MessageBox::Show("Знайдено парних чисел у діапазоні [10..20]: " + count + "\nСереднє значення: " + average, "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("У черзі немає парних чисел у діапазоні від 10 до 20.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
		   private:
			   System::Collections::Generic::Queue<String^>^ stringQueue = gcnew System::Collections::Generic::Queue<String^>();

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int size = Convert::ToInt32(textBox4->Text);
		stringQueue->Clear();
		listBox2->Items->Clear();

		for (int i = 0; i < size; ++i) {
			String^ inputValue = Microsoft::VisualBasic::Interaction::InputBox("Елемент черги", "Введіть значення елементів черги", " ", 200, 200);
			if (!String::IsNullOrEmpty(inputValue)) {
				stringQueue->Enqueue(inputValue);
				listBox2->Items->Add(inputValue);
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Введіть коректний розмір у textBox4!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (stringQueue->Count > 0) {
		stringQueue->Dequeue();
		if (listBox2->Items->Count > 0) {
			listBox2->Items->RemoveAt(0);
		}
	}
	else {
		MessageBox::Show("Черга порожня!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int CountChars = 0;

	for (int i = 0; i < listBox2->Items->Count; i++) {
		String^ value = listBox2->Items[i]->ToString();
		CountChars += value->Length;
	}

	MessageBox::Show("Загальна кількість символів: " + CountChars, "Підсумок символів", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}