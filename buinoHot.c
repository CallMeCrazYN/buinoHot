#include <Gamebuino-Meta.h>

  float pos[2];
  float dir[2];

void setup() {
  gb.begin();


  float pos[2];
  float dir[2];

  pos[0]=0;
  pos[1]=0;

  dir[0]=1;
  dir[1]=1;

}    


void loop() {
  while(!gb.update());
  gb.display.clear();

  gb.lights.clear();



  //what does dis do??
  gb.lights.drawPixel(0,0,RED);


  //oyy we got blue pixel
  gb.display.setColor(BLUE);
  gb.display.drawPixel(pos[0],pos[1]);

  move(int []pos,int []dir);

}


void move(int pos[],int dir[]){



}

}
