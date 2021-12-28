#pragma once
#include "Base.h"
class Reloj : public Base
{
public:
	Reloj();
	Reloj(int px, int py, int pw, int ph);
	~Reloj();
	void Mover(Graphics^ g);
};
