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
