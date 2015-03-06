#include<iostream.h>
#include<string.h>
#include<conio.h>
int main()
{  clrscr() ;
   char pass[20] ;
   for (int i = 0 ; i < 3 ; i++)
   {    cout<<"\nenter password\n" ;
	cin.getline(pass,20);
	if(strcmp(pass,"PACE"))
	    cout<<"SORRY INCORRECT PASSWORD !!!\n" ;
	else
	{   cout<<"O.K.\n";
	    break ;
	}
    }
    return 0 ;
}