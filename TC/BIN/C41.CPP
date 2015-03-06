#include<process.h>
#include<iomanip.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	double x1, x2, x3, x10, x20, x30, aerr, maxerr, e1, e2, e3;
	int i, itr;
	x10=x20=x30=0;
	cout<<"\n\tEnter aerr and itr : ";
	cin>>aerr>>itr;
	cout<<setw(6)<<"itr"<<setw(11)<<"x1"<<setw(11)<<"x2"<<setw(11)<<"x3\n";
	cout<<setw(6)<<'0'<<setw(11)<<x10<<setw(11)<<x20<<setw(11)<<x30<<endl;
	for(i=1; i<=itr ;i++)
	{
		x1=(17+2*x30-x20)/20;
		e1=fabs(x1-x10);
		x2=(-18+x30-3*x10)/20;
		e2=fabs(x2-x20);
		x3=(25-2*x10+3*x20)/20;
		e3=fabs(x3-x30);
		if(e1>e2)
		{
			if(e1>e3)
				maxerr=e1;
			else
				maxerr=e3;
		}
		else
		{
			if(e2>e3)
				maxerr=e2;
			else
				maxerr=e3;
		}
		x10=x1;
		x20=x2;
		x30=x3;
		cout<<setw(6)<<i<<setw(11)<<setprecision(4)<<x1<<setw(11)<<setprecision(4)<<x2<<setw(11)<<setprecision(4)<<x3<<endl;
		if(maxerr<aerr)
		{
			cout<<"\n\tSolution converges in "<<i<<" iterations.\n";
			cout<<"\n\tx1 = "<<x1;
			cout<<"\n\tx2 = "<<x2;
			cout<<"\n\tx3 = "<<x3;
			getch();
			exit(0);
		}
		}
		cout<<"\n\tSolution does not converge, need more iterations!!!";
		getch();
}

