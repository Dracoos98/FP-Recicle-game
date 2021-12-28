#include "Controladora2.h"
Controladora2::Controladora2(Graphics^ g)
{
	InicioApp2 = time(0);
	objMonigote = new Monigote(1, 1, 1, 1);
	int cantidad = 6;
	cant = 10;
	vel = 0;
	tiempo_armadura = time(0);
	int pos = int(g->VisibleClipBounds.Width - 350);
	for (int i = 0; i < cantidad; i++) {
		Vida.push_back(new vida(pos, 557, 1, 1));
		pos += 50;
	}
	for (int i = 0; i < 8; i++) {
		int posx, posy;
		posx = rand() % int(g->VisibleClipBounds.Width - 600);
		posy = rand() % int(g->VisibleClipBounds.Height - 100);
		Obstaculos.push_back(new Obstaculo(posx, posy, 1, 1));
	}
	for (int i = 0; i < 5; i++) {

		int posx, posy;
		posx = rand() % int(g->VisibleClipBounds.Width - 600);
		posy = rand() % int(g->VisibleClipBounds.Height - 100);
		arreglo.push_back(new Reloj(posx, posy, 1, 1));

	}
	for (int i = 0; i < 5; i++) {
		int posx, posy;
		posx = rand() % int(g->VisibleClipBounds.Width - 600);
		posy = rand() % int(g->VisibleClipBounds.Height - 100);
		BArmadura.push_back(new Armadura(posx, posy, 1, 1));

	}
	for (int i = 0; i < cant; i++)
	{
		int posx, posy;
		posx = rand() % int(g->VisibleClipBounds.Width - 600);
		posy = rand() % int(g->VisibleClipBounds.Height - 100);
		enemigos.push_back(new Enemy(posx, posy, 1, 1));
	}
	System::Random^ r = gcnew System::Random();
	objmetal = new TachoMetal(rand() % int(g->VisibleClipBounds.Width-550), rand() % int(g->VisibleClipBounds.Height-100), 5, 10);
	objorganico = new TachoOrganico(rand() % int(g->VisibleClipBounds.Width - 550), rand() % int(g->VisibleClipBounds.Height - 100), 60, 0);
	objtelectro = new TachoElectro(rand() % int(g->VisibleClipBounds.Width - 550), rand() % int(g->VisibleClipBounds.Height - 100), 0, 5);
	perder = false;
	vida_eliminar = 5;
	terminar_juego = false;
	tiempo_max = 100;
	puntaje = 0;
	proteccion = 0;
	arm = 0;
	vidrio = 0;
	plastico = 0;
	papel = 0;
	
}

Controladora2::~Controladora2()
{
	for (int i = 0; i < enemigos.size(); i++)
	{
		delete enemigos.at(i);
	}
}
void Controladora2::vidas(Graphics^ g, Bitmap^ bmp) {
	for (int i = 1; i < Vida.size(); i++)
	{
		Vida.at(i)->Dibujar_desImagen(g, bmp);
	}

}

void Controladora2::Dibujar_tachoelectro(Graphics^ g, Bitmap^ bmp) {
	objtelectro->Dibujar_desImagen(g, bmp);
}
void Controladora2::Dibujar_tachometal(Graphics^ g, Bitmap^ bmp) {
	objmetal->Dibujar_desImagen(g, bmp);
}
void Controladora2::Dibujar_tachoorganico(Graphics^ g, Bitmap^ bmp) {
	objorganico->Dibujar_desImagen(g, bmp);
}
void Controladora2::Dibujar_Obstaculos(Graphics^ g, Bitmap^ bmp) {
	for (int i = 0; i < Obstaculos.size(); i++)
	{
		Obstaculos.at(i)->Dibujar_desImagen(g, bmp);
	}
}

void Controladora2::Dibujar_Enemigos(Graphics^ g, Bitmap^ bmp)
{
	for (int i = 0; i < enemigos.size(); i++)
	{
		enemigos.at(i)->Dibujar_desImagen(g, bmp);
		enemigos.at(i)->Mover(g);
	}
}

void Controladora2::Dibujar_Monigote(Graphics^ g, Bitmap^ bmp) {
	objMonigote->Dibujar_desImagen(g, bmp);
	objMonigote->Mover(g);
	Colision(g);

}
void Controladora2::Desplazar_Monigote(direccion nuevo) {
	objMonigote->Desplazamiento2(nuevo);
}

bool Controladora2::Colision(Graphics^ g)
{
	Rectangle rmoni = objMonigote->retonar_rectangle();
	bool resultado_colision = false;
	Rectangle rtacho1 = objmetal->retonar_rectangle();
	Rectangle rtacho2 = objorganico->retonar_rectangle();
	Rectangle rtacho3 = objtelectro->retonar_rectangle();
	if (rmoni.IntersectsWith(rtacho1))//azul-papel
	{
		if (papel > 0) {
			objmetal->cambiar_eliminar(true);
			objmetal = new TachoMetal(rand() % int(g->VisibleClipBounds.Width - 550), rand() % int(g->VisibleClipBounds.Height - 100), 5, 10);
			if (vel == 1) {
				puntaje += 20;
			}
			if (vel == 0) {
				puntaje += 10;
			}
			papel--;
		}
	}
	if (rmoni.IntersectsWith(rtacho2))//verde-vidrio
	{
		if (vidrio > 0) {
			objmetal->cambiar_eliminar(true);
			objorganico = new TachoOrganico(rand() % int(g->VisibleClipBounds.Width - 550), rand() % int(g->VisibleClipBounds.Height - 100), 60, 0);
			if (vel == 1) {
				puntaje += 20;
			}
			if (vel == 0) {
				puntaje += 10;
			}
			vidrio--;
		}
	}
	if (rmoni.IntersectsWith(rtacho3))//rojo-plastico
	{
		if (plastico > 0) {
			objmetal->cambiar_eliminar(true);
			objtelectro = new TachoElectro(rand() % int(g->VisibleClipBounds.Width - 550), rand() % int(g->VisibleClipBounds.Height - 100), 0, 5);
			if (vel == 1) {
				puntaje += 20;
			}
			if (vel == 0) {
				puntaje += 10;
			}
			plastico--;
		}
	}
	for (int j = 0; !resultado_colision && j < enemigos.size(); j++)
	{
		Rectangle renemigos = enemigos.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(renemigos))
		{
			if (proteccion == 0) {
				resultado_colision = true;
				enemigos.erase(enemigos.begin() + j);
				int posx, posy;
				posx = rand() % int(g->VisibleClipBounds.Width - 550);
				posy = rand() % int(g->VisibleClipBounds.Height - 100);
				enemigos.push_back(new Enemy(posx, posy, 1, 1));
				if (vida_eliminar > 0)Vida.erase(Vida.begin() + vida_eliminar);
				if (vida_eliminar > 0)vida_eliminar--;
				if (vida_eliminar == 0)perder = true;
			}
		}
	}
	for (int j = 0; !resultado_colision && j < arreglo.size(); j++)
	{
		Rectangle rreloj = arreglo.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(rreloj))
		{
			resultado_colision = true;
			arreglo.erase(arreglo.begin() + j);
			tiempo_max += 20;

		}
	}
	for (int j = 0; !resultado_colision && j < BArmadura.size(); j++)
	{
		Rectangle rArmadura = BArmadura.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(rArmadura))
		{
			if (proteccion == 0) {
				resultado_colision = true;
				BArmadura.erase(BArmadura.begin() + j);
				proteccion = 1;
			}
			

		}
	}
	for (int j = 0; !resultado_colision && j < Obstaculos.size(); j++)
	{
		Rectangle rObstaculos = Obstaculos.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(rObstaculos))
		{
			objMonigote->cambiar_direccion();
		}
	}
	if (proteccion == 1) {
		if (arm == 0) {
			tiempo_armadura = time(0);
		}
		arm=1;
		if (difftime(time(0), tiempo_armadura) > 10) {
			proteccion = 0;
			arm = 0;
		}
	}
	return resultado_colision;
}
void Controladora2::cambiar_dx() {
	if (vel == 0) {
		for (int i = 0; i < enemigos.size(); i++)
		{
			enemigos.at(i)->cambiar_dx();
		}
	}
	vel=1;
	
}
void Controladora2::regresar_dx() {
	if (vel == 1) {
		for (int i = 0; i < enemigos.size(); i++)
		{
			enemigos.at(i)->regresar_dx();
		}
	}
	vel = 0;
}

void Controladora2::Dibujar_Reloj(Graphics^ g, Bitmap^ bmp) {
	for (int i = 0; i < arreglo.size(); i++)
	{
		arreglo.at(i)->Dibujar_desImagen(g, bmp);
	}
	for (int i = 0; i < arreglo.size(); i++)
	{
		if (arreglo.at(i)->retornar_eliminar() == true)
			arreglo.erase(arreglo.begin() + i);
	}
}
void Controladora2::Dibujar_Armadura(Graphics^ g, Bitmap^ bmp) {
	for (int i = 0; i < BArmadura.size(); i++)
	{
		BArmadura.at(i)->Dibujar_desImagen(g, bmp);
	}
}
int Controladora2::return_time() {
	return tiempo_max;
}
int Controladora2::return_puntaje() {
	return puntaje;
}
int Controladora2::return_proteccion() {
	return proteccion;
}
void Controladora2::Cambiar_puntaje(int nuevo) {
	puntaje = nuevo;
}
void Controladora2::Cambiar_vidrio(int nuevo) {
	vidrio = nuevo;
}
void Controladora2::Cambiar_plastico(int nuevo) {
	plastico = nuevo;
}
void Controladora2::Cambiar_papel(int nuevo) {
	papel = nuevo;
}
int Controladora2::return_vidrio() {
	return vidrio;
}
int Controladora2::return_plastico() {
	return plastico;
}
int Controladora2::return_papel() {
	return papel;
}
bool  Controladora2::return_perder() {
	return perder;
}
bool Controladora2::terminar() {
	if ((vidrio == 0 & papel == 0 & plastico == 0)) terminar_juego = true;
	return terminar_juego;
}
void Controladora2::Grabar_Resultado(vector<string> datos) { objMonigote->GrabarArchivo(datos); }