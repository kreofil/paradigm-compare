//------------------------------------------------------------------------------
// simple-rectangle-out.cpp - содержит процедуру
// вывода параметров прямоугольника
//------------------------------------------------------------------------------

#include "simple-rectangle.h"

//------------------------------------------------------------------------------
// Вывод параметров прямоугольника
void SimpleRectangle::Out(std::ofstream &ofst) {
  ofst << "It is Simple Rectangle: x = " << x << ", y = " << y << "\n";
}
