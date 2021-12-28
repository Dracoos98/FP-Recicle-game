#include "Dragon.h"
using namespace System;

Dragon::Dragon()
{
}

Dragon::Dragon(int px, int py, int pw, int ph) :Base(px, py, pw, ph, 4, 4, 0, 0)
{
	dx = 4;
	dy = 4;
	Desplazamiento(direccion::derecha);
}

Dragon::~Dragon()
{
}

void Dragon::Mover(Graphics^ g) {
	if (x + dx<1 || x + dx + w>650) dx = 0;
	if (y + dy<600 || y + dy + h>g->VisibleClipBounds.Height) dy = 0;
	x += dx;
	y += dy;

}
