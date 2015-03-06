//PROGRAM: FALSE POSITION METHOD FOR FINDING ROOT OF FUNCTION

#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<math.h>
float eqn(float x);
int main()
{ clrscr();
float a, b, e, nm, fa,fp;
cout<<"enter the interval endpoints: ";
cin>>a>>b;
cout<<"enter the convergence tolerence epsilon : ";
cin>>e;
cout<<"enter the no. of iterations nmax : ";
cin>>nm;
float p[30], r, l,v;     //r=root,l=lamda,v=value
fa=eqn(a);
cout<<"\n no. of iterations \t  enclosing intervals \t approximation"<<endl;
for(int i=0;i<=nm;i++)
{
cout<<"\n"<<i+1<<"\t\t\t"<<"["<<a<<" , "<<b<<"]\t\t\t";
p[i]=b-eqn(b)*((b-a)/(eqn(b)-eqn(a)));
r=p[i];
cout<<r<<"\t"<<endl;
if(i>=2)
{
l=(p[i]-p[i-1])/(p[i-1]-p[i-2]);
cout<<"absolute error: "<<l<<endl;
v=abs(l/(l-1))*abs(p[i]-p[i-1]);
cout<<"stopping condition value: "<<v<<endl;
if(v<e)
cout<<"\nroots after "<<i+1<<" iteration is : "<<r;

getch();

}
fp=eqn(r);
if(fa*fp<0)
b=r;
else
{ a=r;
fa=fp;
}
}
cout<<"\n\nmaximum no. of iterations has been exceeded.";
getch();
return 0;
}

float eqn (float x)
{
return (pow(x,3)+2*pow(x,2)-3*x-1);
}