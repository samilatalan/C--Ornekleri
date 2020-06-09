#include <cstdlib>
#include <iostream>
#include <locale.h>
using namespace std;
int main(){
		setlocale(LC_ALL, "Turkish"); 
    int a,b,c,baslangic,son;
    devam:	char secim = 'd';
    b=0;
    cout << "-Mükemmel Sayý Bulma Yazýlýmý-" << endl;
	cout << "Lütfen baþlangýç sayýsýný giriniz";
    cin >> baslangic;
    cout << "Lütfen son sayýyý giriniz";
    cin>> son;
    for(int a=baslangic;a<son;a++){
    for(int i=1;i<a;i++){
            if(a%i==0){
            b=b+i; }
	}
    if(a==b)
cout<<a<< "    ";
        b=0;
        }    
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
