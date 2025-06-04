#include <iostream>
#include <vector>
using namespace std;


int main() {
	int vet[5]={6,7,8,9,10}, i, n,j;
		vector<int> vet2;
		
		j=0;
		
		for(i = 0; i < 5; i++){
			if(vet[i] % 2 == 0){
				vet2.push_back(vet[i]);
				cout << vet2[j];
				j++;
			}
		}
		
}
	
		


