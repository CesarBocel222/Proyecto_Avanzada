#include "Colores.h"

String^ Colores::getR() {
	return Rojo;
}
String^ Colores::getA() {
	return Amarillo;
}
String^ Colores::getV() {
	return Verde;
}
String^ Colores::getM() {
	return Morado;
}
void Colores::setR(String^ _Rojo) {
	this->Rojo = _Rojo;
}
void Colores::setA(String^ _Amarillo) {
	this->Amarillo = _Amarillo;
}
void Colores::setV(String^ _Verde) {
	this->Verde = _Verde;
}
void Colores::setM(String^ _Morado) {
	this->Morado = _Morado;
}
