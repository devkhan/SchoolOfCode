//Program to compute simple interest.

#include<stdio.h>

void main()
{
	float p, r, t, i;
	printf("\n\tEnter Principal amount : ");
	scanf("%f",&p);
	printf("\n\tEnter rate of interest in percent : ");
	scanf("%f",&r);
	printf("\n\tEnter time in years : ");
	scanf("%f",&t);
	i=(p*r*t)/100;
	printf("\n\tInterest = %f\n\n\t",i);
	system("pause");
}