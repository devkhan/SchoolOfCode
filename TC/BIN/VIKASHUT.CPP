#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{int i, a ;
int fact=1;
cout<<"this program finds factorial of a given number"<<endl;
cout<<"enter a number";
cin>>a;
for(i=1; i<=a; i++)
fact=fact*i;
cout<<"factorial of a given numberis<<"<<fact;
getch();
return(0);
}