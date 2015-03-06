#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int update1(int b3)
{
	int temp;
	temp=b3-(b3%10+2);
	return temp;
}
void update2(int s1,int &s2,int s3=40)
{
	if(s1>s2)
	s1=s1-s2;
	else
	s1=s2-s1;
	if(s2>s3)
	s2=s2=s3;
	else
	s2=s3-s2;
	s3=update1(s3);
	cout<<s1<<";"<<s2<<";"<<s3<<endl;
}
void main()
{
	clrscr();
	int x,y,z;
	x=100,y=200,z=300;
	update2(x,z,y);
	cout<<x<<";"<<y<<";"<<z<<endl;
	update2(y,z);
	cout<<x<<";"<<y<<";"<<z<<endl;
	getch();
}