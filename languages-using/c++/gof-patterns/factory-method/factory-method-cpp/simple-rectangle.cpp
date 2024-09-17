//------------------------------------------------------------------------------
// simple-rectangle.cpp - содержит методы прямоугольника
//------------------------------------------------------------------------------

#include "simple-rectangle.h"

//------------------------------------------------------------------------------
// Конструктор прямоугольника
// SimpleRectangle::SimpleRectangle(double _x, double _y): x{_x}, y{_y} {}

//------------------------------------------------------------------------------
// Ввод параметров прямоугольника
void SimpleRectangle::InData(std::ifstream &ifst) {
  ifst >> x >> y;
  // std::cout << "    " << x << ", " << y << "\n";
}

//------------------------------------------------------------------------------
// Вывод параметров прямоугольника
void SimpleRectangle::Out(std::ofstream &ofst) {
  ofst << "It is Simple Rectangle: x = " << x << ", y = " << y << "\n";
}
