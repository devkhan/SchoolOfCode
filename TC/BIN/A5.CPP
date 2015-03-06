//Program to matrix operations using classes and objects.

#include<iostream.h>
#include<process.h>
#include<conio.h>

class matrix
{
	int M[10][10], s1, s2;

	public :

		void add(matrix B,int mat[][10]);
		void sub(matrix B,int mat[][10]);
		void pro(matrix B,int mat[][10]);
		void transpose();
		void input();
		void show();
		int gr()
		{	return s1;	}
		int gc()
		{	return s2;	}
};

void main()
{
	clrscr();
	matrix A,B;
	int mat[10][10],ch,i,j;
	cout<<"\n\tMATRIX MENU";
	cout<<"\n\n\t1. Addition.";
	cout<<"\n\t2. Subtraction.";
	cout<<"\n\t3. Multiplication.";
	cout<<"\n\t4. Transpose.";
	cout<<"\n\t5. EXIT";
	cout<<"\n\n\tEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1 : cout<<"\n\tEnter first matrix A : ";
			 A.input();
			 cout<<"\n\tEnter second matrix B : ";
			 B.input();
			 if(A.gr()!=B.gr()||A.gc()!=B.gc())
			 {
				cout<<"\n\tSize not equal and hence cannot be added.";
				break;
			 }
			 A.add(B,mat);
			 cout<<"\n\tThe sum of the matrices (A+B) : ";
			 for(i=0;i<A.gr();i++)
			 {
				cout<<endl;
				for(j=0;j<B.gc();j++)
					cout<<'\t'<<mat[i][j];
			 }
			 break;
		case 2 : cout<<"\n\tEnter first matrix A : ";
			 A.input();
			 cout<<"\n\tEnter second matrix B : ";
			 B.input();
			 if(A.gr()!=B.gr()||A.gc()!=B.gc())
			 {
				cout<<"\n\tSize not equal and hence cannot be added.";
				break;
			 }
			 A.sub(B,mat);
			 cout<<"\n\tThe difference of the matrices (A-B) : ";
			 for(i=0;i<B.gr();i++)
			 {
				cout<<endl;
				for(j=0;j<A.gc();j++)
					cout<<'\t'<<mat[i][j];
			 }
			 break;
		case 3 : cout<<"\n\tEnter first matrix A : ";
			 A.input();
			 cout<<"\n\tEnter second matrix B : ";
			 B.input();
			 if(A.gc()!=B.gr())
			 {
				cout<<"\n\tCOlumns of A is not equal to rows of B and hence, they cannot be multiplied.";
				break;
			 }
			 A.pro(B,mat);
			 cout<<"\n\tThe product of the matrices (A*B) : ";
			 for(i=0;i<A.gr();i++)
			 {
				cout<<endl;
				for(j=0;j<B.gc();j++)
					cout<<'\t'<<mat[i][j];
			 }
			 break;
		case 4 : A.input();
			 if(A.gr()!=A.gc())
			 {
				cout<<"\n\tNot a square matrix and hence, cannot be transposed.";
				break;
			 }
			 A.transpose();
			 A.show();
			 break;
		case 5 : exit(1);
		default: cout<<"\n\t!!!INVALID CHOICE!!!";
	}
	getch();
}

void matrix::input()
{
	cout<<"\n\tEnter no. of rows and columns of the matrix : ";
	cin>>s1>>s2;
	for(int i=0; i<s1 ;i++)
	{
		cout<<"\n\tEnter row "<<i+1<<" : ";
		for(int j=0; j<s2 ;j++)
			cin>>M[i][j];
	}
}

void matrix::show()
{
	cout<<"\n\tMatrix contents : ";
	for(int i=0; i<s1 ;i++)
	{
		cout<<endl;
		for(int j=0; j<s2 ;j++)
			cout<<'\t'<<M[i][j];
	}
}

void matrix::add(matrix B,int mat[][10])
{
	for(int i=0; i<s1 ;i++)
		for(int j=0; j<s2 ;j++)
			mat[i][j]=M[i][j]+B.M[i][j];
}

void matrix::sub(matrix B,int mat[][10])
{
	for(int i=0; i<B.s1 ;i++)
		for(int j=0; j<B.s2 ;j++)
			mat[i][j]=M[i][j]-B.M[i][j];
}

void matrix::pro(matrix B,int mat[][10])
{
	int k;
	for(int i=0; i<s1 ;i++)
	{
		for(int j=0; j<B.s2 ;j++)
		{
			mat[i][j]=0;
			for(k=0; k<B.s1 ;k++)
				mat[i][j]+= (M[i][k]*B.M[k][j]);
		}
	}
}

void matrix::transpose()
{
	int t;
	for(int i=0; i<s1 ;i++)
		for(int j=0; j<s2 ;j++)
		{
			t=M[i][j];
			M[i][j]=M[j][i];
			M[j][i]=t;
		}
}