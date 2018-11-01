#pragma once
#include "Consumer.h"
#include "MyMap.h"

namespace MapProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� CreateForm
	/// </summary>
	public ref class CreateForm : public System::Windows::Forms::Form
	{
	public:
		static List<MyMap<String^, Consumer>^>^ data = gcnew List<MyMap<String^, Consumer>^>();
		CreateForm(List<MyMap<String^, Consumer>^>^ data)
		{
			InitializeComponent();
			this->data = data;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~CreateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxName;
	protected:

	protected:
	private: System::Windows::Forms::Button^  OK;
	private: System::Windows::Forms::Button^  Cancel;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(146, 38);
			this->textBoxName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(185, 20);
			this->textBoxName->TabIndex = 0;
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(193, 86);
			this->OK->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(67, 23);
			this->OK->TabIndex = 1;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &CreateForm::OK_Click);
			// 
			// Cancel
			// 
			this->Cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Cancel->Location = System::Drawing::Point(97, 86);
			this->Cancel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(67, 23);
			this->Cancel->TabIndex = 2;
			this->Cancel->Text = L"������";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &CreateForm::Cancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"�������� �������";
			// 
			// CreateForm
			// 
			this->AcceptButton = this->OK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->Cancel;
			this->ClientSize = System::Drawing::Size(358, 126);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->textBoxName);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"CreateForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����� �������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void OK_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MyMap<String^, Consumer>^ k = gcnew MyMap<String^, Consumer>;
		if (textBoxName->Text == "")
		{
			MessageBox::Show("������� ��������", "������!");
			return;
		}
		k->name = textBoxName->Text;
		data->Add(k);
		this->Close();
	}
	};
}
