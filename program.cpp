#include "graphics.h"
#include "picture.hpp"
int main()
{ 
 initwindow(800,600);
 house(600,250,190); // ���
 sun(50,50,50); // ������
 man(); // �������
 fence(); // �����
 getch();
 closegraph();
}
