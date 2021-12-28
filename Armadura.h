#pragma once
#include "Base.h"
class Armadura : public Base
{
public:
	Armadura();
	Armadura(int px, int py, int pw, int ph);
	~Armadura();
	void Mover(Graphics^ g);
};

