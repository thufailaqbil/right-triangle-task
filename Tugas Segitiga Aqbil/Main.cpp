// menghitung segitiga tiga siku siku
#include <iostream>
#include <math.h>

using namespace std;


int main()

{
	// menghitung segitiga siku siku

	float sisi_miring, alas, tinggi;

	cout << "-----------------------------------------" << endl;
	cout << "menghitung sisi miring segitiga siku siku" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "masukkan nilai alas : " << endl;
	cin >> alas;
	cout << "masukkan nilai tinggi : " << endl;
	cin >> tinggi;

	sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));
	cout << "hasil dari sisi miring  segitiga siku siku adalah : " << sisi_miring;


	return 0; 

}