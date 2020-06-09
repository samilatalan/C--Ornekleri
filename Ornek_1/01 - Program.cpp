// Bütün Programlarda Kullandýðým Kütüphaneler
#include <stdio.h>
#include <iomanip> 
#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(){
	// Türkçe Karakter Sorunu Ýçin Bulduðum Çözüm 
	//(Kütüphanedeki locale.h satýrý ile birlikte çalýþýr)
	setlocale(LC_ALL, "Turkish"); 

	// Deðiþkenler ve Program Baþlangýcý
	using namespace std;
	int sayi, rakam, toplam;
	toplam = 0;
	
	devam:
	char secim = 'd';
	
	cout << "----------Girilen Sayýnýn Rakamlarýný Toplama Programý----------" << endl;
	cout << "Sayýyý Giriniz: ";
	cin >> sayi;
	
	// While Döngüsü Baþlangýcý
	while (sayi > 0) 
    {
	rakam = sayi % 10;
	toplam = toplam + rakam;
	sayi = sayi /10;
	}

	
	// Sonucu Ekrana Yazdýr
	cout << "Sonuc:" << toplam;	
	toplam=0;
	
	
	// Programa Devam Et ya da Çýk
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
