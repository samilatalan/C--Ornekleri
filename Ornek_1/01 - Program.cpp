// B�t�n Programlarda Kulland���m K�t�phaneler
#include <stdio.h>
#include <iomanip> 
#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(){
	// T�rk�e Karakter Sorunu ��in Buldu�um ��z�m 
	//(K�t�phanedeki locale.h sat�r� ile birlikte �al���r)
	setlocale(LC_ALL, "Turkish"); 

	// De�i�kenler ve Program Ba�lang�c�
	using namespace std;
	int sayi, rakam, toplam;
	toplam = 0;
	
	devam:
	char secim = 'd';
	
	cout << "----------Girilen Say�n�n Rakamlar�n� Toplama Program�----------" << endl;
	cout << "Say�y� Giriniz: ";
	cin >> sayi;
	
	// While D�ng�s� Ba�lang�c�
	while (sayi > 0) 
    {
	rakam = sayi % 10;
	toplam = toplam + rakam;
	sayi = sayi /10;
	}

	
	// Sonucu Ekrana Yazd�r
	cout << "Sonuc:" << toplam;	
	toplam=0;
	
	
	// Programa Devam Et ya da ��k
	cout << endl << "Devam etmek (d)'ye, Cikmak icin (c)'ye basiniz";
	cin >> secim;
	if (secim == 'd'){
		goto devam;
			}
			
		if (secim == 'c'){

	cout << endl << "----Program Sonu-----";
	}		
	else {
	cout << endl << "----Program Sonu-----";
	
}
son:	 	
	return 0;

}
