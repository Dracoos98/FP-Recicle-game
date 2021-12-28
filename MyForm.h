#pragma once
#include "Controladora.h"
#include <conio.h>
namespace TRABAJOFINALPROGRA {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{

			InitializeComponent();
			Graphics^ g = CreateGraphics();
			BufferedGraphicsContext^ espacio = BufferedGraphicsManager::Current;
			BufferedGraphics^ bf = espacio->Allocate(g, ClientRectangle);
			objcontroladora = new Controladora(bf->Graphics);
			bmpreloj = gcnew Bitmap("Reloj1.png");
			dragoncito = gcnew Bitmap("Monigote.png");
			bmpbasuraVerde = gcnew Bitmap("BV.png");
			bmpbasuraRoja = gcnew Bitmap("BR.png");
			bmpbasuraAzul = gcnew Bitmap("BA.png");
			bmpfondo = gcnew Bitmap("Fondo.jpg");
			bmpbasuraDorada = gcnew Bitmap("BD.png");
			bmpvida = gcnew Bitmap("vida.png");
			bmpLadrillo = gcnew Bitmap("ladrillos.png");
			bmpfondoterminar = gcnew Bitmap("fondo_terminar.jpg");
			bmpUPC = gcnew Bitmap("UPC.png");
			bmpTime = gcnew Bitmap("Termino_tiempo.png");
			bmpDerrota = gcnew Bitmap("Derrota.png");
			Enfermero = gcnew Bitmap("Enfermero.png");
			Encapuchado = gcnew Bitmap("Encapuchado.png");
			Luchador = gcnew Bitmap("luchador.png");
			Trabajador = gcnew Bitmap("Trabajador.png");
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete bmpfondoterminar, Enfermero, bmpDerrota, bmpTime, bmpUPC, objcontroladora, bmpreloj, bmpLadrillo, dragoncito, bmpbasuraVerde, objcontroladora, bmpbasuraRoja, bmpbasuraAzul, bmpbasuraDorada, bmpfondo, bmpvida, Luchador, Trabajador, Encapuchado;
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		Controladora* objcontroladora;
		Bitmap^ bmpreloj;
		Bitmap^ bmpfondo;
		Bitmap^ dragoncito;
		Bitmap^ bmpbasuraVerde;
		Bitmap^ bmpbasuraRoja;
		Bitmap^ bmpbasuraAzul;
		Bitmap^ bmpbasuraDorada;
		Bitmap^ bmpvida;
		Bitmap^ bmpUPC;
		Bitmap^ bmpTime;
		Bitmap^ bmpDerrota;
		String^ nombre_jugador;
		int nivel_2 = 0;
		int tipo = 0;
		Bitmap^ bmpLadrillo;
		Bitmap^ bmpfondoterminar;
		Bitmap^ Enfermero;
		Bitmap^ Encapuchado;
		Bitmap^ Luchador;
		Bitmap^ Trabajador;
		time_t InicioApp = time(0);


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 261);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: void Cambiar_Nombre_jugador(String^ nuevo)
	{
		nombre_jugador = nuevo;
	}
	public: void Cambiar_tipo(int nuevo)
	{
		tipo = nuevo;
	}

	public: int pasar_nivel2()
	{
		return nivel_2;
	}
	public: int regresar_puntaje()
	{
		return objcontroladora->return_puntaje();
	}
	public:int return_vidrio() {
		return objcontroladora->return_vidrio();
	}
	public:int return_plastico() {
		return objcontroladora->return_plastico();
	}
	public:int return_papel() {
	    return objcontroladora->return_papel();
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Left) objcontroladora->Desplazar_Monigote(izquierda);
		if (e->KeyCode == Keys::Right) objcontroladora->Desplazar_Monigote(derecha);
		if (e->KeyCode == Keys::Up) objcontroladora->Desplazar_Monigote(arriba);
		if (e->KeyCode == Keys::Down) objcontroladora->Desplazar_Monigote(abajo);

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
		
		Graphics^ g = CreateGraphics();
		BufferedGraphicsContext^ espacio = BufferedGraphicsManager::Current;
		BufferedGraphics^ bf = espacio->Allocate(g, ClientRectangle);
		bf->Graphics->DrawImage(bmpfondo, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
		bf->Graphics->DrawImage(bmpUPC, 1150, 575, 300, 300);
		System::Drawing::Font^ f = gcnew System::Drawing::Font("Bauhaus 93", 30);
		System::Drawing::SolidBrush^ sb = gcnew System::Drawing::SolidBrush(Color::DarkGreen);
		System::Drawing::SolidBrush^ sb1 = gcnew System::Drawing::SolidBrush(Color::Red);
		System::Drawing::SolidBrush^ sb2 = gcnew System::Drawing::SolidBrush(Color::DarkBlue);
		System::Drawing::SolidBrush^ sbd = gcnew System::Drawing::SolidBrush(Color::Black);
		System::Drawing::SolidBrush^ sbed = gcnew System::Drawing::SolidBrush(Color::Black);
		String^ s = "CANTIDAD DE BASURA VIDRIO: ";
		String^ s1 = "CANTIDAD DE BASURA PLASTICO: ";
		String^ s2 = "CANTIDAD DE BASURA PAPEL: ";
		String^ d = "TIEMPO: ";
		String^ xd = "TIEMPO LIMITE: ";
		String^ v = "VIDAS: ";
		String^ pun = "PUNTAJE: ";
		int vidrio = objcontroladora->return_vidrio();
		int puntaje = objcontroladora->return_puntaje();
		int plastico = objcontroladora->return_plastico();
		int papel = objcontroladora->return_papel();
		int tiempo_max = objcontroladora->return_time();
		bf->Graphics->DrawString(pun + puntaje.ToString(), f, sb, 950, 300);
		bf->Graphics->DrawString(s + vidrio.ToString(), f, sb, 950, 350);
		bf->Graphics->DrawString(s1 + plastico.ToString(), f, sb1, 950, 400);
		bf->Graphics->DrawString(s2 + papel.ToString(), f, sb2, 950, 450);
		bf->Graphics->DrawString(d + difftime(time(0), InicioApp).ToString(), f, sbd, 950, 500);
		bf->Graphics->DrawString(xd + tiempo_max.ToString(), f, sbd, 950, 550);
		bf->Graphics->DrawString(v, f, sbd, 950, 600);
		objcontroladora->Insertar_Basura();
		objcontroladora->vidas(bf->Graphics, bmpvida);
		objcontroladora->Dibujar_Basura1(bf->Graphics, bmpbasuraVerde);
		objcontroladora->Dibujar_Basura2(bf->Graphics, bmpbasuraRoja);
		objcontroladora->Insertar_Ladrillos();
		objcontroladora->Dibujar_Ladrillos(bf->Graphics, bmpLadrillo);
		objcontroladora->Dibujar_Basura3(bf->Graphics, bmpbasuraAzul);
		if (tipo == 0) {
			objcontroladora->Dibujar_Monigote(bf->Graphics, dragoncito);
		}
		if (tipo == 1) {
			objcontroladora->Dibujar_Monigote(bf->Graphics, Enfermero);
		}
		if (tipo == 2) {
			objcontroladora->Dibujar_Monigote(bf->Graphics, Encapuchado);
		}
		if (tipo == 3) {
			objcontroladora->Dibujar_Monigote(bf->Graphics, Trabajador);
		}
		if (tipo == 4) {
			objcontroladora->Dibujar_Monigote(bf->Graphics, Luchador);
		}
		objcontroladora->Insertar_BonusB();
		objcontroladora->Dibujar_BonusB(bf->Graphics, bmpbasuraDorada);
		objcontroladora->Insertar_Reloj();
		objcontroladora->Dibujar_Reloj(bf->Graphics, bmpreloj);
		
		if (objcontroladora->return_perder() == true) {
			bf->Graphics->DrawImage(bmpfondoterminar, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
			bf->Graphics->DrawImage(bmpDerrota, 600, 100, 700, 400);
			bf->Graphics->DrawImage(bmpUPC, 700, 500, 500, 500);
			System::Drawing::Font^ per = gcnew System::Drawing::Font("Bauhaus 93",60);
			String^ perder = "PERDISTE! INTENTALO DENUEVO";
			bf->Graphics->DrawString(perder, per, sbed, 450, 500);
			timer1->Enabled = false;
			if (nombre_jugador != " ") {
				char auxiliar[100];
				sprintf(auxiliar, "%s", nombre_jugador);
				vector<string> datos;
				datos.push_back(auxiliar);
				int aux = objcontroladora->return_puntaje();
				datos.push_back(std::to_string(aux));
				objcontroladora->Grabar_Resultado(datos);
			}
		}
		if (difftime(time(0), InicioApp) == objcontroladora->return_time()) {
			bf->Graphics->DrawImage(bmpfondoterminar, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
			bf->Graphics->DrawImage(bmpTime, 1300, 250, 300, 700);
			bf->Graphics->DrawImage(bmpUPC, 700, 500, 500, 500);
			System::Drawing::Font^ per = gcnew System::Drawing::Font("Bauhaus 93", 100);
			String^ time = "SE ACABO EL TIEMPO ";
			bf->Graphics->DrawString(s + vidrio.ToString(), f, sb, 550, 350);
			bf->Graphics->DrawString(s1 + plastico.ToString(), f, sb1, 550, 400);
			bf->Graphics->DrawString(s2 + papel.ToString(), f, sb2, 550, 450);
			bf->Graphics->DrawString(time, per, sbed, 250, 120);
			timer1->Enabled = false;
			nivel_2 = 1;
		}

		bf->Render(g);
		delete bf, espacio, g;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Left) objcontroladora->Desplazar_Monigote(ninguno);
	else if (e->KeyCode == Keys::Right) objcontroladora->Desplazar_Monigote(ninguno);
	else if (e->KeyCode == Keys::Up) objcontroladora->Desplazar_Monigote(ninguno);
	else if (e->KeyCode == Keys::Down) objcontroladora->Desplazar_Monigote(ninguno);
}
};
}
