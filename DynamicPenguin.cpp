#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void leg1forward(int i)
{
 //leg1 in forward
  line(590-i,330,605-i,333);    //16
line(605-i,333,540-i,400);    //17
line(540-i,400,524-i,395);    //18
line(524-i,395,590-i,330);    //19
line(535-i,382,540-i,392);    //20
line(540-i,392,465-i,410);    //21
line(465-i,410,458-i,402);    //22
line(458-i,402,535-i,382);    //23
circle(592-i,337,3);        //C6
circle(530-i,387,3);        //C7
}

void leg1backward(int i)
{
//leg1 in backward
line(590-i,330,605-i,333);    //16
line(605-i,333,590-i,400);    //17
line(590-i,400,574-i,395);    //18
line(574-i,395,590-i,330);    //19
line(585-i,382,590-i,392);    //20
line(590-i,392,515-i,410);    //21
line(515-i,410,508-i,402);    //22
line(508-i,402,585-i,382);    //23
circle(597-i,337,3);        //C6
circle(580-i,387,3);        //C7
}

void leg2forward(int i)
{
//leg2 in forward
line(660-i,335,675-i,332);    //24
line(675-i,332,635-i,395);    //25
line(635-i,395,620-i,400);    //26
line(620-i,400,660-i,335);    //27
line(632-i,385,635-i,395);    //28
line(635-i,395,562-i,412);    //29
line(562-i,412,559-i,402);    //30
line(559-i,402,632-i,385);    //31
circle(663-i,339,3);        //C4
circle(625-i,392,3);        //C5
}

void leg2backward(int i)
{
 //leg2 in backward
 line(660-i,335,675-i,332);    //24
line(675-i,332,685-i,395);    //25
line(685-i,395,670-i,400);    //26
line(670-i,400,660-i,335);    //27
line(682-i,385,685-i,395);    //28
line(685-i,395,612-i,412);    //29
line(612-i,412,609-i,402);    //30
line(609-i,402,682-i,385);    //31
circle(669-i,339,3);        //C4
circle(675-i,392,3);        //C5
}

void wingsup(int i)
{
//wings in upward
  line(630-i,190,680-i,190);    //12
line(630-i,190,640-i,100);    //13
line(640-i,100,665-i,100);    //14
line(665-i,100,680-i,190);    //15
circle(655-i,200,3);        //C1
}

void wingsdown(int i)
{
  //wings in downward
  line(630-i,190,680-i,190);    //12
  line(630-i,190,640-i,280);    //13
  line(640-i,280,665-i,280);    //14
  line(665-i,280,680-i,190);    //15
  circle(655-i,200,3);        //C1
}

void main ()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

for(int i=0;i<300;i++)
{
//surface
line(-50,412,1000,412);
line(-50,414,1000,414);

//body
line(600-i,150,680-i,150);    //1
line(600-i,150,540-i,320);    //2
line(680-i,150,740-i,320);    //3
line(540-i,320,600-i,380);    //4
line(600-i,380,670-i,380);    //5
line(670-i,380,740-i,320);    //6
circle(640-i,155,3);          //C2

//head
line(585-i,160,690-i,160);    //7
line(585-i,160,595-i,100);    //8
line(595-i,100,620-i,85);     //9
line(620-i,85,675-i,100);     //10
line(675-i,100,690-i,160);    //11
circle(610-i,105,4);        //C3

//beak
line(591-i,120,591-i,135);    //32
line(591-i,135,540-i,135);    //33
line(540-i,135,539-i,128);    //34
line(539-i,128,591-i,120);    //35

if(i%4==0)
  leg1forward(i);
else
  leg1backward(i);

if(i%4==0)
  leg2forward(i);
else
  leg2backward(i);

if (i%4==0)
  rectangle(591-i,143,539-i,141);       //mouth
else
  rectangle(591-i,138,539-i,141);       //mouth

if (i%4==0)
   wingsup(i);
else
   wingsdown(i);

delay(100);
cleardevice();
}
getch();
}




