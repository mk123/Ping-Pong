#ifndef PLAYER_H
#define PLAYER_H
#include<conio.h>
class PLAYER{
 private:
 int id;
 int k_u,k_d,x,y;   //key up/down
 public:
 PLAYER(int _id,int _up,int _down)
 {
  this->id=_id;
  this->k_u=_up;
  this->k_d=_down;
 }
  void draw_bat(int x,int y)   //draws bat input x-cordinate
  {
   int i;
   this->y=y;
   this->x=x;
   for(i=y;i<=y+5;i++)
   {
   gotoxy(x,i);
   cout<<"*";
   }
  }
 void move(int key)
 {
 if(key==k_u)
 move_up();
 else if(key==k_d)
 move_down();
 }
 void move_up()
 {
  if(this->y>1)
  {
  gotoxy(this->x,this->y+5);
  cout<<" ";
  this->y--;
  gotoxy(this->x,this->y);
  cout<<"*";
  }

 }
 void move_down()
 {
  if(this->y<20)
  {
  gotoxy(this->x,this->y);
  cout<<" ";
  this->y++;
  gotoxy(this->x,this->y+5);
  cout<<"*";
  }
 }

};

#endif
