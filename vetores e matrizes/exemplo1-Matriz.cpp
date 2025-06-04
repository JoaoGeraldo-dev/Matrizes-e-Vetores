#include <iostream>
using namespace std;

#define a 5
#define l 5
int main() {
	int x;
	int y;
	char matriz [a] [l];
	
	for (y = 0; y < a; y += 1){
		for(x = 0; x < l; x+= 1){
			
			matriz[y][x] =0;
		} 
	}
  	
  	cout<< endl << "Entre com coordenads na forma \"x y\"." <<endl;
  	cout<< endl << "Use valores negativos para sair do programa." <<endl;
  	
  	cout<<"Coordenadas: ";
  	cin>> y>> x;
  	
  	while (x >= 0 && y >= 0)
  	{
  		matriz[y][x] = 1;
  		
  		for (y = 0; y < a; y += 1){
  			for(x = 0; x < l; x+=1){
  				cout << matriz[y][x] << " ";
			  }
			  cout<< endl << endl;
		  }
		  cout << endl;
		  cout << "Coordenadas: ";
		  cin >> y >> x;
	  }
	
	
}
