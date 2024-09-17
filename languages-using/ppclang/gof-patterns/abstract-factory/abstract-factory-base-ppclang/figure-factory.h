#ifndef __figure_factory__
#define __figure_factory__

//------------------------------------------------------------------------------
// figure-factory.h - Фабрика фигур, которая вырождается в перечисление
// признаков семейств, так как ничего кроме идентификации по признакам
// не требуется.
// Помимо фабрики здесь же описываются прототипы обобщенной функции и
// обработчиков специализаций.
//------------------------------------------------------------------------------

#include "rectangle.h"
#include "triangle.h"

//------------------------------------------------------------------------------
// Фабрика фигур
// typedef struct FigureFactory {} <simple, coord: void;> FigureFactory;

// typedef struct FigureFactory {} < : > FigureFactory;
// FigureFactory + <simple: void;>;
// FigureFactory + <coord: void;>;

typedef struct FigureFactory {} <simple: void;> FigureFactory;
FigureFactory + <coord: void;>;

//------------------------------------------------------------------------------
// Обобщенная функция создания прямоугольника
Rectangle* CreateRectangle<FigureFactory *factory>();
// Обработчик специализации, создающий простой прямоугольник
Rectangle* CreateRectangle<FigureFactory.simple *factory>();
// Обработчик специализации, создающий прямоугольник, заданный координатами
Rectangle* CreateRectangle<FigureFactory.coord *factory>();

//------------------------------------------------------------------------------
// Обобщенная функция создания треугольника
Triangle* CreateTriangle<FigureFactory *factory>();
// Обработчик специализации, создающий простой треугольник
Triangle* CreateTriangle<FigureFactory.simple *factory>();
// Обработчик специализации, создающий треугольник, заданный координатами
Triangle* CreateTriangle<FigureFactory.coord *factory>();

#endif // __figure_factory__