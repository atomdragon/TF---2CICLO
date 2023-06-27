#pragma once
#include "MyForm.h"

namespace Project14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Menu_Principal
	/// </summary>
	public ref class Menu_Principal : public System::Windows::Forms::Form
	{
	private:
		MyForm^ ControllerForm1 = gcnew MyForm();
	public:
		Menu_Principal(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile("F_Hospital.gif");
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Menu_Principal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Timer^ tm_menu;
	private: System::Windows::Forms::Button^ btn_Nivel_1;

	private: System::Windows::Forms::Button^ btn_Nivel_2;

	private: System::Windows::Forms::Button^ btn_instrucciones;

	private: System::Windows::Forms::Button^ btn_Creditos;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->tm_menu = (gcnew System::Windows::Forms::Timer(this->components));
			this->btn_Nivel_1 = (gcnew System::Windows::Forms::Button());
			this->btn_Nivel_2 = (gcnew System::Windows::Forms::Button());
			this->btn_instrucciones = (gcnew System::Windows::Forms::Button());
			this->btn_Creditos = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_title
			// 
			this->lbl_title->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbl_title->AutoSize = true;
			this->lbl_title->Location = System::Drawing::Point(592, 61);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(103, 16);
			this->lbl_title->TabIndex = 0;
			this->lbl_title->Text = L"Viral Operations";
			this->lbl_title->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lbl_title->Click += gcnew System::EventHandler(this, &Menu_Principal::lbl_title_Click);
			// 
			// tm_menu
			// 
			this->tm_menu->Tick += gcnew System::EventHandler(this, &Menu_Principal::tm_menu_Tick);
			// 
			// btn_Nivel_1
			// 
			this->btn_Nivel_1->Location = System::Drawing::Point(21, 470);
			this->btn_Nivel_1->Name = L"btn_Nivel_1";
			this->btn_Nivel_1->Size = System::Drawing::Size(212, 102);
			this->btn_Nivel_1->TabIndex = 1;
			this->btn_Nivel_1->Text = L"Nivel 1";
			this->btn_Nivel_1->UseVisualStyleBackColor = true;
			this->btn_Nivel_1->Click += gcnew System::EventHandler(this, &Menu_Principal::btn_Nivel_1_Click);
			// 
			// btn_Nivel_2
			// 
			this->btn_Nivel_2->Location = System::Drawing::Point(321, 470);
			this->btn_Nivel_2->Name = L"btn_Nivel_2";
			this->btn_Nivel_2->Size = System::Drawing::Size(212, 102);
			this->btn_Nivel_2->TabIndex = 1;
			this->btn_Nivel_2->Text = L"Nivel 2";
			this->btn_Nivel_2->UseVisualStyleBackColor = true;
			this->btn_Nivel_2->Click += gcnew System::EventHandler(this, &Menu_Principal::btn_Nivel_2_Click);
			// 
			// btn_instrucciones
			// 
			this->btn_instrucciones->Location = System::Drawing::Point(656, 470);
			this->btn_instrucciones->Name = L"btn_instrucciones";
			this->btn_instrucciones->Size = System::Drawing::Size(212, 102);
			this->btn_instrucciones->TabIndex = 1;
			this->btn_instrucciones->Text = L"Instrucciones";
			this->btn_instrucciones->UseVisualStyleBackColor = true;
			this->btn_instrucciones->Click += gcnew System::EventHandler(this, &Menu_Principal::btn_instrucciones_Click);
			// 
			// btn_Creditos
			// 
			this->btn_Creditos->Location = System::Drawing::Point(987, 470);
			this->btn_Creditos->Name = L"btn_Creditos";
			this->btn_Creditos->Size = System::Drawing::Size(212, 102);
			this->btn_Creditos->TabIndex = 1;
			this->btn_Creditos->Text = L"Créditos";
			this->btn_Creditos->UseVisualStyleBackColor = true;
			this->btn_Creditos->Click += gcnew System::EventHandler(this, &Menu_Principal::btn_Creditos_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(21, 137);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1210, 327);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Menu_Principal::pictureBox1_Click);
			// 
			// Menu_Principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1258, 573);
			this->Controls->Add(this->btn_Creditos);
			this->Controls->Add(this->btn_instrucciones);
			this->Controls->Add(this->btn_Nivel_2);
			this->Controls->Add(this->btn_Nivel_1);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Menu_Principal";
			this->Text = L"Menu_Principal";
			this->Load += gcnew System::EventHandler(this, &Menu_Principal::Menu_Principal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Menu_Principal_Load(System::Object^ sender, System::EventArgs^ e) {
		EventHandler^ frameChangedHandler = gcnew EventHandler(this, &Menu_Principal::OnFrameChanged);
		ImageAnimator::Animate(pictureBox1->Image, frameChangedHandler);
		lbl_title->Font = gcnew System::Drawing::Font("Times New Roman", 24, System::Drawing::FontStyle::Underline);
		lbl_title->TextAlign = System::Drawing::ContentAlignment::TopCenter;
		tm_menu->Enabled = true;

		lbl_title->ForeColor = System::Drawing::Color::Red;
		lbl_title->BackColor = System::Drawing::Color::White;

	}
	private: System::Void lbl_title_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void tm_menu_Tick(System::Object^ sender, System::EventArgs^ e) {


		tm_menu->Interval = 5000;
		//tm_menu->Tick += gcnew EventHandler(Timer1_Tick);

	}
	private: System::Void OnFrameChanged(System::Object^ sender, EventArgs^ e) {
		pictureBox1->Invalidate();
	}
		   //Boton 1 - terminado
	private: System::Void btn_Nivel_1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ControllerForm1 == nullptr || ControllerForm1->IsDisposed)
		{
			MyForm^ ControllerForm1 = gcnew MyForm();
			Hide();
			ControllerForm1->ShowDialog();
			ControllerForm1->Close();
			Show();
		}
		else
		{
			Hide();
			ControllerForm1->ShowDialog();
			ControllerForm1->Close();
			Show();
		}
	}

	private: System::Void btn_instrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Hola jugador!\nBienvenido a nuestro juego, en esta ocasión puedes ser un médico, sin embargo vas a tener cuidado ya que hay virus que estan al acecho. Sin embargo, para derrotar a aquellos malginos virus vas a resolver problemas matematicos y salvar al mundo de los estos despreciables virus. Para moverte utiliza las flechas direccionales y para comprobar la solución tienes que presional el botón de solución. No te olvides de esquivar a los enemigos!, sin más que decir, que el conocimiento te acompañe.");
	}
	private: System::Void btn_Creditos_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("U20221E617 – Verona Flores Italo Sebastian \n\n U202221068 - Juan Miguel Quijano Calderón \n\n U202019409 - César Alejandro Linares Bernable");
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Nivel_2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ControllerForm1 == nullptr || ControllerForm1->IsDisposed)
		{
			MyForm^ ControllerForm1 = gcnew MyForm();
			Hide();
			ControllerForm1->ShowDialog();
			ControllerForm1->Close();
			Show();
		}
		else
		{
			Hide();
			ControllerForm1->ShowDialog();
			ControllerForm1->Close();
			Show();
		}
	}
};
}
