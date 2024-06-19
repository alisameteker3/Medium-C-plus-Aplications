// klonometreYapımı.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <Windows.h> //sleep kütüphanesi sleep()



using namespace std;

int main()
{
	int saniye = 0;
	int dakika = 0;
 
	while (true)
	{
		Sleep(1000); 
		system("cls");

		cout << dakika << " dakika :  " << saniye << " saniye "<<endl;
		saniye++;	
		
		if (saniye == 60) {
			dakika++;
			saniye = 0;
 
		}
	}

	system("pause");
	return 0;
}

 
