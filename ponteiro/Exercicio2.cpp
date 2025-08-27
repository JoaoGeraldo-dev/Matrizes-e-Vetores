#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	int *p1, *p2;
	
	cout<< "Digite o primeiro numero: ";
	cin>> num1;
	cout<<"Digite o segundo numero: ";
	cin>>num2;
	
	p1 = &num1;
	p2 = &num2;
	
	int soma = *p1 + *p2;
	
	cout<<"A soma de " << *p1 <<  " + " << *p2 << " = " << soma << endl;
}
