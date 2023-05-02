#include "graphics.h"
#include "picture.hpp"
int main()
{ 
 initwindow(800,600);
<<<<<<< Updated upstream
 house(600,250,190); // дом
 sun(50,50,50); // солнце
 man(); // человек
 fence(); // забор
=======
 house(); // дом
 sun(); // солнце
 //man(); // человек
 //fence(); // забор
>>>>>>> Stashed changes
 getch();
 closegraph();
}
