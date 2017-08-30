#pragma once


namespace Project1 {

	using namespace System;
	using namespace System::Threading;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	public:
		MyForm(void)
		{
			InitializeComponent();
			//read port name to combobox from port1 & port2
			array<String^>^ serialPorts1 = nullptr;
			serialPorts1 = serialPort1->GetPortNames();
			this->comboBox1->Items->AddRange(serialPorts1);
			this->comboBox1->SelectedIndex = 0;
			array<String^>^ serialPorts2 = nullptr;
			serialPorts2 = serialPort2->GetPortNames();
			this->comboBox2->Items->AddRange(serialPorts2);
			this->comboBox2->SelectedIndex = 0;
			//combobox for motor reset
			this->comboBox3->Items->Insert(0,"出發");
			this->comboBox3->Items->Insert(1,"立牌辦識");
			this->comboBox3->Items->Insert(2, "推立牌1");
			this->comboBox3->Items->Insert(3, "推立牌2");
			this->comboBox3->Items->Insert(4, "推立牌3");
			this->comboBox3->Items->Insert(5, "路徑選擇");
			this->comboBox3->Items->Insert(6, "長路徑1");
			this->comboBox3->Items->Insert(7, "長路徑2");
			this->comboBox3->Items->Insert(8, "長路徑3");
			this->comboBox3->Items->Insert(9, "短路徑1");
			this->comboBox3->Items->Insert(10, "短路徑2");
			this->comboBox3->Items->Insert(11, "取筆");
			this->comboBox3->Items->Insert(12, "寫字辨識");
			this->comboBox3->Items->Insert(13, "寫字");
			this->comboBox3->Items->Insert(14, "終點置筆");
			this->comboBox3->SelectedIndex = 0;
		}
	private: Thread^ thread; //new thread for reading OpeMv
	private: System::Windows::Forms::Label^  label6;
	private: Thread^ thread2; //new thread for communicate with arduino control car
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	bool port1_open;
	bool port2_open;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::Button^  button5;
	private:
	public: System::Windows::Forms::ComboBox^  comboBox1;


	public: System::IO::Ports::SerialPort^  serialPort1;
	public: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	public: System::IO::Ports::SerialPort^  serialPort2;
	public: System::Windows::Forms::Timer^  timer2;
	public: System::Windows::Forms::Timer^  timer3;

	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::ComboBox^  comboBox2;
	private:
	public: System::Windows::Forms::Button^  button6;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::TextBox^  textBox1;
	private:

	private: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::ComboBox^  comboBox3;
	private:

	public: System::Windows::Forms::Button^  button7;
	private:


	public:


	public: 
	private: 


	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->serialPort2 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 182);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(26, 212);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(26, 242);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(26, 272);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(244, 41);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Open";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(136, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(102, 20);
			this->comboBox1->TabIndex = 5;
			// 
			// serialPort1
			// 
			this->serialPort1->BaudRate = 115200;
			this->serialPort1->PortName = L"COM8";
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort1_DataReceived);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 12);
			this->label1->TabIndex = 6;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// serialPort2
			// 
			this->serialPort2->BaudRate = 115200;
			this->serialPort2->PortName = L"COM7";
			this->serialPort2->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort2_DataReceive);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(9, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 12);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(136, 84);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(102, 20);
			this->comboBox2->TabIndex = 8;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(244, 82);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Open";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(136, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 12);
			this->label3->TabIndex = 10;
			this->label3->Text = L"OpenMv Port";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(136, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 12);
			this->label4->TabIndex = 11;
			this->label4->Text = L"mortor port";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 131);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(138, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 13;
			this->label5->Text = L"紅點數";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(138, 160);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(100, 20);
			this->comboBox3->TabIndex = 14;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(245, 160);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(59, 23);
			this->button7->TabIndex = 15;
			this->button7->Text = L"reset !";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 12);
			this->label6->TabIndex = 16;
			this->label6->Text = L"label6";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(371, 349);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
			//MessageBox::Show(serialPort1->ReadLine());
	/*if (serialPort1->IsOpen)
	{
		String^ open_num = serialPort1->ReadLine();
		int num = System::Convert::ToInt32(open_num);
		int total_num = total_num + num;
		this->label1->Text = Convert::ToString(num);
	}
	else
	{
		this->label1->Text = "error";
	}
		*/
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //this->label1->Text=Convert::ToString(serialPort1->ReadLine());
		 }
private: System::Void serialPort2_DataReceive(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {

		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 /*this->label1->Text=Convert::ToString(serialPort1->ReadLine());*/
			
			
		 }
private: System::Void timer2_tick(System::Object^  sender, System::EventArgs^  e) {
			 /*this->serialPort2->Write("hello world\n");*/
			
		 }
private: System::Void timer3_tick(System::Object^  sender, System::EventArgs^  e) {
			 //this->label2->Text=Convert::ToString(serialPort3->ReadLine());
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			serialPort1->Close();
			 if (!port1_open) {
				this->serialPort1->PortName=this->comboBox1->Text;
				serialPort1->Open();
				if(serialPort1->IsOpen)
				{
				 this->label1->Text="OpenMV Connect Sucess!";
				 this->button5->Text="Close";
				 port1_open=true;
				}
				else
				{
				 this->label1->Text="OpenMV error";
			    }
				
			} 
			 else { serialPort1->Close();
			     this->label1->Text = "OpenMV disconnect!";
				 this->button5->Text="Open";
				 port1_open=false;}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			serialPort2->Close();
			 if (!port2_open) {
				this->serialPort2->PortName=this->comboBox2->Text;
				serialPort2->Open();
				if(serialPort2->IsOpen)
				{
				 this->label2->Text="Motor Connect Sucess!";
				 this->button6->Text="Close";
				 port2_open=true;
				}
				else
				{
				 this->label2->Text="motor error";
			    }
				
			} 
			 else { serialPort2->Close();
			     this->label2->Text = "motor disconnect!";
				 this->button6->Text="Open";
				 port2_open=false;}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	//new thread
	this->thread =gcnew Thread(gcnew ThreadStart(this, &MyForm::ThreadProcSafe));
	this->thread->Start();
	this->thread2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::ThreadForTrans));
	this->thread2->Start();

	

}
public: int qwe = 0;
public: int total_num = 0;
public: int num = 0;
private:
		void ThreadProcSafe() //openMV read
		{
			while (1)
			{
				if (port1_open)
				{
					String^ open_num = serialPort1->ReadLine();
					num = System::Convert::ToInt32(open_num);
					total_num = total_num + num;
					this->SetText(Convert::ToString(total_num));
					//this->SetText(qwe.ToString());
				}
			}
		}
		delegate void SetTextDelegate(String^ text);
private:
		void SetText(String^ text)
		{
			// InvokeRequired required compares the thread ID of the
			// calling thread to the thread ID of the creating thread.
			// If these threads are different, it returns true.
			if (this->textBox1->InvokeRequired)
			{
				SetTextDelegate^ d =
					gcnew SetTextDelegate(this, &MyForm::SetText);
				this->Invoke(d, gcnew array<Object^> { text });
			}
			else
			{
				this->textBox1->Text = text;
			}
		}
private:
	void ThreadForTrans() //motor
	{
		while (1)
		{
			if (port1_open && port2_open)
			{
				switch(total_num)
				{
				case 1:
					this->serialPort2->Write("2");
					this->Setlabel6("foward!");
					break;
				case 2:
					this->serialPort2->Write("6");
					this->Setlabel6("follow line mode!");
					break;
				case 3:
					this->serialPort2->Write("7");
					this->Setlabel6("left line");
					break;
				case 4:
					this->serialPort2->Write("0");
					this->Setlabel6("stop!");
					break;
				default:
					this->serialPort2->Write("0");
					this->Setlabel6("stop!");
					break;

				}
			}
		}
	}
	delegate void SetlabelDelegate(String^ text);

private:
	void Setlabel6(String^ text)
	{
		if (this->label6->InvokeRequired)
		{
			SetlabelDelegate^ d =
				gcnew SetlabelDelegate(this, &MyForm::Setlabel6);
			this->Invoke(d, gcnew array<Object^> { text });
		}
		else
		{
			this->label6->Text = text;
		}
	}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (port1_open)
	{
		total_num = System::Convert::ToInt32(this->comboBox3->SelectedIndex)+1;
		this->textBox1->Text = Convert::ToString(total_num);
	}
}
};
}
