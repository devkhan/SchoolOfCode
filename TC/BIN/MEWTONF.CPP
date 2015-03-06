//newton forward difference
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
#include<conio.h>
int main()
{
float ax[10],ay[10],df[10][10];
//df means difference
int i,j,n;
clrscr();
cout<<"enter n"<<endl;
cin>>n;
cout<<"enter set of points"<<endl;
for(i=0;i<=n;i++)
cin>>ax[i]>>ay[i];
//1st difference
for(i=0;i<=n-1;i++)
df[i][1]=(ay[i+1]-ay[i])/(ax[i+1]-ax[i]);
//2nd and higher differences
for(j=2;j<=n;j++)
for(i=0;i<=n-j;i++)
df[i][j]=(df[i+1][j-1]-df[i][j-1])/(ax[i+j]-ax[i]);
double y=ay[0],xv=1,x,h;
h=ax[1]-ax[0];
cout<<"enter the value of x"<<endl;
cin>>x;
for(i=0;i<n;i++)
{
xv=xv*(x-ax[i])/(h*(i+1));
y+=df[0][i+1]*xv;
}
cout<<"y="<<setw(9)<<setprecision(4)<<y<<"when x="<<setw(6)<<setprecision(2)<<x<<endl;
getch();
return 0;
}