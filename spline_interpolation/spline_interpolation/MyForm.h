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










































	private: System::Windows::Forms::TextBox^  x3;



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
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;









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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->x3 = (gcnew System::Windows::Forms::TextBox());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->status = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Функция";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(996, 637);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label37);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->x3);
			this->groupBox1->Controls->Add(this->x2);
			this->groupBox1->Controls->Add(this->x1);
			this->groupBox1->Location = System::Drawing::Point(1002, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 672);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
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
			this->button3->Location = System::Drawing::Point(16, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Очистить всё";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Шаг сплайна:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(113, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"xn:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"x0:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(13, 33);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(90, 13);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Интервал точек:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Очистить поля";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// x3
			// 
			this->x3->Location = System::Drawing::Point(16, 121);
			this->x3->Name = L"x3";
			this->x3->Size = System::Drawing::Size(87, 20);
			this->x3->TabIndex = 2;
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(131, 59);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(66, 20);
			this->x2->TabIndex = 2;
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(40, 59);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(67, 20);
			this->x1->TabIndex = 2;
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
		if ((int)(this)->comboBox1->SelectedIndex != 1)
			this->comboBox1->SelectedIndex = 0;
		switch ((int)this->comboBox1->SelectedIndex)
		{
		case 0: return sin(val);
		case 1:	return cos(val);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//int size = (int)this->numericUpDown1->Value;
		int size;
		double x0, xn, step;
		try
		{
			x0 = Convert::ToDouble(this->x1->Text);
			xn = Convert::ToDouble(this->x2->Text);
			step = Convert::ToDouble(this->x3->Text);
			size = (xn - x0) / step;
			System::FormatException^ exc;
			if (x != nullptr)
				delete[] x;
			if (y != nullptr)
				delete[] y;

			x = new double[size];
			y = new double[size];

			x[0] = x0;
			for (int i = 1; i < size - 1; i++)
				x[i] = x[i - 1] + step;
			x[size - 1] = xn;
		
			/*switch (size)
			{
			case 8: x[7] = Convert::ToDouble(this->x8->Text);
			case 7: x[6] = Convert::ToDouble(this->x7->Text); 
			case 6: x[5] = Convert::ToDouble(this->x6->Text); 
			case 5: x[4] = Convert::ToDouble(this->x5->Text); 
			case 4: x[3] = Convert::ToDouble(this->x4->Text); 
				x[2] = Convert::ToDouble(this->x3->Text); 
				x[1] = Convert::ToDouble(this->x2->Text); 
				x[0] = Convert::ToDouble(this->x1->Text);
			}*/
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Некорректные данные!\nВозможно, не все поля заполнены.\nПроверьте данные и повторите попытку");
			this->status->Text = "Некорректные данные! Возможно, не все поля заполнены. Проверьте данные и повторите попытку";
			return;
		}

		chart1->Series[L"Сплайн"]->Points->Clear();
		chart1->Series[L"Функция"]->Points->Clear();
		//chart1->Series[L"Точки"]->Points->Clear();

		this->status->Text = "Выполняются вычисления";
		for (int i = 0; i < size; i++)
			y[i] = func(x[i]);

		for (int i = 1; i < size; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (x[i] < x[j])
				{
					double tmp_x = x[i], tmp_y = y[i];
					for (int k = i; k > j; k--)
					{
						x[k] = x[k - 1];
						y[k] = y[k - 1];
					}
					x[j] = tmp_x;
					y[j] = tmp_y;
					break;
				}
			}
		}

		for(int i=1;i<size;i++)
			if (x[i - 1] == x[i])
			{
				MessageBox::Show("Некорректные данные!\nНекоторые точки имеют одинаковую координату x.\nПроверьте данные и повторите попытку");
				this->status->Text = "Некоторые точки имеют одинаковую координату x";
				return;
			}

		TCubicSpline* spl = new TCubicSpline();
		spl->MakeSpline(x, y, size);
		
		segment *seg = new segment[size-1];
		spl->GetSpline(seg, size);

		/*switch (size)
		{
		case 8: this->y8->Text = Convert::ToString(y[7]); this->x8->Text = Convert::ToString(x[7]);
		case 7: this->y7->Text = Convert::ToString(y[6]); this->x7->Text = Convert::ToString(x[6]);
		case 6: this->y6->Text = Convert::ToString(y[5]); this->x6->Text = Convert::ToString(x[5]);
		case 5: this->y5->Text = Convert::ToString(y[4]); this->x5->Text = Convert::ToString(x[4]);
		case 4: this->y4->Text = Convert::ToString(y[3]); this->x4->Text = Convert::ToString(x[3]);
			this->y3->Text = Convert::ToString(y[2]); this->x3->Text = Convert::ToString(x[2]);
			this->y2->Text = Convert::ToString(y[1]); this->x2->Text = Convert::ToString(x[1]);
			this->y1->Text = Convert::ToString(y[0]); this->x1->Text = Convert::ToString(x[0]);
		}*/

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
		/*for (int i = 0; i < size; i++)
			chart1->Series[L"Точки"]->Points->AddXY(x[i], y[i]);*/
		err_av *= 0.001 / (max - x[0]);
		this->label20->Text = Convert::ToString(err_av);
		this->label22->Text = Convert::ToString(err_max);
		this->status->Text = "Готово";
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	/*switch ((int)(this->numericUpDown1->Value))
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
	this->status->Text = "Параметры могли быть изменены! Текущий результат может не соответствовать данным параметрам";*/
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	/*this->x8->Text = ""; this->y8->Text = "";
	this->x7->Text = ""; this->y7->Text = "";
	this->x6->Text = ""; this->y6->Text = "";
	this->x5->Text = ""; this->y5->Text = "";
	this->x4->Text = ""; this->y4->Text = "";*/
	this->x3->Text = "";
	this->x2->Text = ""; 
	this->x1->Text = "";

	this->status->Text = "Параметры могли быть изменены! Текущий результат может не соответствовать данным параметрам";
}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		chart1->Series[L"Сплайн"]->Points->Clear();
		chart1->Series[L"Функция"]->Points->Clear();
		//chart1->Series[L"Точки"]->Points->Clear();
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
