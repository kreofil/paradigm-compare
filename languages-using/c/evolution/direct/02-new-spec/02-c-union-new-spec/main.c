//==============================================================================
// main.c - содержит главную функцию,
// обеспечивающую простое тестирование
//==============================================================================

#include <stdio.h>

#include "container.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
void InitContainer(Container* c) ;
void ClearContainer(Container* c);

void InContainer(Container* c, FILE* ifst) ;
void OutContainer(Container* c, FILE* ofst) ;

//------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
  if(argc !=3) {
    printf("incorrect command line!\nWaited: command infile outfile\n");
    return 1;
  }
  FILE* ifst = fopen(argv[1], "r");
  FILE* ofst = fopen(argv[2], "w");

  printf("Start\n");

  Container c;
  InitContainer(&c);
  InContainer(&c, ifst);
  fclose(ifst);

  fprintf(ofst, "Filled container.\n");
  OutContainer(&c, ofst);

  ClearContainer(&c);
  fprintf(ofst, "Empty container.\n");
  OutContainer(&c, ofst);
  fclose(ofst);

  printf("Stop\n");
  return 0;
}