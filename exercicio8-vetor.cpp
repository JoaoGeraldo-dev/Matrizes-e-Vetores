#include <iostream>
using namespace std;


int main() {
	double vet[2] {0.2,42};
	int i, x;

	
	cout << "digite um numero para multiplicar os vetores: ";
	cin >> x;
	
	for(i = 0; i < 2; i++){
		vet[i] = vet[i] * x;
		cout<<"o resultado da operacao eh: " << vet[i] << endl;
	}	
}

