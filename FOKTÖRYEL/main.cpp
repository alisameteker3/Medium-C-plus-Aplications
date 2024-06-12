#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int sayi;
	int toplam=1;
	cout<< " lutfen Bir Deger Giriniz ";
	cin>> sayi ;
	
	for(int i=1; i<=sayi ; i++){
		toplam=toplam*i ;
		

	}
	cout<< toplam ;








	return 0;
}
