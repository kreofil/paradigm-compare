//------------------------------------------------------------------------------
// simple-triangle.cpp - содержит методы простого треугольника
//------------------------------------------------------------------------------

// #include <iostream>
#include "simple-triangle.h"

//------------------------------------------------------------------------------
// Конструктор треугольника
SimpleTriangle::SimpleTriangle(double _a, double _b, double _c):
    a{_a}, b{_b}, c{_c}
{}

//------------------------------------------------------------------------------
// Ввод параметров треугольника
void SimpleTriangle::InData(std::ifstream &ifst) {
  ifst >> a >> b >> c;
  // std::cout << "    " << a << ", " << b <<  ", " << c << "\n";
}

//------------------------------------------------------------------------------
// Вывод параметров треугольника
void SimpleTriangle::Out(std::ofstream &ofst) {
  ofst << "It is Simple Triangle: a = "
    << a << ", b = " << b
    << ", c = " << c << "\n";
}
