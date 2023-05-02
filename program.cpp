#include "graphics.h"
#include "picture.hpp"
int main()
{ initwindow(800,600);
 house(); // дом
 sun(); // солнце
 man(); // человек
 fence(); // забор
 getch();
 closegraph();
}
