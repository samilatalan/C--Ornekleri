#include <stdio.h>
#include <locale.h>
#include<iostream>
int main (){
	using namespace std;
	 setlocale(LC_ALL,"Turkish");
	 devam:	char secim = 'd';
     int i,sayi;
     	cout << "-Asal Çarpanlarýna Ayýrma Yazýlýmý-" << endl;
		cout << "Sayýyý Giriniz:";
        cin >> sayi;
        cout << endl;
        for (i = 2; sayi != 1; i ++)
        { if (sayi % i == 0)
          { sayi /= i;
        cout << "-" << i << endl ;
                       i --;
   } } 
   // Programa Devam Et ya da Çýk
	cout << endl << "Devam etmek için (d), Çýkmak için (c)'ye basýnýz.'";
	cin >> secim;
	if (secim == 'd'){
		goto devam; }
	else {
	cout << endl << "--Program Sonu--" ;
}
son: 
return 0;
}
   
