/* HEADER
 * Este programa calcula el valor hash de una cadena usando un algoritmo
 * sencillo. 
 * Complejidad computacional:
 * 1. Recorrer la cadena: O(n) - Se itera a través de todos los caracteres de la
 * cadena.
 * 2. Operaciones del hash: O(1) por carácter - Se realizan multiplicaciones y
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

/*Funcion para hashear un string
Complejidad computacional:
- Calcular la longitud de la cadena: O(1)
- Iterar sobre la cadena: O(n), donde n es la longitud de la cadena.
- Operaciones por carácter (multiplicación, suma, modulo): O(1) por iteración.
Total: O(n)
*/ 
long long prhf(string &s) {
    int n = s.length();
    int p = 31;
    int m = 1e9 + 9;
    long long valorHash = 0;
    long long potencia = 1;
    for (int i = 0; i < n; i++){
      valorHash = (valorHash + (s[i]- 'a' + 1)* potencia) % m;
      potencia = (potencia * p) % m;
    }
    return valorHash;
}

int main() {
    string s;
    cout << "Ingresa el input para hacer el hash string: ";
    getline(cin, s);

    cout << "Salida: " << prhf(s) << endl;

    return 0;
}