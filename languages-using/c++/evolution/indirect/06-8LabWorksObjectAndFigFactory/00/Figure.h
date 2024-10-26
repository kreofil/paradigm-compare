#ifndef __Figure__
#define __Figure__

//------------------------------------------------------------------------------
// Figure.h - содержит описание обобщающей геометрической фигуры,
// являющееся базовыым классом для всех прочих фигур
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

//------------------------------------------------------------------------------

// Класс, обобщающает все имеющиеся фигуры.
// Является абстрактным, обеспечивая, тем самым, проверку интерфейса 
class Figure {
public:

    // иденитфикация, порождение и ввод фигуры из потока
    static  Figure* In(ifstream &ifst);

    virtual void InData(ifstream &ifst) = 0;  // ввод данных из потока
    virtual void Out(ofstream &ofst) = 0;     // вывод данных в стандартный поток
//  protected:
//    Figure() {};
};

#endif
