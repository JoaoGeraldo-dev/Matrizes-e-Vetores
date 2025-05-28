#include <iostream>
using namespace std;
//variavel estatica global

int main(){

	static float notas[] = {10,0.7,3.4,8,5};
	
	float media,soma;
	int c;
	
	for(int i = 0; i<5; i++){
		soma = soma + notas[i];
		c++;
	}
	
	media = soma/c;

	cout<<"a media das notas eh: " << media;

}
