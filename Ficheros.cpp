/*

1. Escribe un programa que almacene los nombres y edades de 3 personas en un archivo de texto llamado `personas.txt`
2. Lee los datos del archivo y muéstralos en consola en el siguiente formato:

Nombre: Juan, Edad: 25  
Nombre: María, Edad: 30  
Nombre: Pedro, Edad: 40

 */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream archivoSalida("personas.txt");
  if (!archivoSalida) {
    cerr << "Error al abrir el archivo para escritura." << endl;
    return 1;
  }

  archivoSalida << "Juan 25" << endl;
  archivoSalida << "Maria 30" << endl;
  archivoSalida << "Pedro 40" << endl;

  archivoSalida.close();
  
  ifstream archivoEntrada("personas.txt");
  if (!archivoEntrada) {
    cerr << "Error al abrir el archivo para lectura." << endl;
    return 1;
  }

  string nombre;
  int edad;

  cout << "Contenido del archivo:" << endl;
  while (archivoEntrada >> nombre >> edad) {
    cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
  }

  archivoEntrada.close();

  return 0;
}
