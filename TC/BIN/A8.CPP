//Program to define string operations through class.

#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

class my_string
{
	char str1[100],str2[100],str3[100];
	public:
		void concate();
		int length();
		int compare();
		void copy();
		int count(char []);
		void replace(char [],char []);
		void delet(char []);
		void input1();
		void input2();
		void show1();
		void show2();
		void show3();
}o;

void main()
{
	clrscr();
	int ch,c,l;
	char str[100],rep[100];
	cout<<"\n\t\tSTRING MENU";
	cout<<"\n\n\t1. Concatenate two strings.";
	cout<<"\n\t2. Compute length of a string.";
	cout<<"\n\t3. Compare two strings.";
	cout<<"\n\t4. Copy one string on to another.";
	cout<<"\n\t5. Count the number of occurences of a substring in a string.";
	cout<<"\n\t6. Replace a substring.";
	cout<<"\n\t7. Delete a substring.";
	cout<<"\n\t8. EXIT.";
	cout<<"\n\n\tEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1 : o.input1();
			 o.input2();
			 o.concate();
			 o.show3();
			 break;
		case 2 : o.input1();
			 l=o.length();
			 cout<<"\n\tLength of the string = "<<l;
			 break;
		case 3 : o.input1();
			 o.input2();
			 c=o.compare();
			 if(c>0)
				cout<<"\n\tString 1 is larger.";
			 else if(c<0)
					cout<<"\n\tString 2 is larger.";
				else
					cout<<"\n\tBoth strings are equal.";
			 break;
		case 4 : o.input1();
			 o.input2();
			 o.copy();
			 o.show1();
			 break;
		case 5 : o.input1();
			 cout<<"\n\tEnter a substring to find no. of occurences : ";
			 gets(str);
			 c=o.count(str);
			 cout<<"\n\tThe substring occurs "<<c<<" times in the stirng.";
			 break;
		case 6 : o.input1();
			 cout<<"\n\tEnter a substring to replace : ";
			 gets(str);
			 cout<<"\n\tEnter a substring to replace with : ";
			 gets(rep);
			 o.replace(str,rep);
			 o.show1();
			 break;
		case 7 : o.input1();
			 cout<<"\n\tEnter a substring to delete : ";
			 gets(str);
			 o.delet(str);
			 cout<<"\n\tString after deletion : ";
			 o.show1();
			 break;
		case 8 : exit(0);
	}
	getch();
}

void my_string::concate()
{
	int i;
	for(i=0;str1[i]!='\0';i++)
		str3[i]=str1[i];
	for(int j=0;str2[j]!='\0';j++,i++)
		str3[i]=str2[j];
	str3[i]='\0';
}

int my_string::length()
{
	int i;
	for(i=0;str1[i]!='\0';i++);
	return i;
}

int my_string::compare()
{
	int d=0,i;
	for(i=0;d==0;i++)
	{
		d=str1[i]-str2[i];
		if(str1[i]=='\0'||str2[i]=='\0')
			break;
	}
	return d;
}

void my_string::copy()
{
	int i;
	for(i=0;str2[i]!='\0';i++)
		str1[i]=str2[i];
}

int my_string::count(char str[])
{
	int i,c=0,l,flag;
	for(l=0;str[l]!='\0';l++);
	for(i=0;str1[i]!='\0';i++)
	{
		flag=0;
		if(str[i]==str1[i])
		{
			for(int j=0;j<l;j++)
			{
				if(str[i+j]!=str1[j])
				{
					flag=1;
					break;
				}
			}
			if(!flag)
				c++;
		}
	}
	return c;
}

void my_string::replace(char str[],char rep[])
{
	int p=0,l,flag,i;
	for(l=0;str[l]!='\0';l++);
	for(i=0;str1[i]!='\0';i++)
	{
		flag=0;
		for(int j=0;j<l;j++)
		{
			if(str1[i+j]!=str[j])
			{
				flag=1;
				break;
			}
			if(!flag)
				p=i;
		}
	}
	//p++;
	for(i=0;l;l--,i++,p++)
	{
		str1[p]=rep[i];
	}
}

void my_string::delet(char str[])
{
	int p=0,l,flag,i;
	for(l=0;str[l]!='\0';l++);
	for(i=0;str1[i]!='\0';i++)
	{
		flag=0;
		for(int j=0;j<l;j++)
		{
			if(str1[i+j]!=str[i+j])
			{
				flag=1;
				break;
			}
			if(!flag)
				p=i;
		}
	}
	p++;
	for(i=0;str[i]!='\0';i++)
		str1[i+p]=str[i];
}

void my_string::input1()
{
	cout<<"\n\tEnter a string(max. 100 charcters) : ";
	gets(str1);
}

void my_string::input2()
{
	cout<<"\n\tEnter a string(max. 100 charaters) : ";
	gets(str2);
}

void my_string::show1()
{
	cout<<"\n\tString : \n\t"<<str1;
}

void my_string::show2()
{
	cout<<"\n\tString : \n\t"<<str2;
}

void my_string::show3()
{
	cout<<"\n\tString : \n\t"<<str3;
}