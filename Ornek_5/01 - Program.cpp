#include <stdio.h>
#include <iomanip> 
#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Turkish"); 
	using namespace std;
	
	int sex,seks;
	
	devam:   
	char secim = 'd';
	
	cout << "Kaca Bolunsun: ";
	cin >> sex;
	cout << "Kaca Bolunmesin: ";
	cin >> seks;
	
	cout << "1 ile 1000 Aras�ndaki " << sex << "e B�l�n�p " << seks << "e b�l�nmeyen say�lar" << endl ;
	cout << "--------------------------------------"<< endl;
    int toplam=0;
	int kacsayi=0;
	

	
	
	
            for (int i = 1; i <=1000; i++) 
            {
                if ( (i % sex == 0) &&  (i%seks!=0) ){
                    cout << i << "   ";
                    
                    
                    toplam = toplam + i;
                    kacsayi++;
                };
               
            }
            cout << endl<< "--------------------------------------"<< endl;
            cout << endl << "Say�lar Toplam�: " << toplam;
            cout << endl << "Say� Miktar�: " << kacsayi;             
            
            
            
            cout << endl << "Devam etmek (d)'ye, Cikmak icin (c)'ye basiniz:";
	cin >> secim;
	cout << endl << endl << endl;
	if (secim == 'd'){
		goto devam; }
	else {
	cout << endl << "Son"  ; }
son:	

            

return 0;

}




