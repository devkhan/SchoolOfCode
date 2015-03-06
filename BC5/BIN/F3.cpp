//Program to manipulate binary file.

#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream.h>

class employee
{
	private:

   	int emp_id;
      char name[20];

   public:

   	void enter();
      void disp();
      int return_id();
}obj;

void employee::enter()
{
	cout<<"\n\tEnter Employee ID : ";
   cin>>emp_id;
   cout<<"\n\tEnter name of the employee : ";
   gets(name);
}

void employee::disp()
{
	cout<<"\n\tEmployee ID : "<<emp_id;
   cout<<"\n\tEmployee name : "<<name;
}

inline int employee::return_id()
{
	return emp_id;
}

void main()
{
	clrscr();
   int i=1,id,n=0;
   char flag='y';
   fstream file;
   file.open("Record",ios::binary|ios::out);
   cout<<"\n\tEnter records : \n";
   while(flag=='y'||flag=='Y')
   {
   	cout<<"\n\tRecord "<<i<<" : "<<endl;
      obj.enter();
      file.read((char *)& obj, sizeof(obj));
      cout<<"\n\tWant to enter more ? : ";
      cin>>flag;
      i++;
   }
   getch();
   file.close();
   file.open("Records",ios::binary|ios::in);
   clrscr();
   cout<<"\n\tEnter employee ID to show details : ";
   cin>>id;
   while(!file.eof())
   {
   	file.read((char *)& obj,sizeof(obj));
      if(id==obj.return_id())
      {
      	obj.disp();
         n=1;
         break;
      }
   }
   if(n==0)
   cout<<"\n\tRecord not found !!!";
   getch();
   clrscr();
   cout<<"\n\tDisplaying all records : ";
   while(1)
   {
     	file.read((char*)&obj,sizeof(obj));
      obj.disp();
      if(!file.eof())
      	break;
   }
   file.close();
   getch();
}



