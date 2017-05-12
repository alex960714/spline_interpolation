#pragma once
#include "TCubicSpline.h"
#include <math.h>

namespace spline_interpolation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::TextBox^  x8;






	private: System::Windows::Forms::TextBox^  x4;
	private: System::Windows::Forms::TextBox^  x7;






	private: System::Windows::Forms::TextBox^  x6;





	private: System::Windows::Forms::TextBox^  x3;
	private: System::Windows::Forms::TextBox^  x5;


	private: System::Windows::Forms::TextBox^  x2;

	private: System::Windows::Forms::TextBox^  x1;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label37;

























private: System::Windows::Forms::Label^  status;



	private: double *x, *y;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  y1;
private: System::Windows::Forms::Label^  y8;
private: System::Windows::Forms::Label^  y4;
private: System::Windows::Forms::Label^  y7;
private: System::Windows::Forms::Label^  y3;
private: System::Windows::Forms::Label^  y6;
private: System::Windows::Forms::Label^  y2;
private: System::Windows::Forms::Label^  y5;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->y8 = (gcnew System::Windows::Forms::Label());
			this->y4 = (gcnew System::Windows::Forms::Label());
			this->y7 = (gcnew System::Windows::Forms::Label());
			this->y3 = (gcnew System::Windows::Forms::Label());
			this->y6 = (gcnew System::Windows::Forms::Label());
			this->y2 = (gcnew System::Windows::Forms::Label());
			this->y5 = (gcnew System::Windows::Forms::Label());
			this->y1 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->x8 = (gcnew System::Windows::Forms::TextBox());
			this->x4 = (gcnew System::Windows::Forms::TextBox());
			this->x7 = (gcnew System::Windows::Forms::TextBox());
			this->x6 = (gcnew System::Windows::Forms::TextBox());
			this->x3 = (gcnew System::Windows::Forms::TextBox());
			this->x5 = (gcnew System::Windows::Forms::TextBox());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->status = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 2);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::SeaGreen;
			series1->Legend = L"Legend1";
			series1->Name = L"Сплайн";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Color = System::Drawing::Color::Red;
			series2->LabelForeColor = System::Drawing::Color::Bisque;
			series2->Legend = L"Legend1";
			series2->MarkerSize = 8;
			series2->Name = L"Точки";
			series2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::BrightPastel;
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Функция";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(996, 637);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->y8);
			this->groupBox1->Controls->Add(this->y4);
			this->groupBox1->Controls->Add(this->y7);
			this->groupBox1->Controls->Add(this->y3);
			this->groupBox1->Controls->Add(this->y6);
			this->groupBox1->Controls->Add(this->y2);
			this->groupBox1->Controls->Add(this->y5);
			this->groupBox1->Controls->Add(this->y1);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label37);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->x8);
			this->groupBox1->Controls->Add(this->x4);
			this->groupBox1->Controls->Add(this->x7);
			this->groupBox1->Controls->Add(this->x6);
			this->groupBox1->Controls->Add(this->x3);
			this->groupBox1->Controls->Add(this->x5);
			this->groupBox1->Controls->Add(this->x2);
			this->groupBox1->Controls->Add(this->x1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Location = System::Drawing::Point(1002, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 672);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// y8
			// 
			this->y8->BackColor = System::Drawing::SystemColors::Control;
			this->y8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->y8->Location = System::Drawing::Point(111, 280);
			this->y8->Name = L"y8";
			this->y8->Size = System::Drawing::Size(43, 20);
			this->y8->TabIndex = 12;
			this->y8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->y8->Visible = false;
			// 
			// y4
			// 
			this->y4->BackColor = System::Drawing::SystemColors::Control;
			this->y4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->y4->Location = System::Drawing::Point(110, 178);
			this->y4->Name = L"y4";
			this->y4->Size = System::Drawing::Size(43, 20);
			this->y4->TabIndex = 12;
			this->y4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// y7
			// 
			this->y7->BackColor = System::Drawing::SystemColors::Control;
			this->y7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->y7->Location = System::Drawing::Point(111, 254);
			this->y7->Name = L"y7";
			this->y7->Size = System::Drawing::Size(43, 20);
			this->y7->TabIndex = 12;
			this->y7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->y7->Visible = false;
			// 
			// y3
			// 
			this->y3->BackColor = System::Drawing::SystemColors::Control;
			this->y3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->y3->Location = System::Drawing::Point(110, 152);
			this->y3->Name = L"y3";
			this->y3->Size = System::Drawing::Size(43, 20);
			this->y3->TabIndex = 12;
			this->y3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// y6
			// 
			this->y6->BackColor = System::Drawing::SystemColors::Control;
			this->y6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->y6->Location = System::Drawing::Point(111, 230);
			this->y6->Name = L"y6";
			this->y6->Size = System::Drawing::Size(43, 20);
			this->y6->TabIndex = 12;
			this->y6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->y6->Visible = false;
			// 
			// y2
			// 
			this->y2->BackColor = System::Drawing::SystemColors::Control;
			this->y2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->y2->Location = System::Drawing::Point(110, 128);
			this->y2->Name = L"y2";
			this->y2->Size = System::Drawing::Size(43, 20);
			this->y2->TabIndex = 12;
			this->y2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// y5
			// 
			this->y5->BackColor = System::Drawing::SystemColors::Control;
			this->y5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->y5->Location = System::Drawing::Point(111, 204);
			this->y5->Name = L"y5";
			this->y5->Size = System::Drawing::Size(43, 20);
			this->y5->TabIndex = 12;
			this->y5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->y5->Visible = false;
			// 
			// y1
			// 
			this->y1->BackColor = System::Drawing::SystemColors::Control;
			this->y1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->y1->Location = System::Drawing::Point(110, 102);
			this->y1->Name = L"y1";
			this->y1->Size = System::Drawing::Size(43, 20);
			this->y1->TabIndex = 12;
			this->y1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Location = System::Drawing::Point(16, 533);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(15, 15);
			this->label22->TabIndex = 11;
			this->label22->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Location = System::Drawing::Point(16, 489);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(15, 15);
			this->label20->TabIndex = 11;
			this->label20->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(13, 516);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(162, 13);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Максисмальная погрешность:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(13, 472);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(122, 13);
			this->label19->TabIndex = 10;
			this->label19->Text = L"Средняя погрешность:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"sin(x)", L"cos(x)" });
			this->comboBox1->Location = System::Drawing::Point(16, 439);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 9;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(13, 422);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(56, 13);
			this->label37->TabIndex = 7;
			this->label37->Text = L"Функция:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(16, 365);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Очистить всё";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(13, 76);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(103, 13);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Координаты точек:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Очистить поля";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 306);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(83, 283);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(21, 13);
			this->label17->TabIndex = 3;
			this->label17->Text = L"y8:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(83, 257);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(21, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"y7:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(83, 233);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 13);
			this->label13->TabIndex = 3;
			this->label13->Text = L"y6:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(83, 207);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 13);
			this->label11->TabIndex = 3;
			this->label11->Text = L"y5:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(83, 181);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"y4:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(83, 155);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"y3:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(83, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"y2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"y1:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(13, 283);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(21, 13);
			this->label16->TabIndex = 3;
			this->label16->Text = L"x8:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 257);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"x7:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 233);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L"x6:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 207);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"x5:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 181);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"x4:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"x3:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"x2:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"x1:";
			// 
			// x8
			// 
			this->x8->Location = System::Drawing::Point(40, 280);
			this->x8->Name = L"x8";
			this->x8->Size = System::Drawing::Size(37, 20);
			this->x8->TabIndex = 2;
			this->x8->Visible = false;
			// 
			// x4
			// 
			this->x4->Location = System::Drawing::Point(40, 178);
			this->x4->Name = L"x4";
			this->x4->Size = System::Drawing::Size(37, 20);
			this->x4->TabIndex = 2;
			// 
			// x7
			// 
			this->x7->Location = System::Drawing::Point(40, 254);
			this->x7->Name = L"x7";
			this->x7->Size = System::Drawing::Size(37, 20);
			this->x7->TabIndex = 2;
			this->x7->Visible = false;
			// 
			// x6
			// 
			this->x6->Location = System::Drawing::Point(40, 230);
			this->x6->Name = L"x6";
			this->x6->Size = System::Drawing::Size(37, 20);
			this->x6->TabIndex = 2;
			this->x6->Visible = false;
			// 
			// x3
			// 
			this->x3->Location = System::Drawing::Point(40, 152);
			this->x3->Name = L"x3";
			this->x3->Size = System::Drawing::Size(37, 20);
			this->x3->TabIndex = 2;
			// 
			// x5
			// 
			this->x5->Location = System::Drawing::Point(40, 204);
			this->x5->Name = L"x5";
			this->x5->Size = System::Drawing::Size(37, 20);
			this->x5->TabIndex = 2;
			this->x5->Visible = false;
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(40, 128);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(37, 20);
			this->x2->TabIndex = 2;
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(40, 102);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(37, 20);
			this->x1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Число точек";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(106, 37);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(38, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// status
			// 
			this->status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->status->AutoSize = true;
			this->status->Location = System::Drawing::Point(12, 647);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(118, 13);
			this->status->TabIndex = 2;
			this->status->Text = L"Готово к выполнению";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1225, 671);
			this->Controls->Add(this->status);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"Сплайн-интерполяция - кубический сплайн";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::String^ parseSpline(segment seg)
		{
			System::String ^str = gcnew System::String("");
			double tmp3 = seg.coeff3;
			double tmp2 = seg.coeff2 - seg.coeff3 * 3 * seg.x1;
			double tmp1 = seg.coeff1 - seg.coeff2 * 2 * seg.x1 
				+ seg.coeff3 * 3 * seg.x1 * seg.x1;
			double tmp0 = seg.coeff0 - seg.coeff1 * seg.x1 + seg.coeff2 * seg.x1 * seg.x1
				- seg.coeff3 * seg.x1 * seg.x1 * seg.x1;
			if (tmp3 != 0)
			{
				if (tmp3 != 1.0)
					str += Convert::ToString(Math::Round(tmp3,2));
				str += Convert::ToString("x^3 ");
			}
			if (tmp2 != 0)
			{
				if (tmp2 > 0)
					str += Convert::ToString("+ ");
				if (tmp2 != 1.0)
					str += Convert::ToString(Math::Round(tmp2,2));
				str += Convert::ToString("x^2 ");
			}
			if (tmp1 != 0)
			{
				if (tmp1 > 0)
					str += Convert::ToString("+ ");
				if (tmp1 != 1.0)
					str += Convert::ToString(Math::Round(tmp1,2));
				str += Convert::ToString("x ");
			}
			if (tmp0 != 0)
			{
				if (tmp0 > 0)
					str += Convert::ToString("+ ");
				str += Convert::ToString(Math::Round(tmp0,2));
			}
			if (str == "")
				str += Convert::ToString("0");
			return str;
		}
	private: double func(double val)
	{
		switch ((int)this->comboBox1->SelectedIndex)
		{
		case 0: return sin(val);
		case 1:	return cos(val);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int size = (int)this->numericUpDown1->Value;
		System::FormatException^ exc;
		if (x != nullptr)
			delete[] x;
		if (y != nullptr)
			delete[] y;

		x = new double[size];
		y = new double[size];

		try {
			switch (size)
			{
			case 8: x[7] = Convert::ToDouble(this->x8->Text); //y[7] = Convert::ToDouble(this->y8->Text);
			case 7: x[6] = Convert::ToDouble(this->x7->Text); //y[6] = Convert::ToDouble(this->y7->Text);
			case 6: x[5] = Convert::ToDouble(this->x6->Text); //y[5] = Convert::ToDouble(this->y6->Text);
			case 5: x[4] = Convert::ToDouble(this->x5->Text); //y[4] = Convert::ToDouble(this->y5->Text);
			case 4: x[3] = Convert::ToDouble(this->x4->Text); //y[3] = Convert::ToDouble(this->y4->Text);
				x[2] = Convert::ToDouble(this->x3->Text); //y[2] = Convert::ToDouble(this->y3->Text);
				x[1] = Convert::ToDouble(this->x2->Text); //y[1] = Convert::ToDouble(this->y2->Text);
				x[0] = Convert::ToDouble(this->x1->Text); //y[0] = Convert::ToDouble(this->y1->Text);
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Некорректные данные!\nВозможно, не все поля заполнены.\nПроверьте данные и повторите попытку");
			this->status->Text = "Некорректные данные! Возможно, не все поля заполнены. Проверьте данные и повторите попытку";
			return;
		}

		chart1->Series[L"Сплайн"]->Points->Clear();
		chart1->Series[L"Функция"]->Points->Clear();
		chart1->Series[L"Точки"]->Points->Clear();

		this->status->Text = "Выполняются вычисления";
		for (int i = 0; i < size; i++)
			y[i] = func(x[i]);

		TCubicSpline* spl = new TCubicSpline();
		spl->MakeSpline(x, y, size);
		
		segment *seg = new segment[size-1];
		spl->GetSpline(seg, size);

		switch (size)
		{
		case 8: this->y8->Text = Convert::ToString(y[7]); this->x8->Text = Convert::ToString(x[7]);
		case 7: this->y7->Text = Convert::ToString(y[6]); this->x7->Text = Convert::ToString(x[6]);
		case 6: this->y6->Text = Convert::ToString(y[5]); this->x6->Text = Convert::ToString(x[5]);
		case 5: this->y5->Text = Convert::ToString(y[4]); this->x5->Text = Convert::ToString(x[4]);
		case 4: this->y4->Text = Convert::ToString(y[3]); this->x4->Text = Convert::ToString(x[3]);
			this->y3->Text = Convert::ToString(y[2]); this->x3->Text = Convert::ToString(x[2]);
			this->y2->Text = Convert::ToString(y[1]); this->x2->Text = Convert::ToString(x[1]);
			this->y1->Text = Convert::ToString(y[0]); this->x1->Text = Convert::ToString(x[0]);
		}

		this->status->Text="Отрисовка сплайна";
		double spl_val, func_val, err_av = 0, err_max = 0;
		chart1->Series[L"Сплайн"]->Points->Clear();
		double max = x[size - 1];
		for (double i = x[0]; i < max; i += 0.001)
		{
			spl_val = spl->GetY(i);
			func_val = func(i);
			chart1->Series[L"Сплайн"]->Points->AddXY(i, spl_val);
			chart1->Series[L"Функция"]->Points->AddXY(i, func_val);

			err_av += fabs(spl_val - func_val);
			if (err_max < spl_val - func_val)
				err_max = spl_val - func_val;
		}
		for (int i = 0; i < size; i++)
			chart1->Series[L"Точки"]->Points->AddXY(x[i], y[i]);
		err_av *= 0.001 / (max - x[0]);
		this->label20->Text = Convert::ToString(err_av);
		this->label22->Text = Convert::ToString(err_max);
		this->status->Text = "Готово";
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	switch ((int)(this->numericUpDown1->Value))
	{
	case 4: this->x5->Hide(); this->y5->Hide(); //this->spline4->Hide();
	case 5: this->x6->Hide(); this->y6->Hide();// this->spline5->Hide();
	case 6: this->x7->Hide(); this->y7->Hide(); //this->spline6->Hide();
	case 7: this->x8->Hide(); this->y8->Hide(); //this->spline7->Hide();
	}
	switch ((int)(this->numericUpDown1->Value))
	{
	case 8: this->x8->Show(); this->y8->Show(); //this->spline7->Show();
	case 7: this->x7->Show(); this->y7->Show(); //this->spline6->Show();
	case 6: this->x6->Show(); this->y6->Show(); //this->spline5->Show();
	case 5: this->x5->Show(); this->y5->Show(); //this->spline4->Show();
	}
	this->status->Text = "Параметры могли быть изменены! Текущий результат может не соответствовать данным параметрам";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->x8->Text = ""; this->y8->Text = "";
	this->x7->Text = ""; this->y7->Text = "";
	this->x6->Text = ""; this->y6->Text = "";
	this->x5->Text = ""; this->y5->Text = "";
	this->x4->Text = ""; this->y4->Text = "";
	this->x3->Text = ""; this->y3->Text = "";
	this->x2->Text = ""; this->y2->Text = "";
	this->x1->Text = ""; this->y1->Text = "";
	this->status->Text = "Параметры могли быть изменены! Текущий результат может не соответствовать данным параметрам";
}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		chart1->Series[L"Сплайн"]->Points->Clear();
		chart1->Series[L"Функция"]->Points->Clear();
		chart1->Series[L"Точки"]->Points->Clear();
	/*this->spline7->Text = "0";
	this->spline6->Text = "0";
	this->spline5->Text = "0";
	this->spline4->Text = "0";
	this->spline3->Text = "0";
	this->spline2->Text = "0";
	this->spline1->Text = "0";*/
	button2_Click(sender, e);
	this->label20->Text = "0";
	this->label22->Text = "0";
	this->status->Text = "Готово к выполнению";
}
};
}
