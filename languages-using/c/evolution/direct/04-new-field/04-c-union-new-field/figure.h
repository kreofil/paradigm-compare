#ifndef __figure__
#define __figure__

//==============================================================================
// figure.h - содержит описание обобщающей геометрической фигуры,
//==============================================================================

#include "rectangle.h"
#include "triangle.h"

//------------------------------------------------------------------------------
// значения ключей для каждой из фигур
typedef enum key { RECTANGLE,
    TRIANGLE } key;

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся фигуры
typedef struct Figure {
    key k; // ключ
    unsigned int color; // цвет фигуры (добавленное поле)
    // используемые альтернативы
    union { // используем простейшую реализацию
        Rectangle r;
        Triangle t;
    };
} Figure;

#endif // __figure__