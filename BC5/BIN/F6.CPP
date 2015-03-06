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
	int A[5][5],B[5][5],C[5][5];
	for(i=0;i<m;++i)
	{
      cout<<"\n\tEnter row "<<(i+1)<<" of matrix A : ";
		for(j=0;j<n;++j)
			cin>>A[i][j];
   }
   for(i=0;i<p;++i)
   {
   	cout<<"\n\tEnter row "<<(i+1)<<" of matrix B : ";
      for(j=0;j<q;++j)
      	cin>>B[i][j];
   }
   for(i=0;i<m;++i)
   {
      for(j=0;j<q;++j)
      {
   		C[i][j]=0;
         for(int k =0;k<p;++k)
         	C[i][j]=C[i][j]+A[i][k]*B[k][j];
      }
   }
   cout<<"\n\tProduct of the two matrices : ";
   for(i=0;i<m;++i)
   {
   	cout<<"\n\t";
      for(j=0;j<q;++j)
      cout<<C[i][j]<<"\t";
   }
	getch();
}



