#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double suma(double,double);
double resta(double,double);
double multiplicacion(double,double);
double division(double,double);

int main()
{
	double resultado, a, b;
	int opcion;
	
	cout << "***************************** Calculadora *****************************" << endl;
	cout << "Ingrese los valores";
	cout << ">>"; cin >> a;
	cin >> b;
	
	cout << "Ingese el número de la opción que desee realizar" << endl;
	cout << "\n1. Suma \n 2. Resta \n 3. Multipliciación \n 4. Division" << endl;
	cout << ">>"; cin >> opcion;
	
	switch (opcion)
	{
		case 1: cout << suma(a, b);
		break;
		case 2: cout << resta(a, b);
		break;
		case 3: cout << multiplicacion(a, b);
		break;
		case 4: cout << division(a, b);
		break;
	}
	

	return 0;
}
double suma(double a, double b)
{
	return a + b;
}

double resta(double a, double b)
{
	return a - b;
}

double multiplicacion(double a, double b)
{
	return a * b;
}
double division(double a,double b)
{
	return a / b;
}
