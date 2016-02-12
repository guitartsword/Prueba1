#include <iostream>

using namespace std;

int factorial(int);

int main(int argc, char const *argv[])
{
	int fact;
	cout << "Ingrese numero: "
	cin >> fact;
	cout << factorial(fact);
	return 0;
}

int factorial(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n*factorial(n-1);
}