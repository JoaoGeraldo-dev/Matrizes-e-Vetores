#include<iostream>
using namespace std;

int fatorial(int n) {
	int resultado = 1;
	
	for (int i = 2; i <= n ; i++){
		resultado*= i;
	}
	
	return resultado;
}

int main(){
	int numero;
	
	cout<<"Digite um numero inteiro" <<endl;
	cin>> numero;
	
	if(numero < 0 ){
		cout << "Fatorial n�o � definido para n�meros negativos." << endl;
    } else {
        cout << "Fatorial de " << numero << " �: " << fatorial(numero) << endl;
    }

    return 0;
}


