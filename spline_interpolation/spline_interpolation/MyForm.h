#pragma once
#include "TCubicSpline.h"

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
	private: System::Windows::Forms::TextBox^  y8;

	private: System::Windows::Forms::TextBox^  y4;
	private: System::Windows::Forms::TextBox^  x8;


	private: System::Windows::Forms::TextBox^  y2;
	private: System::Windows::Forms::TextBox^  y7;


	private: System::Windows::Forms::TextBox^  x4;
	private: System::Windows::Forms::TextBox^  x7;


	private: System::Windows::Forms::TextBox^  y1;
	private: System::Windows::Forms::TextBox^  y6;


	private: System::Windows::Forms::TextBox^  x6;

	private: System::Windows::Forms::TextBox^  y3;
	private: System::Windows::Forms::TextBox^  y5;


	private: System::Windows::Forms::TextBox^  x3;
	private: System::Windows::Forms::TextBox^  x5;


	private: System::Windows::Forms::TextBox^  x2;

	private: System::Windows::Forms::TextBox^  x1;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  spline5;





	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  spline7;

	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  spline6;

	private: System::Windows::Forms::Label^  spline4;

	private: System::Windows::Forms::Label^  spline3;

	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  spline2;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  spline1;

	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  status;

	private: System::Windows::Forms::Button^  button4;

	private: double *x, *y;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->spline5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->spline7 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->spline6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->spline4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->spline3 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->spline2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->spline1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->y8 = (gcnew System::Windows::Forms::TextBox());
			this->y4 = (gcnew System::Windows::Forms::TextBox());
			this->x8 = (gcnew System::Windows::Forms::TextBox());
			this->y2 = (gcnew System::Windows::Forms::TextBox());
			this->y7 = (gcnew System::Windows::Forms::TextBox());
			this->x4 = (gcnew System::Windows::Forms::TextBox());
			this->x7 = (gcnew System::Windows::Forms::TextBox());
			this->y1 = (gcnew System::Windows::Forms::TextBox());
			this->y6 = (gcnew System::Windows::Forms::TextBox());
			this->x6 = (gcnew System::Windows::Forms::TextBox());
			this->y3 = (gcnew System::Windows::Forms::TextBox());
			this->y5 = (gcnew System::Windows::Forms::TextBox());
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
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(0, 2);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series3";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(996, 637);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label37);
			this->groupBox1->Controls->Add(this->spline5);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->spline7);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->spline6);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->spline4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->spline3);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->spline2);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->spline1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->y8);
			this->groupBox1->Controls->Add(this->y4);
			this->groupBox1->Controls->Add(this->x8);
			this->groupBox1->Controls->Add(this->y2);
			this->groupBox1->Controls->Add(this->y7);
			this->groupBox1->Controls->Add(this->x4);
			this->groupBox1->Controls->Add(this->x7);
			this->groupBox1->Controls->Add(this->y1);
			this->groupBox1->Controls->Add(this->y6);
			this->groupBox1->Controls->Add(this->x6);
			this->groupBox1->Controls->Add(this->y3);
			this->groupBox1->Controls->Add(this->y5);
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
			// button4
			// 
			this->button4->Location = System::Drawing::Point(16, 394);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Сохранить в файл";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(13, 422);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(116, 13);
			this->label37->TabIndex = 7;
			this->label37->Text = L"Фрагменты сплайна:";
			// 
			// spline5
			// 
			this->spline5->AutoSize = true;
			this->spline5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->spline5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->spline5->Location = System::Drawing::Point(35, 537);
			this->spline5->Name = L"spline5";
			this->spline5->Size = System::Drawing::Size(15, 15);
			this->spline5->TabIndex = 1;
			this->spline5->Text = L"0";
			this->spline5->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(16, 365);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Очистить всё";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(13, 537);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(16, 13);
			this->label27->TabIndex = 0;
			this->label27->Text = L"5:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::Control;
			this->label29->Location = System::Drawing::Point(14, 561);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(16, 13);
			this->label29->TabIndex = 1;
			this->label29->Text = L"6:";
			// 
			// spline7
			// 
			this->spline7->AutoSize = true;
			this->spline7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->spline7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->spline7->Location = System::Drawing::Point(35, 583);
			this->spline7->Name = L"spline7";
			this->spline7->Size = System::Drawing::Size(15, 15);
			this->spline7->TabIndex = 1;
			this->spline7->Text = L"0";
			this->spline7->Visible = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(14, 583);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(16, 13);
			this->label31->TabIndex = 0;
			this->label31->Text = L"7:";
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
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(13, 513);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(16, 13);
			this->label25->TabIndex = 0;
			this->label25->Text = L"4:";
			// 
			// spline6
			// 
			this->spline6->AutoSize = true;
			this->spline6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->spline6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->spline6->Location = System::Drawing::Point(35, 561);
			this->spline6->Name = L"spline6";
			this->spline6->Size = System::Drawing::Size(15, 15);
			this->spline6->TabIndex = 1;
			this->spline6->Text = L"0";
			this->spline6->Visible = false;
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
			// spline4
			// 
			this->spline4->AutoSize = true;
			this->spline4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->spline4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->spline4->Location = System::Drawing::Point(35, 513);
			this->spline4->Name = L"spline4";
			this->spline4->Size = System::Drawing::Size(15, 15);
			this->spline4->TabIndex = 0;
			this->spline4->Text = L"0";
			this->spline4->Visible = false;
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
			// spline3
			// 
			this->spline3->AutoSize = true;
			this->spline3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->spline3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->spline3->Location = System::Drawing::Point(35, 489);
			this->spline3->Name = L"spline3";
			this->spline3->Size = System::Drawing::Size(15, 15);
			this->spline3->TabIndex = 1;
			this->spline3->Text = L"0";
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
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(13, 489);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(16, 13);
			this->label23->TabIndex = 0;
			this->label23->Text = L"3:";
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
			// spline2
			// 
			this->spline2->AutoSize = true;
			this->spline2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->spline2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->spline2->Location = System::Drawing::Point(35, 466);
			this->spline2->Name = L"spline2";
			this->spline2->Size = System::Drawing::Size(15, 15);
			this->spline2->TabIndex = 1;
			this->spline2->Text = L"0";
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
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(13, 466);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 13);
			this->label21->TabIndex = 0;
			this->label21->Text = L"2:";
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
			// spline1
			// 
			this->spline1->AutoSize = true;
			this->spline1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->spline1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->spline1->Location = System::Drawing::Point(35, 444);
			this->spline1->Name = L"spline1";
			this->spline1->Size = System::Drawing::Size(15, 15);
			this->spline1->TabIndex = 1;
			this->spline1->Text = L"0";
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
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(13, 444);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"1:";
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
			// y8
			// 
			this->y8->Location = System::Drawing::Point(109, 280);
			this->y8->Name = L"y8";
			this->y8->Size = System::Drawing::Size(37, 20);
			this->y8->TabIndex = 2;
			this->y8->Visible = false;
			// 
			// y4
			// 
			this->y4->Location = System::Drawing::Point(109, 178);
			this->y4->Name = L"y4";
			this->y4->Size = System::Drawing::Size(37, 20);
			this->y4->TabIndex = 2;
			// 
			// x8
			// 
			this->x8->Location = System::Drawing::Point(40, 280);
			this->x8->Name = L"x8";
			this->x8->Size = System::Drawing::Size(37, 20);
			this->x8->TabIndex = 2;
			this->x8->Visible = false;
			// 
			// y2
			// 
			this->y2->Location = System::Drawing::Point(109, 128);
			this->y2->Name = L"y2";
			this->y2->Size = System::Drawing::Size(37, 20);
			this->y2->TabIndex = 2;
			// 
			// y7
			// 
			this->y7->Location = System::Drawing::Point(109, 254);
			this->y7->Name = L"y7";
			this->y7->Size = System::Drawing::Size(37, 20);
			this->y7->TabIndex = 2;
			this->y7->Visible = false;
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
			// y1
			// 
			this->y1->Location = System::Drawing::Point(109, 102);
			this->y1->Name = L"y1";
			this->y1->Size = System::Drawing::Size(37, 20);
			this->y1->TabIndex = 2;
			// 
			// y6
			// 
			this->y6->Location = System::Drawing::Point(109, 228);
			this->y6->Name = L"y6";
			this->y6->Size = System::Drawing::Size(37, 20);
			this->y6->TabIndex = 2;
			this->y6->Visible = false;
			// 
			// x6
			// 
			this->x6->Location = System::Drawing::Point(40, 230);
			this->x6->Name = L"x6";
			this->x6->Size = System::Drawing::Size(37, 20);
			this->x6->TabIndex = 2;
			this->x6->Visible = false;
			// 
			// y3
			// 
			this->y3->Location = System::Drawing::Point(110, 152);
			this->y3->Name = L"y3";
			this->y3->Size = System::Drawing::Size(37, 20);
			this->y3->TabIndex = 2;
			// 
			// y5
			// 
			this->y5->Location = System::Drawing::Point(109, 204);
			this->y5->Name = L"y5";
			this->y5->Size = System::Drawing::Size(37, 20);
			this->y5->TabIndex = 2;
			this->y5->Visible = false;
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
			if (seg.coeff3 != 0)
			{
				if (seg.coeff3 != 1)
					str += Convert::ToString(Math::Round(seg.coeff3,2));
				str += Convert::ToString("x^3 ");
			}
			if (seg.coeff2 != 0)
			{
				if (seg.coeff2 > 0)
					str += Convert::ToString("+ ");
				if (seg.coeff2 != 1)
					str += Convert::ToString(Math::Round(seg.coeff2,2));
				str += Convert::ToString("x^2 ");
			}
			if (seg.coeff1 != 0)
			{
				if (seg.coeff1 > 0)
					str += Convert::ToString("+ ");
				if (seg.coeff1 != 1)
					str += Convert::ToString(Math::Round(seg.coeff1,2));
				str += Convert::ToString("x ");
			}
			if (seg.coeff0 != 0)
			{
				if (seg.coeff0 > 0)
					str += Convert::ToString("+ ");
				str += Convert::ToString(Math::Round(seg.coeff0,2));
			}
			if (str == "")
				str += Convert::ToString("0");
			return str;
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
			case 8: x[7] = Convert::ToDouble(this->x8->Text); y[7] = Convert::ToDouble(this->y8->Text);
			case 7: x[6] = Convert::ToDouble(this->x7->Text); y[6] = Convert::ToDouble(this->y7->Text);
			case 6: x[5] = Convert::ToDouble(this->x6->Text); y[5] = Convert::ToDouble(this->y6->Text);
			case 5: x[4] = Convert::ToDouble(this->x5->Text); y[4] = Convert::ToDouble(this->y5->Text);
			case 4: x[3] = Convert::ToDouble(this->x4->Text); y[3] = Convert::ToDouble(this->y4->Text);
				x[2] = Convert::ToDouble(this->x3->Text); y[2] = Convert::ToDouble(this->y3->Text);
				x[1] = Convert::ToDouble(this->x2->Text); y[1] = Convert::ToDouble(this->y2->Text);
				x[0] = Convert::ToDouble(this->x1->Text); y[0] = Convert::ToDouble(this->y1->Text);
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Некорректные данные!\nВозможно, не все поля заполнены.\nПроверьте данные и повторите попытку");
			this->status->Text = "Некорректные данные! Возможно, не все поля заполнены. Проверьте данные и повторите попытку";
			return;
		}

		this->status->Text = "Выполняются вычисления";

		TCubicSpline* spl = new TCubicSpline();
		spl->MakeSpline(x, y, size);
		
		segment *seg = new segment[size-1];
		spl->GetSpline(seg, size);

		switch (size)
		{
		case 8: this->spline7->Text = parseSpline(seg[6]);
		case 7: this->spline6->Text = parseSpline(seg[5]);
		case 6: this->spline5->Text = parseSpline(seg[4]);
		case 5: this->spline4->Text = parseSpline(seg[3]);
		case 4: this->spline3->Text = parseSpline(seg[2]);
			this->spline2->Text = parseSpline(seg[1]);
			this->spline1->Text = parseSpline(seg[0]);
		}

		this->status->Text="Отрисовка сплайна";
		chart1->Series[L"Series3"]->Points->Clear();
		double max = x[size - 1];
		for (double i = x[0]; i < max; i += 0.001)
			chart1->Series[L"Series3"]->Points->AddXY(i, spl->GetY(i));
		this->status->Text = "Готово";
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	switch ((int)(this->numericUpDown1->Value))
	{
	case 4: this->x5->Hide(); this->y5->Hide(); this->spline4->Hide();
	case 5: this->x6->Hide(); this->y6->Hide(); this->spline5->Hide();
	case 6: this->x7->Hide(); this->y7->Hide(); this->spline6->Hide();
	case 7: this->x8->Hide(); this->y8->Hide(); this->spline7->Hide();
	}
	switch ((int)(this->numericUpDown1->Value))
	{
	case 8: this->x8->Show(); this->y8->Show(); this->spline7->Show();
	case 7: this->x7->Show(); this->y7->Show(); this->spline6->Show();
	case 6: this->x6->Show(); this->y6->Show(); this->spline5->Show();
	case 5: this->x5->Show(); this->y5->Show(); this->spline4->Show();
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
};
}
