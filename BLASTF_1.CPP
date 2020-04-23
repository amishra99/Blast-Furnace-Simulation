#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<string.h>
#include<graphics.h>
#include<stdlib.h>
int checkpass()
{
char b[10];
char c;
char a[]="1234";
int i=0;
cout<<"Enter the password\n";
while((c=getch())!=13)
{
cout<<"*";
b[i]=c;
i++;
}
b[i]='\0';
cout<<"\nWait.Authenticating";
cout<<".";
delay(1000);
cout<<".";
delay(1000);
cout<<".";
delay(1000);
cout<<".";
if(strcmp(a,b)==0)
{
return 1;
}
else
{
return 0;
}
}
void circledraw()
{
int x=500,y=120,i=10;
double r=20.0;
int gdriver=DETECT, gmode;
initgraph(&gdriver, &gmode,"C:\\TurboC3\\BGI");
setcolor(YELLOW);
line(450,0,430,500);
line(550,0,570,500);
setcolor(BROWN);
 cout<<"\n\n\n Facts to be considered before proceeding : \n\n";
cout<<"1. Standard Blast Furnace Length is considered to be \n30 metres.\n2. All values are considered in SI units.\n";
cout<<"3. The raio of CO:CO2 is considered to be 80:20\n\n";
cout<<"Press any key to enter into the program";
while(!kbhit())
{

 circle(x,y,r);
 delay(200);
 setcolor(BLACK);
 circle(x,y,r);
 y=y+10;
 setcolor(BROWN);
 r=r-0.2;
 circle(x,y,r);
 setcolor(RED);
 line(460,470-i,460,500-i);
 line(500,450-i,500,480-i);
  line(540,470-i,540,500-i);

 delay(500);
 setcolor(BLACK);
 line(460,470-i,460,500-i);
  line(500,450-i,500,480-i);
  line(540,470-i,540,500-i);
 i=i+10;
 }
 closegraph();
 clrscr();
}
void main()
{
clrscr();
int c;
double l,h,mi,t,l1,m,m1,v,b,q;
char ch;
double p,e,r,g,k,w,a,s,f;
//l=Length of the Section in m, t=Total descend time,m= Mass in kg, standard BF length=30m
cout<<"\t\t**** INFOTECH SOLUTIONS WELCOMES YOU ****"<<"\n\n";
cout<<"This is a Blast Furnace Simulation program which estimates the weight of the reduced Iron ore in different sections of the blast furnace upon providing some of the required values";
cout<<"\nDeveloped by : \nAyush Mishra \nAneek Pilsima \nAdarsh Ranjan \nSunny Kumar \nSouvik Karmakar \nMohit Krishnan";
cout<<"\n\nDo you want to continue with the program? \nIf Yes press Y or if No press N\n";
cin>>ch;
if(ch=='N' || ch=='n')
{
  cout<<"\nSorry to bother you. Hope to see you again soon\n";
  delay(3000);
  return;
}
else if(ch=='Y' || ch=='y')
{
int z=checkpass();
if(z==0)
{
  cout<<"\nIncorrect password.\nAuthorisation Unsuccessful.\nYou cannot access the system";
  delay(3000);
  return;
}
else
{
cout<<"\nAuthorised User Identified.\n";
delay(2000);
clrscr();
cout<<"\t\t\t**** Welcome USER ****\n\n\n";
circledraw();
cout<<"\n\n\nEnter the length of the bosh section in metres :"<<"\n";
cin>>l1;
cout<<"Enter the total time of descent for the charge : "<<"\n";
cout<<"First enter the number of hours : ";
cin>>h;
cout<<"Now enter the minutes : ";
cin>>mi;
cout<<"Enter the mass of the FeO in kilograms entering in the bosh region: "<<"\n";
cin>>m1;
cout<<"Enter the total pressure of the section in atm : "<<"\n";
cin>>p;
b :
cout<<"\nThank you for the inputs. We are very happy to help you. ";
delay(3000);
clrscr();
cout<<"\n\nHere are the inputs provided by you : ";
cout<<"\nLength of the bosh section : "<<l1<<" metres";
cout<<"\nTime of descent of the charge : "<<h<<" hours "<<mi<<" minutes";
cout<<"\nMass of FeO charged in bosh: "<<m1<<" kilograms";
cout<<"\nTotal pressure of the section : "<<p<<" atm";
cout<<"\nThe temperature of the bosh section is known to be 1673 K or 1400 C"<<"\n";
cout<<"\n\nDo you want to modify any of the inputs ? Enter 'y' for Yes and 'n' for No.\n";
cin>>ch;
if(ch=='N' || ch=='n')
{
cout<<"\n\nThank you for your patience. ";
delay(2000);
goto z;
}
else if(ch=='y' || ch=='Y')
{
clrscr();
cout<<"1. Length of the bosh section\n2. Time of descent\n3. Mass of FeO charged in bosh\n4. Pressure of the section";
cout<<"\nEnter the choice of the quantity you want to change\n";
cin>>c;
switch(c)
{
case 1 : cout<<"\nEnter the new value of length of the bosh section";
cin>>l1;
break;
case 2 : cout<<"\nEnter the new value of time of descent";
cout<<"\nFirst enter the no. of hours : ";
cin>>h;
cout<<"\nThen Minutes : ";
cin>>mi;
break;
case 3 : cout<<"\nEnter the new value of mass of FeO charged : ";
cin>>m1;
break;
case 4 : cout<<"\nEnter the new value of pressure of the section in atm : ";
cin>>p;
break;
}
goto b;
}
z :
l=l1*100;
t=3600*h+60*mi;
m=m1*1000;
e=(l*t)/3000;
clrscr();
cout<<"\n\nCalcutating the outputs."<<"\n"<<"Please wait.";
delay(1000);
cout<<".";
delay(1000);
cout<<".";
delay(1000);
cout<<".";
delay(1000);
cout<<".";
cout<<"\n"<<"The Exposure time of the charge in the particular section is : "<<e/60<<" mins \n\n";
r=pow(0.426*m,0.33);
delay(3000);
cout<<"The radius of the FeO pellets charged is : "<<r/100<<" m"<<"\n";
g=-22800+24.26*1673;
delay(3000);
cout<<"\nConsidering the equation G=-22800+24.26T, "<<"\n"<<"The value of G is : "<<g<<" J";
k=exp((-g/13390));
delay(3000);
cout<<"\n\n";
cout<<"Calculating the rate constant for the equation FeO+CO=Fe+CO2"<<"\n"<<"Please wait.";
delay(1000);
cout<<".";
delay(1000);
cout<<".";
delay(1000);
cout<<".";
delay(1000);
cout<<".";
cout<<"\n\n"<<"The equilibrium constant is : "<<k<<"\n";
delay(3000);
cout<<"\n"<<"Considering chemically controlled reaction.."<<"\n"<<"The output mass of FeO is calculated by the equation 1-(1-XFeO)^1/3=kf(Cco2b-Cco2e/kc)";
cout<<"\nEnter the Kf value of the bosh region \n";
cin>>q;
w=1-pow(((q*(5.83-(1.45/k))*7.2)/(r*0.01*78)),3);
s=m1*w;
f=5.83*p-(((1-w)*16*s)/(72*w));
clrscr();
cout<<"The rest of the outputs are : \n\n";
delay(3000);
cout<<"The amount of FeO coming out of bosh after reduction : "<<s<<" kg\n\n";
cout<<"The amount of CO leaving the bosh in the upward direction : "<<f<<" moles/cubic metre";
cout<<"\n\nThank you so much";
getch();
}
}
}
