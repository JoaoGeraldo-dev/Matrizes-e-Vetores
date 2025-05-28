#include<iostream>
using namespace std;

int main(){
	int t;
	cout<<"digite o tamanho do array";
	cin>>t;
	int* array = new int[t];

	cout << "Digite "<< t << "numeros inteiros" <<endl;
	
	for(int i = 0; i < t; i++){
		cout<<"Elemento " << i+1 <<": ";
		cin >> array[i];
	}
	
	cout<<"Elementos do array: ";
	
	for(int i=0; i<t; i++){
		cout<<"Elemento " << i + 1 << ": " << array[i] <<endl;
	}
	
	delete[] array;

}
