#pragma once
#include "Entidad.h"
#include<iostream>
class Doctor : public Entidad
{

private:
	int vidas;
	char direccion;
	int inicioX, inicioY;

	int newX, newY;


public:
	Doctor(int ancho, int alto) :Entidad(ancho, alto) {

		x = 650;
		y = 570;
		Dx = Dy = 15;
		idx = idy = 0;
		vidas =  3;
		inicioX = x;
		inicioY = y;

		newX = 0;

		newY = 0;

	}
	~Doctor() {}

	void mover(Graphics^ g, char tecla) {
		switch (tecla)
		{
		case 75:
			if (x > 0) {
				
				newX = x;
				x -= Dx;
				idy = 1;

				
			}
			break;

		case 77:
			if (x + Ancho * 1.0 < g->VisibleClipBounds.Width) {
				newX = x;
				x += Dx;
				idy = 2;
				
			}
			break;

		case 72:
			if (y > 0) {

				newY = y;
				y -= Dy;
				idy = 3;

				
			}
			break;

		case 80:
			if (y + Alto * 1.0 < g->VisibleClipBounds.Height) {
				newY = y;
				y += Dy;
				idy = 0;
				
			}
			break;
		}
		idx++;
		if (idx > 2) { idx = 0; }
	}


	void quitar_Vidas() { vidas--; }
	int getVidas() { return vidas; }
	void setVidas(int v) { vidas = v; }
	int getInicioX() { return inicioX; }
	int getInicioY() { return inicioY; }

	int getpastX() { return newX; }
	int getpastY() { return newY;  }
	char getDireccion() { return direccion; }
	void setDireccion(char v) { direccion = v; }
	Rectangle getRectangle() { return Rectangle(x, y, Ancho, Alto); }
};
