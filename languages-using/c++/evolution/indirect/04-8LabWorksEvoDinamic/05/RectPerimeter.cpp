//------------------------------------------------------------------------------
// Файл RectPerimeter, содержащий функцию вычисления периметра прямоугольника

#include "Rectangle.h"

double Perimeter(Rectangle& r) {
    return 2.0 * (r.x + r.y);
}