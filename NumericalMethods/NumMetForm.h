#pragma once
#include <cmath>
#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

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
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Button^  button2;





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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
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

			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
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
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());

			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());

			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());

			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			
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
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(980, 42);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(73, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0,01";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(111, 117);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(99, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(111, 45);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 26);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"1";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(111, 79);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(99, 26);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"1";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(968, 70);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(124, 26);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"0,000000001";
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
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(62, 171);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 32);
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
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(741, 577);
			this->dataGridView1->TabIndex = 11;
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
			this->h->Width = 120;
			// 
			// x_table
			// 
			this->x_table->HeaderText = L"Xn";
			this->x_table->Name = L"x_table";
			this->x_table->Width = 120;
			// 
			// v_table
			// 
			this->v_table->HeaderText = L"Vn";
			this->v_table->Name = L"v_table";
			this->v_table->Width = 120;
			// 
			// w_table
			// 
			this->w_table->HeaderText = L"Wn";
			this->w_table->Name = L"w_table";
			this->w_table->Width = 120;
			// 
			// v2_table
			// 
			this->v2_table->HeaderText = L"Vn удв.";
			this->v2_table->Name = L"v2_table";
			this->v2_table->Width = 120;
			// 
			// w2_table
			// 
			this->w2_table->HeaderText = L"Wn удв.";
			this->w2_table->Name = L"w2_table";
			this->w2_table->Width = 120;
			// 
			// s_table
			// 
			this->s_table->HeaderText = L"S*";
			this->s_table->Name = L"s_table";
			this->s_table->Width = 120;
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(59, 82);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"c";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(59, 48);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"m ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(810, 65);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 36);
			this->label3->TabIndex = 14;
			this->label3->Text = L"погрешность (E)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(59, 120);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"k";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(719, 48);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(141, 20);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Начальный шаг";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(719, 13);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(191, 20);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Параметры метода";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(59, 13);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Параметры задачи";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(980, 177);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(73, 26);
			this->textBox6->TabIndex = 22;
			this->textBox6->Text = L"10000";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(719, 167);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(219, 48);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Максимальное число шагов (max.: 31^2-1)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(436, 13);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(243, 20);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Параметры задачи Коши";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(436, 51);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 20);
			this->label9->TabIndex = 29;
			this->label9->Text = L"x0 ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(435, 82);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 20);
			this->label10->TabIndex = 30;
			this->label10->Text = L"u0 ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(431, 118);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(36, 20);
			this->label12->TabIndex = 31;
			this->label12->Text = L"u\'0 ";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(719, 131);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(152, 36);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Правая граница";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(1079, 131);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(195, 43);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Точность выхода  на правую границу";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(719, 79);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(245, 52);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Контроль локальной погрешности";
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
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(5, 70);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 17);
			this->label18->TabIndex = 46;
			this->label18->Text = L"XN";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(5, 100);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(100, 17);
			this->label19->TabIndex = 48;
			this->label19->Text = L"VN";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(5, 130);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 17);
			this->label20->TabIndex = 50;
			this->label20->Text = L"WN";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(5, 160);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(100, 17);
			this->label21->TabIndex = 52;
			this->label21->Text = L"max||S||";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(5, 190);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(100, 17);
			this->label22->TabIndex = 54;
			this->label22->Text = L"min||S||";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(5, 220);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(100, 17);
			this->label23->TabIndex = 56;
			this->label23->Text = L"Всего уменьшений шага";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(5, 250);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(100, 17);
			this->label24->TabIndex = 58;
			this->label24->Text = L"Всего увеличений шага";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(5, 280);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(100, 17);
			this->label25->TabIndex = 60;
			this->label25->Text = L"max hn";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(5, 310);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(100, 17);
			this->label26->TabIndex = 62;
			this->label26->Text = L"min hn";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(320, 310);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(30, 17);
			this->label27->TabIndex = 64;
			this->label27->Text = L"при Xn+1";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(320, 280);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(30, 17);
			this->label28->TabIndex = 66;
			this->label28->Text = L"при Xn+1";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(320, 160);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(30, 17);
			this->label29->TabIndex = 68;
			this->label29->Text = L"при Xn";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(320, 190);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(30, 17);
			this->label30->TabIndex = 70;
			this->label30->Text = L"при Xn";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(501, 45);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(99, 26);
			this->textBox8->TabIndex = 35;
			this->textBox8->Text = L"0";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(501, 79);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(99, 26);
			this->textBox9->TabIndex = 36;
			this->textBox9->Text = L"10";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(501, 115);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(99, 26);
			this->textBox10->TabIndex = 37;
			this->textBox10->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(165, 5);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(50, 22);
			this->textBox13->TabIndex = 40;
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox->Location = System::Drawing::Point(980, 88);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(18, 17);
			this->checkBox->TabIndex = 38;
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(980, 131);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(73, 26);
			this->textBox11->TabIndex = 39;
			this->textBox11->Text = L"15";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(1291, 131);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(164, 26);
			this->textBox12->TabIndex = 40;
			this->textBox12->Text = L"0,000000001";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(165, 35);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(150, 22);
			this->textBox14->TabIndex = 45;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(165, 65);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(150, 22);
			this->textBox15->TabIndex = 47;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(165, 95);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(150, 22);
			this->textBox16->TabIndex = 49;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(165, 125);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(150, 22);
			this->textBox17->TabIndex = 51;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(165, 155);
			this->textBox18->Margin = System::Windows::Forms::Padding(4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(150, 22);
			this->textBox18->TabIndex = 53;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(165, 185);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(150, 22);
			this->textBox19->TabIndex = 55;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(165, 215);
			this->textBox20->Margin = System::Windows::Forms::Padding(4);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(150, 22);
			this->textBox20->TabIndex = 57;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(165, 245);
			this->textBox21->Margin = System::Windows::Forms::Padding(4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(150, 22);
			this->textBox21->TabIndex = 59;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(165, 275);
			this->textBox22->Margin = System::Windows::Forms::Padding(4);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(150, 22);
			this->textBox22->TabIndex = 61;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(165, 305);
			this->textBox23->Margin = System::Windows::Forms::Padding(4);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(150, 22);
			this->textBox23->TabIndex = 63;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(380, 305);
			this->textBox24->Margin = System::Windows::Forms::Padding(4);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(150, 22);
			this->textBox24->TabIndex = 65;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(380, 275);
			this->textBox25->Margin = System::Windows::Forms::Padding(4);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(150, 22);
			this->textBox25->TabIndex = 67;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(380, 155);
			this->textBox26->Margin = System::Windows::Forms::Padding(4);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(150, 22);
			this->textBox26->TabIndex = 69;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(380, 185);
			this->textBox27->Margin = System::Windows::Forms::Padding(4);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(150, 22);
			this->textBox27->TabIndex = 71;
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
			this->tabPage1->Text = L"График v(x)";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(716, 552);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"График w(x)";
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
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(219, 51);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(26, 20);
			this->label31->TabIndex = 43;
			this->label31->Text = L"кг";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(219, 82);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(73, 20);
			this->label32->TabIndex = 44;
			this->label32->Text = L"Нс/см^2";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(219, 120);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(48, 20);
			this->label33->TabIndex = 45;
			this->label33->Text = L"Н/см";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(608, 51);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(18, 20);
			this->label34->TabIndex = 46;
			this->label34->Text = L"с";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(608, 82);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(30, 20);
			this->label35->TabIndex = 47;
			this->label35->Text = L"см";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(608, 120);
			this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(44, 20);
			this->label36->TabIndex = 48;
			this->label36->Text = L"см/с";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(223, 171);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 32);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Очистить график";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1535, 853);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
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
		int count_graph = 0;
		GraphPane^ panel1;
		GraphPane^ panel2;
		GraphPane^ panel3;


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
		double xn_min = 1000000000000000;

		panel1= zedGraphControl1->GraphPane;
		panel2 = zedGraphControl2->GraphPane;
		panel3 = zedGraphControl3->GraphPane;
		
		//Создадим список точек
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		LineItem^ Curve1;
		LineItem^ Curve2;
		LineItem^ Curve3;


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

		v2_table->Visible = control_of_local_error;
		w2_table->Visible = control_of_local_error;
		s_table->Visible = control_of_local_error;
		decrease_h_table->Visible = control_of_local_error;
		increase_h_table->Visible = control_of_local_error;

		while (N <= h_max && current_point[0] < right_border)
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
			
			if (xn_min > current_point[1])
				xn_min = current_point[1];

			if ((right_border - accuracy_of_the_output) < current_point[0] && current_point[0] < right_border)//выходим, если текущая точка входит в промежуток 
				break;

			while ((current_point[0] + hn) >= right_border)
			{
				hn = hn / 2;
				count_decrease++;
			}			
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

		if (count_graph == 7)
			count_graph = 0;

		switch (count_graph)
		{
		case 0:
			Curve1 = panel1->AddCurve("v(x)", f1_list, Color::Blue, SymbolType::None); // имя линии графика
			Curve2 = panel2->AddCurve("w(x)", f2_list, Color::Blue, SymbolType::None); // имя линии графика
			Curve3 = panel3->AddCurve("w(u)", f3_list, Color::Blue, SymbolType::None); // имя линии графика
			break;
		case 1:
			Curve1 = panel1->AddCurve("v(x)", f1_list, Color::Red, SymbolType::None); // имя линии графика
			Curve2 = panel2->AddCurve("w(x)", f2_list, Color::Red, SymbolType::None); // имя линии графика
			Curve3 = panel3->AddCurve("w(u)", f3_list, Color::Red, SymbolType::None); // имя линии графика
			break;
		case 2:
			Curve1 = panel1->AddCurve("v(x)", f1_list, Color::Green, SymbolType::None); // имя линии графика
			Curve2 = panel2->AddCurve("w(x)", f2_list, Color::Green, SymbolType::None); // имя линии графика
			Curve3 = panel3->AddCurve("w(u)", f3_list, Color::Green, SymbolType::None); // имя линии графика
			break;
		case 3: 
			Curve1 = panel1->AddCurve("v(x)", f1_list, Color::Orange, SymbolType::None); // имя линии графика
			Curve2 = panel2->AddCurve("w(x)", f2_list, Color::Orange, SymbolType::None); // имя линии графика
			Curve3 = panel3->AddCurve("w(u)", f3_list, Color::Orange, SymbolType::None); // имя линии графика
			break;
		case 4:
			Curve1 = panel1->AddCurve("v(x)", f1_list, Color::DarkViolet, SymbolType::None); // имя линии графика
			Curve2 = panel2->AddCurve("w(x)", f2_list, Color::DarkViolet, SymbolType::None); // имя линии графика
			Curve3 = panel3->AddCurve("w(u)", f3_list, Color::DarkViolet, SymbolType::None); // имя линии графика
			break;
		case 5:
			Curve1 = panel1->AddCurve("v(x)", f1_list, Color::Aqua, SymbolType::None); // имя линии графика
			Curve2 = panel2->AddCurve("w(x)", f2_list, Color::Aqua, SymbolType::None); // имя линии графика
			Curve3 = panel3->AddCurve("w(u)", f3_list, Color::Aqua, SymbolType::None); // имя линии графика
			break;
		case 6:
			Curve1 = panel1->AddCurve("v(x)", f1_list, Color::DeepPink, SymbolType::None); // имя линии графика
			Curve2 = panel2->AddCurve("w(x)", f2_list, Color::DeepPink, SymbolType::None); // имя линии графика
			Curve3 = panel3->AddCurve("w(u)", f3_list, Color::DeepPink, SymbolType::None); // имя линии графика
			break;

			break;
		default:
			break;
		}
		count_graph++;

		// Устанавливаем интересующий нас интервал по оси X
		panel1->XAxis->Scale->Min = -5;
		panel2->XAxis->Scale->Min = -5;
		panel3->XAxis->Scale->Min = xn_min -5;

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

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		panel1->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();

		zedGraphControl1->Invalidate();
		zedGraphControl2->Invalidate();
		zedGraphControl3->Invalidate();

		count_graph = 0;
	}
	};
}

