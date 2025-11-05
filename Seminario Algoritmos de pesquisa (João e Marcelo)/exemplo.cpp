#include <iostream>
using namespace std;

//PESQUISA LINEAR
int pesquisaLinear(int lista[], int tamanho, int valor){ // declara a nossa pesquisa linear
	for(int i = 0; i < tamanho; i++){ // percorre toda a nossa lista
		if(lista[i] == valor) { //compara se alguma das posiçoes do vetor é igual ao valor procurado, se for então achou
			return i;			// e então retorna a posição onde foi encontrado o valor igual
		}
	}
	return -1;// retorna o -1 caso o valor não exista na lista ou nao seja encontrado
}

//PESQUISA BINARIA
int pesquisaBinaria(int lista[], int tamanho, int valor){
	int inicio = 0; //começa no primeiro elemento;
	int fim = tamanho -1;// termina no ultimo indice da lista por isso: "tamanho - 1"
	
	while (inicio <= fim){
		int meio = (inicio + fim)/ 2;
		
		if(lista[meio] == valor){
			return meio;
		}
		else if(lista[meio] < valor){
			inicio = meio + 1; // o +1 serve para buscarmos os valores a direita da lista
		}else{
			fim = meio - 1; // ja o -1 serve para buscarmos os valores a esquerda da nossa lista
		}
	}
	return -1; //caso o valor não seja encontrado
}

int main(){
	int dados[] = {2, 4, 6, 8, 10, 12, 14};// lista com nossos valores
	int tamanho = sizeof(dados) / sizeof(dados[0]);// descobrindo o tamanho da lista
	int valor = 10; //valor q desejamos encontrar
	
	cout<< "Lista: ";
	for (int i = 0; i < tamanho; i++){
		cout << dados[i] << " "; // exibe os valores da nossa lista
	}
	cout<<endl;
	
	cout<<  " Procura o numero: " << valor << endl; // exibe o valor encontrado 
	
	//testando as funcoes
	int posLinear = pesquisaLinear(dados, tamanho, valor);
	int posBinaria = pesquisaBinaria(dados, tamanho, valor);


//resultado

if (posLinear != -1){

		cout<<"Pesquisa Linear: valor encontrado na posicao " << posLinear << endl;
	}else{	
		cout<<"Pesquisa Linear: valor nao encontrado" <<endl;
}
	if(posBinaria != -1){
		cout<<"Pesquina Binaria: valor nao encontrado na posicao " << posBinaria << endl;
	}else{
		cout<<"Pesquisa Binaria: valor nao encontrado" <<endl;
}
		return 0;













