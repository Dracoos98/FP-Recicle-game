#pragma once
#include "Base.h"
class Ladrillos : public Base
{
public:
	Ladrillos();
	~Ladrillos();
	Ladrillos(int px, int py, int pw, int ph);
	void Mover(Graphics^ g);
};

