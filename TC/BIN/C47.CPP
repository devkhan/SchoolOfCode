#include<process.h>
#include<iomanip.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int i, itr;
	double x1, x2, x3, x10, x20, x30, aerr, maxerr, e1, e2, e3, w;
	x10=x20=x30=0.0;
	cout<<"\n\tEnter the value of itr, w and aerr : ";
	cin>>itr>>w>>aerr;
	cout<<setw(6)<<"itr"<<setw(11)<<"x1"<<setw(11)<<"x2"<<setw(11)<<"x3"<<endl;
	cout<<setw(6)<<'0'<<setw(11)<<x10<<setw(11)<<x20<<setw(11)<<x30<<endl;
	for(i=1; i<=itr ;i++)
	{
		x1=(1-w)*x10+w*(10-x20-(2*x30))/5;
		e1=fabs(x1-x10);
		x10=x1;
		x2=(1-w)*x20+w*(-14+(3*x10)-(4*x30))/9;
		e2=fabs(x2-x20);
		x20=x2;
		x3=(1-w)*x30+w*(33+x10+(2*x20))/7;
		e3=fabs(x3-x30);
		x30=x3;
		if(e1>e2)
			if(e1>e3)
				maxerr=e1;
			else
				maxerr=e3;
		else
			if(e2>e3)
				maxerr=e2;
			else
				maxerr=e3;
		cout<<setw(6)<<i<<setw(11)<<setprecision(4)<<x1<<setw(11)<<setprecision(4)<<x2<<setw(11)<<setprecision(4)<<x3<<endl;
		if(maxerr<aerr)
		{
			cout<<"\n\tSolution converges in "<<i<<" iteraions.";
			cout<<"\n\tx1 = "<<setw(11)<<setprecision(4)<<x1;
			cout<<"\n\tx2 = "<<setw(11)<<setprecision(4)<<x2;
			cout<<"\n\tx3 = "<<setw(11)<<setprecision(4)<<x3;
			getch();
			exit(-1);
		}
	}
	cout<<"\n\tSolution does not converge, need more iterations!!!";
	getch();
}