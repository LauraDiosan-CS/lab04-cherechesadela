#include <iostream>
#include <vector>
#include "Repo.h"
#include "Cheltuieli.h"
#include "tests.h"
#include <string>
using namespace std;
int main() 
{
tests();
int nrAp;
int p;
Cheltuieli c1(25, 100, "gaz");
Cheltuieli c2(12, 123, "lumina");
Cheltuieli c3(26, 148, "gaz");
Cheltuieli c4(29, 156, "apa");
Cheltuieli c5(35, 278, "gaz");
Cheltuieli c6(26, 299, "lumina");
Repo r1;

r1.addElem(c1);
r1.addElem(c2);
r1.addElem(c3);
r1.addElem(c4);
r1.addElem(c5);
r1.addElem(c6);

do {
	cout << "Pt a opri aplicatia apasa 0" << endl;
	cout << "1. Adaugare cheltuiala" << endl;
	cout << "2. Eliminare cheltuieli pentru un apartament" << endl;
	cout << "3. Eliminare toate cheltuielile apartamentelor" << endl;
	cout << "4. Eliminare cheltuieli de un tip" << endl;
	cout << "5. Modificare suma" << endl;
	cout << "6. Toate cheltuielile din lista" << endl;
	cout << "7. Cheltuielile unui apartament" << endl;
	cout << "8. Cheltuieli mai mare decat o suma" << endl;
	cout << "9. Cheltuieli cu o anumita suma" << endl;
	cout << "10. Suma cheltuielilor de un tip" << endl;
	cout << "11. Cea mai mare valoare a cheltuielilor unui apartament" << endl;
	cout << "12. Sortare descrescator a cheltuielilor cu un anumit tip " << endl;
	cout << "13. Cheltuielile de un anumit tip" << endl;
	cout << "14. Cheltuielile cu o valoare mai mica decat un nr dat " << endl;
	cin >> p;
	if (p == 1) {
		Cheltuieli c;
		int ap, suma;
		string tip;
		cout << "Nr Apartament: ";
		cin >> ap;
		c.setNrApartament(ap);
		cout << endl << "Suma: ";
		cin >> suma;
		c.setSuma(suma);
		cout << endl << "Tip cheltuiala: ";
		cin >> tip;
		c.setTip(tip);
		r1.addElem(c);
	}
	if (p == 2) {
		cout << "Nr Apartament: ";
		cin >> nrAp;
		r1.deleteElem(nrAp);
		vector<Cheltuieli> v = r1.getVector();
		for (int i = 0; i < v.size(); i++)
			cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';
	}
	if (p == 3) {
		int nrAp1, nrAp2;
		cout << "Nr Apartament1: ";
		cin >> nrAp1;
		cout << "Nr Apartament2: "; 
		cin >> nrAp2;
		r1.deleteElem2(nrAp1, nrAp2);
		vector<Cheltuieli> v = r1.getVector();
		for (int i = 0; i < v.size(); i++)
			cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';
	}
	if (p == 4) {
		std::string tip;
		cout << "Tip: "; 
		cin >> tip;
		r1.deleteByTip(tip);
		vector<Cheltuieli> v = r1.getVector();
		for (int i = 0; i < v.size(); i++)
			cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';
	}

	if (p == 5) {
		int nrAp, plata;
		cout << "Nr Apartament: "; 
		cin >> nrAp;
		cout << "Plata: "; 
		cin >> plata;
		r1.UpdateCheltuieli(nrAp, plata);
		vector<Cheltuieli> v = r1.getVector();
		for (int i = 0; i < v.size(); i++)
			cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';

	}
	if (p == 6) {
		vector<Cheltuieli> v = r1.getVector();
		for (int i = 0; i < v.size(); i++)
			cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';

	}
	if (p == 7) {
		cout << "nrAp=";
		cin >> nrAp;
		r1.Show(nrAp);

	}
	if (p == 8) {
		int plata2;
		cout << "Plata: "; cin >> plata2;
		r1.Show2(plata2);

	}
	if (p == 9) {
		int plata;
		cout << "Plata: "; cin >> plata;
		r1.Show3(plata);
	}
	if (p == 10) {
		int s;
		string tip;
		cout << "Tipul este: "; cin >> tip;
		s = r1.SumCheltuieli(tip);
		cout << s;

	}
	if (p == 11) {
		int max;
		cout << "Nr Apartament: ";
		cin >> nrAp;
		max = r1.MaxCheltuiala(nrAp);
		cout << max;

	}
	if (p == 12) {

	}
	if (p == 13) {
		string tip;
		cout << "Tipul este: "; cin >> tip;
		r1.deleteByTip2(tip);
		vector<Cheltuieli> v = r1.getVector();
		for (int i = 0; i < v.size(); i++)
			cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';

	}
	if (p == 14) {
		int suma;
		cout << "suma ="; cin >> suma;
		r1.deleteBySum(suma);
		vector<Cheltuieli> v = r1.getVector();
		for (int i = 0; i < v.size(); i++)
			cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';

	}

}//do
while (p != 0);
}

