#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn1;
	protected:
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Label^ Wynik;
	private: System::Windows::Forms::Label^ lblO;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ProgressBar^ ProgresBarO;


	private: System::Windows::Forms::Button^ btnRestart;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblTurn;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ProgressBar^ ProgresBarX;
	private: System::Windows::Forms::ToolStripMenuItem^ rulesToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ modeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ briToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ brightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ darkToolStripMenuItem;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::ToolStripMenuItem^ logInToolStripMenuItem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;






	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->Wynik = (gcnew System::Windows::Forms::Label());
			this->lblO = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->ProgresBarO = (gcnew System::Windows::Forms::ProgressBar());
			this->btnRestart = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblTurn = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rulesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->briToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->brightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logInToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ProgresBarX = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn1->Location = System::Drawing::Point(544, 87);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(120, 120);
			this->btn1->TabIndex = 0;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn2->Location = System::Drawing::Point(670, 87);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(120, 120);
			this->btn2->TabIndex = 1;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn3->Location = System::Drawing::Point(796, 87);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(120, 120);
			this->btn3->TabIndex = 2;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn6->Location = System::Drawing::Point(796, 213);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(120, 120);
			this->btn6->TabIndex = 5;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn5->Location = System::Drawing::Point(670, 213);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(120, 120);
			this->btn5->TabIndex = 4;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn4->Location = System::Drawing::Point(544, 213);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(120, 120);
			this->btn4->TabIndex = 3;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn9->Location = System::Drawing::Point(796, 339);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(120, 120);
			this->btn9->TabIndex = 8;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn8->Location = System::Drawing::Point(670, 339);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(120, 120);
			this->btn8->TabIndex = 7;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn7->Location = System::Drawing::Point(544, 339);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(120, 120);
			this->btn7->TabIndex = 6;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// Wynik
			// 
			this->Wynik->AutoSize = true;
			this->Wynik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Wynik->Location = System::Drawing::Point(137, 42);
			this->Wynik->Name = L"Wynik";
			this->Wynik->Size = System::Drawing::Size(126, 42);
			this->Wynik->TabIndex = 9;
			this->Wynik->Text = L"Score!";
			// 
			// lblO
			// 
			this->lblO->AutoSize = true;
			this->lblO->Location = System::Drawing::Point(38, 123);
			this->lblO->Name = L"lblO";
			this->lblO->Size = System::Drawing::Size(0, 16);
			this->lblO->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(24, 250);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 38);
			this->label1->TabIndex = 11;
			this->label1->Text = L"X:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(24, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 38);
			this->label2->TabIndex = 12;
			this->label2->Text = L"O:";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 38;
			this->listBox1->Location = System::Drawing::Point(1070, 139);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(90, 308);
			this->listBox1->TabIndex = 15;
			// 
			// ProgresBarO
			// 
			this->ProgresBarO->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ProgresBarO->Location = System::Drawing::Point(86, 139);
			this->ProgresBarO->Name = L"ProgresBarO";
			this->ProgresBarO->Size = System::Drawing::Size(303, 37);
			this->ProgresBarO->TabIndex = 16;
			// 
			// btnRestart
			// 
			this->btnRestart->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btnRestart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnRestart->Location = System::Drawing::Point(86, 386);
			this->btnRestart->Name = L"btnRestart";
			this->btnRestart->Size = System::Drawing::Size(303, 73);
			this->btnRestart->TabIndex = 17;
			this->btnRestart->Text = L"Restart";
			this->btnRestart->UseVisualStyleBackColor = false;
			this->btnRestart->Click += gcnew System::EventHandler(this, &MyForm::btnRestart_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(621, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 38);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Player Turn:";
			// 
			// lblTurn
			// 
			this->lblTurn->AutoSize = true;
			this->lblTurn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblTurn->Location = System::Drawing::Point(822, 32);
			this->lblTurn->Name = L"lblTurn";
			this->lblTurn->Size = System::Drawing::Size(43, 38);
			this->lblTurn->TabIndex = 19;
			this->lblTurn->Text = L"O";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->zamknijToolStripMenuItem,
					this->rulesToolStripMenuItem, this->modeToolStripMenuItem, this->logInToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1767, 30);
			this->menuStrip1->TabIndex = 20;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->zamknijToolStripMenuItem->Text = L"Close";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zamknijToolStripMenuItem_Click);
			// 
			// rulesToolStripMenuItem
			// 
			this->rulesToolStripMenuItem->Name = L"rulesToolStripMenuItem";
			this->rulesToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->rulesToolStripMenuItem->Text = L"Rules";
			this->rulesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rulesToolStripMenuItem_Click);
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->briToolStripMenuItem });
			this->modeToolStripMenuItem->Name = L"modeToolStripMenuItem";
			this->modeToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// briToolStripMenuItem
			// 
			this->briToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->brightToolStripMenuItem,
					this->darkToolStripMenuItem
			});
			this->briToolStripMenuItem->Name = L"briToolStripMenuItem";
			this->briToolStripMenuItem->Size = System::Drawing::Size(203, 26);
			this->briToolStripMenuItem->Text = L"Brightness Mode";
			// 
			// brightToolStripMenuItem
			// 
			this->brightToolStripMenuItem->Name = L"brightToolStripMenuItem";
			this->brightToolStripMenuItem->Size = System::Drawing::Size(132, 26);
			this->brightToolStripMenuItem->Text = L"Bright";
			this->brightToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::brightToolStripMenuItem_Click);
			// 
			// darkToolStripMenuItem
			// 
			this->darkToolStripMenuItem->Name = L"darkToolStripMenuItem";
			this->darkToolStripMenuItem->Size = System::Drawing::Size(132, 26);
			this->darkToolStripMenuItem->Text = L"Dark";
			this->darkToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::darkToolStripMenuItem_Click);
			// 
			// logInToolStripMenuItem
			// 
			this->logInToolStripMenuItem->Name = L"logInToolStripMenuItem";
			this->logInToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->logInToolStripMenuItem->Text = L"Log in";
			this->logInToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::logInToolStripMenuItem_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(1005, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(246, 42);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Match History";
			// 
			// ProgresBarX
			// 
			this->ProgresBarX->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ProgresBarX->Location = System::Drawing::Point(86, 249);
			this->ProgresBarX->Name = L"ProgresBarX";
			this->ProgresBarX->Size = System::Drawing::Size(303, 39);
			this->ProgresBarX->TabIndex = 22;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(86, 185);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(303, 22);
			this->textBox1->TabIndex = 23;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(86, 311);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(303, 22);
			this->textBox2->TabIndex = 24;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(86, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(303, 41);
			this->button1->TabIndex = 25;
			this->button1->Text = L"NewGame";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// colorDialog1
			// 
			this->colorDialog1->Color = System::Drawing::Color::DimGray;
			// 
			// colorDialog2
			// 
			this->colorDialog2->Color = System::Drawing::Color::White;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(1521, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 38);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Log In";
			this->label5->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(1466, 321);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 59);
			this->button2->TabIndex = 27;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(1332, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 29);
			this->label6->TabIndex = 28;
			this->label6->Text = L"E-Mail";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(1332, 276);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 29);
			this->label7->TabIndex = 29;
			this->label7->Text = L"PassWord";
			this->label7->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(1466, 185);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(269, 34);
			this->textBox3->TabIndex = 30;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox4->Location = System::Drawing::Point(1466, 269);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(269, 34);
			this->textBox4->TabIndex = 31;
			this->textBox4->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(1575, 321);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 59);
			this->button3->TabIndex = 32;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1767, 696);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ProgresBarX);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblTurn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnRestart);
			this->Controls->Add(this->ProgresBarO);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblO);
			this->Controls->Add(this->Wynik);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"TicTacToe";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int ruch = 0; 
		bool graczO = true; 
		int scoreX = 0;
		int scoreO = 0;
#pragma endregion
	private: System::Void btnRestart_Click(System::Object^ sender, System::EventArgs^ e) {
		
		System::Windows::Forms::DialogResult odp =
			MessageBox::Show("Do you want to Restart whole Game?", "PYTANIE",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question,
				MessageBoxDefaultButton::Button2);
		switch (odp)
		{
		case System::Windows::Forms::DialogResult::Yes:

		
			lblTurn->Text = "O";
			ruch = 0;
			graczO = true;
			listBox1->Items->Clear();
			ProgresBarO->Value = 0;
			ProgresBarX->Value = 0;
			scoreX = 0;
			scoreO = 0;
			textBox1->Text = ""; 
			textBox2->Text = ""; 




			btn1->Enabled = true;   btn1->Text = "";
			btn2->Enabled = true;	btn2->Text = "";
			btn3->Enabled = true;	btn3->Text = "";
			btn4->Enabled = true;	btn4->Text = "";
			btn5->Enabled = true;	btn5->Text = "";
			btn6->Enabled = true;	btn6->Text = "";
			btn7->Enabled = true;	btn7->Text = "";
			btn8->Enabled = true;	btn8->Text = "";
			btn9->Enabled = true;	btn9->Text = "";

		
		case System::Windows::Forms::DialogResult::No:
			break;
		}

		
		

	}
		   private: void NewGame()
		   {
			   lblTurn->Text = "O";
			   ruch = 0;
			   graczO = true;
			   
			   



			   btn1->Enabled = true;   btn1->Text = "";
			   btn2->Enabled = true;	btn2->Text = "";
			   btn3->Enabled = true;	btn3->Text = "";
			   btn4->Enabled = true;	btn4->Text = "";
			   btn5->Enabled = true;	btn5->Text = "";
			   btn6->Enabled = true;	btn6->Text = "";
			   btn7->Enabled = true;	btn7->Text = "";
			   btn8->Enabled = true;	btn8->Text = "";
			   btn9->Enabled = true;	btn9->Text = "";
			   if ( scoreO == 5)
			   {
				   
				   textBox1->Text = "";
				   textBox2->Text = "";
				   listBox1->Items->Clear();
				  

				   scoreX = 0;
				   scoreO = 0;
				   ProgresBarO->Value = 0;
				   ProgresBarX->Value = 0;
				   

				   MessageBox::Show("Player O have won", "WIN!",
					   MessageBoxButtons::OK, MessageBoxIcon::Warning,
					   MessageBoxDefaultButton::Button2);
				  
			   }
			   else if (scoreX == 5)
			   {
				  
				   textBox1->Text = "";
				   textBox2->Text = "";
				   listBox1->Items->Clear();

				   scoreX = 0;
				   scoreO = 0; 
				   ProgresBarO->Value = 0; 
				   ProgresBarX->Value = 0;



				   MessageBox::Show("Player X have won", "WIN!",
					   MessageBoxButtons::OK, MessageBoxIcon::Warning,
					   MessageBoxDefaultButton::Button2);
				  
			   }

			  
		   }
		   

private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	ruch++; 
	btn1->Text = graczO ? "O" : " X";	btn1->Enabled = false;	graczO = !graczO;
	if (ruch > 3)
	{
		CheckWin();
	}
	if (graczO == true)
	{
		lblTurn->Text = "O";

	}
	else
	{
		lblTurn->Text = "X";
	}
	
	

	
	
	 
	
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	ruch++;
	btn2->Text = graczO ? "O" : " X";	btn2->Enabled = false;	graczO = !graczO;
	if (ruch > 3)
	{
		CheckWin();
	}
	if (graczO == true)
	{
		lblTurn->Text = "O";

	}
	else
	{
		lblTurn->Text = "X";

	}
	
	
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	ruch++;
	btn3->Text = graczO ? "O" : " X";	btn3->Enabled = false;	graczO = !graczO;
	if (ruch > 3)
	{
		CheckWin();
	}
	if (graczO == true)
	{
		lblTurn->Text = "O";

	}
	else
	{
		lblTurn->Text = "X";

	}
	
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	ruch++;
	btn4->Text = graczO ? "O" : " X";		btn4->Enabled = false;	graczO = !graczO;
	if (ruch > 3)
	{
		CheckWin();
	}
	if (graczO == true)
	{
		lblTurn->Text = "O";

	}
	else
	{
		lblTurn->Text = "X";

	}

}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	ruch++;
	btn5->Text = graczO ? "O" : " X";	btn5->Enabled = false;	graczO = !graczO;
	if (ruch > 3)
	{
		CheckWin();
	}
	if (graczO == true)
	{
		lblTurn->Text = "O";

	}
	else
	{
		lblTurn->Text = "X";

	}
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	ruch++;
	btn6->Text = graczO ? "O" : " X";	btn6->Enabled = false; graczO = !graczO;
	if (ruch > 3)
	{
		CheckWin();
	}
	if (graczO == true)
	{
		lblTurn->Text = "O";

	}
	else
	{
		lblTurn->Text = "X";
	}
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	ruch++;
	btn7->Text = graczO ? "O" : " X";	btn7->Enabled = false;	graczO = !graczO;
	if (ruch > 3)
	{
		CheckWin();
	}
	if (graczO == true)
	{
		lblTurn->Text = "O";

	}
	else
	{
		lblTurn->Text = "X";

	}
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	ruch++;
	btn8->Text = graczO ? "O" : " X";	btn8->Enabled = false;	graczO = !graczO;
	if (ruch > 3)
	{
		CheckWin();
	}
	if (graczO == true)
	{
		lblTurn->Text = "O";

	}
	else
	{
		lblTurn->Text = "X";

	}
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	ruch++;
	btn9->Text = graczO ? "O" : " X";	btn9->Enabled = false;	graczO = !graczO;
	if (ruch > 3)
	{
		CheckWin(); 
	}
	if (graczO == true)
	{
		lblTurn->Text = "O";

	}
	else
	{
		lblTurn->Text = "X";

	}

}
	   private: void CheckWin()
	   {
		
		   if (btn1->Text == btn9->Text && btn7->Text == btn3->Text
			   && btn5->Text != btn1->Text && btn5->Text != btn3->Text)
		   {
			   MessageBox::Show("Cuda siê zdarzaj¹. Potwierdzi to ka¿dy programista!", "Easter Egg!",
				   MessageBoxButtons::OK, MessageBoxIcon::Question,
				   MessageBoxDefaultButton::Button2);
			   scoreX++;
			   scoreO++;
			   ProgresBarO->Value = scoreO * 20;
			   ProgresBarX->Value = scoreX * 20;
			   NewGame();

		   }


		   if (btn1->Text != "" && btn1->Text == btn2->Text && btn2->Text == btn3->Text ||
			   btn4->Text != "" && btn4->Text == btn5->Text && btn5->Text == btn6->Text ||
			   btn7->Text != "" && btn7->Text == btn8->Text && btn8->Text == btn9->Text ||
			   btn1->Text != "" && btn1->Text == btn4->Text && btn4->Text == btn7->Text ||
			   btn2->Text != "" && btn2->Text == btn5->Text && btn5->Text == btn8->Text ||
			   btn3->Text != "" && btn3->Text == btn6->Text && btn6->Text == btn9->Text ||
			   btn1->Text != "" && btn1->Text == btn5->Text && btn5->Text == btn9->Text || 
			   btn3->Text != "" && btn3->Text == btn5->Text && btn5->Text == btn7->Text )
		   {
			   if (graczO == false)
				{
				   scoreO++;
				   ProgresBarO->Value = scoreO * 20; 
				   listBox1->Items->Add("O");
				   textBox1->Text = "O won the last round";
				   textBox2->Text = "";
				  
				   
				   NewGame();

				}
			   else
			   {
				   scoreX++;
				   ProgresBarX->Value = scoreX * 20;
				   listBox1->Items->Add("X");
				   textBox2->Text = "X won the last round";
				   textBox1->Text = "";
				  
				  
				   NewGame(); 
			   }

			   if (scoreX == scoreO && scoreO>3)
			   {
				   MessageBox::Show("You're absolutely neck and neck.", "DRAW!",
					   MessageBoxButtons::OK, MessageBoxIcon::Warning,
					   MessageBoxDefaultButton::Button2);
			   }
		   }

		   else if (ruch == 9)
		   {
			   MessageBox::Show("Press OK to New Game TicTacToe", "DRAW!",
				   MessageBoxButtons::OK, MessageBoxIcon::Warning,
				   MessageBoxDefaultButton::Button2);
			   textBox1->Text = ""; 
			   textBox2->Text = "";


			   
			   NewGame(); 

		   }



		   
	   }
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult odp =
		MessageBox::Show("Do you want to shut dwon the app?", "Close",
			MessageBoxButtons::YesNo, MessageBoxIcon::Error,
			MessageBoxDefaultButton::Button2);
	switch (odp)
	{
	case System::Windows::Forms::DialogResult::Yes:
		Close();
	case System::Windows::Forms::DialogResult::No:
		break;
	}

}
private: System::Void rulesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Winning is achieved by winning 5 single matches. You have to collect 3 of the same characters in a row or diagonally", "Rules",
		MessageBoxButtons::OKCancel, MessageBoxIcon::Warning,
		MessageBoxDefaultButton::Button2);

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult odp =
		MessageBox::Show("Do you want Restart current game and start New Game? ", "Question",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question,
			MessageBoxDefaultButton::Button2);
	switch (odp)
	{
	case System::Windows::Forms::DialogResult::Yes:
		NewGame();
	case System::Windows::Forms::DialogResult::No:
		break;
	}
	
}
private: System::Void darkToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor= colorDialog1->Color;
}
private: System::Void brightToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = colorDialog2->Color;

}
private: System::Void logInToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label5->Visible = true; 
	label6->Visible = true;
	label7->Visible = true;
	textBox3->Visible = true; 
	textBox4->Visible = true;
	button2->Visible = true;
	button3->Visible = true; 




}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label5->Visible = false;
	label6->Visible = false;
	label7->Visible = false;
	textBox3->Visible = false;
	textBox4->Visible = false;
	button2->Visible = false;
	button3->Visible = false;
}
};
}
