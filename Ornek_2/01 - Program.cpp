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

	//Program Satýrlarý
	using namespace std;
	int ahmet,aci2,aci3;
	cout << "----------Ucgen Hesaplama Programý----------" << endl;
	cout << "Ýlk Açýyý Giriniz: ";
	cin >> ahmet;
	cout << "Ýkinci Açýyý Giriniz: ";
	cin >> aci2;
	aci3 = 180 - (ahmet+aci2);
	cout << "Üçüncü Açý:" << aci3 << endl;
	cout << "Üçgen Türü:";
	
	
	
	if(ahmet==aci2 && aci2==aci3){
		cout << "-Eþkenar Üçgen-";
	}
	else if(ahmet==aci2 || ahmet==aci3 || aci2==aci3){
		cout << "-Ýkizkenar Üçgen-";
	}
	else if(ahmet==90 || aci2==90 || aci3==90){
	
		cout << "Dik Üçgen";}
	else { cout << "Çeþitkanar Üçgen"; }
	
	
	
	
	
		return 0;
	
}	 	



