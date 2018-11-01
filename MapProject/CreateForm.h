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
			this->SuspendLayout();
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(106, 52);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(217, 22);
			this->textBoxName->TabIndex = 0;
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(216, 113);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(89, 28);
			this->OK->TabIndex = 1;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &CreateForm::OK_Click);
			// 
			// Cancel
			// 
			this->Cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Cancel->Location = System::Drawing::Point(90, 113);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(89, 28);
			this->Cancel->TabIndex = 2;
			this->Cancel->Text = L"������";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &CreateForm::Cancel_Click);
			// 
			// CreateForm
			// 
			this->AcceptButton = this->OK;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->Cancel;
			this->ClientSize = System::Drawing::Size(392, 169);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->textBoxName);
			this->Name = L"CreateForm";
			this->Text = L"����� �������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void OK_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
