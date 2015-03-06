//Program to count number of words in a file.

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<process.h>
void main()
{
	clrscr();
   char name[20],ch;
   int n=0;
   ifstream file;
   cout<<"\n\tEnter file name : ";
   gets(name);
   file.open(name);
   if(!file)
   {
   	cout<<"\n\tUnable to open file";
      getch();
      exit(0);
   }
   while(file)
   {
   	file.get(ch);
      if(ch==' ')
      {
      	file.get(ch);
         if(ch!=' ')
         n++;
      }
   }
   cout<<"\n\tNumber of words in \""<<name<<"\" : "<<n;
   getch();
}

