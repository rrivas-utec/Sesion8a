#include <iostream>
#include "triangulo.h"
using namespace std;
void ejemplo1() {
    // Ingreso de datos
    longitud_t a;
    longitud_t b;
    longitud_t c;
    cout << "ingrese los 3 lados:";
    cin >> a >> b >> c;
    // Crear el objeto
    triangulo_t t1 (a, b, c);
    // Mostramos el resultado
    cout << "El area es: "
            << t1.calcular_area()
            << endl;
    cout << "El perimetro es: "
            << t1.calcular_perimetro()
            << endl;
}
int main() {
    ejemplo1();
    return 0;
}