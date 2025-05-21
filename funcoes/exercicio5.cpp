#include <iostream>
using namespace std;


bool ehPrimo(int n){
	
	if(n <= 1){
		return false; // numeros menores ou iguais a 1 nao sao primos
	}
	
	for (int i = 2; i <= n / 2; i++) {
		if(n%i == 0) return false; //	se o numero for divisivel por outro nao é primo
	} 
	return true;
}

int main() {
	 int numero;
	 cout <<"Digite o numero para verificar se eh primo: ";
	 cin >> numero;
	 
	 if(ehPrimo(numero)){
	 	cout<<"o numero eh primo"<<endl;
	 }else{
	 	cout<<"o numero nao eh primo"<<endl;
	 }
	
}
