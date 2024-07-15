// atmuygulama.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
void menu();
void bakiyesorgula(int);
void parayatir(int&);
void paracek(int&);
bool girisbilgilerinikontrolet(string isim, int sifre) {
	if (isim == "AliSamet" && sifre == 1234) {
		return true;
		system("pause");
	}
	else {
		return false;
		system("pause");
	}
}


int main()
{
	string isim;
	int sifre;
	
	
	
	
	cout << "Sisteme hosgeldiniz..." << endl;
	cout << "Lutfen kullanici adinizi girini :";
	cin >> isim;
	cout << "Lutfen Sifrenizi giriniz :";
	cin >> sifre;
	bool kontrol = girisbilgilerinikontrolet(isim, sifre);
	if (kontrol == true) {
		cout << "Sisteme Giris Basarili..." << endl;
		system("puase");
	}
	else {
		cout << "hata ";
		
		system("pause");
	}

	int secenekler{};
	int paramiktari = 5000;

	while (secenekler !=4 )
	{
		system("cls");
		menu();
		cin >> secenekler;

		switch (secenekler)
		{
		case 1: 
			bakiyesorgula(paramiktari);
			break;
		case 2:
			parayatir(paramiktari);
		case 3:
			paracek(paramiktari);

		default:
			break;
		}
	}



	system("pause");
	return 0;
}
void menu() {
	cout << "1. Bakiye Sorgula" << endl;
	cout << "2. para yatir" << endl;
	cout << "3. para cek " << endl;
	cout << "4. cikis" << endl;
	cout << "Seciminiz " << endl;

}
void bakiyesorgula(int paramiktari) {
	cout << " Mevcut Bakiyeniz : " << paramiktari << endl;
	system("pause");
}
void parayatir(int& paramiktari) {
	int yatirilacakparamiktari;
	cout << "Yatirilacak Para Miktarini Giriniz : " << endl;
	cin >> yatirilacakparamiktari;
	
	paramiktari += yatirilacakparamiktari;
	//cout << "Yeni Bakiyeniz : " << paramiktari << endl;
	system("pause");

}
void paracek(int& paramiktari) {
	int cekilecekparamiktari;
	cout << "Cekmek Istediginiz Tutari Giriniz : ";
	cin >> cekilecekparamiktari;
	//cout << "Yeni Bakiye :" << paramiktari-cekilecekparamiktari << endl;
	if (cekilecekparamiktari>paramiktari)
	{
		cout << "yetersiz bakiye "<<endl;

	}
	paramiktari -= cekilecekparamiktari;
	system("pause");


		
}