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

	//Program Sat�rlar�
	using namespace std;
	int ahmet,aci2,aci3;
	cout << "----------Ucgen Hesaplama Program�----------" << endl;
	cout << "�lk A��y� Giriniz: ";
	cin >> ahmet;
	cout << "�kinci A��y� Giriniz: ";
	cin >> aci2;
	aci3 = 180 - (ahmet+aci2);
	cout << "���nc� A��:" << aci3 << endl;
	cout << "��gen T�r�:";
	
	
	
	if(ahmet==aci2 && aci2==aci3){
		cout << "-E�kenar ��gen-";
	}
	else if(ahmet==aci2 || ahmet==aci3 || aci2==aci3){
		cout << "-�kizkenar ��gen-";
	}
	else if(ahmet==90 || aci2==90 || aci3==90){
	
		cout << "Dik ��gen";}
	else { cout << "�e�itkanar ��gen"; }
	
	
	
	
	
		return 0;
	
}	 	



