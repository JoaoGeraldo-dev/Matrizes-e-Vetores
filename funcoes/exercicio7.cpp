#include <iostream>
using namespace std;

int contarVogais(string texto){
	int cont = 0;
	for(int i = 0; i < texto.length(); i++){
		char c = texto[i];
		
		
		if(c >= 'A' && c <= 'Z' ){
			c = c + 32;
		}
		
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
			cont++;
		}
		
	}	
	return cont;
}


int main() {
	string frase;
	
	cout<<"digite uma frase: ";
	
	getline(cin,frase);
	
	int resultado = contarVogais(frase);
	cout << "Numero de vogais: " << resultado << endl;
}
