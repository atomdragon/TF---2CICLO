#pragma once
#include"Entidad.h"
#include<iostream>
class Enemigo : public Entidad {
private:
	int dir;

	int newX, newY;

	int posX; // Variable para almacenar la coordenada x del enemigo
	int posY; // Variable para almacenar la coordenada y del enemigo

public:
	Enemigo(int _Ancho, int _Alto, int x, int y, int Dir) : Entidad(_Ancho, _Alto), posX(x), posY(y), dir(Dir) {
		this->x = x;
		this->y = y;
		this->dir = Dir;
		posX = x;
		posY = y;

		idx = rand() % 7;
		idy = 0;
		Dx = Dy = 10;
	
	}
	~Enemigo() {}
	void mover(Graphics^ g) {
		switch (dir) {
		case 1:
			if (x < 0 || x + Ancho * 1.0 > g->VisibleClipBounds.Width) { Dx *= -1; }
			if (Dx > 0) {

				idy = 2;
				idx++;
			}
			if (Dx < 0) {

				idy = 1;
				idx++;
			}
			x += Dx;
			break;
		case 2:
			if (y < 0 || y + Alto * 1.0 > g->VisibleClipBounds.Height) { Dy *= -1; }
			if (Dy > 0) {

				idy = 0;
				idx++;
			}
			if (Dy < 0) {

				idy = 3;
				idx++;
			}
			y += Dy;
			break;
		case 5:  // Movimiento en diagonal superior izquierda
			if (x < 0 || y < 0) { Dx *= -1; Dy *= -1; }
			x += Dx;
			y += Dy;
			break;
		case 6:  // Movimiento en diagonal superior derecha
			if (x + Ancho > g->VisibleClipBounds.Width || y < 0) { Dx *= -1; Dy *= -1; }
			x += Dx;
			y += Dy;
			break;
		case 7:  // Movimiento en diagonal inferior izquierda
			if (x < 0 || y + Alto > g->VisibleClipBounds.Height) { Dx *= -1; Dy *= -1; }
			x += Dx;
			y += Dy;
			break;
		case 8:  // Movimiento en diagonal inferior derecha
			if (x + Ancho > g->VisibleClipBounds.Width || y + Alto > g->VisibleClipBounds.Height) { Dx *= -1; Dy *= -1; }
			x += Dx;
			y += Dy;
			break;

		default:break;
		}
		if (idx > 3)idx = 0;
		/*if (x < 0 || x + Ancho * 1.0 > g->VisibleClipBounds.Width) { Dx *= -1; }
		if (y < 0 || y + Alto * 1.0 > g->VisibleClipBounds.Height) { Dy *= -1; }
		x += Dx;
		y += Dy;*/
	}


	void Enemigo::invertirDireccion() {
		Dx *= -1;
		Dy *= -1;
	}

	/*

	int get_pastX() { return newX; }
	int get_pastY() { return newY; }
	*/

};