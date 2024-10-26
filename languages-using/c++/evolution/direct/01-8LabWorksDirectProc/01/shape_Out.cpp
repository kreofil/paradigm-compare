//------------------------------------------------------------------------------
// shape_Out.cpp - содержит процедуру вывода параметров 
// для произвольной геометрической фигуры
//------------------------------------------------------------------------------

#include <fstream>
#include "shape_atd.h"

//------------------------------------------------------------------------------

using namespace std;

namespace simple_shapes {

//------------------------------------------------------------------------------

  // Сигнатуры требуемых функций можно тоже подключить через
  // заголовочный файл. Но, для простоты, можно и так описать.
  void Out(rectangle &r, ofstream &ofst);
  void Out(triangle  &t, ofstream &ofst);

//------------------------------------------------------------------------------

  // Вывод параметров текущей фигуры в поток
  void Out(shape &s, ofstream &ofst)
  {
    switch(s.k) {
    case shape::RECTANGLE:
      Out(s.r, ofst);
      break;
    case shape::TRIANGLE:
      Out(s.t, ofst);
      break;
    default:
      ofst << "Incorrect figure!" << endl;
    }
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace