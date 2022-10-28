
#include "Rectangle_m.h"

int main()
{
    Rectangle_m r1(10, 6, '*');
    r1.ShowFigure();
    ChangeSymbol(r1, '#');
    r1.ShowFigure();
    r1.ShowPerimetr();
    ChangePerimetr(r1,20, 5);
    r1.ShowFigure();
    

}
