#include <stdio.h>
#include <locale.h>
#include<iostream>
int main (){
	using namespace std;
	 setlocale(LC_ALL,"Turkish");
	 devam:	char secim = 'd';
     int i,sayi;
     	cout << "-Asal �arpanlar�na Ay�rma Yaz�l�m�-" << endl;
		cout << "Say�y� Giriniz:";
        cin >> sayi;
        cout << endl;
        for (i = 2; sayi != 1; i ++)
        { if (sayi % i == 0)
          { sayi /= i;
        cout << "-" << i << endl ;
                       i --;
   } } 
   // Programa Devam Et ya da ��k
	cout << endl << "Devam etmek i�in (d), ��kmak i�in (c)'ye bas�n�z.'";
	cin >> secim;
	if (secim == 'd'){
		goto devam; }
	else {
	cout << endl << "--Program Sonu--" ;
}
son: 
return 0;
}
   
