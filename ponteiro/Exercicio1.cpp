#include<iostream>
using namespace std;

void troca(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;

}

int main (){
	int x,y;
	
	cout <<"digite o primeiro valor: " << endl;
	cin >> x;
	cout<<"digite o segundo valor: "<< endl;
	cin >> y;
	
	cout<<"antes de trocar os valores: x = " << x << ", y= " << y << endl;
	
	troca(&x, &y);
	
	cout<< "Depois da troca: x = " << x << ", y " << y << endl;

	
}
