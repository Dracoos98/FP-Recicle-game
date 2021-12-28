#pragma once
#include "Base.h"
using namespace System::Drawing;
class Monigote : public Base
{
public:
	Monigote();
	Monigote(int px, int py, int pw, int ph);
	~Monigote();
	void Mover(Graphics^ g);
};

