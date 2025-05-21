#include<iostream>
using namespace std;

int maiorN(int n1, int n2){
	int maior;
	
	if(n1 > n2){
		maior = n1;
	}else{
		maior = n2;
	}
}

int main(){
	
	int n1,n2, maior;
	cout<<"digite 2 numeros inteiros"<<endl;
	cin >> n1 >> n2;
	maior = maiorN(n1,n2);
	cout <<"O maior numero eh: " << maior <<endl; 
		
}
