#include "Cheltuieli.h"
#include <iostream>
#include <string>
using namespace std;


//constructor fara parametri
Cheltuieli::Cheltuieli() {
	this->nrApartament = 0;
	this->suma = 0;
	this->tip = "";
}
//cu parametri
Cheltuieli::Cheltuieli(int nrApartament, int suma, string tip) {
	this->nrApartament = nrApartament;
	this->suma = suma;
	this->tip = tip;

}
//copy constructor
Cheltuieli::Cheltuieli(const Cheltuieli& other) {
	this->nrApartament = other.nrApartament;
	this->suma = other.suma;
	this->tip = other.tip;
}

int Cheltuieli::getNrApartament() {
	return this->nrApartament;
}
void Cheltuieli::setNrApartament(int nrApartament) {
	this->nrApartament = nrApartament;
}
int Cheltuieli::getSuma() {
	return this->suma;
}
void Cheltuieli::setSuma(int suma) {
	this->suma = suma;
}
string Cheltuieli::getTip() {
	return this->tip;
}
void Cheltuieli::setTip(string tip) {
	this->tip = tip;
}
bool Cheltuieli::operator==(const Cheltuieli& other) {
	if (this->nrApartament != other.nrApartament)
		return false;
	if (this->suma != other.suma)
		return false;
	if (this->tip != other.tip)
		return false;

	return true;
}

bool Cheltuieli::operator!=(const Cheltuieli& other) {
	if (this->nrApartament != other.nrApartament)
		return true;
	if (this->suma != other.suma)
		return true;
	if (this->tip != other.tip)
		return true;

	return false;
}