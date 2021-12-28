#pragma once
#include "Controladora2.h"
namespace TRABAJOFINALPROGRA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Nivel2
	/// </summary>
	public ref class Nivel2 : public System::Windows::Forms::Form
	{
	public:
		Nivel2(void)
		{
			InitializeComponent();
			Graphics^ g = CreateGraphics();
			BufferedGraphicsContext^ espacio = BufferedGraphicsManager::Current;
			BufferedGraphics^ bf = espacio->Allocate(g, ClientRectangle);
			objcontroladora2 = new Controladora2(bf->Graphics);
			dragoncito = gcnew Bitmap("Monigote2.png");
			bmpenemigo = gcnew Bitmap("Enemigo.png");
			bmpreloj = gcnew Bitmap("Reloj1.png");
			bmpenemigo2 = gcnew Bitmap("Enemigo2.png");
			bmpTachoMetal = gcnew Bitmap("bametal.png");
			bmpfondoterminar = gcnew Bitmap("fondo_terminar.jpg");
			bmpUPC = gcnew Bitmap("UPC.png");
			bmpvida = gcnew Bitmap("vida.png");
			bmpTachoOrganico = gcnew Bitmap("baorganicos.png");
			bmpTachoElectro = gcnew Bitmap("baelectro.png");
			bmpfondo = gcnew Bitmap("Fondo_Nivel2.jpg");
			bmpfondonoche = gcnew Bitmap("fondo_noche.jpeg");
			Enfermero = gcnew Bitmap("Enfermero2.png");
			bmpTime = gcnew Bitmap("Termino_tiempo.png");
			Encapuchado = gcnew Bitmap("Encapuchado2.png");
			Luchador = gcnew Bitmap("luchador2.png");
			bmpDerrota = gcnew Bitmap("Derrota.png");
			Trabajador = gcnew Bitmap("Trabajador2.png");
			Sol = gcnew Bitmap("Sol.png");
			Luna = gcnew Bitmap("Luna.png");
			Armadura = gcnew Bitmap("BonusArmadura.png");
			bmpObstaculo = gcnew Bitmap("obstaculo.png");
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Nivel2()
		{
			if (components)
			{
				delete components;
			}
			delete  objcontroladora2, bmpObstaculo,Armadura, bmpTime, bmpDerrota, bmpfondoterminar, Enfermero, bmpfondonoche, bmpreloj, bmpTachoMetal, Sol, Luna, bmpTachoOrganico, bmpTachoElectro, bmpvida, bmpenemigo, bmpenemigo2, dragoncito, bmpfondo, bmpUPC, Luchador, Trabajador, Encapuchado;
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		Controladora2* objcontroladora2;
		Bitmap^ bmpTachoMetal;
		Bitmap^ bmpvida;
		Bitmap^ bmpTachoOrganico;
		Bitmap^ bmpTime;
		Bitmap^ bmpTachoElectro;
		Bitmap^ bmpreloj;
		Bitmap^ dragoncito;
		Bitmap^ bmpUPC;
		Bitmap^ bmpenemigo;
		Bitmap^ bmpenemigo2;
		Bitmap^ bmpfondo;
		Bitmap^ bmpfondoterminar;
		Bitmap^ Armadura;
		Bitmap^ bmpfondonoche;
		Bitmap^ bmpObstaculo;
		time_t InicioApp = time(0);
		time_t InicioApp2 = time(0);
		Bitmap^ Enfermero;
		Bitmap^ Encapuchado;
		Bitmap^ Luchador;
		Bitmap^ Trabajador;
		Bitmap^ Sol;
		Bitmap^ Luna;
		Bitmap^ bmpDerrota;
		String^ nombre_jugador;
		int tipo = 0;

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
			this->timer1->Tick += gcnew System::EventHandler(this, &Nivel2::timer1_Tick);
			// 
			// Nivel2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"Nivel2";
			this->Text = L"Nivel2";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Nivel2::Nivel2_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: void Cambiar_tipo(int nuevo)
	{
		tipo = nuevo;
	}
	public: void Cambiar_puntaje(int nuevo)
	{
		objcontroladora2->Cambiar_puntaje(nuevo);
	}
	public: void Cambiar_vidrio(int nuevo)
	{
		objcontroladora2->Cambiar_vidrio(nuevo);
	}
	public: void Cambiar_plastico(int nuevo)
	{
		objcontroladora2->Cambiar_plastico(nuevo);
	}
	public: void Cambiar_papel(int nuevo)
	{
		objcontroladora2->Cambiar_papel(nuevo);
	}
	public: void regresar_time()
	{
		InicioApp = time(0);
		InicioApp2 = time(0);
	}
	public: void Cambiar_Nombre_jugador(String^ nuevo)
	{
		nombre_jugador = nuevo;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = CreateGraphics();
		BufferedGraphicsContext^ espacio = BufferedGraphicsManager::Current;
		BufferedGraphics^ bf = espacio->Allocate(g, ClientRectangle);
		if (difftime(time(0), InicioApp2) > 15) {
			bf->Graphics->DrawImage(bmpfondonoche, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
		}
		if (difftime(time(0), InicioApp2) <= 15) {
			bf->Graphics->DrawImage(bmpfondo, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
		}
		if (difftime(time(0), InicioApp2) >= 30) {
			bf->Graphics->DrawImage(bmpfondo, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
		}

		bf->Graphics->DrawImage(bmpUPC, (int)bf->Graphics->VisibleClipBounds.Width - 400, 615, 300, 300);
		String^ s = "VIDRIO: ";
		String^ s1 = "PLASTICO: ";
		String^ s2 = "PAPEL: ";
		String^ d = "TIEMPO: ";
		String^ xd = "TIEMPO LIMITE: ";
		String^ v = "VIDAS: ";
		String^ pun = "PUNTAJE: ";
		int tiempo_max = objcontroladora2->return_time();
		int vidrio = objcontroladora2->return_vidrio();
		int plastico = objcontroladora2->return_plastico();
		int papel = objcontroladora2->return_papel();
		int puntaje = objcontroladora2->return_puntaje();
		System::Drawing::Font^ f = gcnew System::Drawing::Font("Bauhaus 93", 30);
		System::Drawing::SolidBrush^ sb = gcnew System::Drawing::SolidBrush(Color::DarkGreen);
		System::Drawing::SolidBrush^ sb1 = gcnew System::Drawing::SolidBrush(Color::Red);
		System::Drawing::SolidBrush^ sb2 = gcnew System::Drawing::SolidBrush(Color::DarkBlue);
		System::Drawing::SolidBrush^ sbd = gcnew System::Drawing::SolidBrush(Color::Black);
		System::Drawing::SolidBrush^ sbed = gcnew System::Drawing::SolidBrush(Color::Black);
		bf->Graphics->DrawString(s + vidrio.ToString(), f, sb, bf->Graphics->VisibleClipBounds.Width - 450, 250);
		bf->Graphics->DrawString(s1 + plastico.ToString(), f, sb1, bf->Graphics->VisibleClipBounds.Width - 450, 300);
		bf->Graphics->DrawString(s2 + papel.ToString(), f, sb2, bf->Graphics->VisibleClipBounds.Width - 450, 350);
		bf->Graphics->DrawString(pun + puntaje.ToString(), f, sb, bf->Graphics->VisibleClipBounds.Width - 450, 400);
		bf->Graphics->DrawString(d + difftime(time(0), InicioApp).ToString(), f, sbd, bf->Graphics->VisibleClipBounds.Width - 450, 450);
		bf->Graphics->DrawString(xd + tiempo_max.ToString(), f, sbd, bf->Graphics->VisibleClipBounds.Width - 450, 500);
		bf->Graphics->DrawString(v, f, sbd, bf->Graphics->VisibleClipBounds.Width - 450, 550);
		objcontroladora2->Dibujar_tachoelectro(bf->Graphics, bmpTachoElectro);
		objcontroladora2->vidas(bf->Graphics, bmpvida);
		objcontroladora2->Dibujar_Reloj(bf->Graphics, bmpreloj);
		objcontroladora2->Dibujar_Armadura(bf->Graphics, Armadura);
		objcontroladora2->Dibujar_Obstaculos(bf->Graphics, bmpObstaculo);
		objcontroladora2->Dibujar_tachometal(bf->Graphics, bmpTachoMetal);
		if (tipo == 0) {
			objcontroladora2->Dibujar_Monigote(bf->Graphics, dragoncito);
		}
		if (tipo == 1) {
			objcontroladora2->Dibujar_Monigote(bf->Graphics, Enfermero);
		}
		if (tipo == 2) {
			objcontroladora2->Dibujar_Monigote(bf->Graphics, Encapuchado);
		}
		if (tipo == 3) {
			objcontroladora2->Dibujar_Monigote(bf->Graphics, Trabajador);
		}
		if (tipo == 4) {
			objcontroladora2->Dibujar_Monigote(bf->Graphics, Luchador);
		}
		if (objcontroladora2->return_proteccion() == 1) {
			bf->Graphics->DrawImage(Armadura, (int)bf->Graphics->VisibleClipBounds.Width - 115, 120, 50, 50);
		}
		objcontroladora2->Dibujar_tachoorganico(bf->Graphics, bmpTachoOrganico);
		if (difftime(time(0), InicioApp2) > 15) {
			objcontroladora2->Dibujar_Enemigos(bf->Graphics, bmpenemigo2);
			objcontroladora2->cambiar_dx();
			bf->Graphics->DrawImage(Luna, (int)bf->Graphics->VisibleClipBounds.Width - 300, 125, 100, 100);
		}
		if (difftime(time(0), InicioApp2) <= 15) {
			objcontroladora2->Dibujar_Enemigos(bf->Graphics, bmpenemigo);
			objcontroladora2->regresar_dx();
			bf->Graphics->DrawImage(Sol, (int)bf->Graphics->VisibleClipBounds.Width - 300, 125, 100, 100);
		}
		if (difftime(time(0), InicioApp2) >= 30) {
			InicioApp2 = time(0);
			objcontroladora2->regresar_dx();
			bf->Graphics->DrawImage(Sol, (int)bf->Graphics->VisibleClipBounds.Width - 300, 125, 100, 100);
		}
		if (difftime(time(0), InicioApp) == objcontroladora2->return_time()) {
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
			if (nombre_jugador != " ") {
				char auxiliar[100];
				sprintf(auxiliar, "%s", nombre_jugador);
				vector<string> datos;
				datos.push_back(auxiliar);
				int aux = objcontroladora2->return_puntaje();
				datos.push_back(std::to_string(aux));
				objcontroladora2->Grabar_Resultado(datos);
			}
		}
		if (objcontroladora2->terminar() == true) {
			bf->Graphics->DrawImage(bmpfondoterminar, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
			bf->Graphics->DrawImage(bmpTime, 1300, 250, 300, 700);
			bf->Graphics->DrawImage(bmpUPC, 700, 500, 500, 500);
			System::Drawing::Font^ per = gcnew System::Drawing::Font("Bauhaus 93", 85);
			String^ bolsas = "YA NO TIENES MAS BOLSAS ";
			bf->Graphics->DrawString(s + "0", f, sb, 550, 350);
			bf->Graphics->DrawString(s1 + "0", f, sb1, 550, 400);
			bf->Graphics->DrawString(s2 + "0", f, sb2, 550, 450);
			bf->Graphics->DrawString(bolsas, per, sbed, 250, 120);
			timer1->Enabled = false;
			if (nombre_jugador != " ") {
				char auxiliar[100];
				sprintf(auxiliar, "%s", nombre_jugador);
				vector<string> datos;
				datos.push_back(auxiliar);
				int aux = objcontroladora2->return_puntaje();
				datos.push_back(std::to_string(aux));
				objcontroladora2->Grabar_Resultado(datos);
			}
		}
		if (objcontroladora2->return_perder() == true) {
			bf->Graphics->DrawImage(bmpfondoterminar, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
			bf->Graphics->DrawImage(bmpDerrota, 600, 100, 700, 400);
			bf->Graphics->DrawImage(bmpUPC, 700, 500, 500, 500);
			System::Drawing::Font^ per = gcnew System::Drawing::Font("Bauhaus 93", 60);
			String^ perder = "PERDISTE! INTENTALO DENUEVO";
			bf->Graphics->DrawString(perder, per, sbed, 450, 500);
			timer1->Enabled = false;
			if (nombre_jugador != " ") {
				char auxiliar[100];
				sprintf(auxiliar, "%s", nombre_jugador);
				vector<string> datos;
				datos.push_back(auxiliar);
				int aux = objcontroladora2->return_puntaje();
				datos.push_back(std::to_string(aux));
				objcontroladora2->Grabar_Resultado(datos);
			}
		}
		bf->Render(g);
		delete bf, espacio, g;
	}
	private: System::Void Nivel2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Left) objcontroladora2->Desplazar_Monigote(izquierda);
		if (e->KeyCode == Keys::Right) objcontroladora2->Desplazar_Monigote(derecha);
		if (e->KeyCode == Keys::Up) objcontroladora2->Desplazar_Monigote(arriba);
		if (e->KeyCode == Keys::Down) objcontroladora2->Desplazar_Monigote(abajo);
	}
	};
}
