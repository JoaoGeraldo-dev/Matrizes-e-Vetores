#include<iostream>
using namespace std;

int main(){
	char str[] = "Bom dia Pessoal, como vocês se chamam?";
	
	char *ptr = str;
	
	cout << "String completa: " << ptr <<endl;
	
	cout<<"Caracteres da string: " << endl;
	while(*ptr != '\0'){
		cout<< *ptr <<" " << endl;
		ptr++;
	}
	cout<<endl;
	return 0;
}
