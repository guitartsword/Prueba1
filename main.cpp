#include <iostream>

using namespace std;

int factorial(int);

int main(int argc, char const *argv[])
{
	int factrial;
	char continuar;
	do{
		cout << "--------Calcular el factorial de un numero------------" << endl;
		cout << "Ingrese el numero: ";
		cin >> factrial;
		cout << factorial(factrial);
		cout << "Calcular otro numero? [S]/[N] ";
		cin >> continuar;
	}while(continuar == 'S' || continuar == 's');

	return 0;
}

int factorial(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n*factorial(n-1);
}