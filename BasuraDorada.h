#pragma once
#include "Base.h"
class BasuraDorada : public Base
{
public:
	BasuraDorada();
	~BasuraDorada();
	BasuraDorada(int px, int py, int pw, int ph);
	void Mover(Graphics^ g);
};

