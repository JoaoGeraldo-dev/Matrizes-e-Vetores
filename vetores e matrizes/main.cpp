#include <iostream>
using namespace std;



int main() {
  	int i, nota[4];
	float total;
	
	for(i = 0; i < 4; i += 1){
		cout << "Entre com a nota do estudante " << i << ": ";
		cin >> nota[i];
		} 


		cout << "Notas: ";
		total = 0;
		
		for(i = 0; i <4; i += 1){
			cout<<nota[i] << " ";
			total = total + nota[i];
		}
		cout << endl << "Media: " << total / 4 <<endl;
	
	
}
