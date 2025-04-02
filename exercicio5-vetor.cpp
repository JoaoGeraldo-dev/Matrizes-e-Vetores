#include <iostream>
using namespace std;


int main() {
	
	int vet[5]={6,7,8,9,10}, i, n;
	
	cout<<"digite um numero e verificaremos se faz parte do vetor: ";
	cin >> n;
	
	for(i = 0; i < 5; i++)
		if(n == vet[i]){
			cout<< "faz parte do vetor";
			
		}
		cout<<"nao faz parte do vetor";
}
	
		


