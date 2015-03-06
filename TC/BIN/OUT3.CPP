#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
cout<<setw(3)<<i*j;
cout<<endl;

}
return ;
}