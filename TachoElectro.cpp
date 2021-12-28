#include "TachoElectro.h"
TachoElectro::TachoElectro(){}
TachoElectro::TachoElectro(int px, int py, int pw, int ph)  :Base(px, py, pw, ph, 1, 1, 0, 0)
{
	fraccion_movimientoY = 5; 
	fraccion_movimientoX = 5;
}
TachoElectro::~TachoElectro(){}
