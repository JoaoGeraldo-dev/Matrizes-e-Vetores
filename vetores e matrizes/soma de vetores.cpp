#include <iostream>
using namespace std;


int main() {
	int i, maior,vetor1[2] = {2, 4}, vetor2[2] = {2, 4}, vetor3[2]={};

	for(i = 0; i < 2; i++){
	
	vetor3[i] = vetor1[i] + vetor2[i]; 
	cout << vetor3[i] <<  " ";
	}	
}

