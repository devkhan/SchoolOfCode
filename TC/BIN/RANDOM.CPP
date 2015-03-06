#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int num;
num=(int)(rand()*time(0))%100;
if(num<0)
num=-num;
cout<<"random no. b/w 0 to 99 :"<<num<<endl;
getch();
return 0;
}