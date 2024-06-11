#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 int altlimit ,ustlimit ,toplam;
 cin>>altlimit;
 cin>>ustlimit;
 for(altlimit; altlimit<=ustlimit ; altlimit++){
 	toplam=toplam+altlimit;
 	cout<< altlimit << " " ;
 }
 cout<< "toplam = "<<" "<<toplam ;
 }
