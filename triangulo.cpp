//
// Created by utec on 16/10/19.
//

#include "triangulo.h"
#include <cmath>
// Constructor por defecto
triangulo_t::triangulo_t() {
    lado1 = 0;
    lado2 = 0;
    lado3 = 0;
}
// Constructor por parametros
triangulo_t::triangulo_t(longitud_t l1,
        longitud_t l2,
        longitud_t l3) {
    lado1 = l1;
    lado2 = l2;
    lado3 = l3;
}
area_t triangulo_t::calcular_area() {
    auto s = calcular_semiperimetro();
    auto& a = lado1;
    auto& b = lado2;
    auto& c = lado3;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
longitud_t triangulo_t::calcular_perimetro() {
    return lado1 + lado2 + lado3;
}

longitud_t triangulo_t::calcular_semiperimetro() {
    return calcular_perimetro()/2;
}
