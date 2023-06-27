#pragma once
#include "Entidad.h"

class Paredes : public Entidad {
private:

public:
	Paredes(int ancho, int alto, int posix, int posiy) : Entidad(ancho, alto) {
		this->x = posix;
		this->y = posiy;
		idx = idy = 0;
		Dx = Dy = 0;
	}

};