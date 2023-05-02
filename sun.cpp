#include "graphics.h"

void sun(){
   int x = 50;
   int y = 50;
   int r = 40;
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL, YELLOW);
   fillellipse(x, y, r, r);
}