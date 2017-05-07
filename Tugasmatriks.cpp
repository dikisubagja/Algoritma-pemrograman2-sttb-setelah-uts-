#include <iostream>
using namespace std ;

int main () {

int M [3][3];
int M1 [3][3];
int M2 [3][3];


for(int i = 0; i < 3; i ++){
	for(int j = 0; j < 3; j ++) {
		cout << "Masukan nilai untuk matriks M1 [" << i << "] [" << j << "] ";
		cin >> M1 [i][j];}}

	cout << endl;
	cout << "MATRIKS M1"<< endl;
		for(int i = 0; i < 3; i ++){
			for(int j = 0; j < 3; j ++) {
			cout << M1 [i][j] << " "; }cout << endl;}

for(int i = 0; i < 3; i ++){
	for(int j = 0; j < 3; j ++) {
		cout << "Masukan nilai untuk matriks M2 [" << i << "] [" << j << "] ";
		cin >> M2 [i][j];}}	
	cout << endl;
	cout << "MATRIKS M2"<< endl;
		for(int i = 0; i < 3; i ++){
			for(int j = 0; j < 3; j ++) {
			cout << M2 [i][j] << "  "; }cout << endl;}
for(int i =0; i < 3;i ++) {
	for(int j =0; j < 3 ; j ++) {
		M [i] [j] = M1 [i] [j] + M2 [i] [j];
	}}
	cout << endl;
	cout << "MATRIKS M" << endl;
		for(int i =0; i < 3; i ++) {
			for(int j = 0; j < 3; j ++) {
				cout << M [i][j] <<"  ";}cout << endl;}
return 0;
}

		 