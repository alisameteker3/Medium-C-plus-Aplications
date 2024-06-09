#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// asal sayý kontrolüü

	
	int sayac ,sayi;
cin>> sayi;
for(int i = 2 ; i<sayi ; i++){
	if(sayi%i==0){
		sayac++;
			cout<< "sayi asal degil ";
break;
	}
}
	if(sayac==0){
		cout<< "sayi asal ";
	}
 
	return 0;
	
}
