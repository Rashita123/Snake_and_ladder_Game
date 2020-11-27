#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<iostream.h>
void board();
int die();
void players();
void menu();
void borders();
void instructions();
void game();
void main()
{
  clrscr();
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c://tc//bgi");
  setbkcolor(11);
  setcolor(1);
  setlinestyle(0,0,3);
  circle(50,250,30);
  circle(73,245,3);
  arc(73,245,240,270,25);
  line(50,280,50,360);
  line(20,380,50,360);
  line(80,380,50,360);
  line(50,300,15,320);
  line(50,305,80,340);
  setfillstyle(6,4);
  pieslice(150,380,0,360,25);
  line(0,405,639,405);
  settextstyle(9,0,1);
  outtextxy(50,50,"PreSs EntEr kEy");
  outtextxy(50,100,"tO PlAy SnaKes AnD LadDer GamE!");
  getch();     //screen 2 starts
  menu();
}
void menu()
{
 cleardevice();
 while(1)
 {
  cleardevice();
  setbkcolor(11);
  setcolor(1);
  line(50,0,50,480);
  line(0,50,630,50);
  line(580,0,580,480);
  line(0,430,630,430);
  settextstyle(8,0,3);
  outtextxy(50,50,"WELCOME TO SNAKE AND LADDER GAME!");
  settextstyle(6,0,1);
  outtextxy(55,120,"PRESS 1 TO SEE INSTRUCTIONS TO PLAY THE GAME");
  outtextxy(55,150,"PRESS 2 TO SEE PLAYERS!");
  outtextxy(55,180,"PRESS 3 TO START THE GAME");
  outtextxy(55,210,"PRESS 4 TO EXIT GAME");
  moveto(55,200);
  int choice;
  cin>>choice;
  switch(choice)
  {
    case 1:instructions();
	   break;
    case 2:players();
	   break;
    case 3:game();
	   break;
    case 4:exit(0);
    default:outtextxy(55,250,"PLEASE ENTER A VALID ENTRY!");
  }
 }
}
void players()
{
  cleardevice();
  setbkcolor(3);
  setcolor(4);
  line(100,50,530,50);
  line(50,100,50,380);
  line(580,100,580,380);
  line(100,430,530,430);
  arc(100,100,90,180,50);
  arc(530,100,0,90,50);
  arc(100,380,180,270,50);
  arc(530,380,270,360,50);
  settextstyle(7,0,6);
  outtextxy(100,80,"  PLAYERS !");
  outtextxy(100,120,"===============");
  setcolor(15);
  setfillstyle(1,10);
  circle(150,250,50);
  floodfill(150,250,15);
  setfillstyle(1,15);
  circle(350,250,50);
  floodfill(350,250,15);
  settextstyle(7,0,3);
  outtextxy(100,310,"PLAYER 1");
  outtextxy(300,310,"PLAYER 2");
  getch();
}
void instructions()
{
  cleardevice();
  setbkcolor(11);
  setcolor(1);
  line(50,0,50,480);
  line(0,50,630,50);
  line(580,0,580,480);
  line(0,430,630,430);
  setcolor(2);
  settextstyle(8,0,5);
  outtextxy(50,50,"  *INSTRUCTIONS*");
  settextstyle(8,0,2);
  outtextxy(50,85,"=================================");
  setcolor(3);
  outtextxy(55,100,"SETUP:");
  outtextxy(55,118,"Before the game can start each player will ");
  outtextxy(55,136,"roll one die, the player who throws the");
  outtextxy(55,154,"number 6 first will be the one to have");
  outtextxy(55,172,"the first turn");
  outtextxy(55,190,"=============================");
  outtextxy(55,208,"GAMEPLAY:");
  outtextxy(55,226,"The players will move their places from");
  outtextxy(55,244,"left to right,starting from 1,following");
  outtextxy(55,262,"the numbers on the board,then next row");
  outtextxy(55,280,"from right to left and repeat.If a player");
  outtextxy(55,298,"rolls 4,then the player would move their");
  outtextxy(55,316,"piece four places.");
  settextstyle(7,0,3);
  setcolor(5);
  outtextxy(55,340,"PRESS 1 TO CONTINUE READING.......");
  outtextxy(55,360,"PRESS 2 TO EXIT");
  int c;
  cin>>c;
  switch(c)
  {
    case 2:menu();
    case 1:break;
  }
  cleardevice();
  setcolor(1);
  line(50,0,50,480);
  line(0,50,630,50);
  line(580,0,580,480);
  line(0,430,630,430);
  setcolor(2);
  settextstyle(8,0,5);
  outtextxy(50,50,"  *INSTRUCTIONS*");
  settextstyle(8,0,2);
  outtextxy(50,85,"================================");
  setcolor(3);
  outtextxy(55,100,"SNAKES:");
  outtextxy(55,118,"When a player lands on a top of a snake");
  outtextxy(55,136,"their playing piece will slide down");
  outtextxy(55,154,"to the bottom of the snake.Whereas landing on");
  outtextxy(55,172,"the bottom of a snake the player will remain");
  outtextxy(55,190,"on the same spot until their next turn.");
  outtextxy(55,208,"=================================");
  outtextxy(55,226,"LADDERS:");
  outtextxy(55,244,"When a player lands on the base of a ladder");
  outtextxy(55,262,"it immediately climbs to the top of the ladder.");
  outtextxy(55,280,"whereas landing at the top of the ladder,player");
  outtextxy(55,298,"will stay there until next turn.The player does");
  outtextxy(55,316,"not move to bottom of the ladder");
  settextstyle(7,0,3);
  setcolor(5);
  outtextxy(55,340,"PRESS 1 TO CONTINUE READING........");
  outtextxy(55,360,"PRESS 2 TO EXIT READING!");
  int l;
  cin>>l;
  switch(l)
  {
    case 2:menu();
    case 1:break;
  }
  cleardevice();
  setcolor(1);
  line(50,0,50,480);
  line(0,50,630,50);
  line(580,0,580,480);
  line(0,430,630,430);
  setcolor(2);
  settextstyle(8,0,5);
  outtextxy(50,50,"  *INSTRUCTIONS*");
  settextstyle(8,0,2);
  outtextxy(50,85,"==================================");
  setcolor(3);
  outtextxy(55,100,"Whereas landing at the top of a ladder");
  outtextxy(55,118,"the player will stay there until next turn.");
  outtextxy(55,136,"================================");
  outtextxy(55,154,"WINNING THE GAME!");
  outtextxy(55,172,"The first player that reaches the highest");
  outtextxy(55,190,"space,100,wins.To win the player will need");
  outtextxy(55,208,"to roll exact number to get you to the last");
  outtextxy(55,226,"space.If the player rolls a higher number than");
  outtextxy(55,244,"needed to land exactly on 100,piece does");
  outtextxy(55,262,"not move and remains there until next turn.");
  settextstyle(3,0,4);
  setcolor(5);
  outtextxy(55,290,"THANX FOR READING!");
  outtextxy(55,320,"NOW YOU ARE READY TO PLAY!");
  outtextxy(55,350,"HIT ENTER!!!!");
  getch();
}
void game()
{
  cleardevice();
  int i,j,k;
  setcolor(15);
  settextstyle(10,0,1);
  setbkcolor(12);
  int a;
  outtextxy(0,10,"WELCOME TO SNAKE AND LADDER GAME!");
  for(j=35;j<=545;j++)
  {
    i=50;
    line(j,i,j,470);
    j+=50;
    delay(30);
  }
  for(i=50;i<=470;i++)
  {
    j=35;
    line(j,i,545,i);
    i+=41;
    delay(30);
  }
  char s[25];
  int nu=1;
  itoa(nu,s,10);
  settextstyle(2,0,4);
  for(i=450;i>=72;i--)
   {
     if(j<=505)
      {
	for(j=55,a=1;j<=505,a<11;j++,a++)
	 {
	   setfillstyle(1,a);
	   floodfill(j,i,15);
	   setcolor(14);
	   outtextxy(j,i,s);
	   nu++;
	   itoa(nu,s,10);
	   setcolor(15);
	   delay(30);
	   j+=49;
	 }
       }
     else
      {
	for(j=505,a=1;j>=55,a<11;j--,a++)
	 {
	    setfillstyle(1,a);
	    floodfill(j,i,15);
	    setcolor(14);
	    outtextxy(j,i,s);
	    nu++;
	    itoa(nu,s,10);
	    setcolor(15);
	    delay(30);
	    j-=49;
	 }
    } //j
    i-=41;
  }//i
  setcolor(4);
  line(395,455,515,280);
  line(415,455,535,280);
  for(i=403,j=445;i<=505;i++)
  {
    line(i,j,i+20,j);
    i+=22;
    j-=34;
  }                           //stair 1
  line(100,250,40,400);
  line(130,250,70,400);
  for(i=50,j=380;i<=90;i++)
  {
     line(i,j,i+30,j);
     i+=15;
     j-=43;
  }                  //stair 2
  line(455,150,400,70);
  line(485,150,430,70);
  for(i=436,j=130;i>=60,j>=70;i--)
  {
    line(i,j,i+33,j);
    i-=12;
    j-=25;
  }         //stair 3
  setcolor(15);
  setlinestyle(0,0,1);
  setfillstyle(1,4);    //snake 1 start
  fillellipse(125,335,7,4);
  floodfill(125,335,15);
  ellipse(205,335,180,270,75,40);
  ellipse(205,335,180,270,84,45);
  arc(205,430,0,90,50);
  arc(205,430,0,90,55);
  line(255,430,258,435);
  line(260,430,258,435);
  setfillstyle(1,4);
  floodfill(125,340,15);
  floodfill(129,350,15);
  floodfill(140,360,15);
  floodfill(258,432,15);
  floodfill(258,426,15);	 //snake 1 end
  setfillstyle(1,12);
  ellipse(155,72,0,360,7,4);      //snake 2 start
  floodfill(155,72,15);
  arc(155,147,0,90,72);
  arc(155,147,0,90,78);
  arc(313,147,180,270,80);
  arc(313,147,180,270,86);
  arc(313,283,0,90,50);
  arc(308,283,0,90,55);
  floodfill(313,229,15);
  floodfill(165,72,15);
  floodfill(190,80,15);
  floodfill(220,110,15);
  floodfill(230,160,15);
  floodfill(235,180,15);
  floodfill(250,200,15);
  floodfill(280,225,15);
  line(150,72,145,69);
  line(150,72,145,75);      //snake 2 ends
  ellipse(515,196,0,360,7,4);   //snake 3 start
  floodfill(515,196,15);
  arc(515,248,90,180,49);
  arc(515,248,90,180,55);
  arc(381,248,270,360,80);
  arc(381,244,270,360,84);
  floodfill(500,198,15);
  floodfill(490,205,15);
  floodfill(465,240,15);
  floodfill(460,270,15);
  line(519,196,524,194);
  line(519,196,524,198);      //snake 3 end
  settextstyle(3,0,3);
  outtextxy(555,120,"PRESS");
  outtextxy(555,140,"ANY");
  outtextxy(555,160,"KEY TO");
  outtextxy(555,180 ,"START");
  outtextxy( 555,200,"GAME");
  i=10;
  j=450;
  int p=0;
  int q=450;
  randomize();
  setcolor(15);
  setfillstyle(1,10);
  pieslice(i,j,0,360,6);
  floodfill(i,j,15);
  setfillstyle(1,15);
  pieslice(p,q,0,360,6);
  floodfill(p,q,15);
  getch();
  int num1=0,num2=0;
  while(num1<100&&num2<100)
  {
    cleardevice();
    int ra;
    setlinestyle(0,0,3);
    board();
    outtextxy(555,130,"PLAYER 1");
    setcolor(15);
    ra=die();
    setlinestyle(0,0,1);
    setfillstyle(1,10);
    pieslice(i,j,0,360,6);
    floodfill(i,j,15);
    setfillstyle(1,15);
    pieslice(p,q,0,360,6);
    floodfill(p,q,15);
    delay(1000);
    cleardevice();
    setlinestyle(0,0,3);
    board();
    setcolor(15);
    int cur1=num1;
    num1+=ra;
    if(num1>=0&&num1<=10||num1>=21&&num1<=30||num1>=41&&num1<=50||num1>=61&&num1<=70||num1>=81&&num1<=90)
    {
      if(cur1>=0&&cur1<=10||cur1>=21&&cur1<=30||cur1>=41&&cur1<=50||cur1>=61&&cur1<=70||cur1>=81&&cur1<=90)
      {
	i+=ra*50;
      }
      else if(cur1>=11&&cur1<=20||cur1>=31&&cur1<=40||cur1>=51&&cur1<=60||cur1>=71&&cur1<=80||cur1>=91&&cur1<=100)
      {
	int c;
	c=num1/10;
	c*=10;
	c=c-cur1;
	i-=c*50;
	c=ra-c;
	j-=42;
	c--;
	i+=c*50;
      }
    }
    else
    {
      if(cur1>=11&&cur1<=20||cur1>=31&&cur1<=40||cur1>=51&&cur1<=60||cur1>=71&&cur1<=80||cur1>=91&&cur1<=100)
      {
	i-=ra*50;
      }
      else if(cur1>=0&&cur1<=10||cur1>=21&&cur1<=30||cur1>=41&&cur1<=50||cur1>=61&&cur1<=70||cur1>=81&&cur1<=90)
      {
	 int d;
	 d=num1/10;
	 d*=10;
	 d=d-cur1;
	 i+=d*50;
	 d=ra-d;
	 j-=42;
	 d--;
	 i-=d*50;
      }
    }
    if(num1==8)
    {
      num1=50;
      j-=4*42;
      i+=2*50;
    }
    else if(num1==20)
    {
      num1=59;
      j-=4*42;
      i+=50;
    }
    else if(num1==72)
    {
      num1=93;
      j-=2*42;
      i-=50;
    }
    else if(num1==39)
    {
      num1=5;
      i+=3*50;
      j+=3*42;
    }
    else if(num1==98)
    {
      num1=47;
      i+=4*50;
      j+=5*42;
    }
    else if(num1==70)
    {
       num1=34;
       j+=3*42;
       i-=3*50;
    }
    setlinestyle(0,0,1);
    setfillstyle(1,10);
    setcolor(15);
    pieslice(i,j,0,360,6);
    floodfill(i,j,15);
    setfillstyle(1,15);
    pieslice(p,q,0,360,6);
    floodfill(p,q,15);
    getch();
    if(num1>=100)
    {
      cleardevice();
      for(i=15;i>=7;i--)
      {
       cleardevice();
       settextstyle(10,0,i);
       outtextxy(100,50,"W");
       delay(50);
      }
      delay(100);
      for(i=15;i>=5;i--)
      {
       cleardevice();
       settextstyle(10,0,7);
       outtextxy(100,50,"W");
       settextstyle(10,0,i);
       outtextxy(210,90,"I");
       delay(50);
      }
      delay(100);
      for(i=15;i>=4;i--)
      {
       cleardevice();
       settextstyle(10,0,7);
       outtextxy(100,50,"W");
       settextstyle(10,0,5);
       outtextxy(210,90,"I");
       settextstyle(10,0,i);
       outtextxy(250,110,"N");
       delay(20);
      }
      delay(100);
      for(i=15;i>=3;i--)
      {
	cleardevice();
	settextstyle(10,0,7);
	outtextxy(100,50,"W");
	settextstyle(10,0,5);
	outtextxy(210,90,"I");
	settextstyle(10,0,4);
	outtextxy(250,110,"N");
	settextstyle(10,0,i);
	outtextxy(300,125,"N");
	delay(20);
      }
      delay(100);
      for(i=15;i>=2;i--)
      {
      cleardevice();
      settextstyle(10,0,7);
      outtextxy(100,50,"W");
      settextstyle(10,0,5);
      outtextxy(210,90,"I");
      settextstyle(10,0,4);
      outtextxy(250,110,"N");
      settextstyle(10,0,3);
      outtextxy(300,125,"N");
      settextstyle(10,0,i);
      outtextxy(340,130,"E");
      delay(20);
      }
      delay(100);
      for(i=15;i>=1;i--)
      {
	cleardevice();
	settextstyle(10,0,7);
	outtextxy(100,50,"W");
	settextstyle(10,0,5);
	outtextxy(210,90,"I");
	settextstyle(10,0,4);
	outtextxy(250,110,"N");
	settextstyle(10,0,3);
	outtextxy(300,125,"N");
	settextstyle(10,0,2);
	outtextxy(340,130,"E");
	settextstyle(10,0,i);
	outtextxy(365,135,"R!");
	delay(20);
      }
      settextstyle(10,0,2);
      for(i=0;i<=200;i++)
      {
	cleardevice();
	borders();
	settextstyle(10,0,7);
	outtextxy(100,50,"W");
	settextstyle(10,0,5);
	outtextxy(210,90,"I");
	settextstyle(10,0,4);
	outtextxy(250,110,"N");
	settextstyle(10,0,3);
	outtextxy(300,125,"N");
	settextstyle(10,0,2);
	outtextxy(340,130,"N");
	settextstyle(10,0,1);
	outtextxy(365,135,"R!");
	outtextxy(100,i,"PLAYER 1 IS THE WINNER!");
      }
      delay(100);
      setfillstyle(1,10);
      pieslice(100,300,0,360,40);
      floodfill(100,300,15);
      getch();
      exit(0);
    }
    cleardevice();
    setcolor(15);
    setlinestyle(0,0,3);
    board();
    outtextxy(555,130,"PLAYER 2");
    setcolor(15);
    ra=die();
    setlinestyle(0,0,1);
    setfillstyle(1,10);
    pieslice(i,j,0,360,6);
    floodfill(i,j,15);
    setfillstyle(1,15);
    pieslice(p,q,0,360,6);
    floodfill(p,q,15);
    delay(1000);
    cleardevice();
    setlinestyle(0,0,3);
    board();
    int cur2=num2;
    num2+=ra;
    if(num2>=0&&num2<=10||num2>=21&&num2<=30||num2>=41&&num2<=50||num2>=61&&num2<=70||num2>=81&&num2<=90)
    {
      if(cur2>=0&&cur2<=10||cur2>=21&&cur2<=30||cur2>=41&&cur2<=50||cur2>=61&&cur2<=70||cur2>=81&&cur2<=90)
      {
	p+=ra*50;
      }
      else if(cur2>=11&&cur2<=20||cur2>=31&&cur2<=40||cur2>=51&&cur2<=60||cur2>=71&&cur2<=80||cur2>=91&&cur2<=100)
      {
	int f;
	f=num2/10;
	f*=10;
	f=f-cur2;
	p-=f*50;
	f=ra-f;
	q-=42;
	f--;
	p+=f*50;
      }
    }
    else
    {
      if(cur2>=11&&cur2<=20||cur2>=31&&cur2<=40||cur2>=51&&cur2<=60||cur2>=71&&cur2<=80||cur2>=91&&cur2<=100)
      {
	p-=ra*50;
      }
      else if(cur2>=0&&cur2<=10||cur2>=21&&cur2<=30||cur2>=41&&cur2<=50||cur2>=61&&cur2<=70||cur2>=81&&cur2<=90)
      {
	int e;
	e=num2/10;
	e*=10;
	e=e-cur2;
	p+=e*50;
	e=ra-e;
	q-=42;
	e--;
	p-=e*50;
      }
    }
    if(num2==8)
    {
      num2=50;
      q-=4*42;
      p+=2*50;
    }
    else if(num2==20)
    {
      num2=59;
      q-=4*42;
      p+=50;
    }
    else if(num2==72)
    {
      num2=93;
      q-=2*42;
      p-=50;
    }
    else if(num2==39)
    {
      num2=5;
      p+=3*50;
      q+=3*42;
    }
    else if(num2==98)
    {
      num2=47;
      p+=4*50;
      q+=5*42;
    }
    else if(num2==70)
    {
      num2=34;
      q+=3*42;
      p-=3*50;
    }
    setlinestyle(0,0,1);
    setfillstyle(1,15);
    setcolor(15);
    pieslice(p,q,0,360,6);
    floodfill(p,q,15);
    setfillstyle(1,10);
    pieslice(i,j,0,360,6);
    floodfill(i,j,15);
    getch();

    if(num2>=100)
    {
      cleardevice();
      for(i=15;i>=7;i--)
      {
      cleardevice();
      settextstyle(10,0,i);
      outtextxy(100,50,"W");
      delay(20);
      }
      delay(100);
      for(i=15;i>=5;i--)
      {
      cleardevice();
      settextstyle(10,0,7);
      outtextxy(100,50,"W");
      settextstyle(10,0,i);
      outtextxy(210,90,"I");
      delay(20);
      }
      delay(100);
      for(i=15;i>=4;i--)
      {
      cleardevice();
      settextstyle(10,0,7);
      outtextxy(100,50,"W");
      settextstyle(10,0,5);
      outtextxy(210,90,"I");
      settextstyle(10,0,i);
      outtextxy(250,110,"N");
      delay(20);
       }
       delay(100);
       for(i=15;i>=3;i--)
       {
       cleardevice();
       settextstyle(10,0,7);
       outtextxy(100,50,"W");
       settextstyle(10,0,5);
       outtextxy(210,90,"I");
       settextstyle(10,0,4);
       outtextxy(250,110,"N");
      settextstyle(10,0,i);
      outtextxy(300,125,"N");
      delay(20);
      }
      delay(100);
      for(i=15;i>=2;i--)
      {
      cleardevice();
      settextstyle(10,0,7);
      outtextxy(100,50,"W");
      settextstyle(10,0,5);
      outtextxy(210,90,"I");
      settextstyle(10,0,4);
      outtextxy(250,110,"N");
      settextstyle(10,0,3);
      outtextxy(300,125,"N");
      settextstyle(10,0,i);
      outtextxy(340,130,"E");
      delay(20);
      }
      delay(100);
      for(i=15;i>=1;i--)
      {
      cleardevice();
      settextstyle(10,0,7);
      outtextxy(100,50,"W");
      settextstyle(10,0,5);
      outtextxy(210,90,"I");
      settextstyle(10,0,4);
      outtextxy(250,110,"N");
      settextstyle(10,0,3);
      outtextxy(300,125,"N");
      settextstyle(10,0,2);
      outtextxy(340,130,"E");
      settextstyle(10,0,i);
      outtextxy(365,135,"R!");
      delay(20);
      }
      delay(100);
      settextstyle(7,0,2);
      for(i=0;i<=200;i++)
      {
      cleardevice();
      settextstyle(10,0,7);
      outtextxy(100,50,"W");
      settextstyle(10,0,5);
      outtextxy(210,90,"I");
      settextstyle(10,0,4);
      outtextxy(250,110,"N");
      settextstyle(10,0,3);
      outtextxy(300,125,"N");
      settextstyle(10,0,2);
      outtextxy(340,130,"E");
      settextstyle(10,0,1);
      outtextxy(365,135,"R!");
      outtextxy(100,i,"PLAYER 2 IS THE WINNER!");
      }
      setfillstyle(1,15);
      pieslice(100,300,0,360,40);
      floodfill(100,300,15);
      borders();
      getch();
      exit(0);
      }
    }
  }//game ends
void board()
{
  cleardevice();
  setcolor(15);
  settextstyle(10,0,3);
  outtextxy(50,5,"ENJOY THE GAME!");
  setcolor(15);
  int j,i,a;
  setcolor(15);
  setlinestyle(0,0,4);
  for(j=35;j<=545;j++)
  {
    i=50;
    line(j,i,j,470);
    j+=50;
  }
  for(i=50;i<=470;i++)
  {
    j=35;
    line(j,i,545,i);
    i+=41;
  }
  char c[25];
  int numb=1;
  itoa(numb,c,10);
  settextstyle(2,0,4);
  for(i=450;i>=72;i--)
  {
    if(j<=505)
    {
      for(j=55,a=1;j<=505,a<11;j++,a++)
      {
	setfillstyle(1,a);
	floodfill(j,i,15);
	setcolor(14);
	outtextxy(j,i,c);
	numb++;
	itoa(numb,c,10);
	setcolor(15);
	j+=49;
      }
    }
    else
    {
      for(j=505,a=1;j>=55,a<11;j--,a++)
      {
	setfillstyle(1,a);
	floodfill(j,i,15);
	setcolor(14);
	outtextxy(j,i,c);
	numb++;
	itoa(numb,c,10);
	setcolor(15);
	j-=49;
      }
    }
    i-=41;
  }
  setcolor(4);
  line(395,455,515,280);
  line(415,455,535,280);
  for(i=403,j=445;i<=505;i++)
  {
    line(i,j,i+20,j);
    i+=22;
    j-=34;
  }                //stair 1
  line(100,250,40,400);
  line(130,250,70,400);
  for(i=50,j=380;i<=90;i++)
  {
    line(i,j,i+30,j);
    i+=15;
    j-=43;
  }                       //stair 2
  line(455,150,400,70);
  line(485,150,430,70);
  for(i=436,j=130;i>=60,j>=70;i++)
  {
    line(i,j,i+33,j);
    i-=12;
    j-=25;
  }              //stair 3
  setcolor(15);
  setlinestyle(0,0,1);
  setfillstyle(1,4);  //snake 1 start
  fillellipse(125,335,7,4);
  floodfill(125,335,15);
  ellipse(205,335,180,270,75,40);
  ellipse(205,335,180,270,84,45);
  arc(205,430,0,90,50);
  arc(205,430,0,90,55);
  line(255,430,258,435);
  line(260,430,258,435);
  floodfill(125,340,15);
  floodfill(129,350,15);
  floodfill(140,360,15);
  floodfill(258,432,15);
  floodfill(258,426,15);            //snake 1ends
  setfillstyle(1,12);
  ellipse(155,72,0,360,7,4);         //snake 2 start
  floodfill(155,72,15);
  arc(155,147,0,90,72);
  arc(155,147,0,90,78);
  arc(313,147,180,270,80);
  arc(313,147,180,270,86);
  arc(313,283,0,90,50);
  arc(308,283,0,90,55);
  floodfill(313,229,15);
  floodfill(165,72,15);
  floodfill(190,80,15);
  floodfill(220,110,15);
  floodfill(230,160,15);
  floodfill(235,180,15);
  floodfill(250,200,15);
  floodfill(280,225,15);
  line(150,72,145,69);
  line(150,72,145,75);    //snake 2 ends
  ellipse(515,196,0,360,7,4);     //snake 3 start
  floodfill(515,196,15);
  arc(515,248,90,180,49);
  arc(515,248,90,180,55);
  arc(381,248,270,360,80);
  arc(381,244,270,360,84);
  floodfill(500,198,15);
  floodfill(490,205,15);
  floodfill(465,240,15);
  floodfill(460,270,15);
  line(519,196,524,194);
  line(519,196,524,198);
}
int die()
{
  int ar[]={555,150,625,150,625,220,555,220,555,150};
  drawpoly(5,ar);
  floodfill(590,185,15);
  int r;
  r=random(6);
  int ra=r+1;
  switch(ra)
    {
     case 1:circle(590,185,3);
	    break;
     case 2:circle(575,170,3);
	    circle(605,200,3);
	    break;
     case 3:circle(575,170,3);
	    circle(605,200,3);
	    circle(590,185,3);
	    break;
     case 4:circle(565,165,3);
	    circle(565,205,3);
	    circle(615,165,3);
	    circle(615,205,3);
	    break;
     case 5:circle(565,165,3);
	    circle(565,205,3);
	    circle(615,165,3);
	    circle(615,205,3);
	    circle(590,185,3);
	    break;
     case 6:circle(575,160,3);
	    circle(575,185,3);
	    circle(575,210,3);
	    circle(605,160,3);
	    circle(605,185,3);
	    circle(605,210,3);
	    break;
    }
  delay(10);
  return ra;
}    //die end
void borders()
{
  setbkcolor(3);
  setcolor(4);
  line(100,50,530,50);
  line(50,100,50,380);
  line(580,100,580,380);
  line(100,430,530,430);
  arc(100,100,90,180,50);
  arc(530,100,0,90,50);
  arc(100,380,180,270,50);
  arc(530,380,270,360,50);
  setcolor(15);
}

