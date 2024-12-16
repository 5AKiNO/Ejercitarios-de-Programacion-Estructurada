/*

Crea un programa que:

1. Genere 10 números enteros aleatorios entre 50 y 100
2. Calcule y muestre el promedio de esos números

Salida esperada:

Números aleatorios: 65, 89, 92, 50, 76, 81, 55, 100, 72, 94  
Promedio: 77.4

 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  const int TAMANO = 10;
  int numeros[TAMANO];
  int suma = 0;
  float promedio;

  srand(time(0));

  cout << "Números aleatorios: ";
  for (int i = 0; i < TAMANO; i++) {
    numeros[i] = 50 + rand() % 51;
    suma += numeros[i];
    cout << numeros[i];
    if (i < TAMANO - 1) cout << ", ";
  }
  cout << endl;

  promedio = static_cast<float>(suma) / TAMANO;

  cout << "Promedio: " << promedio << endl;

  return 0;
}
