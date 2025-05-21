#include<iostream>
using namespace std;

int Maior(int vetor[], int T){

int maior = vetor[0]; // Assume que o primeiro vetor é o maior

for(int i = 1; i < T; i++){
	if (vetor[i] > maior){
		maior = vetor[i];
	}
}
return maior;
}

int main(){
	
	int numeros[] = {4,1,5,2,4,7};
	int tamanho = sizeof(numeros)/sizeof(numeros[0]);
	int maior = Maior(numeros, tamanho);
	cout << "O maior numero eh " << maior << endl;	
	
}


