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
	cout << "				*** Testimize hoþgeldiniz***"<<endl<<endl<<endl;
	
	// SORU1
	cout << "S1- Aþaðýda Verilen Ýlk Çað Uygarlýklarýndan Hangisi Yazýyý Ýcat Etmiþtir?  " << endl << endl;
	cout << "1.Hititler " << endl ;	cout << "2.Elamlar " << endl;
	cout << "3.Sümerler  " << endl;	cout << "4.Urartular " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 3: 
	cout<<">Cevabýnýz Doðru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevabýnýz Yanlýþ..> Doðru Cevap : 'Sümerler' olmalýydý" << endl << endl;
    }
    
    //SORU 2
	cout << "S2- Mustafa Kemal Atatürk’ün Nüfusa Kayýtlý Olduðu Ýl Hangisidir?   " << endl << endl;
	cout << "1.Bursa  " << endl ;	cout << "2.Ankara " << endl;
	cout << "3.Ýstanbul  " << endl;	cout << "4.Gaziantep " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 4: 
	cout<<">Cevabýnýz Doðru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevabýnýz Yanlýþ..> Mustafa Kemal Atatürk 'Gaziantep' ilimizde nüfusa kayýtlýdýr." << endl << endl;
    }
    

    // SORU3
	cout << "S3- Üç Büyük Dince Kutsal Sayýlan Þehir Hangisidir?   " << endl << endl;
	cout << "1.Mekke  " << endl ;	cout << "2.Kudüs " << endl;
	cout << "3.Roma  " << endl;	cout << "4.Ýstanbul " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 2: 
	cout<<">Cevabýnýz Doðru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevabýnýz Yanlýþ..> Doðru cevap 'Kudüs' olmalýydý" << endl << endl;
    }
    
    //SORU 4
	cout << "S4-Bir Sebepten Dolayý Tek Kulaðýna Küpe Takan Osmanlý Padiþahý Kimdir? " << endl << endl;
	cout << "1.Kanuni Sultan Süleyman  " << endl ;	cout << "2.Yavuz Sultan Selim  " << endl;
	cout << "3.Orhan Bey   " << endl;	cout << "4.Fatih Sultan Selim  " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 2: 
	cout<<">Cevabýnýz Doðru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevabýnýz Yanlýþ..> Doðru cevap 'Yavuz Sultan Selim' olmalýydý" << endl << endl;
    }
    
    //SORU 5
	cout << "S5- Hangi Ýlimizde Demiryolu Yoktur?   " << endl << endl;
	cout << "1.Batman  " << endl ;	cout << "2.Kütahya " << endl;
	cout << "3.Aydýn  " << endl;	cout << "4.Muðla " << endl;
	cin >> cevap;
	
    switch(cevap)    {
    case 4: 
	cout<<">Cevabýnýz Doðru<" << endl << endl; dcevap = dcevap +1; ycevap = ycevap -1;       break;                                     
    default:
        cout<<">Cevabýnýz Yanlýþ..> Doðru Cevap 'Muðla' olmalýydý" << endl << endl << endl;
    }
   
    cout << "-Testimizin Sonuna Gelmiþ Bulunmaktayýz-" << endl << "Doðru Cevap Sayýnýz:" << dcevap << endl << "Yanlýþ cevap sayýnýz:" << ycevap;
	
	// Programa Devam Et ya da Çýk
	cout << endl << "Devam etmek için (d)'ye, Çýkmak için (c)'ye basýnýz.";
	cin >> secim;
	if (secim == 'd'){
		goto devam;
			}
	else {
	cout << endl << "--------------Program Sonu--------------" << endl << "- Gökhan Samil Atalan"  ;
	
}
son:	 	
	return 0;
	
	
	
}

