#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

class File
{
private:

	ofstream fileWrite;
	ifstream fileRead;
	string texto;

	int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, x12, y12, x13, y13, x14, y14, x15, y15, x16, y16, x17, y17;



public:
	File() {}
	~File() {}


	void Cargar_Datos() {

		fileRead.open("Position.txt", ios::in);

		if (fileRead.fail())
		{
			fileRead.close();

			fileWrite.open("Position.txt", ios::out);
			fileWrite << "30" << endl;
			fileWrite << "100" << endl;
			fileWrite << "30" << endl;
			fileWrite << "150" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "400" << endl;
			fileWrite << "200" << endl;
			fileWrite << "200" << endl;
			fileWrite << "200" << endl;
			fileWrite << "200" << endl;
			fileWrite.close();

			fileRead.open("Position.txt", ios::in);




		}

		getline(fileRead, texto);
		x1 = atoi(texto.c_str());
		getline(fileRead, texto);
		y1 = atoi(texto.c_str());
		getline(fileRead, texto);
		x2 = atoi(texto.c_str());
		getline(fileRead, texto);
		y2 = atoi(texto.c_str());
		getline(fileRead, texto);
		x3 = atoi(texto.c_str());
		getline(fileRead, texto);
		y3 = atoi(texto.c_str());
		getline(fileRead, texto);
		x4 = atoi(texto.c_str());
		getline(fileRead, texto);
		y4 = atoi(texto.c_str());
		getline(fileRead, texto);
		x5 = atoi(texto.c_str());
		getline(fileRead, texto);
		y5 = atoi(texto.c_str());
		getline(fileRead, texto);
		x6 = atoi(texto.c_str());
		getline(fileRead, texto);
		y6 = atoi(texto.c_str());
		getline(fileRead, texto);
		x7 = atoi(texto.c_str());
		getline(fileRead, texto);
		y7 = atoi(texto.c_str());
		getline(fileRead, texto);
		x8 = atoi(texto.c_str());
		getline(fileRead, texto);
		y8 = atoi(texto.c_str());
		getline(fileRead, texto);
		x9 = atoi(texto.c_str());
		getline(fileRead, texto);
		y9 = atoi(texto.c_str());
		getline(fileRead, texto);
		x10 = atoi(texto.c_str());
		getline(fileRead, texto);
		y10 = atoi(texto.c_str());
		getline(fileRead, texto);
		x11 = atoi(texto.c_str());
		getline(fileRead, texto);
		y11 = atoi(texto.c_str());
		getline(fileRead, texto);
		x12 = atoi(texto.c_str());
		getline(fileRead, texto);
		y12 = atoi(texto.c_str());
		getline(fileRead, texto);
		x13 = atoi(texto.c_str());
		getline(fileRead, texto);
		y13 = atoi(texto.c_str());
		getline(fileRead, texto);
		x14 = atoi(texto.c_str());
		getline(fileRead, texto);
		y14 = atoi(texto.c_str());
		getline(fileRead, texto);
		x15 = atoi(texto.c_str());
		getline(fileRead, texto);
		y15 = atoi(texto.c_str());
		getline(fileRead, texto);
		x16 = atoi(texto.c_str());
		getline(fileRead, texto);
		y16 = atoi(texto.c_str());
		getline(fileRead, texto);
		x17 = atoi(texto.c_str());
		getline(fileRead, texto);
		y17 = atoi(texto.c_str());
		fileRead.close();


	}


	int getX1() { return x1; }
	int getY1() { return y1; }

	int getX2() { return x2; }
	int getY2() { return y2; }

	int getX3() { return x3; }
	int getY3() { return y3; }

	int getX4() { return x4; }
	int getY4() { return y4; }

	int getX5() { return x5; }
	int getY5() { return y5; }


	int getX6() { return x6; }
	int getY6() { return y6; }

	int getX7() { return x7; }
	int getY7() { return y7; }

	int getX8() { return x8; }
	int getY8() { return y8; }

	int getX9() { return x9; }
	int getY9() { return y9; }

	int getX10() { return x10; }
	int getY10() { return y10; }


	int getX11() { return x11; }
	int getY11() { return y11; }
	int getX12() { return x12; }
	int getY12() { return y12; }


	int getX13() { return x13; }
	int getY13() { return y13; }

	int getX14() { return x14; }
	int getY14() { return y14; }

	int getX15() { return x15; }
	int getY15() { return y15; }

	int getX16() { return x16; }
	int getY16() { return y16; }

	int getX17() { return x17; }
	int getY17() { return y17; }



};
