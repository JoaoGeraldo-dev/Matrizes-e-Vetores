#include <iostream>
using namespace std;

int main()
{
	int a;
	int &b = a;
	a = 10;
	b = 100;


	cout<< a << endl;
	cout<< b << endl;

}
