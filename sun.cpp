#include "graphics.h"

void sun(){
   int x = 60;
   int y = 50;
   int r = 50;
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL, YELLOW);
   fillellipse(x, y, r, r);
}