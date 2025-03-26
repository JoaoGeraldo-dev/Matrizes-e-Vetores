#include <iostream>
#include <iomanip>
using namespace std;

#define l 10
#define c 10
int main() {
	int x;
	int y;
	int tabela[l][c];
	
	for(y=0; y < l; y+=1)
		for(x=0; x < c; x+= 1)
			tabela[y][x] = y*x;
			
	cout << "\n       Tabela de Multiplicacao\n";
	
	cout << setw(6) << 0;
	for(x=1; x < c; x+=1)
		cout << setw (3) << x;
	cout << endl;
	
	cout << "  ";
	
	for(x=0; x <3*c; x +=1)
		cout << "-";
	cout << endl;
	
	for(y = 0; y < l; y += 1){
		cout<< setw(2) << y << "|";
		for(x = 0; x < c; x += 1)
			cout << setw(3) << tabela[y][x];
		cout << endl;
	}
	
}
