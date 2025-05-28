#include <iostream>
using namespace std;
//variavel estatica global

int globalStaticVariable = 10;

int main(){
	//variavel estatica local
	
	static int localStaticVariable = 20;

	//impressao das variaveis estaticas locais
	
	cout<< "Variavel global estatica: " << globalStaticVariable << std::endl;
	
	cout<< "Variavel local estatica: " << localStaticVariable << std::endl;
	
	return 0;


}
