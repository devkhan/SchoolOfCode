#include<iostream.h>
#include<conio.h>
int main()
{
int n;
clrscr();
cout<<"enter any no.:";
cin>>n;
cout<<"\n the no. u entered is "<<n<<endl;
switch(n)
{
case 0: cout<<"hello";
case 1: cout<<" there....!!!!";
case 2: cout<<" I AM";
case 3: cout<<" apurva...!!!"<<endl;
break;
case 4: cout<<"how r u?";
cout<<endl;
break;
case 5: cout<<" Have a nice day......!!!!!!"<<endl;
break;
default: cout<<"sorry!!! pls leave...!!!:-)"<<endl;
}
cout<<" bye switch"<<endl;
return 0;
}