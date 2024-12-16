/*

Escribe un programa que calcule el promedio de un conjunto de números ingresados por el usuario

- El programa debe pedir números repetidamente hasta que el usuario introduzca `0`
- Ignora números negativos (no sumes ni cuentes)
- Muestra el promedio de los números válidos al finalizar

*/

#include <iostream>
using namespace std;

int main () {
  int calificacion;

  cout << "Introduce la calificacion del 0 al 100: ";
  cin >> calificacion;

  if (calificacion >= 90) {
    cout << "Excelente" << endl;
  } else if (calificacion > 69 && calificacion < 90){
    cout << "Aprobado" << endl; 
  } else if (calificacion < 70) {
    cout << "Reprobado" << endl;
  } else {
    cout << "Valor no permitido" << endl;
  }  
  return 0;
}
