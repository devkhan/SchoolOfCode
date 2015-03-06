//Program to print the product of two matrices.

#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int m,n,p,q,i,j;

	cout<< " Enter no. of rows and coloumn of matrix A : ";
	cin>>m>>n;
	cout<< " Enter no. of rows and coloumn of matrix B : ";
	cin>>p>>q;
	if(n!=p)
	{
		cout<<"\n\tMultiplication not possible!!!";
		getch();
		exit(-1);
	}
	int A[m][n],B[p][q],C[m][q];
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			cout<<"\n\tEnter matrix element A["<<i+1<<"]["<<j+1<<"] : ";
			cin>>A[i][j];
		}
	}
	for(i=0;i<p;++i)
	{
		for(j=0;j<q;++j)
		{
			cout<<"\n\tEnter matrix element B["<<i+1<<"]["<<j+1<<"] : ";
			cin>>B[i][j];
		}
	}
	getch();
}
