#include <iostream>

using namespace std;

int main(){
	float a, b, suma, resta, multiplicacion, division;
	int opcion;
	
	cout << "Digite el primer numero: "; cin >> a;
	cout << "Digie el segundo numero: "; cin >> b;
	
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b;
	
	cout << "Seleccione la operacion que desee realizar";
	cout << "\n1. Suma" << "\n2. Resta" << "\n3. Multiplicacion" << "\n4. Division" << endl;
	cout << ">> "; cin >> opcion;
	
	switch (opcion)
	{
		case 1: cout << "La suma es: " << suma << endl;
		
		case 2: cout << "La resta es: " << resta << endl;
		
		case 3: cout << "La multiplicacion es: " << multiplicacion << endl;
		
		case 4: cout << "La division es: " << division << endl;
	}
		
	cout << "\nGracias por su atencion!!";
}
