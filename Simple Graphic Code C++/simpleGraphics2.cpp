#include<iostream.h>
#include<graphics.h>

void drawPole1  (int sX , int sY); // Draws pole for flag using rect tool  
void mickyMouse(int centerX , int centerY , int cl); // Draws crecent (Moon) 
void drawPoly1 ( int centreX , int centerY ) ;  // Draws Star
void drawRect1   (int sX, int sY, int fX, int fY , int cl, int col); // Draws Rectangles 
void drawLader  (int positionA); // Draws a Check box lader shape 
void smallRect (); 
void myIntroText (); 
     int  iLeft, iTop, iRight, iBottom;
     int sX, sY, fX, fY , x , y , cl , col;
     int  iRefCount = 1 , centerX,  centerY ,  area ,  centrex ,  centrey;
     int move ;      

main () {
     sX = 40;      sY = 100;       fX = 100;      fY = 150;
     move = 100; 
     cl = 4;       col = 8; 
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"c:\tc\bgi");
     x=getmaxx()/2;
     y=getmaxy()/2;
     smallRect(); 
     drawLader (cl);
     mickyMouse(x,y , cl); 
             drawRect1 (sX, sY, fX, fY , cl , col);                             
             myIntroText(); 
//delay(1000);
getch();
return 0;
//   system("pause");
}


class CRectangle {
 private:
    int length , width , area; 
 public: 
 	void show();
	CRectangle operator - (CRectangle obj);
	CRectangle()  {     //   default Constructor 
                  }
   CRectangle(int a, int b , int c , int d , int e,  int f) { 
//      cleardevice();           
int j = a+20; 
int k = b+20;
   setcolor(GREEN); 
line ( a, b, j, k ); 
   setcolor(f); 
   setfillstyle(6, f);  

   rectangle(a , b , c , d);	
   getch();
    floodfill(j , k , f);
   getch();
   }
   };

void CRectangle::show() {
//    cout<< endl << "Area not calculated"  << endl << area;

     }


void drawLader (int cl) {  // Draws a lader 
int a = 300 , b = 350 , c = 400 , d = 450 , e = 500, f = 550 ; 
//   position = 150; 
   setcolor(cl);
// Draw 4 Lines to Form Board
   line (a,c,d, c);
   line (a,b,d, b);
   line (b,a,b,d);
   line (c,a,c,d);

   setcolor(BLUE);   fillellipse (10 , 30, 10 , 10);
   setcolor(GREEN);  fillellipse (150 , 300,  30 , 10);
   setfillstyle(1,9);   //  1 means solid fill , 3 is  cyan color ? 
   setcolor(9);
   circle(425 , 325, 25);
   floodfill(427,327, 9);   
        getch();

	    for (int i=15; i<325; i++){ 
            setcolor(YELLOW);     
            putpixel(i,i+2, YELLOW);    //  drawing a line in Red colour by setting each pixel value 
            } 
            getch();
            }
void drawRect1 (int sX, int sY, int fX, int fY , int cl , int col ) { // Draws a rect 
           setcolor(col); CRectangle R2( sX , sY , fX , fY , cl , col );                      
      
           setcolor(col+4); CRectangle R3( sX+500, sY+move, fX+500, fY+move , cl+1 , col+4);                      
           }
void smallRect () {
//      cleardevice();           
           setcolor(13);
           rectangle(1,1,639,479);
           rectangle(15,15,624,464);
           setfillstyle(1,11);
           floodfill(2,2,13);
            setcolor(5);  // it has link with   fllod fill colour 
            rectangle(100,100,100,100);
            rectangle(120,120,90,60);
            setfillstyle(1,2);
            floodfill(102,102,5);
            getch();
           }
void myIntroText () {
    setcolor(11);
    settextstyle(7,0,3);
    outtextxy(150,200,"MADE BY : Saad sadan ") ;
    outtextxy(175,300,"MCS VU 2011");
    outtextxy(75,400,"E-Mail: saadsadan@gmail.com");
    getch();
    }
void mickyMouse (int x , int y , int cl) { // Draws  rect 
    setcolor(7);
    setfillstyle(3,cl);  
    fillellipse (x,y, 20,15);
    setcolor(2);  
    arc(240,120,40,140,70);
    ellipse(165,80,10,280,20,20);
    ellipse(315,80,-100,170,20,20);
    arc(235,120,163,215,70);
    arc(245,120,-35,17,70);
    ellipse(193,178,85,280,40,20);
    ellipse(283,178,-100,95,40,20);
    ellipse(238,199,180,0,39,50);
    ellipse(213,123,44,240,33,40);
    ellipse(262,123,-60,135,33,40);
      
    ellipse(210,123,0,360,13,20);//left eye
    ellipse(265,123,0,360,13,20);//right eye
    ellipse(210,133,0,360,10,10);//left eye ball
    ellipse(265,133,0,360,10,10);//right eye ball
    ellipse(210,133,0,360,3,3);//left eye ball
    ellipse(265,133,0,360,3,3);//right eye ball
    ellipse(238,160,0,360,10,13);//nose
    
    arc(240,125,228,312,68);//mouth
    arc(240,120,230,310,72);//mouth
    setfillstyle(1,4);
    floodfill(244,166,2);//nose
    setfillstyle(1,6);
    floodfill(212,115,2);
    floodfill(267,115,2);
//====================
    moveto(203,220);
    lineto(203,260);
    lineto(183,260);
    lineto(183,350);
    lineto(293,350);
    lineto(293,260);
    lineto(273,260);
    lineto(273,220);
    moveto(183,350);
    lineto(173,460);
    lineto(213,460);
    lineto(238,400);
    lineto(263,460);
    lineto(303,460);
    lineto(293,350);
    moveto(173,460);
    lineto(143,478);
    lineto(213,478);
    lineto(213,460);
    moveto(263,460);
    lineto(263,478);
    lineto(333,478);
    lineto(303,460);
    line(238,400,238,350);
//  getch();
    setcolor(4);  //    colour is pale golden ? 
    floodfill(222,400,2);  //  setting color in right leg of mickey mouse, border line colour is 2 (green) - limits
    setcolor(5); 
    floodfill(272,300,2);  //  setting color in right leg of mickey mouse, border line colour is 2 (green) - limits
    setcolor(3); 
    circle(420,410,10);
    floodfill(422,412,3); 
    getch();
}
