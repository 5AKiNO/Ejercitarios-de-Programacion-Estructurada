/*

1. Declara un vector de tamaño 10 que almacene los primeros 10 números impares
2. Declara una matriz de 3x3 que almacene los números del 1 al 9. Imprime la matriz en formato de cuadrado

Salida esperada:

Matriz:
1 2 3
4 5 6
7 8 9


 */

#include <iostream>
using namespace std;

int main() {
  int impares[10];
  for (int i = 0; i < 10; i++) {
    impares[i] = 2 * i + 1; 
  }

  int matriz[3][3];
  int valor = 1;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matriz[i][j] = valor;
      valor++;
    }
  }

  cout << "Matriz:" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matriz[i][j] << " ";
    }
  cout << endl;
  }

  return 0;
}
