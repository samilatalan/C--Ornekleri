#include <stdio.h>
#include <conio.h>
#include <locale.h> 
#include <iostream>

main()
{
	setlocale(LC_ALL,"Turkish");
 	using namespace std; 	devam: 	char secim = 'd';
	int x,y,z;
    cout << "--Armstrong Sayýlar;" << endl;
    int i=100;
    while (i<=999)
	{	
    x = i / 100;
    y = (i%100)/10; 
    z = i % 10;         
    if(x*x*x + y*y*y + z*z*z == i)
             cout << i << endl; 
	i++;
	}



// Programa Devam Et ya da Çýk
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
