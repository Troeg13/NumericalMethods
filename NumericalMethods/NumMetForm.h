#pragma once
#include <cmath>
#include <iostream>
#include <array>
#include <algorithm>


using namespace std;


namespace  NumericalMethods {

	using namespace System;

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ w_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v2_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ w2_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ s_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ decrease_h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ increase_h;//увеличение
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;


	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::CheckBox^  checkBox;

	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;


	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  namber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  decrease_h_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  increase_h_table;
	private: System::Windows::Forms::TabPage^  tabPage6;
	




	protected:
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->namber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->w_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->w2_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->s_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->decrease_h_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->increase_h_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());

			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());

			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl1->Location = System::Drawing::Point(-4, 0);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(713, 556);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl2->Location = System::Drawing::Point(-4, -4);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(713, 560);
			this->zedGraphControl2->TabIndex = 0;
			this->zedGraphControl2->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl2_Load);
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl3->Location = System::Drawing::Point(-4, 0);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(713, 556);
			this->zedGraphControl3->TabIndex = 0;
			this->zedGraphControl3->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl3_Load);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(980, 41);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(73, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0,01";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 117);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(99, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 45);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 22);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"1";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(111, 79);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(99, 22);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"1";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1013, 89);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(124, 22);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"0,000000001";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(0, 0);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 171);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->namber,
					this->h, this->x_table, this->v_table, this->w_table, this->v2_table, this->w2_table, this->s_table, this->decrease_h_table,
					this->increase_h_table
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 241);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(741, 577);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// namber
			// 
			this->namber->HeaderText = L"№ шага";
			this->namber->Name = L"namber";
			this->namber->Width = 60;
			// 
			// h
			// 
			this->h->HeaderText = L"h(n-1)";
			this->h->Name = L"h";
			// 
			// x_table
			// 
			this->x_table->HeaderText = L"Xn";
			this->x_table->Name = L"x_table";
			// 
			// v_table
			// 
			this->v_table->HeaderText = L"Vn";
			this->v_table->Name = L"v_table";
			// 
			// w_table
			// 
			this->w_table->HeaderText = L"Wn";
			this->w_table->Name = L"w_table";
			// 
			// v2_table
			// 
			this->v2_table->HeaderText = L"Vn удв.";
			this->v2_table->Name = L"v2_table";
			// 
			// w2_table
			// 
			this->w2_table->HeaderText = L"Wn удв.";
			this->w2_table->Name = L"w2_table";
			// 
			// s_table
			// 
			this->s_table->HeaderText = L"S*";
			this->s_table->Name = L"s_table";
			// 
			// decrease_h_table
			// 
			this->decrease_h_table->HeaderText = L"Ум. шага";
			this->decrease_h_table->Name = L"decrease_h_table";
			// 
			// increase_h_table
			// 
			this->increase_h_table->HeaderText = L"Ув. шага";
			this->increase_h_table->Name = L"increase_h_table";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 82);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"c";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 48);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"m ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(857, 75);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 36);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Точность локальной погрешности";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 120);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"k";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(799, 48);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 17);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Начальный шаг";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(799, 13);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 17);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Параметры метода";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(59, 13);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(151, 17);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Параметры задачи";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(980, 177);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(73, 22);
			this->textBox6->TabIndex = 22;
			this->textBox6->Text = L"10000";
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(799, 167);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(166, 36);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Максимальное число шагов";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(436, 13);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 17);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Параметры задачи Коши";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(436, 48);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 17);
			this->label9->TabIndex = 29;
			this->label9->Text = L"x0 ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(434, 82);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 17);
			this->label10->TabIndex = 30;
			this->label10->Text = L"u0 ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(436, 120);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 17);
			this->label12->TabIndex = 31;
			this->label12->Text = L"u\'0 ";
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(799, 131);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(152, 36);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Правая граница";
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(1143, 131);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(161, 36);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Точность выхода  на правую границу";
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(799, 75);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(169, 36);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Учитывать контроль локальной погрешности";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(501, 45);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(99, 22);
			this->textBox8->TabIndex = 35;
			this->textBox8->Text = L"0";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(501, 79);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(99, 22);
			this->textBox9->TabIndex = 36;
			this->textBox9->Text = L"10";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(501, 115);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(99, 22);
			this->textBox10->TabIndex = 37;
			this->textBox10->Text = L"0";
			// 
			// textBox13
			// 
			
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(980, 83);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(18, 17);
			this->checkBox->TabIndex = 38;
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(980, 131);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(73, 22);
			this->textBox11->TabIndex = 39;
			this->textBox11->Text = L"15";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(1351, 145);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(164, 22);
			this->textBox12->TabIndex = 40;
			this->textBox12->Text = L"0,000000001";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(791, 241);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(724, 581);
			this->tabControl1->TabIndex = 42;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(716, 552);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"График v(t)";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(716, 552);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"График w(t)";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->zedGraphControl3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(716, 552);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Фазовый портрет w(u)";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->pictureBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(716, 552);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Задача ";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 32);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(783, 483);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->pictureBox2);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(716, 552);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Численный метод";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(21, 24);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(620, 370);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(716, 552);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Результаты расчёта";
			this->tabPage6->UseVisualStyleBackColor = true;

			this->textBox13->Location = System::Drawing::Point(165, 5);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(50, 22);
			this->textBox13->TabIndex = 40;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(5, 10);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 17);
			this->label16->TabIndex = 43;
			this->label16->Text = L"N (индекс последнего шага)";

			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(5, 40);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(100, 17);
			this->label17->TabIndex = 44;
			this->label17->Text = L"Правая граница - XN";

			this->textBox14->Location = System::Drawing::Point(165, 35);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(150, 22);
			this->textBox14->TabIndex = 45;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(5, 70);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 17);
			this->label18->TabIndex = 46;
			this->label18->Text = L"XN";

			this->textBox15->Location = System::Drawing::Point(165, 65);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(150, 22);
			this->textBox15->TabIndex = 47;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(5, 100);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(100, 17);
			this->label19->TabIndex = 48;
			this->label19->Text = L"VN";

			this->textBox16->Location = System::Drawing::Point(165, 95);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(150, 22);
			this->textBox16->TabIndex = 49;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(5, 130);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 17);
			this->label20->TabIndex = 50;
			this->label20->Text = L"WN";

			this->textBox17->Location = System::Drawing::Point(165, 125);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(150, 22);
			this->textBox17->TabIndex = 51;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(5, 160);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(100, 17);
			this->label21->TabIndex = 52;
			this->label21->Text = L"max||S||";

			this->textBox18->Location = System::Drawing::Point(165, 155);
			this->textBox18->Margin = System::Windows::Forms::Padding(4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(150, 22);
			this->textBox18->TabIndex = 53;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(5, 190);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(100, 17);
			this->label22->TabIndex = 54;
			this->label22->Text = L"min||S||";

			this->textBox19->Location = System::Drawing::Point(165, 185);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(150, 22);
			this->textBox19->TabIndex = 55;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(5, 220);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(100, 17);
			this->label23->TabIndex = 56;
			this->label23->Text = L"Всего уменьшений шага";

			this->textBox20->Location = System::Drawing::Point(165, 215);
			this->textBox20->Margin = System::Windows::Forms::Padding(4);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(150, 22);
			this->textBox20->TabIndex = 57;
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(5, 250);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(100, 17);
			this->label24->TabIndex = 58;
			this->label24->Text = L"Всего увеличений шага";

			this->textBox21->Location = System::Drawing::Point(165, 245);
			this->textBox21->Margin = System::Windows::Forms::Padding(4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(150, 22);
			this->textBox21->TabIndex = 59;
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(5, 280);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(100, 17);
			this->label25->TabIndex = 60;
			this->label25->Text = L"max hn";

			this->textBox22->Location = System::Drawing::Point(165, 275);
			this->textBox22->Margin = System::Windows::Forms::Padding(4);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(150, 22);
			this->textBox22->TabIndex = 61;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(5, 310);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(100, 17);
			this->label26->TabIndex = 62;
			this->label26->Text = L"min hn";

			this->textBox23->Location = System::Drawing::Point(165, 305);
			this->textBox23->Margin = System::Windows::Forms::Padding(4);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(150, 22);
			this->textBox23->TabIndex = 63;
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);


			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(320, 310);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label26";
			this->label27->Size = System::Drawing::Size(30, 17);
			this->label27->TabIndex = 64;
			this->label27->Text = L"при Xn+1";

			this->textBox24->Location = System::Drawing::Point(380, 305);
			this->textBox24->Margin = System::Windows::Forms::Padding(4);
			this->textBox24->Name = L"textBox23";
			this->textBox24->Size = System::Drawing::Size(150, 22);
			this->textBox24->TabIndex = 65;
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(320, 280);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(30, 17);
			this->label28->TabIndex = 66;
			this->label28->Text = L"при Xn+1";

			this->textBox25->Location = System::Drawing::Point(380, 275);
			this->textBox25->Margin = System::Windows::Forms::Padding(4);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(150, 22);
			this->textBox25->TabIndex = 67;
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(320, 160);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(30, 17);
			this->label29->TabIndex = 68;
			this->label29->Text = L"при Xn";

			this->textBox26->Location = System::Drawing::Point(380, 155);
			this->textBox26->Margin = System::Windows::Forms::Padding(4);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(150, 22);
			this->textBox26->TabIndex = 69;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(320, 190);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(30, 17);
			this->label30->TabIndex = 70;
			this->label30->Text = L"при Xn";

			this->textBox27->Location = System::Drawing::Point(380, 185);
			this->textBox27->Margin = System::Windows::Forms::Padding(4);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(150, 22);
			this->textBox27->TabIndex = 71;
			this->textBox27->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);

			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1535, 853);
			
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Задача 11, Троегубова Александра, гр. 381903_3";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

		double c, m, k;  //параметры задачи
		double x0, u0, der_u0;  //параметры задачи Коши
		double h0, accuracy_of_local_error, right_border, accuracy_of_the_output, h_max; //параметры метода
		bool control_of_local_error;
		double  olp;
		double hn; //значение текущего шага метода
		int N; //номер шага метода
		int count_decrease;//счётчик деления на два шага численного интегрирования
		int count_increase;//счётчик удвоения шага ч.и.
		double v2, w2; 
		double max_s, min_s, max_s_x, min_s_x, max_h, min_h, max_h_x, min_h_x;
		bool flag = false;

		/*Система, соответствующая ду второго порядка имеет вид:
		    u' = w
			w' = - (c/m)w - (k/m)u
		*/
		double Functions(int component_number, double u, double w)
		{
			if (component_number)
				return  -(c / m) * w - (k / m) * u;
			return w;
		}
		
		double K1(int component_number, double vn, double wn)
		{
			return Functions(component_number, vn, wn);
		}

		double K2(int component_number, double vn, double wn)
		{
			return Functions(component_number, vn + (hn / 2) * K1(0, vn, wn) , wn + (hn / 2) * K1(1, vn, wn));
		}

		double K3(int component_number, double vn, double wn)
		{
			return Functions(component_number, vn + (hn / 2) * K2(0, vn, wn), wn + (hn / 2) * K2(1, vn, wn));
		}

		double K4(int component_number, double vn, double wn)
		{
			return Functions(component_number, vn + hn * K3(0, vn, wn), wn + hn * K3(1, vn, wn));
		}

		std::array <double, 3> RungeKutta(double xn, double vn, double wn)
		{
			std::array <double, 3> res;
	
			res[0] = xn + hn;
			
			double k1, k2, k3, k4;
			int component_number = 0;
			while (1)
			{
				k1 = K1(component_number, vn, wn);
				k2 = K2(component_number, vn, wn);
				k3 = K3(component_number, vn, wn);
				k4 = K4(component_number, vn, wn);
				if (!component_number)
				{
					res[1] = vn + (hn / 6) * (k1 + 2 * k2 + 2 * k3 + k4);
					component_number++;
					continue;
				}
				res[2] = wn + (hn / 6) * (k1 + 2 * k2 + 2 * k3 + k4);
				break;
			}
			return res;
		}	

		std::array <double, 3> ErrorControl(double xn, double vn, double wn)
		{
		
			std::array <double, 3> res;
			std::array <double, 3> cap;

			double e = accuracy_of_local_error / 32; //e /2^(p + 1) = e / 2 ^ 5 

			res = RungeKutta(xn, vn, wn);

			if (hn < min_h)
			{
				min_h = hn;
				min_h_x = res[0];
			}
			if (hn > max_h)
			{
				max_h = hn;
				max_h_x = res[0];
			}

			hn = hn / 2;
			cap = RungeKutta(xn, vn, wn);
			cap = RungeKutta(cap[0], cap[1], cap[2]);
			v2 = cap[1]; w2 = cap[2];

			double s1 = abs((cap[1] - res[1]) / (15));
			double s2 = abs((cap[2] - res[2]) / (15));
			double norm_s = max(s1, s2);

			if (norm_s > max_s )
			{
				max_s = norm_s;
				max_s_x = res[0];
			}
			if (norm_s < min_s && xn != x0)
			{
				min_s = norm_s;
				min_s_x = res[0];
			}

			olp = norm_s * 16;

			if (norm_s >= e && norm_s <= accuracy_of_local_error)
			{
				hn = hn * 2;
				return res;
			}
				

			if (norm_s < e)
			{
				hn = hn * 4;
				count_increase++;
				return res;
			}

			if (norm_s > accuracy_of_local_error)
			{
				res = ErrorControl(xn, vn, wn);
				count_decrease++;
				return res;
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		N = 1; count_decrease = 0; count_increase = 0; olp = 0;
		max_s = 0;  max_s_x = 0;
		max_h = 0; min_h = 1; max_h_x = 0; min_h_x = 0;
		GraphPane^ panel1 = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		GraphPane^ panel3 = zedGraphControl3->GraphPane;

		panel1->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();

		//Создадим список точек
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		c = Convert::ToDouble(textBox4->Text);
		m = Convert::ToDouble(textBox3->Text);
		k = Convert::ToDouble(textBox2->Text);;  
		x0 = Convert::ToDouble(textBox8->Text);
		u0 = Convert::ToDouble(textBox9->Text);
		der_u0 = Convert::ToDouble(textBox10->Text);
		h0 = Convert::ToDouble(textBox1->Text);
		if(control_of_local_error)
			accuracy_of_local_error = Convert::ToDouble(textBox5->Text);
		right_border = Convert::ToDouble(textBox11->Text);
		min_s = accuracy_of_local_error;
		h_max = Convert::ToDouble(textBox6->Text);
		accuracy_of_the_output = Convert::ToDouble(textBox12->Text);

		panel1->Title->Text = "График зависимости смещения груза от времени";
		panel2->Title->Text = "График зависимости скорости груза от времени"; 
		panel3->Title->Text = "График зависимости скороcти груза от смещения"; 

		panel1->XAxis->Title->Text = "х - время";
		panel1->YAxis->Title->Text = "v - смещение груза";

		panel2->XAxis->Title->Text = "х - время";
		panel2->YAxis->Title->Text = "w - скорость груза";

		panel3->XAxis->Title->Text = "v - смещение груза";
		panel3->YAxis->Title->Text = "w - скорость груза";
		// Список точек

		dataGridView1->Rows->Clear();

		std::array <double, 3> current_point = {x0, u0, der_u0}; //{xn, vn, wn}
		hn = h0;
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = N - 1;
		dataGridView1->Rows[0]->Cells[1]->Value = "-";
		dataGridView1->Rows[0]->Cells[2]->Value = current_point[0];
		dataGridView1->Rows[0]->Cells[3]->Value = current_point[1];
		dataGridView1->Rows[0]->Cells[4]->Value = current_point[2];
		if (control_of_local_error)
		{
			dataGridView1->Rows[0]->Cells[5]->Value = "-";
			dataGridView1->Rows[0]->Cells[6]->Value = "-";
			dataGridView1->Rows[0]->Cells[7]->Value = "-";
			dataGridView1->Rows[0]->Cells[8]->Value = "-";
			dataGridView1->Rows[0]->Cells[9]->Value = "-";
		}
		
		f1_list->Add(current_point[0], current_point[1]);
		f2_list->Add(current_point[0], current_point[2]);
		f3_list->Add(current_point[1], current_point[2]);

		while (N <= h_max && current_point[0] < (right_border - accuracy_of_the_output))
		{
			if (control_of_local_error)
			{
				dataGridView1->Rows->Add();
				dataGridView1->Rows[N]->Cells[1]->Value = hn;

				current_point = ErrorControl(current_point[0], current_point[1], current_point[2]);

				dataGridView1->Rows[N]->Cells[0]->Value = N;
				dataGridView1->Rows[N]->Cells[2]->Value = current_point[0];
				dataGridView1->Rows[N]->Cells[3]->Value = current_point[1];
				dataGridView1->Rows[N]->Cells[4]->Value = current_point[1];
				dataGridView1->Rows[N]->Cells[5]->Value = v2;
				dataGridView1->Rows[N]->Cells[6]->Value = w2;
				dataGridView1->Rows[N]->Cells[7]->Value = olp;
				dataGridView1->Rows[N]->Cells[8]->Value = count_decrease;
				dataGridView1->Rows[N]->Cells[9]->Value = count_increase;

				f1_list->Add(current_point[0], current_point[1]);
				f2_list->Add(current_point[0], current_point[2]);
				f3_list->Add(current_point[1], current_point[2]);
			}
			else
			{
				
				dataGridView1->Rows->Add();
				dataGridView1->Rows[N]->Cells[1]->Value = hn;

				current_point = RungeKutta(current_point[0], current_point[1], current_point[2]);

				dataGridView1->Rows[N]->Cells[0]->Value = N;
				dataGridView1->Rows[N]->Cells[2]->Value = current_point[0];
				dataGridView1->Rows[N]->Cells[3]->Value = current_point[1];
				dataGridView1->Rows[N]->Cells[4]->Value = current_point[1];

				f1_list->Add(current_point[0], current_point[1]);
				f2_list->Add(current_point[0], current_point[2]);
				f3_list->Add(current_point[1], current_point[2]);

			}
			
			N++;
		}

		N--;

		this->textBox13->Text = N.ToString();
		this->tabPage6->Controls->Add(this->textBox13);
		this->tabPage6->Controls->Add(this->label16);

		this->tabPage6->Controls->Add(this->label17);
		this->textBox14->Text = (right_border - current_point[0]).ToString();
		this->tabPage6->Controls->Add(this->textBox14);

		this->tabPage6->Controls->Add(this->label18);
		this->textBox15->Text = current_point[0].ToString();
		this->tabPage6->Controls->Add(this->textBox15);

		this->tabPage6->Controls->Add(this->label19);
		this->textBox16->Text = current_point[1].ToString();
		this->tabPage6->Controls->Add(this->textBox16);

		this->tabPage6->Controls->Add(this->label20);
		this->textBox17->Text = current_point[2].ToString();
		this->tabPage6->Controls->Add(this->textBox17);

		if (control_of_local_error)
		{
			this->tabPage6->Controls->Add(this->label21);
			this->textBox18->Text = max_s.ToString();
			this->tabPage6->Controls->Add(this->textBox18);

			this->tabPage6->Controls->Add(this->label22);
			this->textBox19->Text = min_s.ToString();
			this->tabPage6->Controls->Add(this->textBox19);

			this->tabPage6->Controls->Add(this->label23);
			this->textBox20->Text = count_decrease.ToString();
			this->tabPage6->Controls->Add(this->textBox20);

			this->tabPage6->Controls->Add(this->label24);
			this->textBox21->Text = count_increase.ToString();
			this->tabPage6->Controls->Add(this->textBox21);

			this->tabPage6->Controls->Add(this->label25);
			this->textBox22->Text = max_h.ToString();
			this->tabPage6->Controls->Add(this->textBox22);

			this->tabPage6->Controls->Add(this->label26);
			this->textBox23->Text = min_h.ToString();
			this->tabPage6->Controls->Add(this->textBox23);

			this->tabPage6->Controls->Add(this->label27);
			this->textBox24->Text = min_h_x.ToString();
			this->tabPage6->Controls->Add(this->textBox24);

			this->tabPage6->Controls->Add(this->label28);
			this->textBox25->Text = max_h_x.ToString();
			this->tabPage6->Controls->Add(this->textBox25);

			this->tabPage6->Controls->Add(this->label29);
			this->textBox26->Text = max_s_x.ToString();
			this->tabPage6->Controls->Add(this->textBox26);

			this->tabPage6->Controls->Add(this->label30);
			this->textBox27->Text = min_s_x.ToString();
			this->tabPage6->Controls->Add(this->textBox27);
			flag = true;
		}
		else 
		{
			if (flag)
			{
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label21));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label22));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label23));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label24));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label25));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label26));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label27));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label28));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label29));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->label30));


				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox18));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox19));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox20));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox21));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox22));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox23));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox24));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox25));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox26));
				this->tabPage6->Controls->RemoveAt(this->tabPage6->Controls->IndexOf(this->textBox27));
				flag = false;
			}
		}


		if (control_of_local_error)
		{
			LineItem^ Curve1 = panel1->AddCurve("v(x)", f1_list, Color::Red, SymbolType::None); // имя линии графика
			LineItem^ Curve2 = panel2->AddCurve("w(x)", f2_list, Color::Red, SymbolType::None); // имя линии графика
			LineItem^ Curve3 = panel3->AddCurve("w(u)", f3_list, Color::Red, SymbolType::None); // имя линии графика
		}
		else
		{
			LineItem^ Curve1 = panel1->AddCurve("v(x)", f1_list, Color::Blue, SymbolType::None); // имя линии графика
			LineItem^ Curve2 = panel2->AddCurve("w(x)", f2_list, Color::Blue, SymbolType::None); // имя линии графика
			LineItem^ Curve3 = panel3->AddCurve("w(u)", f3_list, Color::Blue, SymbolType::None); // имя линии графика

		}
	

		// Устанавливаем интересующий нас интервал по оси X
		panel1->XAxis->Scale->Min = -5;
		panel2->XAxis->Scale->Min = -5;
		panel3->XAxis->Scale->Min = -5;

		/*
			// Устанавливаем интересующий нас интервал по оси Y
			panel->YAxis->Scale->Min = ymin_limit;
			panel->YAxis->Scale->Max = ymax_limit;
		*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		zedGraphControl2->AxisChange();
		zedGraphControl3->AxisChange();

		// Обновляем график
		zedGraphControl1->Invalidate();
		zedGraphControl2->Invalidate();
		zedGraphControl3->Invalidate();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		CheckBox^ checkBox = (CheckBox^)sender; // приводим отправителя к элементу типа CheckBox
		if (checkBox->Checked)
		{
			control_of_local_error = true;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
		}
		else
		{
			control_of_local_error = false;
			this->Controls->RemoveAt(this->Controls->IndexOf(this->label3));
			this->Controls->RemoveAt(this->Controls->IndexOf(this->textBox5));

		}
	}

	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void zedGraphControl2_Load(System::Object^ sender, System::EventArgs^ e) {
	 }
	private: System::Void zedGraphControl3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

