#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	 	int ustlimit;
	 	int toplam=0;
	 	cout<<"ustlimit belirleyin";
	 	cin>>ustlimit;
	 	for(int i=0; i<=ustlimit ; i++){
	 	if(i%2==0){
	 		toplam = toplam + i;
		 			 		cout<< i << " ";

		 }
			 		cout<< i << endl;

		 }
	cout<< "Toplam = " << toplam << endl;
	
	
	
	
	
	
	
	
	return 0;
}
