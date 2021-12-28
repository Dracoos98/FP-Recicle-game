#include "Monigote.h"
Monigote::Monigote() {

}
Monigote::Monigote(int px, int py, int pw, int ph) :Base(px, py, pw, ph, 4, 4, 0, 0) {
	dx = 4;
	dy = 4;
	Desplazamiento2(direccion::derecha);
}
Monigote::~Monigote() {

}
void Monigote::Mover(Graphics^ g) {
	if (x + dx < 1 || x + dx + w>g->VisibleClipBounds.Width-520) dx = 0;
	if (y + dy < 1 || y + dy + h>g->VisibleClipBounds.Height) dy = 0;
	x += dx;
	y += dy;
}