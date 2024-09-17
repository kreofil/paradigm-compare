#ifndef __triangle__
#define __triangle__

//------------------------------------------------------------------------------
// triangle.h - содержит описание абстрактного треугольника,
// порожденного от базового класса Figure
// Используется для создания семейства треугольников
//------------------------------------------------------------------------------

#include "figure.h"

//------------------------------------------------------------------------------
// треугольник
class Triangle: public Figure {
public:
  // переопределяем интерфейс класса
  // virtual void InData(std::ifstream &ifst);  // ввод данных из потока
  // virtual void Out(std::ofstream &ofst);    // вывод данных в стандартный поток
};

#endif // __triangle__