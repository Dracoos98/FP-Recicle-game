#pragma once
#include "Monigote.h"
#include "TachoElectro.h"
#include "TachoMetal.h"
#include "TachoOrganico.h"
#include <iostream>
#include "Obstaculo.h"
#include "Reloj.h"
#include "vida.h"
#include "Enemy.h"
#include "Armadura.h"
#include <vector>
using namespace std;
using namespace System;
class Controladora2
{
private:
	Monigote* objMonigote;
	vector<Base*> Vida;
	TachoElectro* objtelectro;
	TachoMetal* objmetal;
	vector<Enemy*>enemigos;
	TachoOrganico* objorganico;
	vector<Base*> arreglo;
	vector<Base*> BArmadura;
	vector<Base*> Obstaculos;
	int vida_eliminar;
	int puntaje;
	int tiempo_max;
	time_t tiempo_armadura;
	time_t InicioApp2;
	bool perder;
	int cant;
	int vel;
	int proteccion;
	int arm;
	int vidrio;
	bool terminar_juego;
	int papel;
	int plastico;
public:
	Controladora2(Graphics^ g);
	~Controladora2();
	void Dibujar_Monigote(Graphics^ g, Bitmap^ bmp);
	void Desplazar_Monigote(direccion nuevo);
	void Dibujar_Reloj(Graphics^ g, Bitmap^ bmp);
	void Dibujar_Armadura(Graphics^ g, Bitmap^ bmp);
	void cambiar_dx();
	void regresar_dx();
	void vidas(Graphics^ g, Bitmap^ bmp);
	void Dibujar_tachometal(Graphics^ g, Bitmap^ bmp);
	void Dibujar_Enemigos(Graphics^ g, Bitmap^ bmp);
	void Dibujar_tachoorganico(Graphics^ g, Bitmap^ bmp);
	void Dibujar_tachoelectro(Graphics^ g, Bitmap^ bmp);
	void Dibujar_Obstaculos(Graphics^ g, Bitmap^ bmp);
	int return_time();
	int return_puntaje();
	bool Colision(Graphics^ g);
	int return_proteccion();
	void Cambiar_puntaje(int nuevo);
	void Cambiar_vidrio(int nuevo);
	void Cambiar_papel(int nuevo);
	void Cambiar_plastico(int nuevo);
	bool return_perder();
	int return_vidrio();
	int return_papel();
	int return_plastico();
	bool terminar();
	void Grabar_Resultado(vector<string> datos);

};

