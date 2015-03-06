#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[3][3],b[3][3],c[3][3];
int i,j,k,m,n,p,q;
clrscr();
cout<<"\n enter the order of matrix a:";
cin>>m>>n;
cout<<"\n enter the order of matrix b:";
cin>>p>>q;
if(n!=p)
cout<<"\n matrix can't b multiplied";
else
{
cout<<"\nenter elements of matrix a:";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nenter elements of b:";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
cin>>b[i][j];
}

cout<<"\norder of matrix a:"<<m<<"x"<<n;
cout<<"\nelements of a:\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cout<<a[i][j]<<"\t";
cout<<"\n";
}
cout<<"\n order of matrix b:"<<p<<"x"<<q;
cout<<"\nelements of b:\n";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
cout<<b[i][j]<<"\t";
cout<<"\n";
}
cout<<"\norder of matrix c:"<<m<<"x"<<n;
cout<<"\nenter elements of c:\n";
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<p;k++)
c[i][j]+=a[i][k]*b[k][j];
}
}
for(i=0;i<m;i++)
{cout<<"\a";
for(j=0;j<q;j++)
cout<<c[i][j]<<"\t";
cout<<"\n";
}
cout<<"\a";
}
getch();

 }

