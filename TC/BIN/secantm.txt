#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
float eqn(float x);
int main()
{
float p[30],r,l,v,e,nm; //r=root,l=lamda,v=value,e=epsilon,nm=nmax
cout<<"enter the starting approximations p0: ";
cin>>p[0];
cout<<"enter the next approximation p1:  ";
cin>>p[1];
cout<<"enter the convergence tolerence epsilon: ";
cin>>e;
cout<<"enter the no. of iterations nmax:  ";
cin>>nm;
r=p[0];
for(int i=1;i<=nm;i++)
{
p[i+1]=p[i]-eqn(p[i])*((p[i]-p[i-1])/(eqn9p[i])-eqn(p[i-1])));
r=p[i+1];
