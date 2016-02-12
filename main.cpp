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