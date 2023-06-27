#pragma once
#include<ctime>
#include"Constructor.h"
#include "FormPreguntaMath.h"
#include "File.h"



namespace Project14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		int numEnemigos;
	
		Graphics^ g;
		BufferedGraphicsContext^ espacio;
		BufferedGraphics^ buffer;
		Bitmap^ bmpenemigo;
		Bitmap^ bmpfondo;
		Bitmap^ bmpdoctor;
		Bitmap^ bmpvacuna;
		Bitmap^ bmpPared;
		Bitmap^ bmpParedhorizontal;
		Bitmap^ bmpParedalargada;
		Bitmap^ bmpParedhorizontalalargada;
		Bitmap^ bmpParedhorizontalalargada02;
		File* file;


	private: System::Windows::Forms::Timer^ tmrMain;
		   Constructor* constructor;
		   MyForm^ controller;
	private: System::Windows::Forms::Label^ lblvidas;

	public:
		MyForm(void)
		{
			srand((unsigned int)time(NULL));
			InitializeComponent();
			g = this->CreateGraphics();
			espacio = BufferedGraphicsManager::Current;
			buffer = espacio->Allocate(g, this->ClientRectangle);
			bmpenemigo = gcnew Bitmap("Virus_01.png");
			bmpfondo = gcnew Bitmap("Fondo_Hospital01.png");
			bmpdoctor = gcnew Bitmap("Doctor_01.png");
			bmpvacuna = gcnew Bitmap("Jeringa_01.png");
			bmpPared = gcnew Bitmap("Paredes.png");
			bmpParedhorizontal = gcnew Bitmap("Paredes_Horizontales.png");
			bmpParedalargada = gcnew Bitmap("Paredes_Alargadas_02.png");
			bmpParedhorizontalalargada = gcnew Bitmap("Paredes_Horizontales_Alargadas.png");
			bmpParedhorizontalalargada02 = gcnew Bitmap("Paredes_Horizontales_Alargadas_02.png");
			file = new File();
			file->Cargar_Datos();
			


			constructor = new Constructor(bmpdoctor, bmpvacuna, bmpPared, bmpParedhorizontal, bmpParedalargada,bmpParedhorizontalalargada, bmpParedhorizontalalargada02, file->getX1(), file->getY1(), file->getX2(), file->getY2(), file->getX3(), file->getY3(), file->getX4(), file->getY4(), file->getX5(), file->getY5(), file->getX6(), file->getY6(), file->getX7(), file->getY7(), file->getX8(), file->getY8(), file->getX9(), file->getY9(), file->getX10(), file->getY10(), file->getX11(), file->getY11(), file->getX12(), file->getY12(), file->getX13(), file->getY13(), file->getX14(), file->getY14(), file->getX15(), file->getY15(), file->getX16(), file->getY16(), file->getX17(), file->getY17());
			//
			//TODO: agregar código de constructor aquí
			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tmrMain = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblvidas = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();



			// lblvidas
			// 
			this->lblvidas->AutoSize = true;
			this->lblvidas->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblvidas->Location = System::Drawing::Point(12, 9);
			this->lblvidas->Name = L"lblvidas";
			this->lblvidas->Size = System::Drawing::Size(58, 24);
			this->lblvidas->TabIndex = 0;
			this->lblvidas->Text = L"Vidas";
			// 



			// 
			// tmrMain
			// 
			this->tmrMain->Enabled = true;
			this->tmrMain->Tick += gcnew System::EventHandler(this, &MyForm::tmrMain_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 642);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);


		}
#pragma endregion
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode) {
		case Keys::T: {
			Enemigo* en = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 230, 250, 2);
			Enemigo* en2 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 350, 200, 2);
			Enemigo* en3 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 600, 320, 1);
			Enemigo* en4 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 700, 120, 5);
			Enemigo* en5 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 100, 120, 5);
			Enemigo* en6 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 70,400, 1);

			constructor->agregar_enemigos(en);
			constructor->agregar_enemigos(en2);
			constructor->agregar_enemigos(en3);
			constructor->agregar_enemigos(en4);
			constructor->agregar_enemigos(en5);
			constructor->agregar_enemigos(en6);
			break;
		}
		case Keys::Left: constructor->getDoctor()->mover(buffer->Graphics, 75); break;
		
		case Keys::Right: constructor->getDoctor()->mover(buffer->Graphics, 77); break;
		case Keys::Up: constructor->getDoctor()->mover(buffer->Graphics, 72); break;
		case Keys::Down: constructor->getDoctor()->mover(buffer->Graphics, 80); break;
		case Keys::Escape:
			this->Close();
			break;
		case Keys::F: 
			Enemigo* en = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 230, 250, 2);
			Enemigo* en2 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 330, 150, 2);
			Enemigo* en3 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 500, 320, 1);
			Enemigo* en4 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 700, 120, 5);
			Enemigo* en5 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 100, 120, 5);
			Enemigo* en6 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 70, 400, 1);
			Enemigo* en7 = new Enemigo(bmpenemigo->Width / 4, bmpenemigo->Height / 4, 450, 450, 2);

			constructor->agregar_enemigos(en);
			constructor->agregar_enemigos(en2);
			constructor->agregar_enemigos(en3);
			constructor->agregar_enemigos(en4);
			constructor->agregar_enemigos(en5);
			constructor->agregar_enemigos(en6);
			constructor->agregar_enemigos(en7);

			break;
		}

	}
	private: System::Void tmrMain_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::White);
		constructor->colision_elementos(buffer->Graphics);
		constructor->mover_elementos(buffer->Graphics);
		buffer->Graphics->DrawImage(bmpfondo, 0, 0, this->Width, this->Height);
		constructor->imprimirCantVacunas(buffer->Graphics);
		constructor->imprimirCantVidas(buffer->Graphics);
		constructor->dibujar_elementos(buffer->Graphics, bmpenemigo, bmpdoctor, bmpvacuna, bmpPared, bmpParedhorizontal, bmpParedalargada, bmpParedhorizontalalargada, bmpParedhorizontalalargada02);
		buffer->Render(g);
		constructor->colision_enemigos(buffer->Graphics);
		lblvidas->Text = "VIDAS:  " + constructor->getDoctor()->getVidas();


		if (constructor->get_Realizar_Pregunta()) {
			tmrMain->Stop();

			FormPreguntaMath^ pregunta = gcnew FormPreguntaMath();
			pregunta->setNivel(2);
			pregunta->ShowDialog();
			if (pregunta->getCorrect_Incorrecto()) {
				constructor->Doc_menos_vida();
			}
			constructor->set_Realizar_Pregunta(false);
			tmrMain->Start();
		}

		if (constructor->getDoctor()->getVidas() == 0) {
			this->tmrMain->Enabled = false;
			MessageBox::Show("PERDISTE");
			Close();
		}

		if (constructor->get_nvacunas() == 0)
		{
			this->tmrMain->Enabled = false;
			MessageBox::Show("You Win");
			Close();
		}
	}
	};
}