#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];

	cout<<"PROGRAM PENGURANGAN MATRIKS"<<endl;
	cout<<"   "<<endl;
	cout<<" Jumlah Baris Matriks : "; cin>>m;
	cout<<" Jumlah Kolom Matriks : "; cin>>n;
	cout<<"   "<<endl;

	cout << " Masukkan Matriks Pertama : \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>matriks1[i][j];
    	}
  	}
  	cout << " Masukkan Matriks Kedua : \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
      		cin>>matriks2[i][j];
    	}
  	}
  	cout<<" Hasil Pengurangna Matriks : \n";
  	for(i=0; i<m; i++){
    	for(j=0; j<n; j++){
      		hasil[i][j]=matriks1[i][j]-matriks2[i][j];
      		cout<<hasil[i][j]<<"\t";
    	}
    cout<<endl;
	}

	getch();
	return 0;
}
