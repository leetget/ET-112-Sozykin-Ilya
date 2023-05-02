#include "graphics.h"
#include "picture.hpp"
int main()
{ 
 initwindow(800,600);
 house(600,250,190); // дом
 sun(50,50,50); // солнце
 man(); // человек
 fence(); // забор
 getch();
 closegraph();
}
