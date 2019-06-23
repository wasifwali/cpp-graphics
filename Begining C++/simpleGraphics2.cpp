#include<iostream.h>
#include<graphics.h>

main () {

     int gd=DETECT,gm;
     initgraph(&gd,&gm,"c:\tc\bgi");
     

cleardevice();


setcolor(13);
rectangle(1,1,639,479);
rectangle(15,15,624,464);
//setcolor(LIGHTBLUE);
setfillstyle(1,11);

floodfill(2,2,13);
settextstyle(7,0,3);
setcolor(5);  // it has link with   fllod fill colour 
rectangle(100,100,100,100);
rectangle(120,120,90,60);

setfillstyle(1,2);
floodfill(102,102,5);


setcolor(11);


outtextxy(150,200,"MADE BY : Saad sadan ") ;
outtextxy(175,300,"MCS VU 2011");
outtextxy(75,400,"E-Mail: saadsadan@gmail.com");





//delay(1000);
getch();

 


 return 0;
 
}
