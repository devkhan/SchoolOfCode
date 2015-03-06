#include<iostream.h>
#include<conio.h>
int main()
{ clrscr();
 int list[6];
 list[0]=5;
 for(int i=1;i<6;i++)
 {
 list[i]=i*i+5;
 if(i>2)
 list[i]=2*list[i]- list[i-1];
 }
	int j=0;
 while(j<=6)
 {cout<<list[j];
 j++;}
return 0;
}


