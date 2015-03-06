#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{
clrscr();
int ch;

cout<<"\n*************MAIN MENU***************";
cout<<"\n1.factorial";
cout<<"\n2.power";
cout<<"\n3.nth term of fibonacci series";
cout<<"\n4.nth prime no";
cout<<"\n5.sum of digits";
cout<<"\n6.reverse a number";
cout<<"\n7Exit";
cout<<"\nEnter your choice (1-7) : ";
cin>>ch;
if(ch==1)
{
int num,i,fact=1;
//factorial
cout<<"Enter a number ";
cin>>num;

i=num;

while(i)
{

fact=fact*i;

i--;
}
cout<<"The factorial is :: "<<fact;
}

else if(ch==2)
{
//y to the power x
int y,x,r;
cout<<"value of y : ";
cin>>y;
cout<<"value of x : ";
cin>>x;
r=pow(y,x);
cout<<"answer is : "<<r;

}

else if(ch==3)
{
//fabonacci series

int a=0,b=1,c=0,n;
cout<<"Enter the number of terms you wanna see: ";
cin>>n;
cout<<a<<" "<<b<<" ";
for(int i=1;i<=n-2;i++)
{
c=a+b;
a=b;
b=c;
cout<<c<<" ";

}
}

else if(ch==4)
{
//nth prime number
cout<<"not written yet ";
}

else if(ch==5)
{
//sum of digits of number

int num, rem, sum=0; //Declaring variables
	cout<<"Enter a number :"<<endl;
	cin>>num;
	//Loop to calculate the sum of the digits of the given number.
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	cout<<"Sum of the digits is "<<sum<<endl;

}

else if(ch==6)
{
//reverse a number

int a;
cout<<"Enter the no:";
cin>>a;
while(a!=0)
{
cout<<a%10;
a=a/10;

}
}

else if(ch==7)
exit(0);

else
cout<<"wrong choice ";

getch();

}
