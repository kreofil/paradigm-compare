// clang -pthread thread-rect-ppp.c
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

//==============================================================================
// В начале предсталена обертка над функциями библиотеки pthread
// аналогичная объектно-ориентированной обертке
//==============================================================================

// Обобщенная структура, используемая для обертки данных,
// передаваемых в поточную функцию, и для возврата результата
// Конкретные данные формируются в специализации для каждого
// отдельного потока
typedef struct ThreadData {pthread_t threadId;}<> ThreadData;

// Обобщенная функция, задающая формат для передачи аргументов
// и подменяемая на соответствующий обработчик специализации.
// Часто он может бытьтолько один
void RunThread <ThreadData* d>() {} //= 0;

// POSIX функция, вызвывающая обработчик обобщения
// подменяемый обработчиком специализации
void* ThreadFunc(void* d) {
  RunThread<(ThreadData*) d>();
  return NULL;
}

// Функция создания и запуска потока
int StartThread(ThreadData* td) {
  return pthread_create(&(td->threadId), NULL, ThreadFunc, td);
}

// Функция ожидания завершения потока
int WaitThread(ThreadData* td) {
  return pthread_join(td->threadId, NULL);
}

//==============================================================================
// Далее в других единицах компиляции
// могут быть описаны различные специализации,
// определяющие потоки.
// В примере только прямоугольник.
//==============================================================================

// Прямоугольник
typedef struct Rectangle{int x, y;} Rectangle;

// Основа специализации. Прямоугольник, передаваемый потоку
// и формируемое значение результата (периметр)
typedef struct RectPreimeter {Rectangle r; double p;} RectPreimeter;

// Вывод результата вычислений периметра конкретно прямоугольника
void PrintRectPerimeter(RectPreimeter* rp, const char* str) {
    printf("Perimeter of %s = %f\n", str, rp->p);
}

// Специализация для потока
ThreadData + <RectPreimeter;>;

// Обработчик специализации, запускаемый в потоке
// вычисляет периметр прямоугольника.
void RunThread<ThreadData.RectPreimeter *rp>() {
  rp->@p = (double)((rp->@r.x+rp->@r.y)*2);
}

//==============================================================================
// Главная функция, осуществляющая необходимые вычисления
//==============================================================================

int main () {
    // Переменные, передаваемая запускаемому потоку
    // Если инициализация напрямую еще не работает.
    // Ее можно заменить на присваивания.
    // Представлен вариант инициализации не всех полей. Может его и не будет.
    struct ThreadData.RectPreimeter thread1; //= {0}<{3,5,0.0}>;
    thread1.threadId = 0;
    thread1.@r.x = 3;
    thread1.@r.y = 5;
    thread1.@p = 0.0;
    struct ThreadData.RectPreimeter thread2; //= {0}<{7,4,0.0}>;
    thread2.threadId = 0;
    thread2.@r.x = 7;
    thread2.@r.y = 4;
    thread2.@p = 0.0;
    struct ThreadData.RectPreimeter thread3; //= {0}<{6,8,0.0}>;
    thread3.threadId = 0;
    thread3.@r.x = 6;
    thread3.@r.y = 8;
    thread3.@p = 0.0;

    // Далее запуск трех потоков
    StartThread((ThreadData*)&thread1);
    StartThread((ThreadData*)&thread2);
    StartThread((ThreadData*)&thread3);
    // StartThread((ThreadData*)&thread1);
    // StartThread((ThreadData*)&thread2);
    // StartThread((ThreadData*)&thread3);

    // Ожидание завершения потоков
    WaitThread((ThreadData*)&thread1);
    WaitThread((ThreadData*)&thread2);
    WaitThread((ThreadData*)&thread3);
    // WaitThread((ThreadData*)&thread1);
    // WaitThread((ThreadData*)&thread2);
    // WaitThread((ThreadData*)&thread3);

    // Печать периметров
    PrintRectPerimeter(&(thread1.@), "Tread1");
    PrintRectPerimeter(&(thread2.@), "Tread2");
    PrintRectPerimeter(&(thread3.@), "Tread3");

    return 0;
}
