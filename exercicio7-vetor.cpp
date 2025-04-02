#include <iostream>

using namespace std;


int main() {
	string vet[4] = {"joao", "Miguel", "ruanzin", "bababoiss"},m;
	m = vet[0];
	
	int i;
	
	for(i = 0; i < 4; i++){	
		if(vet[i].length() > m.length()){
			m = vet[i];
		}
	} 
	cout<< "o maior nome eh: " << m;
	
	
	

		
}
	
		


