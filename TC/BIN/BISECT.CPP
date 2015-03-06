#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<math.h>
float eqn (float x);  //polynomial equation function is eqn().
int main()
{         clrscr();
float a,b,p,e,nm,fa,fp,fb;
cout<<"enter the interval in which the func. has been defined:  "<<endl;
cin>>a>>b;
cout<<"enter the convergence tolerence epsilon:  "<<endl;
cin>>e;
cout<<"enter the no. of iterations nmax: "<<endl;
cin>>nm;
fa=eqn(a);
cout<<"\n\nno. of iterations\t enclosing interval\t\t approximation"<<endl;
for(int i=1;i<=nm;i++)
{
fa=eqn(a);
fb=eqn(b);
if(fa*fb<0)
p=(a+b)/2;
cout<<"     "<<i<<"\t\t\t[ "<<a<<", "<<b<<"]\t\t\t"<<p<<endl;
if((b-a)/2<e)
{cout<<"root is "<<p;
return 0;
}
fp=eqn(p);
if(fa*fp<0)
b=p;
if(fp*fb<0)
a=p;
    }
cout<<"root after "<<nm<<" iterations is "<<p<<endl;
cout<<"iterations performed ";
cout<<"the end";
cout<<"\n";
  getch();
return 0;
}

float eqn(float x)
{
return (pow(x,3)+2*pow(x,2)-3*x-1);
}