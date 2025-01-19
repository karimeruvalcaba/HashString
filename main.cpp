/* HEADER
 * Este programa calcula el valor hash de una cadena usando un algoritmo
 * sencillo. Complejidad computacional:
 * 1. Recorrer la cadena: O(n) - Se itera a través de todos los caracteres de la
 * cadena.
 * 2. Operaciones de hash: O(1) por carácter - Se realizan multiplicaciones y
 * sumas por cada carácter. Total: O(n) - La complejidad depende de la longitud
 * de la cadena de entrada.
 */

/* AUTORES
 * Carlos Ernesto Soto Alarcón A01747990
 * Sergio Alfonso Casillas Santoyo A01424863
 * Karime Itzel Ruvalcaba Pérez A01656188
 */

#include <iostream>
#include <string>
using namespace std;

unsigned int hashString(const string &str) {
  unsigned int hash = 7;
  for (char c : str) {
    hash = hash * 31 + c;
  }
  return hash;
}

int main() {
  string input;

  cout << "Ingrese una cadena: ";
  getline(cin, input);

  unsigned int hashValue = hashString(input);

  cout << "\nEl valor hash es: " << hashValue << endl;

  return 0;
}
