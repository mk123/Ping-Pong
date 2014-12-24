#include<iostream.h>
#include "KEY.H"
#include "PLAYER.H"
#include<conio.h>
void main()
{char a;
 clrscr();
 PLAYER p1(1,'w','s');
 PLAYER p2(2,'o','l');
 KEY k1(1,&p1,&p2);     //tells the k1 to control player p1 and p2
 p1.draw_bat(1,10);
 p2.draw_bat(79,10);
 do
 {
 a=getch();
 k1.keyPressed(a);
 }while(a!='q');
}
