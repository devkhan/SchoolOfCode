//Program to assign grade to the student according to the given percentage.

#include<iostream.h>
#include<conio.h>
void main()
{
	float p;
	cout<<"\n\n\tEnter percentage of the student : ";
	cin>>p;
	cout<<"\n\t";
	if (p>=95)
	cout<<"STUDENT PASSED WITH DISTINCTION !!!";
	else
		if (p>=60)
		cout<<"STUDENT PASSED WITH Ist DIVISION";
		else
			if (p>=50)
			cout<<"STUDENT PASSED WITH IInd DIVISION";
			else
				if (p>=35)
				cout<<"STUDENT PASSED WITH IIIrd DIVISION";
				else
				cout<<"STUDENT IS FAILED";
	cout<<"\n\n\t***END***";
	getch();
}
