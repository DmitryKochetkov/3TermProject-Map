#pragma once
#include "Consumer.h"
#include "MyMap.h"
#include "CreateForm.h"

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
		static List<MyMap<String^, Consumer>^>^ data;
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
			this->SuspendLayout();
			// 
			// listBoxMaps
			// 
			this->listBoxMaps->FormattingEnabled = true;
			this->listBoxMaps->ItemHeight = 16;
			this->listBoxMaps->Location = System::Drawing::Point(69, 39);
			this->listBoxMaps->Name = L"listBoxMaps";
			this->listBoxMaps->Size = System::Drawing::Size(143, 148);
			this->listBoxMaps->TabIndex = 0;
			// 
			// NewDict
			// 
			this->NewDict->Location = System::Drawing::Point(69, 208);
			this->NewDict->Name = L"NewDict";
			this->NewDict->Size = System::Drawing::Size(143, 28);
			this->NewDict->TabIndex = 1;
			this->NewDict->Text = L"Новый словарь";
			this->NewDict->UseVisualStyleBackColor = true;
			this->NewDict->Click += gcnew System::EventHandler(this, &MainForm::NewDict_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(555, 296);
			this->Controls->Add(this->NewDict);
			this->Controls->Add(this->listBoxMaps);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void NewDict_Click(System::Object^  sender, System::EventArgs^  e) {
		CreateForm^ form = gcnew CreateForm(data);
		form->ShowDialog();
		
	}
	};
}
