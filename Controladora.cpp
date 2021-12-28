#include "Controladora.h"

Controladora::Controladora(Graphics^ g)
{
	Inicio = time(0);
	Inicio2 = time(0);
	Inicio3 = time(0);
	Inicio4 = time(0);
	puntaje = 0;
	objMonigote = new Dragon(0, (g->VisibleClipBounds.Height)-150, 1, 1);
	plastico = 0;
	papel = 0;
	basura = 0;
	vidrio = 0;
	tiempo_max = 100;
	int cantidad = 4;
	int pos = 1050;
	perder = false;
	for (int i = 0; i < cantidad; i++) {
		Vida.push_back(new vida(pos, 615, 1, 1));
		pos += 50;
	}
	vida_eliminar = 3;

}

void Controladora::Grabar_Resultado(vector<string> datos) { objMonigote->GrabarArchivo(datos); }

Controladora::~Controladora()
{
}
void Controladora::Insertar_BonusB() {
	System::Random^ r = gcnew System::Random();
	int e;
	float b, c, d;
	e = 50 + rand() % (600 + 1 - 50);
	if (difftime(time(0), Inicio3) > 7)
	{
		bonusbasura.push_back(new BasuraDorada(e, 0, 1, 1));
		Inicio3 = time(0);
	}
}
void Controladora::Dibujar_BonusB(Graphics^ g, Bitmap^ bmp) {
	for (int i = 0; i < bonusbasura.size(); i++)
	{
		bonusbasura.at(i)->Dibujar_desImagen(g, bmp);
		bonusbasura.at(i)->Mover(g);
	}
	for (int i = 0; i < bonusbasura.size(); i++)
	{
		if (bonusbasura.at(i)->retornar_eliminar() == true)
			bonusbasura.erase(bonusbasura.begin() + i);
	}
}
void Controladora::Insertar_Ladrillos() {
	System::Random^ r = gcnew System::Random();
	int a, e, f, g;
	float b, c, d;
	e = 50 + rand() % (600 + 1 - 50);
	f = 50 + rand() % (600 + 1 - 50);
	g = 50 + rand() % (600 + 1 - 50);
	if (difftime(time(0), Inicio4) >= 2)
	{
		ladrillos.push_back(new Ladrillos(e, 0, 1, 1));
		Inicio4 = time(0);
	}
}
void Controladora::Dibujar_Ladrillos(Graphics^ g, Bitmap^ bmp) {
	for (int i = 0; i < ladrillos.size(); i++)
	{
		ladrillos.at(i)->Dibujar_desImagen(g, bmp);
		ladrillos.at(i)->Mover(g);
	}
	for (int i = 0; i < ladrillos.size(); i++)
	{
		if (ladrillos.at(i)->retornar_eliminar() == true)
			ladrillos.erase(ladrillos.begin() + i);
	}
}
void Controladora::Insertar_Basura()
{
	System::Random^ r = gcnew System::Random();
	int a,e,f,g;
	float b,c,d;
	a = 1 + rand() % (4 + 1 - 1);
	b= 1/100 + rand() % (1/10 + 1 - 1/100);
	c = 1 / 100 + rand() % (1 / 10 + 1 - 1 / 100);
	d = 1 / 100 + rand() % (1 / 10 + 1 - 1 / 100);
	e = 50 + rand() % (600 + 1 - 50);
	f = 50 + rand() % (600 + 1 - 50);
	g = 50 + rand() % (600 + 1 - 50);
	int tipo=a;
	if (tipo == 1)
	{
		if (difftime(time(0), Inicio) > b)
		{
			basuras.push_back(new BasuraVerde(e, 0, 1, 1));
			Inicio = time(0);
		}
	}
	if (tipo == 2)
	{
		if (difftime(time(0), Inicio) > c)
		{
			basuras2.push_back(new BasuraRoja(f, 0, 1, 1));
			Inicio = time(0);
		}
	}
	if (tipo == 3)
	{
		if (difftime(time(0), Inicio) > d)
		{
			basuras3.push_back(new BasuraAzul(g, 0, 1, 1));
			Inicio = time(0);
		}
	}
}
void Controladora::vidas(Graphics^ g, Bitmap^ bmp) {
	for (int i = 1; i < Vida.size(); i++)
	{
		Vida.at(i)->Dibujar_desImagen(g, bmp);
	}
	
}
void Controladora::Dibujar_Basura1(Graphics^ g, Bitmap^ bmp)
{
	for (int i = 0; i < basuras.size(); i++)
	{
		basuras.at(i)->Dibujar_desImagen(g, bmp);
		basuras.at(i)->Mover(g);
	}
	for (int i = 0; i < basuras.size(); i++)
	{
		if (basuras.at(i)->retornar_eliminar() == true) {
			basuras.erase(basuras.begin() + i);			
		}
	}
	
	
}

void Controladora::Dibujar_Basura2(Graphics^ g, Bitmap^ bmp)
{
	for (int i = 0; i < basuras2.size(); i++)
	{
		basuras2.at(i)->Dibujar_desImagen(g, bmp);
		basuras2.at(i)->Mover(g);
	}
	for (int i = 0; i < basuras2.size(); i++)
	{
		if (basuras2.at(i)->retornar_eliminar() == true)
			basuras2.erase(basuras2.begin() + i);
	}
}
void Controladora::Dibujar_Basura3(Graphics^ g, Bitmap^ bmp)
{
	for (int i = 0; i < basuras3.size(); i++)
	{
		basuras3.at(i)->Dibujar_desImagen(g, bmp);
		basuras3.at(i)->Mover(g);
	}
	for (int i = 0; i < basuras3.size(); i++)
	{
		if (basuras3.at(i)->retornar_eliminar() == true)
			basuras3.erase(basuras3.begin() + i);
	}
}

void Controladora::Insertar_Reloj()
{
	System::Random^ r = gcnew System::Random();
	int a, e, f, g;
	float b, c, d;
	e = 50 + rand() % (600 + 1 - 50);
	f = 50 + rand() % (600 + 1 - 50);
	g = 50 + rand() % (600 + 1 - 50);
	if (difftime(time(0), Inicio2) > 15)
	{
		arreglo.push_back(new Reloj(e, 0, 1, 1));
		Inicio2 = time(0);
	}

}
void Controladora::Dibujar_Reloj(Graphics^ g, Bitmap^ bmp) {
	for (int i = 0; i < arreglo.size(); i++)
	{
		arreglo.at(i)->Dibujar_desImagen(g, bmp);
		arreglo.at(i)->Mover(g);
	}
	for (int i = 0; i < arreglo.size(); i++)
	{
		if (arreglo.at(i)->retornar_eliminar() == true)
			arreglo.erase(arreglo.begin() + i);
	}
}


void Controladora::Dibujar_Monigote(Graphics^ g, Bitmap^ bmp) {
	objMonigote->Dibujar_desImagen(g, bmp);
	objMonigote->Mover(g);
	Colision();
}
void Controladora::Desplazar_Monigote(direccion nuevo) {
	objMonigote->Desplazamiento(nuevo);
}
bool Controladora::Colision()
{
	Rectangle rmoni = objMonigote->retonar_rectangle();
	bool resultado_colision = false;
	for (int j = 0; !resultado_colision && j < basuras.size(); j++)
	{
		Rectangle rbasura = basuras.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(rbasura))
		{
			resultado_colision = true;
			basuras.erase(basuras.begin() + j);
			vidrio++;
			puntaje += 4;
			basura++;
		}
	}
	for (int j = 0; !resultado_colision && j < basuras2.size(); j++)
	{
		Rectangle rbasura2 = basuras2.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(rbasura2))
		{
			resultado_colision = true;
			basuras2.erase(basuras2.begin() + j);
			plastico++;
			puntaje += 5;
			basura++;
		}
	}
	for (int j = 0; !resultado_colision && j < basuras3.size(); j++)
	{
		Rectangle rbasura3 = basuras3.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(rbasura3))
		{
			resultado_colision = true;
			basuras3.erase(basuras3.begin() + j);
			papel++;
			puntaje += 6;
			basura++;
		}
	}
	for (int j = 0; !resultado_colision && j < arreglo.size(); j++)
	{
		Rectangle rreloj = arreglo.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(rreloj))
		{
			resultado_colision = true;
			arreglo.erase(arreglo.begin() + j);
			tiempo_max+=5;
			
		}
	}
	for (int j = 0; !resultado_colision && j < bonusbasura.size(); j++)
	{
		Rectangle rBonusb = bonusbasura.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(rBonusb))
		{
			resultado_colision = true;
			bonusbasura.erase(bonusbasura.begin() + j);
			plastico+=10;
			papel += 10;
			vidrio += 10;
			puntaje += 30;
			basura += 30;
		}
	}
	for (int j = 0; !resultado_colision && j < ladrillos.size(); j++)
	{
		Rectangle rLadrillos = ladrillos.at(j)->retonar_rectangle();
		if (rmoni.IntersectsWith(rLadrillos))
		{
			resultado_colision = true;
			ladrillos.erase(ladrillos.begin() + j);
			if (vida_eliminar > 0)Vida.erase(Vida.begin() + vida_eliminar);
			if (vida_eliminar > 0)vida_eliminar--;
			if (vida_eliminar == 0)perder = true;
		}
	}
	return resultado_colision;
}
int Controladora::return_vidrio() {
	return vidrio;
}
int Controladora::return_plastico() {
	return plastico;
}
int Controladora::return_papel() {
	return papel;
}
int Controladora::return_puntaje() {
	return puntaje;
}
int Controladora::return_time() {
	return tiempo_max;
}
bool  Controladora::return_perder() {
	return perder;
}
void Controladora::cambiar_eliminar(bool nuevo) {
	perder = nuevo;
}
