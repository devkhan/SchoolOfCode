#include<iostream.h>
#include<conio.h>
int main()
{int s=0;
clrscr();
cout<<"s=";
cin>>s;
for(int i=1; i<=4; i++)
{
s=s+10*(i-1);
cout<<s<<"  ";
     }
cout<<"sum="<<s<<endl;
getch();
return 0;
}