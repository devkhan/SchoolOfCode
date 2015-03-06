#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	for(int i=1;i<=5;++i)
	{
		cout<<"\n";
		for(int j=1;j<=i;j++)
		cout<<" * ";
	}
	getch();
}