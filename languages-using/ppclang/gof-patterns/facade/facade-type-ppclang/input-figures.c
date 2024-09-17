//------------------------------------------------------------------------------
// input-figures.c - функция ввода параметров фигур из файлов
//------------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include "figure-container.h"
#include "simple-creator.h"

// Прототип обобщеннай функции ввода фигуры
void FigureIn<Figure *f>(FILE* file);

//------------------------------------------------------------------------------
// Ввод параметров обобщенной фигуры из стандартного потока ввода
// Для создания фигур используется фабричный метод
void FigureCreateAndIn(FILE* ifst, FigureContainer* pfc) {
  struct Creator.rect  rectangleCreator;
  struct Creator.trian triangleCreator;
  struct Figure* pf;
  int k = 0;
  while(!feof(ifst))
  {
    fscanf(ifst, "%d", &(k));
    switch(k) {
    case 1:
      pf = CreateFigure<&rectangleCreator>();
      break;
    case 2:
      pf = CreateFigure<&triangleCreator>();
      break;
    default:
      printf("Incorrect key of figure!!!\n");
      exit(-1);
    }
    FigureIn<pf>(ifst);
    FigureOut<pf>(stdout);
    FigureContainerAppend(pfc, pf);
  }
}
