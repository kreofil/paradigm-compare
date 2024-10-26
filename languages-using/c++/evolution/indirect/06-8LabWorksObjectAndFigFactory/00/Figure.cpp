// Figure.cpp - Реализация функций, поддерживающих работу с базовой фигурой.
// В основном это функции и данные фабрики абстрактной фигуры.

#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"

//------------------------------------------------------------------------------
// Статический метод, обеспечивающий вод фигур из потока
Figure* Figure::In(ifstream &ifst)
{
    Figure *pf = nullptr;
    int k;
    // Ввод признака из файла
    ifst >> k;
    switch(k) {
        case 1: // прямоугольник
            pf = new Rectangle;
            break;
        case 2: // треугольник
            pf = new Triangle;
            break;
        default:
            return nullptr;
    }
    if(pf)
        pf->InData(ifst);
    return pf;
}
