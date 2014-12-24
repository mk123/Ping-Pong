#include "PLAYER.H"
#ifndef KEY_H
#define KEY_H
class KEY {
 private:
 int k_p;    //k_p key pressed
 int id;
 public:
 PLAYER *p_1;
 PLAYER *p_2;
 KEY(int a,PLAYER *b,PLAYER *c)
 {
 this->id=a;
 this->p_1=b;
 this->p_2=c;
 }
 void keyPressed(char k_press)
 {
  this->k_p=k_press;
  if(this->k_p=='w'||this->k_p=='s')
 this->p_1->move(this->k_p);
 else if(this->k_p=='o'||this->k_p=='l')
 this->p_2->move(this->k_p);

 }

 };

#endif
