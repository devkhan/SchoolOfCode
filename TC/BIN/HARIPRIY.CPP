 # iclude <iostream.h>
 # iclude <conio.h>
 int main()
 {
 int year;
 cout <<"enter year in 4 digits";
 cin >>year;
 if(year%100==0)
 {
 if(year%400==0)
 cout<<"year is leap year";
 else
 if (year%4==0)
 cout << "year is leap year";
 else
 cout <<"year is not leap year";
 return 0;
 }



