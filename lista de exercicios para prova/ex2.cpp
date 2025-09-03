#include<iostream>
using namespace std;

void troca(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x, y;
	
	cout<<"digite o primeiro valor: " << endl;
	cin>>x;
	
	cout<<"digite o segundo valor: "  << endl;
	cin>>y;
	
	troca(&x, &y);
	cout<<"Os valores depois da troca ficaram: " << x <<" e " << y << endl;
}
