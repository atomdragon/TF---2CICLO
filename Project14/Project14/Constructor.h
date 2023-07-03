#pragma once
#include"Enemigo.h"
#include"Doctor.h"
#include"Vacuna.h"
#include"Paredes.h"
#include<vector>

using namespace std;
class Constructor {
private:
	int nvacunas;
	int inventVacunas;

	bool Realizar_Pregunta = false;

	int nvidas;

	vector<Enemigo*>ArrEnemigos;
	vector<Vacuna*>ArrVacunas;
	vector<Paredes*>paredes;
	vector<Paredes*>paredes_horizontales;
	vector<Paredes*>paredes_alargadas;
	vector<Paredes*>paredes_horizontales_alargadas;
	vector<Paredes*>paredes_horizontales_alargadas02;
	Doctor* doctor;

public:
	Constructor(Bitmap^ bmpdoctor, Bitmap^ bmpvacuna, Bitmap^ bmpPared, Bitmap^ bmpParedhorizontal, Bitmap^ bmpParedalargada, Bitmap^ bmpParedhorizontalalargada, Bitmap^ bmpParedhorizontalalargada02, int posiX1, int posiY1, int posiX2, int posiY2, int posiX3, int posiY3, int posiX4, int posiY4, int posiX5, int posiY5, int posiX6, int posiY6, int posiX7, int posiY7, int posiX8, int posiY8, int posiX9, int posiY9, int posiX10, int posiY10, int posiX11, int posiY11, int posiX12, int posiY12, int posiX13, int posiY13, int posiX14, int posiY14, int posiX15, int posiY15, int posiX16, int posiY16, int posiX17, int posiY17) : ArrEnemigos() {
		nvacunas = rand() % 15 + 10;
		doctor = new Doctor(bmpdoctor->Width / 4, bmpdoctor->Height / 4);
		for (int i = 0; i < nvacunas; ++i) {
			ArrVacunas.push_back(new Vacuna(bmpvacuna->Width / 4, bmpvacuna->Height));
		}

		for (int i = 0; i < 1; i++)
		{
			paredes.push_back(new Paredes(bmpPared->Width, bmpPared->Height, posiX1, posiY1));
			paredes.push_back(new Paredes(bmpPared->Width, bmpPared->Height, posiX2, posiY2));
			paredes.push_back(new Paredes(bmpPared->Width, bmpPared->Height, posiX3, posiY3));
			paredes_horizontales.push_back(new Paredes(bmpParedhorizontal->Width, bmpParedhorizontal->Height, posiX4, posiY4));
			paredes_horizontales.push_back(new Paredes(bmpParedhorizontal->Width, bmpParedhorizontal->Height, posiX5, posiY5));
			paredes_alargadas.push_back(new Paredes(bmpParedalargada->Width, bmpParedalargada->Height, posiX6, posiY6));
			paredes_alargadas.push_back(new Paredes(bmpParedalargada->Width, bmpParedalargada->Height, posiX7, posiY7));
			paredes_alargadas.push_back(new Paredes(bmpParedalargada->Width, bmpParedalargada->Height, posiX8, posiY8));
			paredes_alargadas.push_back(new Paredes(bmpParedalargada->Width, bmpParedalargada->Height, posiX9, posiY9));
			paredes_alargadas.push_back(new Paredes(bmpParedalargada->Width, bmpParedalargada->Height, posiX10, posiY10));
			paredes_alargadas.push_back(new Paredes(bmpParedalargada->Width, bmpParedalargada->Height, posiX17, posiY17));
			paredes_horizontales_alargadas.push_back(new Paredes(bmpParedhorizontalalargada->Width, bmpParedhorizontalalargada->Height, posiX11, posiY11));
			paredes_horizontales_alargadas.push_back(new Paredes(bmpParedhorizontalalargada->Width, bmpParedhorizontalalargada->Height, posiX12, posiY12));
			paredes_horizontales_alargadas02.push_back(new Paredes(bmpParedhorizontalalargada02->Width, bmpParedhorizontalalargada02->Height, posiX13, posiY13));
			paredes_horizontales_alargadas02.push_back(new Paredes(bmpParedhorizontalalargada02->Width, bmpParedhorizontalalargada02->Height, posiX14, posiY14));
			paredes_horizontales_alargadas02.push_back(new Paredes(bmpParedhorizontalalargada02->Width, bmpParedhorizontalalargada02->Height, posiX15, posiY15));
			paredes_horizontales_alargadas02.push_back(new Paredes(bmpParedhorizontalalargada02->Width, bmpParedhorizontalalargada02->Height, posiX16, posiY16));


		}





	}



	~Constructor() {
		delete doctor;
		for (unsigned int i = 0; i < ArrEnemigos.size(); ++i) {
			delete ArrEnemigos[i];
		}
		for (unsigned int i = 0; i < ArrVacunas.size(); ++i) {
			delete ArrVacunas[i];
		}
		ArrEnemigos.clear();
		ArrVacunas.clear();
	}
	void agregar_enemigos(Enemigo* nuevo) {
		ArrEnemigos.push_back(nuevo);
		
	
	}




	void dibujar_elementos(Graphics^ g, Bitmap^ bmpenemigo, Bitmap^ bmpdoctor, Bitmap^ bmpvacuna, Bitmap^ bmpPared, Bitmap^ bmpParedhorizontal, Bitmap^ bmpParedalargada, Bitmap^ bmpParedhorizontalalargada, Bitmap^ bmpParedhorizontalalargada02) {
		doctor->dibujar(g, bmpdoctor);
		for (unsigned int i = 0; i < ArrEnemigos.size(); ++i) {
			ArrEnemigos[i]->dibujar(g, bmpenemigo);
		}
		for (unsigned int i = 0; i < ArrVacunas.size(); ++i) {
			ArrVacunas[i]->dibujar(g, bmpvacuna);
		}

		for (unsigned int i = 0; i < paredes.size(); ++i)
		{

			paredes[i]->dibujar(g, bmpPared);

		}

		for (unsigned int i = 0; i < paredes_horizontales.size(); ++i)
		{

			paredes_horizontales[i]->dibujar(g, bmpParedhorizontal);

		}

		for (unsigned int i = 0; i < paredes_alargadas.size(); ++i)
		{

			paredes_alargadas[i]->dibujar(g, bmpParedalargada);

		}


		for (unsigned int i = 0; i < paredes_horizontales_alargadas.size(); ++i)
		{

			paredes_horizontales_alargadas[i]->dibujar(g, bmpParedhorizontalalargada);

		}

		for (unsigned int i = 0; i < paredes_horizontales_alargadas02.size(); ++i)
		{

			paredes_horizontales_alargadas02[i]->dibujar(g, bmpParedhorizontalalargada02);

		}


	}
	void mover_elementos(Graphics^ g) {


		for (unsigned int i = 0; i < ArrEnemigos.size(); ++i) {
			ArrEnemigos[i]->mover(g);
		}
		for (unsigned int i = 0; i < ArrVacunas.size(); ++i) {
			ArrVacunas[i]->mover();
		}



	}


	void colision_elementos(Graphics^ g) {

		for (unsigned int i = 0; i < ArrVacunas.size(); ++i) {
			if (doctor->getRectangle().IntersectsWith(ArrVacunas.at(i)->getRectangle())) {
				ArrVacunas.at(i)->setVisible(false);
				Realizar_Pregunta = true;
				nvacunas--;
			}
		}
		//se borra
		for (unsigned int i = 0; i < ArrVacunas.size(); ++i) {
			if (!ArrVacunas.at(i)->getVisible()) ArrVacunas.erase(ArrVacunas.begin() + i);
		}

		//Paredes


		for (int i = 0; i < paredes.size(); i++)
		{
			if (doctor->getRectangle().IntersectsWith(paredes.at(i)->getRectangle()))
			{
				doctor->setX(doctor->getpastX());
				doctor->setY(doctor->getpastY());

			}

			

			for (unsigned int j = 0; j < ArrEnemigos.size(); ++j) {
				if (ArrEnemigos.at(j)->getRectangle().IntersectsWith(paredes.at(i)->getRectangle())) {
					// Si hay colisión entre un enemigo y una pared, se invierte la dirección del enemigo
					ArrEnemigos.at(j)->invertirDireccion();
				}
			}

		

		}



		//Paredes Horizontales

		for (int i = 0; i < paredes_horizontales.size(); i++)
		{

			if (doctor->getRectangle().IntersectsWith(paredes_horizontales.at(i)->getRectangle()))
			{

				doctor->setX(doctor->getpastX());
				doctor->setY(doctor->getpastY());

			};

			for (unsigned int j = 0; j < ArrEnemigos.size(); ++j) {
				if (ArrEnemigos.at(j)->getRectangle().IntersectsWith(paredes_horizontales.at(i)->getRectangle())) {
					// Si hay colisión entre un enemigo y una pared, se invierte la dirección del enemigo
					ArrEnemigos.at(j)->invertirDireccion();
				}
			}



		}


		for (int i = 0; i < paredes_alargadas.size(); i++)
		{

			if (doctor->getRectangle().IntersectsWith(paredes_alargadas.at(i)->getRectangle()))
			{

				doctor->setX(doctor->getpastX());
				doctor->setY(doctor->getpastY());

			};

			for (unsigned int j = 0; j < ArrEnemigos.size(); ++j) {
				if (ArrEnemigos.at(j)->getRectangle().IntersectsWith(paredes_alargadas.at(i)->getRectangle())) {
					// Si hay colisión entre un enemigo y una pared, se invierte la dirección del enemigo
					ArrEnemigos.at(j)->invertirDireccion();
				}
			}



		}



		for (int i = 0; i < paredes_horizontales_alargadas.size(); i++)
		{

			if (doctor->getRectangle().IntersectsWith(paredes_horizontales_alargadas.at(i)->getRectangle()))
			{

				doctor->setX(doctor->getpastX());
				doctor->setY(doctor->getpastY());

			};

			for (unsigned int j = 0; j < ArrEnemigos.size(); ++j) {
				if (ArrEnemigos.at(j)->getRectangle().IntersectsWith(paredes_horizontales_alargadas.at(i)->getRectangle())) {
					// Si hay colisión entre un enemigo y una pared, se invierte la dirección del enemigo
					ArrEnemigos.at(j)->invertirDireccion();
				}
			}



		}



		for (int i = 0; i < paredes_horizontales_alargadas02.size(); i++)
		{

			if (doctor->getRectangle().IntersectsWith(paredes_horizontales_alargadas02.at(i)->getRectangle()))
			{

				doctor->setX(doctor->getpastX());
				doctor->setY(doctor->getpastY());

			};

			for (unsigned int j = 0; j < ArrEnemigos.size(); ++j) {
				if (ArrEnemigos.at(j)->getRectangle().IntersectsWith(paredes_horizontales_alargadas02.at(i)->getRectangle())) {
					// Si hay colisión entre un enemigo y una pared, se invierte la dirección del enemigo
					ArrEnemigos.at(j)->invertirDireccion();
				}
			}



		}

	}




	void imprimirCantVacunas(Graphics^ g) {
		g->DrawString("Cantidad de vacunas: " + nvacunas.ToString(), gcnew Font("Arial", 20), Brushes::White, 100, 0);
	}

	void imprimirCantVidas(Graphics^ g) {

		nvidas = doctor->getVidas();

		g->DrawString("Vidas: " + nvidas.ToString(), gcnew Font("Arial", 20), Brushes::White, 470, 0);

	}


	void colision_enemigos(Graphics^ g) {



		for (int i = 0; i < ArrEnemigos.size(); i++)
		{
			if (doctor->getRectangle().IntersectsWith(ArrEnemigos.at(i)->getRectangle())) {
				doctor->setVisible(false);
				doctor->setX(doctor->getInicioX());
				doctor->setY(doctor->getInicioY());
				doctor->quitar_Vidas();

			}
		}


	}



	bool get_Realizar_Pregunta() {
		return Realizar_Pregunta;
	}

	void set_Realizar_Pregunta(bool valor) {
		Realizar_Pregunta = valor;
	}
	void Doc_menos_vida() {
		doctor->quitar_Vidas();
	}


	Doctor* getDoctor() { return doctor; }
};