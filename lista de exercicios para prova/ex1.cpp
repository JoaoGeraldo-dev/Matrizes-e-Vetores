#include<iostream>
using namespace std;

int main(){
	int num, *p;
	
	cout<<"Digite o numero que voce deseja: " << endl;
	cin>>num;
	p = &num;
	
	cout<<"O numero digitado foi: " << num << " e " << "\n O endereco do numero eh: " << p;
	
}
