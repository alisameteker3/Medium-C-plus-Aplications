// TaşKağıtMakas.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	
	int secim, botskor = 0, insanskor = 0, rastgele;

	while (botskor !=3 && insanskor !=3)
	{
		cout << " Tas(1) - Kagit(2) - Makas(3) : " ;
		cin >> secim;
		rastgele = rand() % 3;
		
		switch (secim)
		{
		case 1: //tas
			if (rastgele == 0) {

				cout << "Berabere..." << endl;
				
			}
			else if (rastgele == 1) {
				cout << "Kaybettin..." << endl;
				botskor++;
			}
			else if (rastgele == 2) {
				cout << "Kazandin..." << endl;
				insanskor++;
			}
			break;

		case 2: //kagıt
			if (rastgele == 0) {

				cout << "kazandiniz..." << endl;
				insanskor++;
			}
			else if (rastgele == 1) {
				cout << "Berabere..." << endl;
 			}
			else if (rastgele == 2) {
				cout << "Kaybettin..." << endl;
				botskor++;
			}
			break;
		case 3: //makas 
			if (rastgele == 0) {

				cout << "Kaybettin..." << endl;
				botskor++;
			}
			else if (rastgele == 1) {
				cout << "kazandiniz..." << endl;
				insanskor++;
			}
			else if (rastgele == 2) {
				cout << "Berabere..." << endl;

			}
			break;
		default:
			cout << "Gecersiz Deger Girildi..." << endl;
			break;

			 
		}
		if (rastgele==0)
		{
			cout << "Bot : Tas " << endl;
		}
		else if (rastgele==1)
		{
			cout << "Bot : Kagit " << endl;
		}
		else if (rastgele == 2) {

			cout << "Bot : Makas " << endl;

		}

	}
	cout << endl;
	if (insanskor == 3)
	{
		cout << "Kazandiniz..." << endl;
	}
	else
		cout << "Maalesef Kaybettiniz... " << endl;		

	system("pause");
	return 0;
}
 