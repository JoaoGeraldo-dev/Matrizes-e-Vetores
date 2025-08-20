#include <iostream>
#include<vector>
using namespace std;



// Função para carregar o vetor com números inteiros 

void carrega(vector<int>& vetor , int quantidade){
	int valor;
	for (int i = 0; i < quantidade; i++){
		cout<< "Digite o " << i + 1 <<" numero: ";
		cin >> valor;
		vetor.push_back(valor);
	}
}

void  calc(
	const vector<int>& vetor,
	int& soma,
	double& media,
	int& maior,
	int& menor,
	int quantidade
){
	if(vetor.empty()){
		cout<<"O vetor esta vazio!" <<endl;
		return;
	}
	
	soma = 0;
	maior = vetor[0];
	menor = vetor  [0]; 
	
	for(int i = 0; i < quantidade; i++){
		soma += vetor[i];
		if(vetor[i] > maior) maior = vetor[i];
		if(vetor[i]< menor) menor = vetor[i];
	
	media = static_cast<double>(soma) / vetor.size();
	}
}

int main(){
	vector<int> numeros;
	int quantidade;
	
	cout<<"Quantos numeros voce deseja inserir? ";
	cin >> quantidade;
	
	
	carrega(numeros, quantidade);
	
	int soma, maior, menor;
	double media;
	
	calc(numeros, soma, media, maior, menor, quantidade);
		
	cout << "\nResultados:" << endl;
    cout << "Soma: " << soma << endl;
    cout << "Média: " << media << endl;
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
	
}



