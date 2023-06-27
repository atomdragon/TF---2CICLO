#pragma once
#include"Entidad.h"
#include<iostream>
class Vacuna : public Entidad {
private:
	bool visible;
public:
	Vacuna(int _Ancho, int _Alto) : Entidad(_Ancho, _Alto) {
		x = rand() % 600 + 10;
		y = rand() % 600 + 10;
		idx = idy = 0;
		Dx = Dy = 0;
	}
	~Vacuna() {}
	void mover() {
		idx++;
		if (idx > 3)idx = 0;
	}
	Rectangle getRectangle() { return Rectangle(x, y, Ancho, Alto); }
	void setVisible(bool _visible) { visible = _visible; }
	bool getVisible() { return visible; }
};