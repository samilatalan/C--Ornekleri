// B�t�n Programlarda Kulland���m K�t�phaneler
#include <stdio.h>
#include <iomanip> 
#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Turkish"); 
	using namespace std;   devam:  char secim = 'd';	
	double p,m,V,cevap; 	// �� No 1030117778
	m=7778;
	V=8777;
	cout << "---Yo�unluk Hesaplama---" << endl << "-p=m/V form�l� ile yap�l�r" << endl;
	cout << "m=" << setprecision(2) << m << "\t" << "V=" << setprecision(4) << V << endl;
	p=m/V;
	cout << "Yo�unluk(p) = " << p << endl << "Minimum hata pay�=0,0001 \t Maximum hata pay�=0,1'dir";

	// Programa Devam Et ya da ��k
	cout << endl << "Devam etmek (d)'ye, Cikmak icin (c)'ye basiniz";
	cin >> secim;
	if (secim == 'd'){
		goto devam;
			}
	else {
	cout << endl << "--------------Program Sonu--------------" ;
	
}
son:	 	
	return 0;
}


