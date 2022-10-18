#pragma once
#include "Colores.h"
namespace Proyecto1Avanzada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Resumen de Facil
	/// </summary>
	public ref class Facil : public System::Windows::Forms::Form
	{
	public:
		Facil(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			miscolores = gcnew array<Colores^>(array_size);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Facil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCargar1;
	private: System::Windows::Forms::ListBox^ lstColores;
	private: System::Windows::Forms::OpenFileDialog^ ofdArchivos;
	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCargar1 = (gcnew System::Windows::Forms::Button());
			this->lstColores = (gcnew System::Windows::Forms::ListBox());
			this->ofdArchivos = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// btnCargar1
			// 
			this->btnCargar1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCargar1->Location = System::Drawing::Point(16, 15);
			this->btnCargar1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCargar1->Name = L"btnCargar1";
			this->btnCargar1->Size = System::Drawing::Size(128, 87);
			this->btnCargar1->TabIndex = 0;
			this->btnCargar1->Text = L"Cargar Mapa ";
			this->btnCargar1->UseVisualStyleBackColor = true;
			this->btnCargar1->Click += gcnew System::EventHandler(this, &Facil::btnCargar1_Click);
			// 
			// lstColores
			// 
			this->lstColores->FormattingEnabled = true;
			this->lstColores->ItemHeight = 16;
			this->lstColores->Location = System::Drawing::Point(13, 140);
			this->lstColores->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->lstColores->Name = L"lstColores";
			this->lstColores->Size = System::Drawing::Size(159, 116);
			this->lstColores->TabIndex = 1;
			// 
			// ofdArchivos
			// 
			this->ofdArchivos->FileName = L"openFileDialog1";
			// 
			// Facil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 363);
			this->Controls->Add(this->lstColores);
			this->Controls->Add(this->btnCargar1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Facil";
			this->Text = L"Facil";
			this->ResumeLayout(false);

		}
#pragma endregion
		array<Colores^>^ miscolores;
		int array_size = 100;
		int ColorQty = 0;
	private: System::Void btnCargar1_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (System::Windows::Forms::DialogResult::OK == ofdArchivos->ShowDialog()){
			   StreamReader^ inputStream = gcnew StreamReader(ofdArchivos->FileName);
			   if (inputStream != nullptr) {
				   String^ linea = inputStream->ReadLine();
				   while (linea && (ColorQty < array_size)){

					   array<String^>^ datos = linea->Split(',');
					   

					   linea = inputStream->ReadLine();
					   ColorQty++;
				   }
			   }
		   }
	}
	};
}
