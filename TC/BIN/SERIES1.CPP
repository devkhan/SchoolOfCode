//1+(1+2)+(1+2+3)+.......+(1+2+3+...+n).

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int n,i,sum=0;
	cout<<"Enter the value of n : ";
	cin>>n;
	for (i=n;i>0;i--)
	{
		for(int j=i;j>0;j--)
		sum=sum+j;
	}
	cout<<"\n\nThe sum of the series = "<<sum;
	getch();
}