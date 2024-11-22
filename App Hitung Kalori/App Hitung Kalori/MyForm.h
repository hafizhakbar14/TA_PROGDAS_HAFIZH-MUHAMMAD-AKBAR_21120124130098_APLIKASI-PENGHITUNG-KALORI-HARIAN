#pragma once
#include "MyForm.h"

namespace AppHitungKalori {

	using namespace System;
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
			//
			//TODO: Add the constructor code here
			//
		}

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;


	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(35, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(35, 161);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"\r\n";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(28, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(480, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Hitung Kalori Harianmu";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(35, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(68, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Tambah";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(343, 122);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(262, 137);
			this->listBox1->TabIndex = 6;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(553, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Hapus Terakhir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Unispace", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(32, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Makanan";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Unispace", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(32, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Kalori per 100gr";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(35, 260);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"\r\n";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Unispace", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(340, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(206, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Riwayat Makan Hari Ini";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(35, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Set Batas";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Cursor = System::Windows::Forms::Cursors::Default;
			this->label6->Font = (gcnew System::Drawing::Font(L"Unispace", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(340, 243);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 18);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Total Kalori:";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(496, 276);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(12, 377);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 19);
			this->label7->TabIndex = 19;
			this->label7->Text = L"waktu";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Unispace", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(32, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 18);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Batas Kalori:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(483, 335);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 38);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Summary";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(239, 102);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(57, 26);
			this->textBox3->TabIndex = 21;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Unispace", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(236, 81);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 18);
			this->label8->TabIndex = 22;
			this->label8->Text = L"gr";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(655, 405);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Daily Calorie Tracker";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
// Modul yang diterapkan:
// Modul 1 Variabel, Tipe Data dan Array
// Modul 2 Pengkondisian
// Modul 3 Perulangan
// Modul 4 Function & Method
// Modul 7 Stack & Queue
// Modul 8 Graphical User Interface (GUI)

#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Collections::Generic::Stack<System::Tuple<System::String^, int>^>^ makananStack =
		gcnew System::Collections::Generic::Stack<System::Tuple<System::String^, int>^>(); 
	int totalKalori = 0;  // Modul 1 Variabel, Tipe Data dan Array  

private:
	int batasKalori = 2000; // nilai default


private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	DateTime now = DateTime::Now;

	System::Globalization::CultureInfo^ culture = gcnew System::Globalization::CultureInfo("id-ID");

	String^ hari = now.ToString("dddd", culture); // hari 
	String^ tanggal = now.ToString("dd MMMM yyyy"); // tanggal 
	String^ waktu = now.ToString("HH:mm:ss"); // waktu 

	label7->Text = hari + ", " + tanggal + " - " + waktu;
}


private: System::Windows::Forms::Timer^ timer1;

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = "Batas Kalori: " + batasKalori.ToString() + " Kkal";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// ambil nilai dari textBox1 dan textBox2
	String^ namaMakanan = textBox1->Text;
	String^ jumlahKaloriStr = textBox2->Text;
	String^ jumlahGramStr = textBox3->Text;

	// makanan dan kalori tidak boleh kosong 
	if (String::IsNullOrWhiteSpace(namaMakanan) || String::IsNullOrWhiteSpace(jumlahKaloriStr) || String::IsNullOrWhiteSpace(jumlahGramStr)) {
		MessageBox::Show("Semua Kolom belum terisi!", "Peringatan",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return; //Modul 2 Pengkondisian
	}

	// konversi jumlah kalori ke angka
	int jumlahKalori100;
	try {
		jumlahKalori100 = Int32::Parse(jumlahKaloriStr);
	}
	catch (...) {
		MessageBox::Show("Jumlah kalori harus berupa angka!", "Peringatan",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	int jumlahGram;
	try {
		jumlahGram = Int32::Parse(jumlahGramStr);
	}
	catch (...) {
		MessageBox::Show("Jumlah gram harus berupa angka!", "Peringatan",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	int jumlahKalori = (jumlahKalori100 * jumlahGram) / 100;

	String^ formatMakanan = namaMakanan + " " + jumlahGram + " gr" + " - " + jumlahKalori.ToString() + " Kkal";

	// masukkan data ke stack
	makananStack->Push(gcnew System::Tuple<System::String^, int>(namaMakanan, jumlahKalori)); //Modul 7 Stack & Queue
	
	listBox1->Items->Add(formatMakanan);

	// Perbarui total kalori
	totalKalori += jumlahKalori;
	label6->Text = "Total Kalori: " + totalKalori.ToString() + " Kkal";

	// Berikan peringatan jika melebihi batas kalori
	if (totalKalori > batasKalori) {
		MessageBox::Show("Total kalori melebihi batas! Kurangi konsumsi makanan.", "Peringatan",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	// reset input setelah data ditambahkan
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();

	textBox1->Focus();
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// cek apakah stack makanan kosong
	if (makananStack->Count == 0) {
		MessageBox::Show("Tidak ada data untuk dihapus!", "Info",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	System::Tuple<System::String^, int>^ itemTerakhir = makananStack->Peek();

	// kurangi jumlah kalori dari totalKalori
	totalKalori -= itemTerakhir->Item2;

	// perbarui label total kalori
	label6->Text = "Total Kalori: " + totalKalori + " Kkal";

	makananStack->Pop();

	if (listBox1->Items->Count > 0) {
		listBox1->Items->RemoveAt(listBox1->Items->Count - 1);
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// ambil teks dari textbox4
	String^ batasKaloriStr = textBox4->Text;

	int angkaKalori;
	try {
		angkaKalori = Int32::Parse(batasKaloriStr);
	}
	catch (...) {
		MessageBox::Show("Batas kalori hanya boleh berupa angka!", "Peringatan",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	batasKalori = angkaKalori;

	label4->Text = "Batas Kalori: " + batasKalori.ToString() + " Kkal";

	textBox4->Clear();

	if (String::IsNullOrWhiteSpace(batasKaloriStr)) {
		MessageBox::Show("Batas kalori harus diisi!", "Peringatan",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;

	
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	makananStack->Clear();

	listBox1->Items->Clear();

	totalKalori = 0;

	label6->Text = "Total Kalori: " + totalKalori.ToString() + " Kkal";
}

private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	DateTime now = DateTime::Now;
	System::Globalization::CultureInfo^ culture = gcnew System::Globalization::CultureInfo("id-ID");
	String^ hari = now.ToString("dddd", culture); 
	String^ tanggal = now.ToString("dd MMMM yyyy", culture);

	// judul
	String^ summary = "Ringkasan Konsumsi Hari Ini\n";
	summary += "Hari: " + hari + "\n";
	summary += "Tanggal: " + tanggal + "\n\n";

	// periksa apakah ada makanan yang dikonsumsi
	if (makananStack->Count == 0) {
		summary += "Belum ada makanan yang dikonsumsi hari ini.\n";
	}
	else {
		// tampilkan daftar makanan dan total kalori
		summary += "Makanan yang Dikonsumsi:\n";
		for each (auto item in makananStack) {
			summary += "- " + item->Item1 + " (" + item->Item2.ToString() + " Kkal)\n"; // Modul 3 Perulangan
		}
		summary += "\nTotal Kalori: " + totalKalori.ToString() + " Kkal\n";

		if (totalKalori > batasKalori + 100) {
			summary += "Status: Melebihi toleransi batas kalori (" + batasKalori.ToString() + " Kkal).\n";
		}
		else if (totalKalori < batasKalori - 100) {
			summary += "Status: Di bawah toleransi batas kalori (" + batasKalori.ToString() + " Kkal).\n";
		}
		else {
			summary += "Status: Sesuai toleransi batas kalori (" + batasKalori.ToString() + " Kkal).\n";
		}
	}

	// tampilkan
	MessageBox::Show(summary, "Summary", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
