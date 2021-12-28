#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(int px, int py, int pw, int ph) :Base(px, py, pw, ph, 4, 4, 0, 0)
{
	int y = rand() % 2;
	int x = rand() % 2;
	if (y == 1) {
		dx = 8;
	}
	else {
		dx = -8;
	}
	if (x == 1) {
		dy = 8;
	}
	else {
		dy = -8;
	}
}

void Enemy::Mover(Graphics^ g)
{
	
	if (x + dx<1 || x + dx + w >= g->VisibleClipBounds.Width-500)dx = dx*-1;
	if (x + dx + w > g->VisibleClipBounds.Width - 500) x = x-100;
	if (y + dy + h > g->VisibleClipBounds.Height + 20) y = y-100;
	if (y + dy<1 || y + dy + h>=g->VisibleClipBounds.Height)dy = dy*-1;
	//if (dx > 0) fil = 2;
	//if (dx < 0) fil = 1;
	//if (dy > 0) fil = 0;
	//if (dy < 0) fil = 3;
	
	if (dx > 0 && dy > 0) fil = 0;
	if (dx > 0 && dy < 0)fil = 3;
	if (dx < 0 && dy>0)fil = 0;
	if (dx < 0 & dy < 0)fil = 3;

	if (dx > 3 && dy > 3) fil = 2;
	 if (dx > 3 && dy < -3)fil = 2;
	 if (dx < -3 && dy > 3)fil = 1;
	 if (dx < -3 && dy < -3)fil = 1;
	x += dx;
	y += dy;
}
