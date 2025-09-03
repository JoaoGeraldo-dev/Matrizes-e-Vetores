#include<iostream>
using namespace std;

int main(){
	int *p;
	p = new int[5];
	
	for(int i = 0; i < 5; i++){
		cout<<"Elemento " << i <<": " << *p << endl; 
		p++;
	}
	
	
	
}
