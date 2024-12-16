/*

Crea un programa con los siguientes procedimientos:

1. `imprimirLinea`: Imprime una línea de caracteres `*` de una longitud dada
2. `imprimirCuadrado`: Dibuja un cuadrado de `*` usando `imprimirLinea`

**Salida esperada:**  
Si el usuario ingresa `4`, el programa debe imprimir:{
  
  ****
  ****
  ****
  ****
}

 */

#include <iostream>
using namespace std;

void imprimirLinea(int longitud) {
  for (int i = 0; i < longitud; i++) {
    cout << '*';
  }
  cout << endl;
}

void imprimirCuadrado(int tamano) {
  for (int i = 0; i < tamano; i++) {
    imprimirLinea(tamano);
  }
}

int main() {
  int tamano;

  cout << "Ingresa el tamaño del cuadrado: ";
  cin >> tamano;

  imprimirCuadrado(tamano);

  return 0;
}

