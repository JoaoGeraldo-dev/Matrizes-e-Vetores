#include<iostream>
using namespace std;

int main(){
	int i;
	int *v;
	v = new int[10];

	for(i = 0; i <10; i++){
		cout<<"digite o " << i << " valor: " << endl;
		cin>>v[i];
	}
	
	for(i = 0; i <10; i++){
		cout<<"Os valores digitados foram: " << v[i] <<endl;
	}
	
	
	
	delete [] v;
	
	
	
}
