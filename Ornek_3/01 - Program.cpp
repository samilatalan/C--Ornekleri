#include<iostream>
#include<iomanip>
#include<math.h>
#include <locale.h>


using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish"); 
	devam:
	char secim = 'd';
	int dcevap = 0;
	int ycevap = 5;
	int cevap;
	cout << "				*** Testimize ho�geldiniz***"<<endl<<endl<<endl;
	
	// SORU1
	cout << "S1- A�a��da Verilen �lk �a� Uygarl�klar�ndan Hangisi Yaz�y� �cat Etmi�tir?  " << endl << endl;
	cout << "1.Hititler " << endl ;	cout << "2.Elamlar " << endl;
	cout << "3.S�merler  " << endl;	cout << "4.Urartular " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 3: 
	cout<<">Cevab�n�z Do�ru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevab�n�z Yanl��..> Do�ru Cevap : 'S�merler' olmal�yd�" << endl << endl;
    }
    
    //SORU 2
	cout << "S2- Mustafa Kemal Atat�rk��n N�fusa Kay�tl� Oldu�u �l Hangisidir?   " << endl << endl;
	cout << "1.Bursa  " << endl ;	cout << "2.Ankara " << endl;
	cout << "3.�stanbul  " << endl;	cout << "4.Gaziantep " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 4: 
	cout<<">Cevab�n�z Do�ru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevab�n�z Yanl��..> Mustafa Kemal Atat�rk 'Gaziantep' ilimizde n�fusa kay�tl�d�r." << endl << endl;
    }
    

    // SORU3
	cout << "S3- �� B�y�k Dince Kutsal Say�lan �ehir Hangisidir?   " << endl << endl;
	cout << "1.Mekke  " << endl ;	cout << "2.Kud�s " << endl;
	cout << "3.Roma  " << endl;	cout << "4.�stanbul " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 2: 
	cout<<">Cevab�n�z Do�ru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevab�n�z Yanl��..> Do�ru cevap 'Kud�s' olmal�yd�" << endl << endl;
    }
    
    //SORU 4
	cout << "S4-Bir Sebepten Dolay� Tek Kula��na K�pe Takan Osmanl� Padi�ah� Kimdir? " << endl << endl;
	cout << "1.Kanuni Sultan S�leyman  " << endl ;	cout << "2.Yavuz Sultan Selim  " << endl;
	cout << "3.Orhan Bey   " << endl;	cout << "4.Fatih Sultan Selim  " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 2: 
	cout<<">Cevab�n�z Do�ru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevab�n�z Yanl��..> Do�ru cevap 'Yavuz Sultan Selim' olmal�yd�" << endl << endl;
    }
    
    //SORU 5
	cout << "S5- Hangi �limizde Demiryolu Yoktur?   " << endl << endl;
	cout << "1.Batman  " << endl ;	cout << "2.K�tahya " << endl;
	cout << "3.Ayd�n  " << endl;	cout << "4.Mu�la " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 4: 
	cout<<">Cevab�n�z Do�ru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevab�n�z Yanl��..> Do�ru Cevap 'Mu�la' olmal�yd�" << endl << endl << endl;
    }
   
    cout << "-Testimizin Sonuna Gelmi� Bulunmaktay�z-" << endl << "Do�ru Cevap Say�n�z:" << dcevap << endl << "Yanl�� cevap say�n�z:" << ycevap;
	
	// Programa Devam Et ya da ��k
	cout << endl << "Devam etmek i�in (d)'ye, ��kmak i�in (c)'ye bas�n�z.";
	cin >> secim;
	if (secim == 'd'){
		goto devam;
			}
	else {
	cout << endl << "--------------Program Sonu--------------" << endl << "- G�khan Samil Atalan"  ;
	
}
son:	 	
	return 0;
	
	
	
}

