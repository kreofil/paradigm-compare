#ifndef __container__
#define __container__

//==============================================================================
// container.h - содержит тип данных, представляющий простейший контейнер
//==============================================================================

//------------------------------------------------------------------------------
// Ссылка на описание геометрической фигуры. Знание структуры самой фигуры
// для представленной реализации контейнера не требуется
struct Figure;

enum {max_len = 100}; // максимальная длина

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
typedef struct Container {
  int len; // текущая длина
  struct Figure *cont[max_len];
} Container;

#endif // __container__