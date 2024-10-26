#ifndef __Container__
#define __Container__

#include "Figure.h"

//------------------------------------------------------------------------------
// Container.h - содержит класс,
// представляющий простейший контейнер
// на основе одномерного массива.
class Container
{
    enum {max_len = 100}; // максимальная длина
    int len; // текущая длина
    Figure *cont[max_len];
  public:
    void In(ifstream &ifst);     // ввод фигур в котнейнер из входного потока
    void Out(ofstream &ofst);    // вывод фигур в выходного потока
    void Clear();  // очистка контейнера от фигур
    Container();    // инициализация контейнера
    ~Container() {Clear();} // утилизация контейнера перед уничтожением
};

#endif
