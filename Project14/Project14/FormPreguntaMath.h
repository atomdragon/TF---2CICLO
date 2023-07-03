#pragma once
#include "iostream"
#include "string"

namespace Project14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormPreguntaMath
	/// </summary>
	public ref class FormPreguntaMath : public System::Windows::Forms::Form
	{
	public:
		FormPreguntaMath(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			Correct_Incorrecto = false;
			cerrar = false;
			nivel = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormPreguntaMath()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblpregunta;
	private: System::Windows::Forms::TextBox^ txbrespuesta;
	private: System::Windows::Forms::Button^ btnrespuesta;
	private: System::ComponentModel::Container^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


	private:
		bool Correct_Incorrecto;
		double respuesta;
		bool cerrar;
		int nivel;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPreguntaMath::typeid));
			this->lblpregunta = (gcnew System::Windows::Forms::Label());
			this->txbrespuesta = (gcnew System::Windows::Forms::TextBox());
			this->btnrespuesta = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblpregunta
			// 
			this->lblpregunta->AutoSize = true;
			this->lblpregunta->BackColor = System::Drawing::Color::Gray;
			this->lblpregunta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblpregunta->ForeColor = System::Drawing::Color::White;
			this->lblpregunta->Location = System::Drawing::Point(93, 44);
			this->lblpregunta->Name = L"lblpregunta";
			this->lblpregunta->Size = System::Drawing::Size(23, 32);
			this->lblpregunta->TabIndex = 0;
			this->lblpregunta->Text = L"-";
			// 
			// txbrespuesta
			// 
			this->txbrespuesta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbrespuesta->Location = System::Drawing::Point(71, 92);
			this->txbrespuesta->Name = L"txbrespuesta";
			this->txbrespuesta->Size = System::Drawing::Size(144, 38);
			this->txbrespuesta->TabIndex = 1;
			// 
			// btnrespuesta
			// 
			this->btnrespuesta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnrespuesta->Location = System::Drawing::Point(90, 156);
			this->btnrespuesta->Name = L"btnrespuesta";
			this->btnrespuesta->Size = System::Drawing::Size(111, 36);
			this->btnrespuesta->TabIndex = 2;
			this->btnrespuesta->Text = L"Comprobar";
			this->btnrespuesta->UseVisualStyleBackColor = true;
			this->btnrespuesta->Click += gcnew System::EventHandler(this, &FormPreguntaMath::btnrespuesta_Click);
			// 
			// FormPreguntaMath
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->btnrespuesta);
			this->Controls->Add(this->txbrespuesta);
			this->Controls->Add(this->lblpregunta);
			this->DoubleBuffered = true;
			this->Name = L"FormPreguntaMath";
			this->Text = L"Pregunta";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormPreguntaMath::FormPreguntaMath_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormPreguntaMath::FormPreguntaMath_Load);
			this->ResumeLayout(false);
			this->PerformLayout();


		}
		void pregunta_matematica(int n)
		{
			double n1 = rand() % 10;
			double n2 = rand() % 10;
			int aux1;
			String^ aux;
			double aux2;
			int dificultad = 0;
			if (n == 1) {
				dificultad = 1 + rand() % 2;
			}
			if (n == 2) {
				dificultad = 1 + rand() % 3;
			}
			switch (dificultad)
			{
			case 1:
				aux = n1 + " + " + n2;
				this->lblpregunta->Text = aux;
				aux2 = n1 + n2;
				respuesta = aux2;
				break;
			case 2:
				aux = n1 + " - " + n2;
				this->lblpregunta->Text = aux;
				aux2 = n1 - n2;
				respuesta = aux2;
				break;
			case 3:
				aux = n1 + " * " + n2;
				this->lblpregunta->Text = aux;
				aux2 = n1 * n2;
				respuesta = aux2;
				break;
			}
		}
	public:
		bool getCorrect_Incorrecto() { return Correct_Incorrecto; }

		void setNivel(int n) { nivel = n; }
#pragma endregion
	private: System::Void FormPreguntaMath_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		pregunta_matematica(nivel);
	}

	private: System::Void btnrespuesta_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToString(respuesta) == txbrespuesta->Text) {
			MessageBox::Show("Correcto");
			Correct_Incorrecto = false;
			cerrar = true;
		}
		else {
			MessageBox::Show("Incorrecto");
			Correct_Incorrecto = true;
			cerrar = true;
		}
		this->Close();
	}
	private: System::Void FormPreguntaMath_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (!cerrar) {
			e->Cancel = true;
		}
	}
	};
}