#include <iostream>
using namespace std;

 bool ehPar(int n){
	return n % 2 == 0;
}

int main(){
	
	int n;
	
	cout<<"Digite um numero para verificarmos se é par ou impar" << endl;
	cin>>n;
	
	if(ehPar(n)){
		cout<<"O numero eh par";
	}else{
		cout<<"O numero eh impar";
	}
	
	
	
	
}





