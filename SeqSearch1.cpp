#include <iostream>
using namespace std;

int n, i, c;

int main () { 
 cout << "PROGRAM SEQUENTIAL SEARCH" << endl;
 cout << "==========================" << endl;
 int Data[10];

 cout << "Inputkan Jumlah Data Array = ";
 cin >> n;
 cout << endl;

for(i=0; i<n; i ++) {
	cout << " Elemen Data Array ke - "<< i <<"=";
	cin >> Data[i]; }

	cout << "Inputkan Bilangan Yang Dicari = ";
	cin >> c ;
for(i=0; i<n; i ++) {
	if (Data[i] == c) {
		cout << "data = "<<c<<" ada pada indeks ke "<<i<<endl;}
	else {
	cout << "tidak ada data"<<endl;}}
return 0;
}