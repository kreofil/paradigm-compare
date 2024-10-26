//------------------------------------------------------------------------------
// Container.cpp - содержит реализацию методов класса Container
//------------------------------------------------------------------------------

#include "Container.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
Container::Container(): len(0) { }

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Container::Clear()
{
    for(int i = 0; i < len; i++)
    {
      delete cont[i];
    }
    len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера
void Container::In(ifstream &ifst) {
    while(!ifst.eof())
    {
      if((cont[len] = Figure::In(ifst)) != 0)
      {
        len++;
      }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера
void Container::Out(ofstream &ofst) {
    ofst << "Container contents " << len << " elements." << endl;
    for(int i = 0; i < len; i++) {
      ofst << i << ": ";
      cont[i]->Out(ofst);
    }
}
