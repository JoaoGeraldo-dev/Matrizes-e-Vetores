#include <iostream>
using namespace std;

int main (){
	
	 int m1[2][2] = {
		{1,2},
		{2,3}
	};
	
		 int m2[2][2] = {
		{4,2},
		{9,3}
	};
	
	int result[2][2] = {0};
	
	for(int i =0; i<2; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k<2; k++){
				result[i][j] =+ m1[i][k] * m2[k][j];
			}
			
		}
	}
	
	cout <<"resultado da matriz (C = A x B):\n";
	for (int i = 0; i<2; i++){
		for(int j = 0; j < 2; j++){
			cout << result[i][j] << " ";
		}
		cout << endl;
	 }
}
