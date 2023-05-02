#include "graphics.h"
#include "picture.hpp"
void treug_dom(int x, int y, int a){
   int v[] = {x, y, x+a/2, y-a/2,x+a, y};
   setcolor(LIGHTRED);
   setfillstyle(SOLID_FILL, BLACK );
   fillpoly(3, v);
}
void stena(int x1, int x2, int y1,int y2){
   setcolor(BLACK);
   setfillstyle(SOLID_FILL,RED);
   bar(x1,x2,y1,y2);
   
}
void door(int x1,int y1,int x2, int y2){
   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BROWN);
   bar(x1,y1,x2,y2);
}
void ruchka(int x,int y,int radius){
   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   circle(x,y,radius);
}
void trubaxd(int x1,int x2,int y1,int y2){
   setcolor(BLACK);
   setfillstyle(SOLID_FILL,COLOR(136,69,53));
   bar(x1,x2,y1,y2);
}
void house(){
   int x =600;
   int y =250;
   int h =190;
   stena(x,y,x+150,y+150);
   trubaxd(x+10,y-80,x+40,y-10);
   treug_dom(x-20,y,h);
   door(x+60,y+80,x+110,y+150);
   ruchka(x+100,y+120,h/35);
   
}