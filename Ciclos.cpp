#include <iostream>
using namespace std;

int main() {
  double numero;
  double cantidad = 0;
  double suma = 0;

  cout << "Introduce números (ingresa 0 para terminar):" << endl;

  while (true) {
    cout << "Número: ";
    cin >> numero;

    if (numero == 0) {
      break;
    }

    if (numero < 0) {
      cout << "Número negativo ignorado" << endl;
      continue;
    }

    suma += numero;
    cantidad++;
  }
  
  if (cantidad > 0) {
    double promedio = suma / cantidad;
    cout << "Ingresaste un total de " << cantidad << " números" << endl;
    cout << "La suma de los números es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
  } else {
    cout << "No ingresaste ningún número válido" << endl;
  }

  cout << "Programa terminado." << endl;
  return 0;
}
