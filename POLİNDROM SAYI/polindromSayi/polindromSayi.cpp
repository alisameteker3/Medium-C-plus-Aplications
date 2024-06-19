// polindromSayi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{

	int num, digit, sum = 0;
	int temp;
	cout << "Bir sayi girin : ";
	cin >> num;
	temp = num;

	while ( num!=0)
	{
		digit = num % 10;
		sum = sum * 10 + digit;
		num /= 10;

	}
	if (temp == sum)
	{
		cout << "sayi polindrom bir sayidir " << endl;
	}
	else
		cout << "polindirom bir sayi degil "<<endl;


	return 0;

}
