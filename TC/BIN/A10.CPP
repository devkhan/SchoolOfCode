#include<iostream.h>
#include<conio.h>
#include<process.h>

float calc(int,float a=0,float b=0);

void main()
{
	int ch;
	float x, y ,r;
	char choice;
	do
	{
		clrscr();
		cout<<"\n\tCALCULATOR MENU";
		cout<<"\n\n\t1. Addition.";
		cout<<"\n\t2. Subtraction.";
		cout<<"\n\t3. Multiplication.";
		cout<<"\n\t4. Division.";
		cout<<"\n\t5. Remainder.";
		cout<<"\n\t6. Last result.";
		cout<<"\n\t7. No. of operations done.";
		cout<<"\n\t8. EXIT.";
		cout<<"\n\n\tEnter your choice : ";
		cin>>ch;
		clrscr();
		switch(ch)
		{
			case 1 :
			case 2 :
			case 3 :
			case 4 :
			case 5 : cout<<"\n\tEnter first number : ";
				 cin>>x;
				 cout<<"\n\tEnter second number : ";
				 cin>>y;
				 r=calc(ch,x,y);
				 break;
			case 6 : cout<<"\n\tLast result calculated = "<<r;
				 break;
			case 7 : cout<<"\n\tNo. of operations done so far = "<<(int)calc(ch);
				 break;
			case 8 : exit(0);
			default: cout<<"\n\t!!!INVALID CHOICE!!!";
		}
		if(ch>0&&ch<6)
			cout<<"\n\tResult = "<<r;
		cout<<"\n\tWant to continue ?";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	getch();
}


static float calc(int ch, float a, float b)
{
	static int count=0;
	float r;
	switch(ch)
	{
		case 1 : r=a+b;break;
		case 2 : r=a-b;break;
		case 3 : r=a*b;break;
		case 4 : r=a/b;break;
		case 5 : r=(int)a%(int)b;break;
		case 7 : return count;
	}
	count++;
	return r;
}