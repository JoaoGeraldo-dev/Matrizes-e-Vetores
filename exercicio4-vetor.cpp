#include <iostream>
using namespace std;


int main() {
	
	int vet[5]={1,2,3,4,5}, i, m;
	
	for(i = 0; i < 5; i++){
		if(vet[i] >= vet[i + 1]){
			cout << "Nao eh crescente";
			exit(0);
		}
	}
		cout << "Eh crescente";
	
}

