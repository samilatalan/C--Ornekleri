#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include<iostream>
using namespace std;
int main()
{  setlocale(LC_ALL,"Turkish");
	devam:	char secim = 'd';
	int n1,n2;
	cout << "Iki sayiyi giriniz" << endl;
	cin >> n1 >> n2;
	while (n1 != n2){
		if (n1>n2){
			n1 -= n2;			
		}
		else { n2 -= n1; }			
	}	
	if(n1==1) { cout << "Girilen sayýlar aralarýnda asaldýr";
	}
	else { cout << "Aralarýnda asal deðillerdir";
	}
 	// Programa Devam Et ya da Çýk
	cout << endl << "Devam etmek (d)'ye, Cikmak icin (c)'ye basiniz";
	cin >> secim;	if (secim == 'd'){	goto devam;	}
	else {
	cout << endl << "-------Program Sonu---------";
}
son:	
return 0;
}
