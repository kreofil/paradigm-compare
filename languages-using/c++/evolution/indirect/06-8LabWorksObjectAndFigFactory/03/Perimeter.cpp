//------------------------------------------------------------------------------
// Perimeter.cpp - содержит реализацию функции вычисления периметра.
// Использует прямой доступ к полям производных классов
// И динамическую идентификацию типов во время выполнения.
//------------------------------------------------------------------------------

#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Container.h"

//------------------------------------------------------------------------------
// Вычисление периметра фигуры
double Perimeter(Figure* f) {
    Rectangle* r = nullptr;
    Triangle*  t = nullptr;
    
    if((r = dynamic_cast<Rectangle*>(f)) != nullptr) {
        return 2 * (r->x + r-> y);
    }
    else if((t = dynamic_cast<Triangle*>(f)) != nullptr) {
        return t->a + t->b + t->c;
    }
    else {
        return 0.0;
    }
}

//------------------------------------------------------------------------------
// Тестовый вывод периметров всех фигур, размещенных в массиве
void TestOutPerimeters(Container* c, ofstream &ofst) {
    for(int i = 0; i < c->len; i++) {
        ofst << i << ": Perimeter = " << Perimeter(c->cont[i]) << endl;
    }
}
