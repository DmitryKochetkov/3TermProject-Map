#pragma once
#include "Consumer.h"
#include "MyMap.h"
#include "CreateForm.h"
#include "ConsumerForm.h"

namespace MapProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		static List<MyMap<String^, Consumer>^>^ data = gcnew List<MyMap<String^, Consumer>^>();
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBoxMaps;
	private: System::Windows::Forms::Button^  NewDict;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  SaveButton;

	private: System::Windows::Forms::Button^  OpenButton;

	private: System::Windows::Forms::Button^  DelDict;
	private: System::Windows::Forms::ListBox^  listBoxElements;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  AddButton;
	private: System::Windows::Forms::Button^  EraseButton;
	private: System::Windows::Forms::Button^  SearchButton;



	private: System::Windows::Forms::Button^  ChangeButton;
	private: System::Windows::Forms::Button^  SortButton;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  GetElement;





	protected:

	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBoxMaps = (gcnew System::Windows::Forms::ListBox());
			this->NewDict = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->OpenButton = (gcnew System::Windows::Forms::Button());
			this->DelDict = (gcnew System::Windows::Forms::Button());
			this->listBoxElements = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->EraseButton = (gcnew System::Windows::Forms::Button());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->ChangeButton = (gcnew System::Windows::Forms::Button());
			this->SortButton = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->GetElement = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBoxMaps
			// 
			this->listBoxMaps->FormattingEnabled = true;
			this->listBoxMaps->ItemHeight = 16;
			this->listBoxMaps->Location = System::Drawing::Point(40, 73);
			this->listBoxMaps->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBoxMaps->Name = L"listBoxMaps";
			this->listBoxMaps->Size = System::Drawing::Size(157, 164);
			this->listBoxMaps->TabIndex = 0;
			this->listBoxMaps->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBoxMaps_SelectedIndexChanged);
			// 
			// NewDict
			// 
			this->NewDict->Location = System::Drawing::Point(40, 271);
			this->NewDict->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NewDict->Name = L"NewDict";
			this->NewDict->Size = System::Drawing::Size(159, 33);
			this->NewDict->TabIndex = 1;
			this->NewDict->Text = L"Новый словарь";
			this->NewDict->UseVisualStyleBackColor = true;
			this->NewDict->Click += gcnew System::EventHandler(this, &MainForm::NewDict_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 34);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Словари";
			// 
			// SaveButton
			// 
			this->SaveButton->Enabled = false;
			this->SaveButton->Location = System::Drawing::Point(212, 311);
			this->SaveButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(183, 33);
			this->SaveButton->TabIndex = 4;
			this->SaveButton->Text = L"Сохранить словарь (.txt)";
			this->SaveButton->UseVisualStyleBackColor = true;
			this->SaveButton->Click += gcnew System::EventHandler(this, &MainForm::SaveButton_Click);
			// 
			// OpenButton
			// 
			this->OpenButton->Location = System::Drawing::Point(212, 271);
			this->OpenButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OpenButton->Name = L"OpenButton";
			this->OpenButton->Size = System::Drawing::Size(183, 33);
			this->OpenButton->TabIndex = 3;
			this->OpenButton->Text = L"Открыть словарь (.txt)";
			this->OpenButton->UseVisualStyleBackColor = true;
			this->OpenButton->Click += gcnew System::EventHandler(this, &MainForm::OpenButton_Click);
			// 
			// DelDict
			// 
			this->DelDict->Enabled = false;
			this->DelDict->Location = System::Drawing::Point(40, 311);
			this->DelDict->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DelDict->Name = L"DelDict";
			this->DelDict->Size = System::Drawing::Size(159, 33);
			this->DelDict->TabIndex = 2;
			this->DelDict->Text = L"Удалить словарь";
			this->DelDict->UseVisualStyleBackColor = true;
			this->DelDict->Click += gcnew System::EventHandler(this, &MainForm::DelDict_Click);
			// 
			// listBoxElements
			// 
			this->listBoxElements->FormattingEnabled = true;
			this->listBoxElements->ItemHeight = 16;
			this->listBoxElements->Location = System::Drawing::Point(212, 73);
			this->listBoxElements->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBoxElements->Name = L"listBoxElements";
			this->listBoxElements->Size = System::Drawing::Size(181, 164);
			this->listBoxElements->TabIndex = 6;
			this->listBoxElements->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBoxElements_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(261, 34);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Элементы";
			// 
			// AddButton
			// 
			this->AddButton->Enabled = false;
			this->AddButton->Location = System::Drawing::Point(437, 117);
			this->AddButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(208, 33);
			this->AddButton->TabIndex = 6;
			this->AddButton->Text = L"Добавить элемент";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &MainForm::AddButton_Click);
			// 
			// EraseButton
			// 
			this->EraseButton->Enabled = false;
			this->EraseButton->Location = System::Drawing::Point(437, 160);
			this->EraseButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EraseButton->Name = L"EraseButton";
			this->EraseButton->Size = System::Drawing::Size(208, 33);
			this->EraseButton->TabIndex = 7;
			this->EraseButton->Text = L"Удалить элемент";
			this->EraseButton->UseVisualStyleBackColor = true;
			this->EraseButton->Click += gcnew System::EventHandler(this, &MainForm::EraseButton_Click);
			// 
			// SearchButton
			// 
			this->SearchButton->Enabled = false;
			this->SearchButton->Location = System::Drawing::Point(437, 271);
			this->SearchButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(208, 33);
			this->SearchButton->TabIndex = 9;
			this->SearchButton->Text = L"Поиск по ключу";
			this->SearchButton->UseVisualStyleBackColor = true;
			// 
			// ChangeButton
			// 
			this->ChangeButton->Enabled = false;
			this->ChangeButton->Location = System::Drawing::Point(437, 204);
			this->ChangeButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ChangeButton->Name = L"ChangeButton";
			this->ChangeButton->Size = System::Drawing::Size(208, 33);
			this->ChangeButton->TabIndex = 8;
			this->ChangeButton->Text = L"Изменить элемент";
			this->ChangeButton->UseVisualStyleBackColor = true;
			this->ChangeButton->Click += gcnew System::EventHandler(this, &MainForm::ChangeButton_Click);
			// 
			// SortButton
			// 
			this->SortButton->Enabled = false;
			this->SortButton->Location = System::Drawing::Point(437, 311);
			this->SortButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SortButton->Name = L"SortButton";
			this->SortButton->Size = System::Drawing::Size(208, 33);
			this->SortButton->TabIndex = 10;
			this->SortButton->Text = L"Сортировать элементы";
			this->SortButton->UseVisualStyleBackColor = true;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			this->saveFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"txt";
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt";
			// 
			// GetElement
			// 
			this->GetElement->Enabled = false;
			this->GetElement->Location = System::Drawing::Point(437, 73);
			this->GetElement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->GetElement->Name = L"GetElement";
			this->GetElement->Size = System::Drawing::Size(208, 33);
			this->GetElement->TabIndex = 5;
			this->GetElement->Text = L"Просмотреть элемент";
			this->GetElement->UseVisualStyleBackColor = true;
			this->GetElement->Click += gcnew System::EventHandler(this, &MainForm::GetElement_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 388);
			this->Controls->Add(this->GetElement);
			this->Controls->Add(this->SortButton);
			this->Controls->Add(this->ChangeButton);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->EraseButton);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBoxElements);
			this->Controls->Add(this->DelDict);
			this->Controls->Add(this->OpenButton);
			this->Controls->Add(this->SaveButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NewDict);
			this->Controls->Add(this->listBoxMaps);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Стркутура данных \"Словарь\"";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NewDict_Click(System::Object^  sender, System::EventArgs^  e) {
		CreateForm^ form = gcnew CreateForm(data);
		form->ShowDialog();
		listBoxMaps->Items->Clear();
		for (int i = 0; i < data->Count; i++)
			listBoxMaps->Items->Add(data[i]->name);
	}
	private: System::Void DelDict_Click(System::Object^  sender, System::EventArgs^  e) {
		data->RemoveAt(listBoxMaps->SelectedIndex);
		listBoxMaps->Items->Clear();
		for (int i = 0; i < data->Count; i++)
			listBoxMaps->Items->Add(data[i]->name);
		listBoxMaps_SelectedIndexChanged(sender, e);
	}
private: System::Void listBoxMaps_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	bool a = (listBoxMaps->SelectedIndex != -1);
	DelDict->Enabled = a;
	SaveButton->Enabled = a;
	AddButton->Enabled = a;
	SortButton->Enabled = a;
	SearchButton->Enabled = a;
	listBoxElements->Items->Clear();
	if (a)
	{
		for (int i = 0; i < data[listBoxMaps->SelectedIndex]->size(); i++)
			listBoxElements->Items->Add("+7 " + data[listBoxMaps->SelectedIndex]->at(i)->key);
	}
}
private: System::Void listBoxElements_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	bool a = (listBoxElements->SelectedIndex != -1);
	GetElement->Enabled = a;
	EraseButton->Enabled = a;
	ChangeButton->Enabled = a;
}
private: System::Void OpenButton_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
}
private: System::Void SaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->ShowDialog();
}
private: System::Void GetElement_Click(System::Object^  sender, System::EventArgs^  e) {
	Consumer x = data[listBoxMaps->SelectedIndex]->at(listBoxElements->SelectedIndex)->value;
	MessageBox::Show(
		"Абонент: " + x.surname + " " + x.name + " " + x.fathername + "\nПаспортные данные: \n\tСерия: " + x.series + "\n\tНомер: " + x.number + "\nТелефон: +7 " + x.tel, "Просмотр данных абонента",
		MessageBoxButtons::OK
	);
}
private: System::Void AddButton_Click(System::Object^  sender, System::EventArgs^  e) {
	ConsumerForm^ form = gcnew ConsumerForm(data[listBoxMaps->SelectedIndex]);
	form->ShowDialog();
	listBoxMaps_SelectedIndexChanged(sender, e);
}
private: System::Void EraseButton_Click(System::Object^  sender, System::EventArgs^  e) {
	data[listBoxMaps->SelectedIndex]->erase(listBoxElements->SelectedItem->ToString());
	listBoxMaps_SelectedIndexChanged(sender, e);
	listBoxElements_SelectedIndexChanged(sender, e);
}
private: System::Void ChangeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	ConsumerForm^ form = gcnew ConsumerForm(data[listBoxMaps->SelectedIndex], data[listBoxMaps->SelectedIndex]->at(listBoxElements->SelectedIndex)->key);
	form->ShowDialog();
	listBoxMaps_SelectedIndexChanged(sender, e);
	listBoxElements_SelectedIndexChanged(sender, e);
}
};
}
