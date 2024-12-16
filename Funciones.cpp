/*
 
Crea un programa con las siguientes funciones:

1. `calcularPromedio`: Recibe tres calificaciones como parámetros y devuelve el promedio
2. `determinarEstado`: Recibe el promedio como parámetro y devuelve `"Aprobado"` si el promedio es mayor o igual a 70, o `"Reprobado"` en caso contrario

Salida esperada:
El programa debe pedir tres calificaciones, mostrar el promedio y el estado del estudiante

 */

#include <iostream>
using namespace std;

float calcularPromedio(float cal1, float cal2, float cal3) {
  return (cal1 + cal2 + cal3) / 3;
}

string determinarEstado(float promedio) {
  if (promedio >= 70) {
    return "Aprobado";
  } else {
    return "Reprobado";
  }
}

int main() {
  float cal1, cal2, cal3;

  cout << "Ingresa la primera calificación: ";
  cin >> cal1;
  cout << "Ingresa la segunda calificación: ";
  cin >> cal2;
  cout << "Ingresa la tercera calificación: ";
  cin >> cal3;

  float promedio = calcularPromedio(cal1, cal2, cal3);

  string estado = determinarEstado(promedio);

  cout << "Promedio: " << promedio << endl;
  cout << "Estado: " << estado << endl;

  return 0;
}
