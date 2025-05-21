#include <iostream>
using namespace std;

double CalcularMedia(int v[], int tamanho){
	int soma = 0;
	for (int i = 0; i < tamanho; i++){
		soma += v[i];
	}
	
	if (tamanho > 0) { 
	return soma /tamanho;
	}else{
	return 0;
	}
	 
}


int main () {	
	
	int numeros[] = {10,20,30,40,50};
	int tamanho = sizeof(numeros)/ sizeof(numeros[0]);
	
	cout<< "A media dos elementos eh: " << CalcularMedia(numeros, tamanho) << endl;
}
