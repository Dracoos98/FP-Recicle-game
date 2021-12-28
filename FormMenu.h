#pragma once
#include "MyForm.h"
#include "Nivel2.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stoi;
using namespace std;
using namespace System;
namespace TRABAJOFINALPROGRA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormMenu
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(void)
		{
			InitializeComponent();
			bmpFondoMenu = gcnew Bitmap("fondomenu.jpg");
			bmpUPC = gcnew Bitmap("UPC.png");
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormMenu()
		{
			if (components)
			{
				delete components;
			}
			delete bmpFondoMenu, bmpUPC;
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		Bitmap^ bmpFondoMenu;
		Bitmap^ bmpUPC;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label19;




	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMenu::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
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
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->Location = System::Drawing::Point(296, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(263, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"JUGAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->Location = System::Drawing::Point(296, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(263, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"LEADERBOARD";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->Location = System::Drawing::Point(296, 333);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(263, 47);
			this->button3->TabIndex = 3;
			this->button3->Text = L"CRÉDITOS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button4->Location = System::Drawing::Point(296, 386);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(263, 47);
			this->button4->TabIndex = 4;
			this->button4->Text = L"SALIR";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormMenu::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FormMenu::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label2->Location = System::Drawing::Point(81, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(701, 74);
			this->label2->TabIndex = 6;
			this->label2->Text = L"SALVAR EL MUNDO";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button5->Location = System::Drawing::Point(72, 51);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(719, 91);
			this->button5->TabIndex = 5;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label1->Location = System::Drawing::Point(25, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(555, 101);
			this->label1->TabIndex = 7;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &FormMenu::label1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(269, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(328, 65);
			this->label3->TabIndex = 8;
			this->label3->Text = L"CREADORES:";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &FormMenu::label3_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button6->Location = System::Drawing::Point(296, 386);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(263, 47);
			this->button6->TabIndex = 9;
			this->button6->Text = L"REGRESAR";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &FormMenu::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button7->Location = System::Drawing::Point(296, 280);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(263, 47);
			this->button7->TabIndex = 10;
			this->button7->Text = L"RULES";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &FormMenu::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button8->Location = System::Drawing::Point(296, 333);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(263, 47);
			this->button8->TabIndex = 11;
			this->button8->Text = L"COMENZAR";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &FormMenu::button8_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label4->Location = System::Drawing::Point(72, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(248, 30);
			this->label4->TabIndex = 12;
			this->label4->Text = L"NOMBRE DEL JUGADOR: ";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &FormMenu::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(326, 225);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 20);
			this->textBox1->TabIndex = 13;
			this->textBox1->Visible = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label5->Location = System::Drawing::Point(72, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(248, 30);
			this->label5->TabIndex = 14;
			this->label5->Text = L"PERSONAJE:";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &FormMenu::label5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"PREDETERMINADO", L"ENFERMERO", L"ENCAPUCHADO",
					L"TRABAJADOR", L"LUCHADOR"
			});
			this->comboBox1->Location = System::Drawing::Point(326, 262);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(244, 21);
			this->comboBox1->TabIndex = 15;
			this->comboBox1->Visible = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FormMenu::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label6->Location = System::Drawing::Point(12, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(585, 284);
			this->label6->TabIndex = 16;
			this->label6->Text = resources->GetString(L"label6.Text");
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &FormMenu::label6_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button9->Location = System::Drawing::Point(12, 386);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(263, 47);
			this->button9->TabIndex = 17;
			this->button9->Text = L"SIGUIENTE";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &FormMenu::button9_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label7->Location = System::Drawing::Point(12, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(585, 264);
			this->label7->TabIndex = 18;
			this->label7->Text = resources->GetString(L"label7.Text");
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(326, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(215, 65);
			this->label8->TabIndex = 19;
			this->label8->Text = L"REGLAS";
			this->label8->Visible = false;
			this->label8->Click += gcnew System::EventHandler(this, &FormMenu::label8_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button10->Location = System::Drawing::Point(12, 386);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(263, 47);
			this->button10->TabIndex = 20;
			this->button10->Text = L"ANTERIOR";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &FormMenu::button10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label9->Location = System::Drawing::Point(103, 134);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 27);
			this->label9->TabIndex = 21;
			this->label9->Text = L"label9";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label10->Location = System::Drawing::Point(251, 134);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 27);
			this->label10->TabIndex = 22;
			this->label10->Text = L"label10";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label11->Location = System::Drawing::Point(103, 163);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 27);
			this->label11->TabIndex = 24;
			this->label11->Text = L"label11";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label12->Location = System::Drawing::Point(251, 163);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 27);
			this->label12->TabIndex = 23;
			this->label12->Text = L"label12";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label13->Location = System::Drawing::Point(103, 200);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 27);
			this->label13->TabIndex = 26;
			this->label13->Text = L"label13";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label14->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label14->Location = System::Drawing::Point(251, 200);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 27);
			this->label14->TabIndex = 25;
			this->label14->Text = L"label14";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label15->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label15->Location = System::Drawing::Point(103, 230);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 27);
			this->label15->TabIndex = 28;
			this->label15->Text = L"label15";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label16->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label16->Location = System::Drawing::Point(251, 230);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 27);
			this->label16->TabIndex = 27;
			this->label16->Text = L"label16";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label17->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label17->Location = System::Drawing::Point(103, 259);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(100, 27);
			this->label17->TabIndex = 30;
			this->label17->Text = L"label17";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label18->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label18->Location = System::Drawing::Point(251, 259);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 27);
			this->label18->TabIndex = 29;
			this->label18->Text = L"label18";
			this->label18->Visible = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->Enabled = false;
			this->button11->Location = System::Drawing::Point(37, 88);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(542, 262);
			this->button11->TabIndex = 31;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(256, 9);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(377, 65);
			this->label19->TabIndex = 32;
			this->label19->Text = L"LEADERBOARD";
			this->label19->Visible = false;
			this->label19->Click += gcnew System::EventHandler(this, &FormMenu::label19_Click);
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(854, 445);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Name = L"FormMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		button4->Visible = false;
		button7->Visible = false;
		button8->Visible = true;
		button6->Visible = true;
		label5->Visible = true;
		comboBox1->Visible = true;
		label4->Visible = true;
		textBox1->Visible = true;
	
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = CreateGraphics();
	BufferedGraphicsContext^ espacio = BufferedGraphicsManager::Current;
	BufferedGraphics^ bf = espacio->Allocate(g, ClientRectangle);
	bf->Graphics->DrawImage(bmpFondoMenu, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);	
	bf->Graphics->DrawImage(bmpUPC, 550, 125, 300, 300);
	bf->Render(g);
	delete bf, espacio, g;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Visible = false;
	button2->Visible = false;
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button7->Visible = false;
	label2->Visible = false;
	button6->Visible = true;
	label1->Visible = true;
	label3->Visible = true;


}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Visible = false;
	label3->Visible = false;
	button6->Visible = false;
	label4->Visible = false;
	label8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	label5->Visible = false;
	comboBox1->Visible = false;
	label9->Visible = false;
	label19->Visible = false;
	label10->Visible = false;
	label11->Visible = false;
	label12->Visible = false;
	label13->Visible = false;
	label14->Visible = false;
	label15->Visible = false;
	label16->Visible = false;
	label17->Visible = false;
	label18->Visible = false;
	textBox1->Visible = false;
	button1->Visible = true;
	button2->Visible = true;
	label6->Visible = false;
	label7->Visible = false;
	button8->Visible = false;
	button11->Visible = false;
	button3->Visible = true;
	button4->Visible = true;
	button7->Visible = true;
	button5->Visible = true;
	label2->Visible = true;
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Visible = false;
	label6->Visible = true;
	label8->Visible = true;
	button2->Visible = false;
	button9->Visible = true;
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button7->Visible = false;
	label2->Visible = false;
	button6->Visible = true;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text->Length > 0) {
		if (comboBox1->SelectedIndex == -1) {
			MessageBox::Show("Debe seleccionar una personaje");
		}
		else {
			MyForm^ frm = gcnew MyForm();
			this->Visible = false;
			frm->Cambiar_Nombre_jugador(textBox1->Text);
			frm->Cambiar_tipo(comboBox1->SelectedIndex);
			frm->ShowDialog();
			if (frm->pasar_nivel2() == 1) {
				Nivel2^ form = gcnew Nivel2();
				form->Cambiar_puntaje(frm->regresar_puntaje());
				form->Cambiar_vidrio(frm->return_vidrio());
				form->Cambiar_plastico(frm->return_plastico());
				form->Cambiar_Nombre_jugador(textBox1->Text);
				form->Cambiar_papel(frm->return_papel());
				form->regresar_time();
				form->Cambiar_tipo(comboBox1->SelectedIndex);
				form->ShowDialog();
			}
			this->Visible = true;
		}
	}
	else {
		MessageBox::Show("Debe Ingresar un nombre");
	}
	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	label7->Visible = true;
	label6->Visible = false;
	button9->Visible = false;
	button10->Visible = true;
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	label6->Visible = true;
	label7->Visible = false;
	button9->Visible = true;
	button10->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	string linea;
	int n = 0;
	string aux;
	string aux2;
	vector<string> resultado;
	ifstream miarchivo;
	string leaderboard[5000];
	miarchivo.open("PUNTAJE.TXT", ios::in);
	if (!miarchivo.fail())
	{
		while (!miarchivo.eof())
		{
			getline(miarchivo, linea);
			resultado.push_back(linea);
			leaderboard[n] = linea;
			n++;
		}
		miarchivo.close();
	}
	for (int i = 0; i < n; i++) {
		if (i % 2 != 0) {
			for (int j = i + 2; j <= n - 1; j += 2) {
				if (stoi(leaderboard[i]) < stoi(leaderboard[j])) {
					aux = leaderboard[i];
					aux2 = leaderboard[i - 1];
					leaderboard[i - 1] = leaderboard[j - 1];
					leaderboard[i] = leaderboard[j];
					leaderboard[j - 1] = aux2;
					leaderboard[j] = aux;
				}
			}
		}
	}
	Graphics^ g = CreateGraphics();
	BufferedGraphicsContext^ espacio = BufferedGraphicsManager::Current;
	BufferedGraphics^ bf = espacio->Allocate(g, ClientRectangle);
	System::Drawing::Font^ f = gcnew System::Drawing::Font("Bauhaus 93", 30);
	System::Drawing::SolidBrush^ sb = gcnew System::Drawing::SolidBrush(Color::Black);
	int fa = 300;
	int i = 0;
	button11->Visible = true;
	label9->Visible = true;
	label10->Visible = true;
	label11->Visible = true;
	label12->Visible = true;
	label13->Visible = true;
	label19->Visible = true;
	label14->Visible = true;
	label15->Visible = true;
	label16->Visible = true;
	label17->Visible = true;
	label18->Visible = true;
	label9->Text = "1) " + gcnew String(leaderboard[0].c_str());
	label10->Text = gcnew String(leaderboard[1].c_str());
	label11->Text = "2) " + gcnew String(leaderboard[2].c_str());
	label12->Text = gcnew String(leaderboard[3].c_str());
	label13->Text = "3) " + gcnew String(leaderboard[4].c_str());
	label14->Text = gcnew String(leaderboard[5].c_str());
	label15->Text = "4) " + gcnew String(leaderboard[6].c_str());
	label16->Text = gcnew String(leaderboard[7].c_str());
	label17->Text = "5) " + gcnew String(leaderboard[8].c_str());
	label18->Text = gcnew String(leaderboard[9].c_str());
	button1->Visible = false;
	button2->Visible = false;
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button7->Visible = false;
	label2->Visible = false;
	button6->Visible = true;
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
