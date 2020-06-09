// Bütün Programlarda Kullandýðým Kütüphaneler
#include <stdio.h>
#include <iomanip> 
#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Turkish"); 
	using namespace std;   devam:  char secim = 'd';	
	double p,m,V,cevap; 	// Öð No 1030117778
	m=7778;
	V=8777;
	cout << "---Yoðunluk Hesaplama---" << endl << "-p=m/V formülü ile yapýlýr" << endl;
	cout << "m=" << setprecision(2) << m << "\t" << "V=" << setprecision(4) << V << endl;
	p=m/V;
	cout << "Yoðunluk(p) = " << p << endl << "Minimum hata payý=0,0001 \t Maximum hata payý=0,1'dir";

	// Programa Devam Et ya da Çýk
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


