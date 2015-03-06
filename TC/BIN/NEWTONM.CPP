#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<math.h>
float eqn(float x);
float eqn_d(float x);
float eqn_g(float x);

int main()
{
int n, i, j, k;
float p[30],r,l,v,e, nm; //l=lamda,v=value, e=epsilon,nm=nmax
cout<<"enter the starting approximation p0:  ";
cin>>p[0];
cout<<"enter the convergence tolerence epsilon :  ";
cin>>e;
cout<<"enter the no. of iterations nmax:  ";
cin>>nm;
r=p[0];
for(i=1;i<=nm;i++)
{
p[i]=eqn_g(r);
r=p[i];
cout<<"\np"<<i<<" = \t"<<r;
if(i>=2)    //stopping condition
{
l=(p[i]-p[i-1])/(p[i-1]-p[i-2]);
v=abs(l/(l-1))*abs(p[i]-p[i-1]);
if(v<e)
{ cout<<"\n\n rootafter "<<i<< " iterations is : "<<r;
getch();
return 0;
}
}
}
cout<<"\n maximum no. of iterations has been exceeded";
getch();
return 0;
}
float eqn_g(float x)
{
    return(x-eqn(x)/eqn_d(x));
}
float eqn(float x)
{
return(pow(x,3)+2*pow(x,2)-3*x-1);
}
float eqn_d(float x)
{
return(3*pow(x,2)+4*pow(x,1)-3);
}