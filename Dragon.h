#pragma once
#include "Base.h"
using namespace System::Drawing;
class Dragon : public Base
{
public:
	Dragon();
	Dragon(int px, int py, int pw, int ph);
	~Dragon();
	void Mover(Graphics^ g);
};

