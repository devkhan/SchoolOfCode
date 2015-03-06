#include<iostream.h>
#include<conio.h>

#include<iomanip.h>
int x=6;
void mickey(int&, int);
void minnie(int , int&);
int main()
{ clrscr();
int f;
int s=5;
x=6;
mickey(f,s);
cout<<f<<"  "<<s<<" "<<x<<endl;
minnie(f,s);
cout<<f<<"  "<<s<<" "<<x<<endl;
return 0;

}
void mickey(int& a, int b)
{ int f;
 f=b+12;
 a=2*b;
 b=f+4;
 }

 void minnie(int u, int& v)
 {
 int s;
 s=x;
 v=s+4;
 x=u+v;
 }