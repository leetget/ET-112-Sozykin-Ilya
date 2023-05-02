#include "graphics.h"

void sun(int x, int y, int r){
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL, YELLOW);
   fillellipse(x, y, r, r);
}