#pragma once
#ifndef CHELTUIELI_H
#define CHELTUIELI_H
#include<iostream>
using namespace std;

class Cheltuieli {
private:
	int nrApartament;
	int suma;
	string tip;


public:
	Cheltuieli();
	Cheltuieli(int nrApartament, int suma, string tip);
	Cheltuieli(const Cheltuieli& other);
	Cheltuieli operator=(const Cheltuieli& other) {
		this->nrApartament = other.nrApartament;
		this->suma = other.suma;
		this->tip = other.tip;
		return *this;
	}
	int getNrApartament();
	void setNrApartament(int nrApartament);
	int getSuma();
	void setSuma(int suma);
	string getTip();
	void setTip(string tip);


	bool operator==(const Cheltuieli& other);
	bool operator!=(const Cheltuieli& other);



	~Cheltuieli();
};

#endif //CHELTUIELI_H
