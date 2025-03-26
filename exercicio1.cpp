#include <iostream>
#include <vector>
using namespace std;


int main() {
	int num,i,cont,soma;
	vector<int> vet;
	i=0;
	num =1;
	cout<<"digite os numeros do vetor, digite o numero 0 para encerrar"<< endl;
	while(num > 0){
		cin>>num;
		vet.push_back(num);
		i++;
	}
	cont = i;
	soma=0;
	for(i = 0; i < cont; i++){
	 	soma= soma+vet[i]; 
	}
	
	cout<< soma;

}
