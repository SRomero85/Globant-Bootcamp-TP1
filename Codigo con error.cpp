#include<iostream>
#include<math.h>

#define RAD(a,b,c) (pow(b,2) - (4 * a*c))

using namespace std;

// sin los parentesis correspondientes este programa da los resultados incorrectos

int main() {

	float a, b, c, d = 0, x1 = 0, x2 = 0;
	char f;

	cout << "Ingrese el valor de 'a': "; cin >> a;
	cout << "Ingrese el valor de 'b': "; cin >> b;
	cout << "Ingrese el valor de 'c': "; cin >> c;

	d = RAD(a, b, c);

	if (d >= 0) {

		x1 = -b + sqrt(RAD(a, b, c)) / 2 * a ;

		x2 = -b - sqrt(RAD(a, b, c)) / 2 * a ;

		cout << "\nEl Resultado de 'x1' es :" << x1 << endl;
		cout << "\nEl Resultado de 'x2' es :" << x2 << endl;

		cout << "\nIngrese S para continuar: "; cin >> f;
	}
	else {
		cout << "\nEl problema no tiene solucion";
		cout << "\nIngrese S para continuar: "; cin >> f;
	}

	return 0;
}