#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{
char name[25],add[30],clas[4];
int a,b,c;
long int phone;
clrscr();
cout<<"enter name";
cin.getline(name,25,'\n');
cout<<"enter address";
cin.getline(add,30,'\n');
cout<<"enter class";
cin.getline(clas,4,'\n');
cout<<"enter phone number";
cin>>phone;
a=strlen(name);
b=strlen(add);
c=strlen(clas);
cout<<"\n the name is:";
cout.write(name,a);
cout<<"\n the address is:";
cout.write(add,b);
cout<<"\n the class is:";
cout.write(clas,c);
cout<<"\n phone number is"<<phone;
getch();
return(0);
}





















