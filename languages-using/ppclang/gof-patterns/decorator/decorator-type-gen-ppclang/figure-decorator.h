#ifndef __figure_decorator__
#define __figure_decorator__

//==============================================================================
// figure-triangle.h - описание специализации фигуры как треугольника
//==============================================================================

#include "figure.h"

typedef struct Decorator {
    unsigned int color; // цвет фигуры
} < struct Figure; > Decorator; // Обобщение любой фигуры
// } < Figure; > Decorator; // Обобщение любой фигуры

//------------------------------------------------------------------------------
// Фигура - декоратор как специализация фигуры
Figure + < Decorator; > ;
// struct Figure + < struct Decorator; > ;

#endif // __figure_decorator__
