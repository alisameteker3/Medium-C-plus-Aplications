// hacimhesabiFonsy.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
float alan(int, float, float);

int main()
{
	int sekil;
	float h, r;
	cout << "1. Silindir hacim hesapla : " << endl;
	cout << "2. Koni hacim hesapla : " << endl;
	cout << "3. Kare piramit hacim hesapla : " << endl;
	cout << "Seciminiz : " << endl;
	cin >> sekil;
	if (sekil !=3)
	{
		cout << "Yukseklik Giriniz : " << endl;
		cin >> h;
		cout << "r degeri giriniz : " << endl;
		cin >> r;
		cout << "Alan : " << alan(sekil, h, r) << endl;
	}
	else {
		cout << "Yukseklik Giriniz : " << endl;
		cin >> h;
		cout << "a degeri giriniz : " << endl;
		cin >> r;
		cout << "Alan : " << alan(sekil, h, r) << endl;
	}
 
	system("pause");
	return 0;
}
float alan(int sekil, float h, float r) {
		
	switch (sekil)
	{
	case1:
		return (3.14f * (r * r) * h);
		break;
	case 2:
		return (1.f/3.f) * (3.14f * (r * r) * h);
		break;
	case 3:
		return ((1.f / 3.f) * (r * r) * h);
		break;
	default:
		break;
	}
	//return 0;
}
 