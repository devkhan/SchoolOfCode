#include<iomanip.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int i, itr=15;
	double x1, x2, x3, x10, x20, x30;
	x10=x20=x30=0;
	cout<<setw(3)<<"Itr"<<setw(9)<<"x1"<<setw(9)<<"x2"<<setw(9)<<"x3"<<endl;
	cout<<setw(3)<<'0'<<setw(9)<<setprecision(4)<<x10<<setw(9)<<setprecision(4)<<x20<<setw(9)<<setprecision(4)<<x30<<endl;
	for(i=1; i<=itr ;++i)
	{
		x1=(10-2*x30-x20)/5;
		x2=(-14-4*x30+3*x10)/9;
		x3=(33+x10+2*x20)/7;
		cout<<setw(3)<<i<<setw(9)<<setprecision(4)<<x1<<setw(9)<<setprecision(4)<<x2<<setw(9)<<setprecision(4)<<x3<<endl;
		x10=x1;
		x20=x2;
		x30=x3;
	}
	getch();
}