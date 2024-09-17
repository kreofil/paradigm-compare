#ifndef __figure__
#define __figure__

//------------------------------------------------------------------------------
// figure.h - содержит описание обобщающей геометрической фигуры,
// объединяющей фигуры семейств.
//------------------------------------------------------------------------------

#include <stdio.h>
#include "simple-rectangle.h"
#include "simple-triangle.h"

//------------------------------------------------------------------------------
// Фигура
typedef struct Figure {} <SimpleRectangle; SimpleTriangle;> Figure;

// Обобщенная функция вывода фигуры
void FigureOut<Figure *f>(FILE* ofst);

#endif // __figure__