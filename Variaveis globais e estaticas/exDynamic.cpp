#include <iostream>
using namespace std;

int main(){
	int size;
	
	//solicita ao usuario o tamanho do array
	cout<<"digite o tamanho do array: ";
	cin >>size;
	//Aloca dinamicamente memoria para o array de acordo com o tamanho passado pelo usuario
	int *dynamicArray = new int[size];
	
	for(int i= 0; i < size; i++){
		dynamicArray[i] = i*4; 
	}
	
	//imprime os valores do array
	
	cout<<"valores do vetor: "<<endl;
	for(int i =0; i<size; i++){
		cout<< dynamicArray[i] <<" ";
	}
	
	cout<< endl;
	
	//libera a memoria alocada
	
	delete[] dynamicArray;	
}
