 
#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	int a, b, c;
	float delta;
	cout << "x2 kat degerini girin : ";
	cin >> a;
	cout << "x kat degerini girin : ";
	cin >> b;
	cout << "sabit sayiyi girin : ";
	cin >> c;

	delta = (b * b) - 4 * a * c;
	
	if (delta < 0) {
		cout << "Reel kok yoktur. ";
	}
	else if (delta == 0) {

		cout << "cakisan iki kok vardir. ";

	}
	else if (delta > 0) {

		cout << "birbirinden farkli iki kok vardir. " << endl;
	}
	float kok1 = (-b + sqrt(delta)) / (2 * a);
	float kok2 = (-b - sqrt(delta)) / (2 * a);

	cout << "x1 : " << kok1 << endl;
	cout << "x2 : " << kok2 << endl;


	return 0;


}
 