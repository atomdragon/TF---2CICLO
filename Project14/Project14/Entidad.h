#pragma once
using namespace System::Drawing;
class Entidad {
protected:
	int x, y;
	int Dx, Dy;
	int Ancho, Alto;
	int idx, idy;
	bool visible;
public:
	Entidad(int _Ancho, int _Alto) {
		Ancho = _Ancho;
		Alto = _Alto;
		visible = true;
	}
	~Entidad() {}
	void dibujar(Graphics^ g, Bitmap^ bmp) {
		Rectangle seccion = Rectangle(idx * Ancho, idy * Alto, Ancho, Alto);
		Rectangle zoom = Rectangle(x, y, Ancho * 1.0, Alto * 1.0);
		g->DrawImage(bmp, zoom, seccion, GraphicsUnit::Pixel);
	}
	virtual void mover() {}

	Rectangle getRectangle() { return Rectangle(x, y, Ancho * 1.0, Alto * 1.0); }
	int getX() { return x; }
	int getY() { return y; }
	int getDx() { return Dx; }
	int getDy() { return Dy; }
	int getAncho() { return Ancho; }
	int getAlto() { return Alto; }
	void setX(int v) { x = v; }
	void setY(int v) { y = v; }
	bool getVisible() { return visible; }
	void setVisible(bool v) { visible = v; }


};
/*int getX() { return x; }
int getY() { return y; }
int getAncho() { return Ancho; }
int getAlto() { return Alto; }*/
