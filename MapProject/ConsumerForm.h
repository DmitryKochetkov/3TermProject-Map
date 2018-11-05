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
	/// ������ ��� ConsumerForm
	/// </summary>
	public ref class ConsumerForm : public System::Windows::Forms::Form
	{
	public:
		static MyMap<String^, Consumer>^ map = gcnew MyMap<String^, Consumer>();
		ConsumerForm(MyMap<String^, Consumer>^ map)
		{
			InitializeComponent();
			this->map = map;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~ConsumerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBoxFIO;
	private: System::Windows::Forms::TextBox^  textBoxFathername;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^  textBoxName;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxSurname;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  CancelButton;
	private: System::Windows::Forms::Button^  OKButton;
	private: System::Windows::Forms::GroupBox^  groupBoxPassport;
	private: System::Windows::Forms::TextBox^  textBoxNumber;






	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxSeries;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxTelephone;



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
			this->groupBoxFIO = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxFathername = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->groupBoxPassport = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxSeries = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTelephone = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxFIO->SuspendLayout();
			this->groupBoxPassport->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxFIO
			// 
			this->groupBoxFIO->Controls->Add(this->textBoxFathername);
			this->groupBoxFIO->Controls->Add(this->textBoxName);
			this->groupBoxFIO->Controls->Add(this->label3);
			this->groupBoxFIO->Controls->Add(this->label2);
			this->groupBoxFIO->Controls->Add(this->textBoxSurname);
			this->groupBoxFIO->Controls->Add(this->label1);
			this->groupBoxFIO->Location = System::Drawing::Point(22, 18);
			this->groupBoxFIO->Name = L"groupBoxFIO";
			this->groupBoxFIO->Size = System::Drawing::Size(260, 128);
			this->groupBoxFIO->TabIndex = 0;
			this->groupBoxFIO->TabStop = false;
			this->groupBoxFIO->Text = L"���";
			// 
			// textBoxFathername
			// 
			this->textBoxFathername->Location = System::Drawing::Point(90, 90);
			this->textBoxFathername->MaxLength = 20;
			this->textBoxFathername->Name = L"textBoxFathername";
			this->textBoxFathername->Size = System::Drawing::Size(144, 20);
			this->textBoxFathername->TabIndex = 6;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(90, 58);
			this->textBoxName->MaxLength = 15;
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(144, 20);
			this->textBoxName->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"��������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"���";
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Location = System::Drawing::Point(90, 26);
			this->textBoxSurname->MaxLength = 20;
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(144, 20);
			this->textBoxSurname->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�������";
			// 
			// CancelButton
			// 
			this->CancelButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->CancelButton->Location = System::Drawing::Point(45, 344);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(92, 25);
			this->CancelButton->TabIndex = 1;
			this->CancelButton->Text = L"������";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &ConsumerForm::CancelButton_Click);
			// 
			// OKButton
			// 
			this->OKButton->Location = System::Drawing::Point(164, 344);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(92, 25);
			this->OKButton->TabIndex = 2;
			this->OKButton->Text = L"��";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &ConsumerForm::OKButton_Click);
			// 
			// groupBoxPassport
			// 
			this->groupBoxPassport->Controls->Add(this->label4);
			this->groupBoxPassport->Controls->Add(this->textBoxNumber);
			this->groupBoxPassport->Controls->Add(this->label5);
			this->groupBoxPassport->Controls->Add(this->textBoxSeries);
			this->groupBoxPassport->Location = System::Drawing::Point(22, 161);
			this->groupBoxPassport->Name = L"groupBoxPassport";
			this->groupBoxPassport->Size = System::Drawing::Size(260, 102);
			this->groupBoxPassport->TabIndex = 7;
			this->groupBoxPassport->TabStop = false;
			this->groupBoxPassport->Text = L"���������� ������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"�����";
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Location = System::Drawing::Point(90, 58);
			this->textBoxNumber->MaxLength = 6;
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(144, 20);
			this->textBoxNumber->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"�����";
			// 
			// textBoxSeries
			// 
			this->textBoxSeries->Location = System::Drawing::Point(90, 26);
			this->textBoxSeries->MaxLength = 4;
			this->textBoxSeries->Name = L"textBoxSeries";
			this->textBoxSeries->Size = System::Drawing::Size(144, 20);
			this->textBoxSeries->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(45, 295);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"�������: +7";
			// 
			// textBoxTelephone
			// 
			this->textBoxTelephone->Location = System::Drawing::Point(122, 292);
			this->textBoxTelephone->MaxLength = 10;
			this->textBoxTelephone->Name = L"textBoxTelephone";
			this->textBoxTelephone->Size = System::Drawing::Size(144, 20);
			this->textBoxTelephone->TabIndex = 6;
			// 
			// ConsumerForm
			// 
			this->AcceptButton = this->OKButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(304, 392);
			this->Controls->Add(this->textBoxTelephone);
			this->Controls->Add(this->groupBoxPassport);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->groupBoxFIO);
			this->MaximizeBox = false;
			this->Name = L"ConsumerForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������";
			this->groupBoxFIO->ResumeLayout(false);
			this->groupBoxFIO->PerformLayout();
			this->groupBoxPassport->ResumeLayout(false);
			this->groupBoxPassport->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void OKButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		this->Close();
	}
};
}
