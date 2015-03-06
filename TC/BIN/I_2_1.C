//Program to design a four-function calculator.

#include<stdio.h>

void main()
{
	float x, y, r;
	int ch;
	do
	{
		printf("\n\tEnter two numbers : ");
		scanf("%f%f",&x,&y);
		printf("\n\n\t\tMENU");
		printf("\n\n\t1. Add\n\t2. Subtract\n\t3. Mulltiply\n\t4. Divide");
		printf("\n\n\tEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : r=x+y;		break;
			case 2 : r=x-y;		break;
			case 3 : r=x*y;		break;
			case 4 : if(y==0)
					printf("\n\tCannot divide by zero!!!");
				 else
					r=x/y;
				 break;
			default: printf("\n\t!!!INVALID CHOICE!!!");
		}
		printf("\n\tResult = %f",&r);
		printf("\n\tWant to retry (0 - Yes, Rest - No) : ");
		scanf("%d",ch);
	}while(!ch);
	system("pause");
}