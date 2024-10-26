#ifndef __Rectangle__
#define __Rectangle__

//------------------------------------------------------------------------------
// Rectangle.h - содержит описание класса прямоугольника,
// порожденного от базового класса Figure
//------------------------------------------------------------------------------

#include "Figure.h"

//------------------------------------------------------------------------------
// прямоугольник
class Rectangle: public Figure
{
  public:
    int x, y; // ширина, высота
    // переопределяем интерфейс класса
    void InData(ifstream &ifst);  // ввод данных из потока
    void Out(ofstream &ofst);     // вывод данных в стандартный поток

    // создание без инициализации.
    Rectangle() {} 
};

//------------------------------------------------------------------------------
// Фабрика, обеспечивающая создание прямоугольников при чтении признака фигуры
class RectangleFactory: public FigureFactory {
public:
    // Конструктор фабрики, устанавливющий признак прямоугольника (равен 1)
    RectangleFactory():FigureFactory(1) { }
    
    // Переопределение метода Create на создание прямоугольников.
    Figure* Create(int key) {
        if(key == mark)
            return new Rectangle;
        else
            return nullptr;
    }
};
  
#endif
