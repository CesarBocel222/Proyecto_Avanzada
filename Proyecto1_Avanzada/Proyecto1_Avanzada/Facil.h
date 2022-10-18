#pragma once

namespace Proyecto1Avanzada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// btnCargar1
			// 
			this->btnCargar1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCargar1->Location = System::Drawing::Point(12, 12);
			this->btnCargar1->Name = L"btnCargar1";
			this->btnCargar1->Size = System::Drawing::Size(96, 71);
			this->btnCargar1->TabIndex = 0;
			this->btnCargar1->Text = L"Cargar Mapa ";
			this->btnCargar1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 114);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 1;
			// 
			// Facil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(418, 295);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btnCargar1);
			this->Name = L"Facil";
			this->Text = L"Facil";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
