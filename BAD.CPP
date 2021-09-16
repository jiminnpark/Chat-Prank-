/*
This program is created just for the purpose of entertainment : © Shivanshu
This program allows you to chat with a virtual person called "Daisy" and as soon as you try to enter something the keyboard actually types something else
See it yourself!
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
clrscr();
char a,str2[100];
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://TC//bgi");
setbkcolor(1);
cout<<"ENTER YOUR NAME\n";
gets(str2);
cout<<"!!Hii my name is Daisy!!\n";
cout<<"Enter some thing: \n";
for(int i=0;i<10;i++)
{
a=getch();
if(i==0)
cout<<"I";
if(i==1)
cout<<" ";
if(i==2)
cout<<"L";
if(i==3)
cout<<"o";
if(i==4)
cout<<"v";
if(i==5)
cout<<"e";
if(i==6)
cout<<" ";
if(i==7)
cout<<"Y";
if(i==8)
cout<<"o";
if(i==9)
cout<<"u";
}
setbkcolor(4);
cout<<"\n\t\tWHAT!!!!!!!  "<<str2<<"  So Disguisting!!\n\t\t I did'nt think that you were a desperate maniac!\n";
cout<<"\t\t\t\t!!!HUH!!!";
getch();
}
