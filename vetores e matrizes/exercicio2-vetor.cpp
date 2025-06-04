#include <iostream>
using namespace std;


int main() {
	int i, maior;
	double vet[5];
	 
	 for(i = 0; i < 5; i++){
	 	cout << "entre com os valores da posicao " << i << " do vetor: ";
	 	cin>>vet[i];
  }
	 
	  for(i = 0; i < 5; i++){
	  	if(vet[i] > maior){
	  		maior = vet[i];
		  }
	  }
	  cout << "O maior elemento é: " << maior << endl;
}
