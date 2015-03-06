//Program to print area of the given shape according to the given size.

#include<iostream.h>
#include<conio.h>
int main()
{
	int c;
	float l,b,a,s;
	gotoxy (35,2);
	cout<<"AREA MENU";
	gotoxy (10,4);
	cout<<"1.Rectangle";
	gotoxy (10,5);
	cout<<"2.Triangle";
	gotoxy (10,6);
	cout<<"3.Square";
	gotoxy (10,7);
	cout<<"4.EXIT";
	gotoxy (10,9);
	cout<<"Enter your choice (1 to 4) : ";
	cin>>c;
	switch (c)
	{
		case 1 : gotoxy (10,11);
			 cout<<"Enter length of the rectangle : ";
			 cin>>l;
			 gotoxy (10,13);
			 cout<<"Enter breadth of the rectangle : ";
			 cin>>b;
			 a = l*b ;
			 gotoxy (10,15);
			 cout<<"Area of the Rectangle = "<<a;
			 gotoxy (35,17);
			 cout<<"***END***";
			 getch();
			 break ;

		case 2 : gotoxy (10,11);
			 cout<<"Enter base of the triangle : ";
			 cin>>b;
			 gotoxy (10,13);
			 cout<<"Enter altitude of the triangle : ";
			 cin>>l;
			 a = (b*l)/2;
			 gotoxy (10,15);
			 cout<<"Area of the Triangle = "<<a;
			 gotoxy (30,17);
			 cout<<"***END***";
			 getch();
			 break ;

		case 3 : gotoxy (10,11);
			 cout<<"Enter side of the square : ";
			 cin>>s;
			 a = s * s ;
			 gotoxy (10,13);
			 cout<<"Area of the Square = "<<a;
			 gotoxy (35,16);
			 cout<<"***END***";
			 getch();
			 break ;

		case 4 : break;

		default: gotoxy (35,13);
			 cout<<"!!!INVALID CHOICE!!!";
			 getch();
}
		return 0 ;
}


