#pragma once
#include "BasuraVerde.h"
#include "BasuraRoja.h"
#include "BasuraAzul.h"
#include "BasuraDorada.h"
#include "Dragon.h"
#include "Reloj.h"
#include "vida.h"
#include "Ladrillos.h"
#include <vector>
#include <time.h>
using namespace std;
class Controladora
{
private:
	Dragon* objMonigote;
	time_t Inicio;
	vector<Base*> basuras;
	vector<Base*> basuras2;
	vector<Base*> basuras3;
	time_t Inicio2;
	time_t Inicio3;
	vector<Base*> arreglo;
	vector<Base*> Vida;
	vector<Base*> bonusbasura;
	vector<Base*> ladrillos;
	time_t Inicio4;
	int plastico;
	int papel;
	int basura;
	int vidrio;
	int tiempo_max;
	int vida_eliminar;
	int puntaje;
	bool perder;
public:
	Controladora(Graphics^ g);
	~Controladora();
	void Insertar_Basura();
	void Dibujar_Basura1(Graphics^ g, Bitmap^ bmp);
	void Dibujar_Basura2(Graphics^ g, Bitmap^ bmp);
	void Dibujar_Basura3(Graphics^ g, Bitmap^ bmp);
	void Insertar_Reloj();
	void Dibujar_Reloj(Graphics^ g, Bitmap^ bmp);
	void Insertar_BonusB();
	void Dibujar_BonusB(Graphics^ g, Bitmap^ bmp);
	void Insertar_Ladrillos();
	void Dibujar_Ladrillos(Graphics^ g, Bitmap^ bmp);
	void vidas(Graphics^ g, Bitmap^ bmp);
	void Dibujar_Monigote(Graphics^ g, Bitmap^ bmp);
	void Desplazar_Monigote(direccion nuevo);
	bool Colision();
	int return_plastico();
	int return_papel();
	int return_puntaje();
	int return_vidrio();
	int return_time();
	bool return_perder();
	void cambiar_eliminar(bool nuevo);
	void Grabar_Resultado(vector<string> datos);
};

