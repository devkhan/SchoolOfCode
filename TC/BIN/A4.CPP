#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int sales[3][5],i,j,avg1=0,avg2=0;
	for(i=0;i<3;i++)
	{
		cout<<"\n\t********* SALES DETAILS *********";
		cout<<"\n\tDetails for salesman : "<<i+1<<endl;
		for(j=0;j<5;j++)
		{
			cout<<"\tEnter sales for product "<<j+1<<" : ";
			cin>>sales[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
			avg1+=sales[i][j];
		avg1/=5;
		cout<<"\n\tAverage sales for salesman "<<i+1<<" = "<<avg1;
	}
	for(j=0;j<5;j++)
	{
		for(i=0;i<3;i++)
			avg2+=sales[i][j];
		avg2/=3;
		cout<<"\n\tAverage sales for product "<<j+1<<" = "<<avg2;
	}
	getch();
}