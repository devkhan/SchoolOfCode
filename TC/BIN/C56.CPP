#include<iomanip.h>
#include<conio.h>
#include<math.h>

float df(float t, float x)
{	return (1+x/t);		}

void main()
{
	clrscr();
	float x0, t0, x1, t1, x, a, b, h, err;
	int i, n;
	cout<<"\n\tEnter a, b, t0, x0, n :";
	cin>>a>>b>>t0>>x0>>n;
	cout<<setw(6)<<"t\tApproximate solution\tExact solution\tabs(y(ti)-w1)\n";
	cout<<setw(6)<<setprecision(2)<<t1<<setw(20)<<setprecision(8)<<x1<<setw(16)<<setprecision(8)<<endl;
	h=(b-a)/n;
	for(i=1; i<=n ;i++)
	{
		x1 += h*df(t1,x1);
		t1 += h;
		x = t1*(1+log(t1));
		err = fabs(x-x1);
		cout<<setw(6)<<setprecision(2)<<t1<<setw(20)<<setprecision(8)<<x1<<setw(16)<<setprecision(8)<<x<<setw(15)<<setprecision(8)<<err<<endl;
	}
	getch();
}