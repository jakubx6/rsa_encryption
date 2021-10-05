//Jakub Bronicki 2016
#pragma once

namespace Enigma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Enigma
	/// </summary>
	public ref class Enigma : public System::Windows::Forms::Form
	{
	public:
		Enigma(void)
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
		~Enigma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label5;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"p";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"q";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Enigma::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(52, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(95, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Enigma::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Input parameters";
			this->label3->Click += gcnew System::EventHandler(this, &Enigma::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(236, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Public key";
			this->label4->Click += gcnew System::EventHandler(this, &Enigma::label4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(238, 63);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(95, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Enigma::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(239, 94);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(95, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Enigma::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(420, 63);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(95, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Enigma::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(420, 94);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(95, 22);
			this->textBox6->TabIndex = 10;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Enigma::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(417, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Private key";
			this->label6->Click += gcnew System::EventHandler(this, &Enigma::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(217, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(217, 61);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 17);
			this->label8->TabIndex = 12;
			this->label8->Text = L"e";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(398, 99);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 17);
			this->label9->TabIndex = 15;
			this->label9->Text = L"n";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(398, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 17);
			this->label10->TabIndex = 14;
			this->label10->Text = L"d";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(30, 134);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 17);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Input text";
			this->label11->Click += gcnew System::EventHandler(this, &Enigma::label11_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(33, 164);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(482, 22);
			this->textBox7->TabIndex = 18;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Enigma::textBox7_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(33, 232);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(482, 22);
			this->textBox10->TabIndex = 22;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Enigma::textBox10_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(30, 202);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(77, 17);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Output text";
			this->label14->Click += gcnew System::EventHandler(this, &Enigma::label14_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(33, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 65);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Key generation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Enigma::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(220, 281);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 65);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Encryption";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Enigma::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(401, 281);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 65);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Decryption";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Enigma::button3_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(42, 39);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 17);
			this->label13->TabIndex = 27;
			this->label13->Text = L"prime numbers >10";
			this->label13->Click += gcnew System::EventHandler(this, &Enigma::label13_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(459, -1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Enigma::button4_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(398, 377);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(136, 17);
			this->linkLabel1->TabIndex = 29;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Jakub Bronicki 2016";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Enigma::linkLabel1_LinkClicked);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1, -1);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 17);
			this->label5->TabIndex = 30;
			this->label5->Text = L"RSA encryption";
			this->label5->Click += gcnew System::EventHandler(this, &Enigma::label5_Click);
			// 
			// Enigma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(535, 403);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Enigma";
			this->Text = L"Enigma";
			this->Load += gcnew System::EventHandler(this, &Enigma::Enigma_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void Enigma_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}


			 //code begin

			 typedef unsigned long long int inti;
			 inti p, q, n, e1, f, d, b, s, r;
			 String^ t;
			 String^ z;

			 inti NWD(inti a, inti b)
			 {
				 while (a != b)
					 if (a>b)
						 a -= b;
					 else
						 b -= a;
				 return a;
			 }

			 inti odwr_mod(inti a, inti k)
			 {
				 int a0, n0, p0, p1, q, r, t;

				 p0 = 0; p1 = 1; a0 = a; n0 = k;
				 q = n0 / a0;
				 r = n0 % a0;
				 while (r > 0)
				 {
					 t = p0 - q * p1;
					 if (t >= 0)
						 t = t % k;
					 else
						 t = k - ((-t) % k);
					 p0 = p1; p1 = t;
					 n0 = a0; a0 = r;
					 q = n0 / a0;
					 r = n0 % a0;
				 }
				 return p1;
			 }

			 inti pot_mod(inti a, inti w, inti n)
			 {
				 inti pot, wyn, q;

				 pot = a; wyn = 1;
				 for (q = w; q > 0; q /= 2)
				 {
					 if (q % 2) wyn = (wyn * pot) % n;
					 pot = (pot * pot) % n;
				 }
				 return wyn;
			 }

			 void tworzenie()
			 {
				 f = (p - 1)*(q - 1);
				 n = p*q;
				 for (e1 = 3; NWD(e1, f) != 1; e1 += 2);
				 d = odwr_mod(e1, f);
			 }

			 void szyfrowanie()
			 {
				 b= t->Length;

				 for (int j = 0; j < b; j++)
				 {
					 d = t[j];
					z=z+ pot_mod(d, e1, n);
					if(j!=b-1)
						z = z + " ";
				 }
			 }

			 void deszyfrowanie()
			 {
				 b = t->Length;

				 for (int j = 0; j < b; j++)
				 {
					 r = 0;
					 while (1)
					 {
						 s = t[j] - 48;
						 if (j != b - 1)
						 {
							 if (t[j + 1] != ' ')
							 {
								 r = r * 10 + s;
								 j++;
							 }
							 else
							 {
								 r = r * 10 + s;
								 j++;
								 break;
							 }
						 }
						 else
						 {
							 r = r * 10 + s;
							 break;
						 }
					 }

					 z = z + System::Convert::ToChar((Int64)pot_mod(r, d, n));
				 }
			 }
			 

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	p= System::Convert::ToInt32(textBox2->Text);
	q= System::Convert::ToInt32(textBox1->Text);
	tworzenie();
	textBox3->Text = System::Convert::ToString(e1);
	textBox4->Text = System::Convert::ToString(n);
	textBox5->Text = System::Convert::ToString(d);
	textBox6->Text = System::Convert::ToString(n);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	e1 = System::Convert::ToInt64(textBox3->Text);
	n = System::Convert::ToInt64(textBox4->Text);
	t = "";
	z = "";
	t = textBox7->Text;
	szyfrowanie();
	textBox10->Text = z;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	d = System::Convert::ToInt64(textBox5->Text);
	n = System::Convert::ToInt64(textBox6->Text);
	t = "";
	z = "";
	t = textBox7->Text;
	deszyfrowanie();
	textBox10->Text = z;
}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox7->Text = "";
		textBox10->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
	}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	System::Diagnostics::Process::Start("http://www.facebook.com/jakubx6");
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
