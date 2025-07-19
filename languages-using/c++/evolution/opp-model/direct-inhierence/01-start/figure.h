#ifndef __figure__
#define __figure__

//------------------------------------------------------------------------------
// figure.h - содержит описание обобщающей геометрической фигуры,
// являющееся базовыым классом для всех прочих фигур
//------------------------------------------------------------------------------

#include <fstream>
#include <vector>

class Figure;
// Общее описание типа обобщающих функций
typedef void (*InDataP)(Figure* f, std::ifstream &ifst);
typedef void (*OutDataP)(Figure* f, std::ofstream &ofst);

//------------------------------------------------------------------------------
// Класс, обобщающает все имеющиеся фигуры.
// Является абстрактным, обеспечивая, тем самым, проверку интерфейса
class Figure {
public:
  // Идентификация, порождение и ввод фигуры из потока
  static  Figure* In(std::ifstream &ifst);
  // Метод ввода фигуры через параметрическую таблицу
  void InFP(std::ifstream &ifst);
  // Метод вывода фигуры через параметрическую таблицу
  void OutFP(std::ofstream &ofst);

  // Формирование параметрических отношений вместо виртуальных методов
  int specTag; // Признак специализации, доступный из обобщения

  // Счетчик числа зарегистрированных специализаций
  static int specCounter;
};

// Параметрическая таблица для функций ввода
// static std::vector<void (*)(Figure* f, std::ifstream &ifst)> InP;
extern std::vector<InDataP> InP;
// Параметрическая таблица для функций вывода
// static std::vector<void (*)(Figure* f, std::ofstream &ofst)> OutP;
extern std::vector<OutDataP> OutP;

#endif // __figure__