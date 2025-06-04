#include <iostream>
#include <stack>
#include <string>
using namespace std;

//funçoes de exemplo

void funcao1(){
	cout<< "executando funcao 1" << endl;
}

void funcao2(){
	cout<<"executando funcao 2" << endl;
}

void funcao3(){
	cout<<"Executando funcao 3" <<endl;
}

int main(){
	//pilha de execucao de funcoes
	
	stack<void (*)()> pilhadeExecucao;
	
	//empilhando as funcoes na ordem desejada
	pilhaDeExecucao.push(funcao1);
	pilhaDeExecucao.push(funcao2);
	pilhaDeExecucao.push(funcao3);
	
	//executando as funcoes enquanto a pilha nao estiver vazia
	while(!pilhaDeExecucao.empty()) {
		//obtendo a funcao do topo da pilha
		void (*funcao)() = pilhaDeExecucao.top();
		//Removendo a funcao do topo da pilha
		plhaDeExecucao.pop();
		//executando a funcao
		funcao();
	}
	
	return 0;
}

