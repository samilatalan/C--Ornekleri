#include <stdio.h>
#include <iomanip> 
#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{	using namespace std; 	setlocale(LC_ALL, "Turkish"); 
	devam: 	char secim = 'd';
int sayi1,sayi2,sayi3,buyuk,kucuk,orta,ktoplam;
	cout << "Birinci say�y� giriniz:";
		cin >>sayi1;
	cout << "�kinci say�y� giriniz:";
		cin >> sayi2;
	cout << "���nc� say�y� giriniz:";
		cin >>sayi3;

if(sayi1>=sayi2)
{
if(sayi1>=sayi3)
{
buyuk=sayi1;
if(sayi2>=sayi3)
{
orta=sayi2;
kucuk=sayi3;
}
else
{
orta=sayi3;
kucuk=sayi2;
}
}
else
{
orta=sayi1;
buyuk=sayi3;
kucuk=sayi2;
}
}
else
{
if(sayi2>=sayi3)
{
buyuk=sayi2;
if(sayi1>=sayi3)
{
orta=sayi1;
kucuk=sayi3;
}
else
{kucuk=sayi1; orta=sayi3; } }
else{ buyuk=sayi3; kucuk=sayi1; orta=sayi2; }}

ktoplam = orta+kucuk;
cout << "En b�y�k Say�:" << buyuk <<endl ;
cout << "Di�er say�lar�n toplam�: " << ktoplam<<endl;
if (ktoplam>buyuk) {cout << "K���kler toplam�, b�y�k say�dan b�y�kt�r"; }
else { cout << "K���kler toplam�, b�y�k say�dan k���kt�r;";
}
	// Programa Devam Et ya da ��k
	cout << endl << "Devam etmek (d)'ye, Cikmak icin (c)'ye basiniz";
	cin >> secim;
	if (secim == 'd'){
		goto devam;
			}
	else {
	cout << endl << "--------------Program Sonu--------------";
	
}
son:	 	
	return 0;

}



