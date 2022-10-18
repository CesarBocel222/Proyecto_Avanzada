#pragma once
using namespace System;

ref class Colores
{
	private:
	String^ Rojo;
	String^ Amarillo;
	String^ Verde;
	String^ Morado;

public:
	String^ getR();
	String^ getA();
	String^ getV();
	String^ getM();
	void setR(String^ _Rojo);
	void setA(String^ _Amarillo);
	void setV(String^ _Verde);
	void setM(String^ _Morado);


};

