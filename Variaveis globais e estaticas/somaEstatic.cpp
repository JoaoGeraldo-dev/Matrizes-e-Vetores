#include <iostream>
using namespace std;
//variavel estatica global

int main(){

	static int numeros[] = {10,20,30,40,50};
	
	int soma = 0;
	
	for(int i = 0; i<5; i++){
		soma = soma + numeros[i];
	}

	cout<<"a soma dos numeros eh: " << soma <<endl;

}
