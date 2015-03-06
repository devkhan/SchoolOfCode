//Program to calculate size of all data types.

#include<stdio.h>

void main()
{
	printf("\n\tSize of all fundamental data types : ");
	printf("\n\n\tint : %d bytes",sizeof(int));
	printf("\n\tchar : %d bytes",sizeof(char));
	printf("\n\tfloat : %d bytes",sizeof(float));
	printf("\n\tdouble : %d bytes",sizeof(double));
	printf("\n\tvoid : %d bytes\n\n\t");
	system("pause");
}