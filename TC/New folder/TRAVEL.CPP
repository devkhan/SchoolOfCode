//                          SOURCE CODE FOR 'TRAVEL INDIA'

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>            //HEADER FILES
#include<dos.h>
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<graphics.h>
#include<math.h>

int i=0;
		 //initialization of global variable
void begin();
void startup();
int opening1();
void opening2();
void maketrfile();            //global functions
void makehofile();
void places();

class travelagency 
{

 char name[50],destination[30],hotel[30],add[80],flag1,flag2,trans[30];
 long double price,price2;
 int not1,not2,nor,top,nod,noc,kor1,kor2,top2;               //data members
 int fst1,fst2,tst1,tst2,nst1,nst2;
 int atr1,atr2,ttr1,ttr2,rtr1,rtr2;

 public:

  int toggle;                      //data members in public area

  void resho();
  void showhotel();
  void viewhorec();
  void showhotelrec();
  void delhotelrec();                                //member functions
  void searchhotrec();                              //for hotel reservations
  void transferhoteldata();
  void edithoteldata();
  void transferhoteldata1();
  void restr();
  void showtransport();
  void viewtrrec();
  void showtransportrec();                         //member functions
  void deltransportrec();                        //for transport reservations
  void searchtransportrec();
  void transfertransportdata();
  void edittransportdata();
  void transfertransportdata1();

  void assignprice();                        //function to calculate price

  void nindia(int ndes);
  void sindia(int sdes);           //functions to view different destinations
  void eindia(int wdes);
  void windia(int edes);
  void cindia(int cdes);

}user,user1[100];                                //global class objects
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT RESERVES THE HOTEL FOR THE USER
//**********************************************************

void travelagency::resho()         //to reserve hotel
{
 clrscr();
  flag1='N';
  while(flag1!='Y')
  {

   clrscr();
   gotoxy(20,5);cout<<"Please Enter Information For Hotel Reservation";
   gotoxy(20,7);cout<<"Please enter the choice of your hotel......";
   gotoxy(25,9);cout<<"1: 5 Star";
   gotoxy(25,10);cout<<"2: 3 Star";
   gotoxy(25,11);cout<<"3: Normal"<<endl;
   gotoxy(26,12);cout<<"......";
   cin>>top;
   clrscr();
   assignprice();
   clrscr();
   gotoxy(15,2);cout<<"PLEASE FILL IN THE DETAILS ...";
   gotoxy(25,5);cout<<"HOTEL RESERVATION FORM";
   gotoxy(5,8);cout<<"Name: ";
   gotoxy(5,10);cout<<"Address: ";
   gotoxy(5,12);cout<<"Destination: ";
   gotoxy(30,12);cout<<"Name of Hotel: ";
   gotoxy(5,14);cout<<"No. of days to stay: ";
   gotoxy(5,16);cout<<"Type of Rooms to be Reserved" ;
   gotoxy(10,18);cout<<"Deluxe: ";
   gotoxy(30,18);cout<<"Non Deluxe: ";
   gotoxy(10,22);cout<<"Is the information correct(y/n)?? ";
   gotoxy(10,8);gets(name);
   gotoxy(13,10);gets(add);
   gotoxy(19,12);gets(destination);
   gotoxy(46,12);gets(hotel);
   gotoxy(27,14);cin>>nod;
   gotoxy(22,18);cin>>kor1;
   gotoxy(45,18);cin>>kor2;
   gotoxy(45,22);cin>>flag1;

   flag1=toupper(flag1);
  }


 showhotel();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SHOWS THE HOTEL RESERVATION
//**********************************************************

void travelagency::showhotel()               //to show hotel reservation
{
  int a,b;

  if(top==1)
    price=(fst1*kor1*nod)+(fst2*kor2*nod);
  else
    if(top==2)
      price=(tst1*kor1*nod)+(tst2*kor2*nod);
    else
      if(top==3)
	 price=(nst1*kor1*nod)+(nst2*kor2*nod);

   if(toggle==1)
 {
 clrscr();

 for(int h=25;h<50;h++)
 {
 gotoxy(20,8);cout<<"Please wait while we make the Reservation";
 gotoxy(h,10);cout<<"€";
 delay(250);
 }
 toggle=0;
 }

   clrscr(); 
   gotoxy(25,5);cout<<"Hotel     Reservation  ";
   gotoxy(24,6);cout<<"-----------------------";
   gotoxy(15,8);cout<<"Name:"<<strupr(name);
   gotoxy(15,10);cout<<"Address:"<<strupr(add);
   gotoxy(15,12);cout<<"Name of the hotel:  "<<strupr(hotel)<<" , "<<strupr(destination);
   gotoxy(15,14);cout<<"No. of Days to stay: "<<nod;
   gotoxy(15,16);cout<<"No. of DELUXE rooms reserved: "<<kor1;
   gotoxy(15,18);cout<<"No. of NON-DELUXE rooms reserved: "<<kor2;
   gotoxy(15,20);cout<<"Your Reservations have been done Please pay the Amount!!!";
   gotoxy(25,22);cout<<"Amount: Rs."<<setprecision(2)<<abs(price);
   getch();

}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT VIEWS THE HOTEL RESERVATION INFORMATION
//**********************************************************


void travelagency::viewhorec()            //to view hotel records
{

 int option;

  while(option!=5)
  {
   clrscr();
   gotoxy(24,5);cout<<"HOTEL RESERVATION INFORMATION";
   gotoxy(25,10);cout<<"choose.....";
   gotoxy(25,12);cout<<"1: View hotel reservation records";
   gotoxy(25,14);cout<<"2: Delete a particular record";
   gotoxy(25,16);cout<<"3: Search for a record";
   gotoxy(25,18);cout<<"4: Edit a record ";
   gotoxy(25,20);cout<<"5: Exit.....  ";
   cin>>option;

    switch(option)
    {
     case 1:showhotelrec();
	    break;
     case 2:delhotelrec();
	    break;
     case 3:searchhotrec();
	    break;
     case 4:edithoteldata();
	    break;
     }
  }
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT READS THE DATA FROM THE DATABASE
//**********************************************************

void travelagency::showhotelrec()             //to show all hotel reservations
{

fstream fil1;

fil1.open("hotel.dat",ios::binary|ios::in);

 while(fil1.read((char*)&user,sizeof (user)))
 user.showhotel();

fil1.close();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT DELETS A HOTEL RECORD
//**********************************************************

void travelagency::delhotelrec()           //to delete a hotel record
{
clrscr();

char dname[20];
 gotoxy(20,5);cout<<"Enter name to delete record for...";
 gotoxy(30,7);gets(dname);
 strupr(dname);

   fstream  fil2,fil3;
   int del=0;

   fil2.open("hotel.dat",ios::binary | ios::in);
   fil3.open("temp.dat",ios::binary | ios::out);

     while(fil2.read ((char*)&user,sizeof (user)))
     {
       if ((strcmp(name,dname))!=0)
       fil3.write((char*)&user,sizeof (user));
       else
       del++;
     }
       if(del!=0)
       cout<<endl<<"                         ...Deleted...";
       else
       cout<<endl<<"                       Record not found..";
       getch();
   fil2.close();
   fil3.close();

   transferhoteldata();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT TRANSFERS THE OLD FILE TO NEW FILE
//**********************************************************

 
void travelagency::transferhoteldata()    //to transfer undeleted hotel records
{

fstream oldfile,newfile;


oldfile.open("temp.dat",ios::binary | ios::in);
newfile.open("hotel.dat",ios::binary | ios::out);

  while(oldfile.read((char*)&user,sizeof(user)))
  newfile.write((char*)&user,sizeof (user));

oldfile.close();
newfile.close();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SEARCHES A RECORD FROM THE DATABASE
//**********************************************************

void travelagency::searchhotrec()               //to search for a hotel record
{
clrscr();
char sname[20];
  gotoxy(20,5);cout<<"Enter Name to search for..";
  gotoxy(25,7);gets(sname);
  strupr(sname);

   fstream fil4;
   fil4.open("hotel.dat",ios::binary | ios::in);

   int srch=0;

     while(fil4.read((char*)&user,sizeof(user)))
     {
       if(strcmp(name,sname)==0)
       {
       srch++;
       user.showhotel();
       }
     }
       if(srch==0)
       cout<<"                         No Record Exists";
    fil4.close();
getch();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT MODIFIES THE HOTEL RECORD
//**********************************************************

void travelagency::edithoteldata()     //to edit a hotel record
{
clrscr();
char ename[30];int ede=0;
gotoxy(20,5);cout<<"Enter Name to Edit Record for...";
gotoxy(25,7);gets(ename);
strupr(ename);
fstream fil5,fil6;
fil5.open("hotel.dat",ios::binary | ios::in) ;
fil6.open("temp1.dat",ios::binary | ios::out ) ;
 while(fil5.read((char*)&user,sizeof(user)))
  {
   if (strcmp (ename,name)==0)
   {
    resho();
    ede++;
   }
   fil6.write((char*)&user,sizeof (user));
  }

  if(ede==0)
  {
  gotoxy(25,17);cout<<"RECORD DOESNT EXIST!!!!";
  }

getch();
fil5.close();
fil6.close();

transferhoteldata1();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT TRANSFERS THE HOTEL RECORD
//**********************************************************

void travelagency::transferhoteldata1()       //to transfer edited hotel record
{
fstream oldfile2,newfile2;


oldfile2.open("temp1.dat",ios::binary | ios::in);
newfile2.open("hotel.dat",ios::binary | ios::out);

  while(oldfile2.read((char*)&user,sizeof(user)))
  newfile2.write((char*)&user,sizeof (user));

oldfile2.close();
newfile2.close();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT RESERVES THE TRANSPORT FOR THE USER
//**********************************************************

void travelagency::restr()         //to reserve transportation
{
clrscr();

 flag2='N';

 while(flag2!='Y')
 {
 clrscr();
 gotoxy(20,5);cout<<"Please Enter Information For Transport Reservation";
 gotoxy(20,7);cout<<"Please enter the choice of your mode of transportaion......";
 gotoxy(25,9);cout<<"1: by Air";
 gotoxy(25,10);cout<<"2: by Train";
 gotoxy(25,11);cout<<"3: by Road"<<endl;
 gotoxy(26,12);cout<<"......";cin>>top2;
 clrscr();


 assignprice();

   clrscr();
   gotoxy(15,2);cout<<"PLEASE FILL IN THE DETAILS ...";
   gotoxy(25,5);cout<<"TRANSPORT RESERVATION FORM";
   gotoxy(5,8);cout<<"Name: ";
   gotoxy(5,10);cout<<"Address: ";
   gotoxy(5,12);cout<<"Destination: ";
   gotoxy(30,12);cout<<"Mode of Transport: ";
   gotoxy(5,14);cout<<"Type of Tickets to be Reserved" ;
   gotoxy(10,8);gets(name);
   gotoxy(13,10);gets(add);
   gotoxy(19,12);gets(destination);
   gotoxy(50,12);gets(trans);
   gotoxy(10,16);cout<<"Executive: ";
   gotoxy(30,16);cout<<"Economy: ";
   int valid = 0 ;
	do
	{
		valid = 1 ;
		gotoxy(1,25) ;
		cout <<"ENTER TOTAL NO OF SEATS TO BE BOOKED" ;
		gotoxy(22,16) ;
		cin >>not1 ;
		gotoxy(40,16);cin>>not2;
		} while ( valid == 0 ) ;

   gotoxy(10,22);cout<<"Is the information correct(y/n)?? ";
   gotoxy(45,22);cin>>flag2;
   flag2=toupper(flag2);

}


showtransport();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SHOWS THE TRASPORT RESERVATION
//**********************************************************

void travelagency::showtransport()           //to show transport reservation
{

 if(top2==1)
  price2=(atr1*not1)+(atr2*not2);
 else
  if(top2==2)
   price2=(ttr1*not1)+(ttr2*not2);
  else
   if(top2==3)
    price2=(rtr1*not1)+(rtr2*not2);

 if(toggle==1)
 {
 clrscr();
 for(int h=25;h<50;h++)
 {
 gotoxy(20,8);cout<<"Please wait while we make the Reservation";
 gotoxy(h,10);cout<<"€";
 delay(250);
 }
 toggle=0;
 }

 clrscr();
 gotoxy(25,5);cout<<"Transport   Reservation  ";
 gotoxy(24,6);cout<<"-----------------------";
 gotoxy(15,8);cout<<"Name:"<<strupr(name);
 gotoxy(15,10);cout<<"Address:"<<strupr(add);
 gotoxy(15,12);cout<<"Mode of transportation:    "<<trans<<"   Destination:"<<destination;
 gotoxy(15,14);cout<<"No. of EXECUTIVE class tickets reserved: "<<not1;
 gotoxy(15,16);cout<<"No. of ECONOMY   class tickets reserved: "<<not2;
 gotoxy(15,20);cout<<"Your Reservations have been done Please pay the Amount!!!";
 gotoxy(25,22);cout<<"Amount: Rs."<<setprecision(2)<<abs(price2);
 getch();

}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT VIEWS THE RECORD OF TRANSPORT
//**********************************************************

void travelagency::viewtrrec()                 //to view transport records
{

int option;

 while(option!=5)
 {
  clrscr();
  gotoxy(24,5);cout<<"TRANSPORT RESERVATION INFORMATION...";
  gotoxy(25,10);cout<<"choose.....";
  gotoxy(25,12);cout<<"1: View transport reservation records";
  gotoxy(25,14);cout<<"2: Delete a particular record";
  gotoxy(25,16);cout<<"3: Search for a record";
  gotoxy(25,18);cout<<"4: Edit a record ";
  gotoxy(25,20);cout<<"5: Exit...     ";
  cin>>option;

  switch(option)
   {
   case 1:showtransportrec();
	  break;
   case 2:deltransportrec();
	  break;
   case 3:searchtransportrec();
	  break;
   case 4:edittransportdata();
	  break;
   }
 }

}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SHOWS THE ALL RECORDS OF TRANSPORT
//**********************************************************

void travelagency::showtransportrec()            //to show all transport records
{
fstream file1;

file1.open("transport.dat",ios::binary|ios::in);

 while(file1.read((char*)&user,sizeof (user)))
 user.showtransport();

file1.close();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT DELETES THE TRANSPORT
//**********************************************************

void travelagency::deltransportrec()             //to delete a transport record
{
clrscr();

  char delname[20];

  gotoxy(20,5);cout<<"Enter name to delete record for...";
  gotoxy(30,7);gets(delname);
  strupr(delname);

    fstream  file2,file3;
    int dele=0;
    file2.open("transport.dat",ios::binary | ios::in);
    file3.open("temp3.dat",ios::binary | ios::out );

       while(file2.read ((char*)&user,sizeof (user)))
       {
       if ((strcmp(name,delname))!=0)
       file3.write((char*)&user,sizeof (user));
       else
       dele++;
       }

       if(dele!=0)
       cout<<endl<<"                    ...Deleted...";
       else
       cout<<endl<<"                  Record not found..";
       getch();

       file2.close();
       file3.close();

       transfertransportdata();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT TRANSFERS UNDELETED TRANSPORT RECORDS
//**********************************************************

void travelagency::transfertransportdata()     //to transfer undeleted transport records
{
fstream oldfile1,newfile1;

oldfile1.open("temp3.dat",ios::binary | ios::in);
newfile1.open("transport.dat",ios::binary | ios::out);

     while(oldfile1.read((char*)&user,sizeof(user)))
     newfile1.write((char*)&user,sizeof (user));

oldfile1.close();
newfile1.close();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SEARCHES THE TRANSPORT RECORD
//**********************************************************

void travelagency::searchtransportrec()             //to search for a transport record
{
clrscr();

 char sename[20];
 gotoxy(20,5);cout<<"Enter Name to search for..";
 gotoxy(25,7);gets(sename);
 strupr(sename);

    fstream file4;
    file4.open("transport.dat",ios::binary | ios::in); 
    int serch=0;

       while(file4.read((char*)&user,sizeof (user)))
       {
	if(strcmp(name,sename)==0)
	{
	serch++;
	user.showtransport();
	}
       }
       if(serch==0)
       cout<<"                       No Record Exists";
       file4.close();
       getch();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT MODIFIES A TRANSPORT RECORD
//**********************************************************

void travelagency::edittransportdata()    //to edit a transport record
{
clrscr();
  char edname[30];
  int ede1=0;

  gotoxy(20,5);cout<<"Enter Name to Edit Record for...";
  gotoxy(25,7);
  gets(edname);
  strupr(edname);

  fstream file5,file6;
  file5.open("transport.dat",ios::binary | ios::in) ;
  file6.open("temp2.dat",ios::binary | ios::out ) ;

  while(file5.read((char*)&user,sizeof(user)))
  {
   if (strcmp (edname,name)==0)
   {
    restr();
    ede1++;
   }
   file6.write((char*)&user,sizeof (user));
  }

if(ede1==0)
{
gotoxy(25,17);cout<<"RECORD DOESNT EXIST!!!!";
}

getch();
file5.close();
file6.close();

transfertransportdata1();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT transfer edited transport records
//**********************************************************

void travelagency::transfertransportdata1() //to transfer edited transport records
{
fstream oldfile3,newfile3;


oldfile3.open("temp2.dat",ios::binary | ios::in);
newfile3.open("transport.dat",ios::binary | ios::out);

  while(oldfile3.read((char*)&user,sizeof(user)))
  newfile3.write((char*)&user,sizeof (user));

oldfile3.close();
newfile3.close();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT MAKES TRANSPORT RECORDS
//**********************************************************

void maketrfile()                    //makes transport records
{
       fstream fil;
       fil.open("transport.dat",ios::binary | ios::out |ios::app);
       user1[i].toggle=1;
       user1[i].restr();
       fil.write((char*)&user1[i],sizeof (user1[i]));
       fil.close();
}
void makehofile()                    //makes hotel records
{
       fstream fil;
       fil.open("hotel.dat",ios::binary | ios::out |ios::app );
       user1[i].toggle=1;
       user1[i].resho();
       fil.write((char*)&user1[i],sizeof (user1[i]));
       fil.close();
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SHOWS THE STARTING SCREEN
//**********************************************************

void startup()                       //function to display starting screen
{
 int a;
 textcolor(GREEN );
  for(a=50;a>30;a-- )
  {
  clrscr();
  gotoxy(25,10);cout<<"Welcome to the TRAVEL AGENCY";
  delay(50);
  }

 for(a=42;a<52;a++)
  {

  gotoxy(27,18);cout<<"please wait";
  gotoxy(a,18);cout<<".";
  delay(400);
  }
clrscr();

textcolor(GREEN );

for(int j=0;j<10;j++)
{
clrscr();
gotoxy(j,6); cputs("        ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ"); 
gotoxy(j,7); cputs("            ‹‹‹‹‹‹‹ ‹‹‹‹‹‹ ‹‹‹‹‹‹");
gotoxy(j,8); cputs("               €    €    € €    €");
gotoxy(j,9); cputs("               €    €‹‹‹€  €‹‹‹‹€");
gotoxy(j,10);cputs("               €    € €    €    €");
gotoxy(j,11);cputs("               €    €  €€  €    €");

gotoxy(51-j,6); cputs("ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ \n\r");
gotoxy(51-j,7); cputs(" ‹    ‹ ‹‹‹‹‹‹ ‹   \n\r");
gotoxy(51-j,8); cputs(" €    € €      €    \n\r");
gotoxy(51-j,9); cputs(" €    € €‹‹‹   €    \n\r");
gotoxy(51-j,10);cputs("  €  €  €      €    \n\r");
gotoxy(51-j,11);cputs("   €€   €€€€€€ €€€€ \n\r\n\n");

gotoxy(j,12);cputs("                          ‹‹‹‹‹‹‹ ‹    ‹");
gotoxy(j,13);cputs("                             €    €€   €");
gotoxy(j,14);cputs("                             €    € €  €");
gotoxy(j,15);cputs("                             €    €  € €");
gotoxy(j,16);cputs("                          ‹‹‹€‹‹‹ €   €€");
gotoxy(j,17);cputs("                     ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ");

gotoxy(58-j,12);cputs(" ‹‹‹‹‹‹ ‹‹‹‹‹‹‹ ‹‹‹‹‹‹ \n\r");
gotoxy(58-j,13);cputs(" €    €    €    €    € \n\r");
gotoxy(58-j,14);cputs(" €    €    €    €‹‹‹‹€ \n\r");
gotoxy(58-j,15);cputs(" €    €    €    €    € \n\r");
gotoxy(58-j,16);cputs(" €‹‹‹‹€ ‹‹‹€‹‹‹ €    € \n\r");
gotoxy(58-j,17);cputs("ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ \n\r");

delay(80);
}
gotoxy(25,25);
cout<<"press any key to continue...";
getch();
}
//**********************************************************
//	FUNCTION NAME : OPENING1
//	DETAILS       : IT DISPLAYS THE MENU
//**********************************************************

int opening1()                 //function to display menu
{
int pass;
clrscr();

 for(int f=0;f<6;f++)
 {
 clrscr();

  gotoxy(10,f);cout<<"Good morning!!!!!!......What would you like us to do for you";
  gotoxy(15,f+3);cout<<"1: View Tourist Places";
  gotoxy(15,f+5);cout<<"2: Reserve Transportation";
  gotoxy(15,f+7);cout<<"3: Reserve Accomodation";
  gotoxy(15,f+9);cout<<"4: View Existing Bookings";
  gotoxy(15,f+11);cout<<"5: Exit";
  gotoxy(13,f+14);cout<<"Enter (1,2,3,4 or 5)....? ";
  delay(100);
 }

 for(f=1;f<13;f++)
 {
  gotoxy(3,f);cout<<"Œ";gotoxy(80,f);cout<<"Œ";
  gotoxy(3,25-f);cout<<"Œ";gotoxy(80,25-f);cout<<"Œ";
  delay(50);
 }

gotoxy(40,19);cin>>pass;
return(pass);
}
//**********************************************************
//	FUNCTION NAME : OPENING2
//	DETAILS       : IT DISPLAYS THE MENU WITH PLACES
//**********************************************************

void opening2()                 //function to display menu with places
{
int opt2;

 gotoxy(10,21);cout<<"1: Reserve Transportation";
 gotoxy(10,22);cout<<"2: Reserve Accomodation";
 gotoxy(10,23);cout<<"3: Reserve Transportation and Accomodation";
 gotoxy(10,24);cout<<"4: Exit  ???.... ";cin>>opt2;

 if (opt2!=4)
 {

  switch(opt2)
  {
  case 1:maketrfile();
	 i++;
	 break;
  case 2:makehofile();
	 i++;
	 break;
  case 3:maketrfile();
	 i++;
	 makehofile();
	 i++;
	 break;
  }
 }
}
//**********************************************************
//	FUNCTION NAME : OPENING1
//	DETAILS       : IT DISPLAYS THE CHOICE OF DESTINATION
//**********************************************************

void places()                  //function to display choice of destination
{
int des;
       for(int j=0;j<20;j++)
       {
       clrscr();
       gotoxy(j+3,5);cout<<"Choose Destination";
       gotoxy(j,10);cout<<"…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ" <<endl;
       gotoxy(j,11);cout<<"∫      1.NORTH INDIA            ∫ "<<endl;
       gotoxy(j,12);cout<<"∫      2.SOUTH INDIA            ∫ "<<endl;
       gotoxy(j,13);cout<<"∫      3.EAST INDIA             ∫ "<<endl;
       gotoxy(j,14);cout<<"∫      4.WEST INDIA             ∫ "<<endl;
       gotoxy(j,15);cout<<"∫      5.CENTRAL INDIA          ∫ "<<endl;
       gotoxy(j,16);cout<<"∫      6.EXIT                   ∫ "<<endl;
       gotoxy(j,17);cout<<"∫   ??ENTER COICE>>.....?       ∫ "<<endl;
       gotoxy(j,18);cout<<"»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ– "<<endl;
       delay(50);
       }
       gotoxy(45,17);cin>>des;

int des1;

if (des!=6)
{
 switch(des)
 {
  case 1: for(j=0;j<20;j++)
	  {
	  clrscr();
	  gotoxy(j+3,5);cout<<"Where do u wanna go......";
	  gotoxy(j,10);cout<<"…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ" <<endl;
	  gotoxy(j,11);cout<<"∫      1.JAMMU & KASHMIR        ∫ "<<endl;
	  gotoxy(j,12);cout<<"∫      2.HARYANA                ∫ "<<endl;
	  gotoxy(j,13);cout<<"∫      3.PUNJAB                 ∫ "<<endl;
	  gotoxy(j,14);cout<<"∫      4.HIMACHAL PRADESH       ∫ "<<endl;
	  gotoxy(j,15);cout<<"∫      5.EXIT                   ∫ "<<endl;
	  gotoxy(j,16);cout<<"∫                               ∫ "<<endl;
	  gotoxy(j,17);cout<<"∫   ??ENTER COICE>>......       ∫ "<<endl; 
	  gotoxy(j,18);cout<<"»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ– "<<endl;
	  delay(50);
	  }
	  gotoxy(45,17);cin>>des1;

	  if(des1!=5)
	  user.nindia(des1);
	  break;
case 2:  for(j=0;j<20;j++)
	 {
	 clrscr();
	  gotoxy(j+3,5);cout<<"Where do u wanna go......";
	  gotoxy(j,10);cout<<"…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ" <<endl;
	  gotoxy(j,11);cout<<"∫      1.KERELA                 ∫ "<<endl;
	  gotoxy(j,12);cout<<"∫      2.TAMIL NADU             ∫"<<endl;
	  gotoxy(j,13);cout<<"∫      3.ANDHRA PRADESH         ∫ "<<endl;
	  gotoxy(j,14);cout<<"∫      4.MAHARASHTRA            ∫ "<<endl;
	  gotoxy(j,15);cout<<"∫      5.ANDAMAN AND NICOBAR    ∫ "<<endl;
	  gotoxy(j,16);cout<<"∫      6.EXIT                   ∫ "<<endl;
	  gotoxy(j,17);cout<<"∫   ??ENTER COICE>>......       ∫ "<<endl;
	  gotoxy(j,18);cout<<"»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ– "<<endl;
	  delay(50);
	 }
	 gotoxy(45,17);cin>>des1;

	if(des1!=6)
	user.sindia(des1);
	break;


case 3: for(j=0;j<20;j++)
	{
	clrscr();
	gotoxy(j+3,5);cout<<"Where do u wanna go......";
	gotoxy(j,10);cout<<"…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ" <<endl;
	gotoxy(j,11);cout<<"∫      1.ASSAM                  ∫ "<<endl;
	gotoxy(j,12);cout<<"∫      2.ARUNACHAL PRADESH      ∫"<<endl;
	gotoxy(j,13);cout<<"∫      3.BIHAR                  ∫ "<<endl;
	gotoxy(j,14);cout<<"∫      4.WEST BENGAL            ∫ "<<endl;
	gotoxy(j,15);cout<<"∫      5.UTTAR PRADESH          ∫ "<<endl;
	gotoxy(j,16);cout<<"∫      6.EXIT                   ∫ "<<endl;
	gotoxy(j,17);cout<<"∫   ??ENTER COICE>>......       ∫ "<<endl;
	gotoxy(j,18);cout<<"»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ– "<<endl;
	delay(50);
	}
	gotoxy(45,17);cin>>des1;

	if(des1!=6)
	user.eindia(des1);
	break;

case 4: for(j=0;j<20;j++)
	{
	clrscr();
	gotoxy(j+3,5);cout<<"Where do u wanna go......";
	gotoxy(j,10);cout<<"…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ" <<endl;
	gotoxy(j,11);cout<<"∫                               ∫ "<<endl;
	gotoxy(j,12);cout<<"∫          1.GUJARAT            ∫"<<endl;
	gotoxy(j,13);cout<<"∫          2.RAJASTHAN          ∫ "<<endl;
	gotoxy(j,14);cout<<"∫          3.EXIT               ∫ "<<endl;
	gotoxy(j,15);cout<<"∫                               ∫ "<<endl;
	gotoxy(j,16);cout<<"∫                               ∫ "<<endl;
	gotoxy(j,17);cout<<"∫   ??ENTER COICE>>......       ∫ "<<endl;
	gotoxy(j,18);cout<<"»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ– "<<endl;
	delay(50);
	}
	gotoxy(45,17);cin>>des1;

	if(des1!=3)
	user.windia(des1);
	break;

case 5:  for(j=0;j<20;j++)
	{
	clrscr();
	gotoxy(j+3,5);cout<<"Where do u wanna go......";
	gotoxy(j,10);cout<<"…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ" <<endl;
	gotoxy(j,11);cout<<"∫                               ∫ "<<endl;
	gotoxy(j,12);cout<<"∫                               ∫"<<endl;
	gotoxy(j,13);cout<<"∫         1.ORISSA              ∫ "<<endl;
	gotoxy(j,14);cout<<"∫         2.MADHYA PRADESH      ∫ "<<endl;
	gotoxy(j,15);cout<<"∫         3.EXIT                ∫ "<<endl;
	gotoxy(j,16);cout<<"∫                               ∫ "<<endl;
	gotoxy(j,17);cout<<"∫   ??ENTER COICE>>......       ∫ "<<endl;
	gotoxy(j,18);cout<<"»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ– "<<endl;
	delay(50);
	}
	gotoxy(45,17);cin>>des1;

	if(des1!=3)
	user.cindia(des1);
	break;

 }
}
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SHOWS THE PLACES OF NORTH INDIA
//**********************************************************
void travelagency::nindia(int ndes)    //function to display north india information
{

switch(ndes)
{
 case 1:clrscr();
	gotoxy(25,1);cout<<"Jammu and Kashmir ";
	gotoxy(24,2);cout<<"------------------";
	gotoxy(20,3);cout<<"Places To Visit::         -Kashmir-    -Jammu- "<<endl;
	gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
	cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
	cout<<"  BY Air   kash.      041 I.A.     12000Rs.       9000Rs.  13:50(d)-15:30(a)"<<endl;
	cout<<"  BY Air   jam.       042 I.A.     12000Rs.       9000Rs.   8:00(d)- 9:40(a)"<<endl;
	cout<<"  BY Train kash.   Kashmir Express  2500Rs.       2000Rs.  13:00(d)-18:00(a)"<<endl;
	cout<<"  By Train jam.    Jammu Mail       2500Rs.       2000Rs.  15:00(d)-16:30(a)"<<endl;
	cout<<"  By Road  kash.      Bus            700Rs.        500Rs.  12:00(d)-20:00(a)"<<endl;
	cout<<"  By Road  jam.       Bus            700Rs.        500Rs.  14:00(d)-15:00(a)"<<endl;
	gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
	cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
	cout<<"    5      kash        Kashmir                     5000Rs      3000Rs      "<<endl;
	cout<<"    5      jam         holiday                     5000Rs.     3000Rs.     "<<endl;
	cout<<"    3      kash         queen                      3000Rs.     1500Rs.     "<<endl;
	cout<<"    3      jam          passenger                  3000Rs.     1500Rs.     "<<endl;
	cout<<"   normal  kash         rest                       1000Rs.     500Rs.      "<<endl;
	cout<<"   normal  jam          guest                      1000Rs.     500Rs.      "<<endl;
	cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";

       atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 2:clrscr();

       gotoxy(25,1);cout<<"     HARYANA";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Chandigarh-    -Gurgaon- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   chan.      051 I.A.     10000Rs.       8000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   chan.      052 I.A.     10000Rs.       8000Rs.   7:00(d)- 7:40(a)"<<endl;
       cout<<"  BY Train chan.   Haryana Express  1500Rs.       1000Rs.  13:00(d)-18:00(a)"<<endl;
       cout<<"  By Train gur.    Punjab Mail      1500Rs.       1000Rs.  14:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  chan.      Bus            300Rs.        200Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  gur.       Bus            300Rs.        200Rs.  14:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      chan         taj                        5000Rs      3000Rs      "<<endl;
       cout<<"    5      gur         broadway                    5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      chan         king                       3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      gur          resort                     3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  chan         sarai                      1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  gur          star                       1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 3:clrscr();

       gotoxy(25,1);cout<<"     PUNJAB";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Amritsar-    -Ludhiana- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   amr.      051 I.A.       8000Rs.       6000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   lud.      052 I.A.       8000Rs.       6000Rs.   5:00(d)- 5:40(a)"<<endl;
       cout<<"  BY Train amr.   Haryana Express   1200Rs.       1000Rs.  13:00(d)-18:00(a)"<<endl;
       cout<<"  By Train lud.    Punjab Mail      1200Rs.       1000Rs.  14:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  amr.      Bus            300Rs.        200Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  lud.      Bus            300Rs.        200Rs.  14:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      amr             Nanda                   5000Rs      3000Rs      "<<endl;
       cout<<"    5      lud            Shiraz                   5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      amr            Amaitas                  3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      lud            Gulmor                   3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  amr            salam                    1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  lud            stars                    1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 4:clrscr();
       gotoxy(25,1);cout<<" HIMACHAL PRADESH";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Shimla-    -Manali- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   shi.      151 I.A.     10000Rs.       8000Rs.  12:30(d)-13:30(a)"<<endl;
       cout<<"  BY Air   man.      152 I.A.     10000Rs.       8000Rs.   6:50(d)- 7:40(a)"<<endl;
       cout<<"  BY Train shi.   Himachal Express  2000Rs.       1000Rs.  13:00(d)-19:00(a)"<<endl;
       cout<<"  By Train man.    kalka Mail       2000Rs.       1000Rs.  14:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  shi.      Bus            800Rs.        500Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  man.      Bus            800Rs.        500Rs.  14:00(d)-20:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      shi            chamba                   4000Rs      3000Rs      "<<endl;
       cout<<"    5      man           chanakya                  4000Rs.     3000Rs.     "<<endl;
       cout<<"    3      shi           geetanjali                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      man           parkview                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  shi           guesthouse                 800Rs.     500Rs.      "<<endl;
       cout<<"   normal  man           mountview                  800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
       fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
       opening2();
       break;

}
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SHOWS THE PLACES OF SOUTH INDIA
//**********************************************************
void travelagency::sindia(int sdes) //function to display south india information
{
switch(sdes)
{
case 1:clrscr();
       gotoxy(25,1);cout<<"      KERELA ";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Trivandram-    -Kochi- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   tri.       141 I.A.     15000Rs.       12000Rs.  13:50(d)-16:30(a)"<<endl;
       cout<<"  BY Air   koc.       142 I.A.     15000Rs.       12000Rs.   8:00(d)-11:40(a)"<<endl;
       cout<<"  BY Train tri.   Kerela Express    3500Rs.       2000Rs.  06:00(d)-18:00(a)"<<endl;
       cout<<"  By Train koc.    Jammu Mail       3500Rs.       2000Rs.  05:00(d)-16:30(a)"<<endl;
       cout<<"  By Road  tri.      Bus           1200Rs.        700Rs.  05:00(d)-22:00(a)"<<endl;
       cout<<"  By Road  koc.      Bus           1200Rs.        700Rs.  05:00(d)-23:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      tri         Manor                       5000Rs      3000Rs      "<<endl;
       cout<<"    5      koc         holiday                     5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      tri          South park                 3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      koc          passenger                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  tri          nest                       1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  koc          Jas                        1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";

       atr1=15000;atr2=12000;ttr1=3500;ttr2=2000;rtr1=1200;rtr2=700;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 2:clrscr();
       gotoxy(25,1);cout<<"    TAMIL NADU";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Chennai-    -Bangalore- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Che.       181 I.A.     12000Rs.       10000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Ban.       182 I.A.     12000Rs.       10000Rs.   7:00(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Che.    Madras Express    2500Rs.       1500Rs.  08:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Ban.    Madurai Mail      2500Rs.       1500Rs.  09:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Che.       Bus            800Rs.        500Rs.  05:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Ban.       Bus            800Rs.        500Rs.  06:00(d)-22:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      che          taj                        5000Rs      3000Rs      "<<endl;
       cout<<"    5      ban         roadway                     5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      che          king                       2500Rs.     1500Rs.     "<<endl;
       cout<<"    3      ban          resort                     2500Rs.     1500Rs.     "<<endl;
       cout<<"   normal  che          salam                      1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  ban          hoshu                      1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=12000;atr2=10000;ttr1=2500;ttr2=1500;rtr1=800;rtr2=500;
       fst1=5000;fst2=3000;tst1=2500;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 3:clrscr();
       gotoxy(25,1);cout<<"  ANDHRA PRADESH";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Hyderabad-    -Nagpur- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Hyd.      081 I.A.       9000Rs.       7000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Nag.      082 I.A.       9000Rs.       7000Rs.   5:00(d)- 5:40(a)"<<endl;
       cout<<"  BY Train Hyd.   hyderabad Express 1200Rs.       1000Rs.  08:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Nag.    Andhra Mail      1200Rs.       1000Rs.  09:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Hyd.      Bus            700Rs.        500Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Nag.      Bus            700Rs.        500Rs.  06:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Hyd            Palace                   5000Rs      3000Rs      "<<endl;
       cout<<"    5      Nag            Lodge                    5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Hyd            Siddharth                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Nag            Yatri                    3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Hyd            salem                    1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Nag            Parklane                 1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=9000;atr2=7000;ttr1=1200;ttr2=1000;rtr1=700;rtr2=500;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 4:clrscr();
       gotoxy(25,1);cout<<"    MAHARASTRA";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Mumbai-    -Pune- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Mum.      351 I.A.     11000Rs.       9000Rs.  12:30(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Pun.      352 I.A.     11000Rs.       9000Rs.   6:50(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Mum.   Rajdhani Express 2000Rs.       1000Rs.  10:00(d)-19:00(a)"<<endl;
       cout<<"  By Train Pun.    Pune Mail       2000Rs.       1000Rs.  10:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  Mum.      Bus            800Rs.        500Rs.  09:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Pun.      Bus            800Rs.        500Rs.  09:00(d)-20:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Mum            Centaur                  5000Rs      4000Rs      "<<endl;
       cout<<"    5      Pun           Holiday inn               5000Rs.     4000Rs.     "<<endl;
       cout<<"    3      Mum            Clarks                   3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Pun           seaview                   3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Mum           guesthouse                800Rs.     500Rs.      "<<endl;
       cout<<"   normal  Pun           niceview                  800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=11000;atr2=9000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
       fst1=5000;fst2=4000;tst1=3000;tst2=1500;nst1=800;nst2=500;
       opening2();
       break;

case 5:clrscr();
       gotoxy(25,1);cout<<"ANDAMAN AND NICOBAR";
       gotoxy(24,2);cout<<"-------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Port Blair-    -Rangat- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   P.b.      151 I.A.     15000Rs.       12000Rs.  12:30(d)-16:30(a)"<<endl;
       cout<<"  BY Air   Ran.      152 I.A.     15000Rs.       12000Rs.   6:50(d)- 9:40(a)"<<endl;
       cout<<"  BY Ship  P.b.      Ship         2000Rs.       1000Rs.  13:00(d)-19:00(a)"<<endl;
       cout<<"  By Ship  Ran.      Ship         2000Rs.       1000Rs.  14:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  P.b.      N.a.            "<<endl;
       cout<<"  By Road  Ran.      N.a.            "<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      P.b.            chamba                   4000Rs      3000Rs      "<<endl;
       cout<<"    5      Ran            chanakya                  4000Rs.     3000Rs.     "<<endl;
       cout<<"    3      P.b.           geetanjali                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Ran            parkview                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  P.b.           guest                     800Rs.     500Rs.      "<<endl;
       cout<<"   normal  Ran            nanny                     800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=15000;atr2=12000;ttr1=2000;ttr2=1000;rtr1=0;rtr2=0;
       fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500; 
       opening2();
       break;
}
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SHOWS THE PLACES OF EAST INDIA
//**********************************************************
void travelagency::eindia(int edes)  //function to display east india information
{

switch(edes)
{
case 1:clrscr();
       gotoxy(25,1);cout<<"      ASSAM ";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Guwahati-     "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Guw.        045 I.A.       12000Rs.    9000Rs.   11:50(d)-15:30(a)"<<endl;
       cout<<"  BY Air   Guw.        045 I.A.       12000Rs.    9000Rs.   6:00(d)- 9:40(a)"<<endl;
       cout<<"  BY Train Guw.      Assam Express    2500Rs.     2000Rs.   08:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Guw.      Guwahati Mail    2500Rs.     2000Rs.   09:00(d)-16:30(a)"<<endl;
       cout<<"  By Road  Guw.         Bus            700Rs.      500Rs.   12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Guw.         Bus            700Rs.      500Rs.   14:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Guw          Ashoka                     5000Rs      3000Rs      "<<endl;
       cout<<"    5      Guw          Regency                    5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Guw          Kuber                      3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Guw          Nandan                     3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Guw          Home                       1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Guw          Corneto                    1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";

       atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 2:clrscr();
       gotoxy(25,1);cout<<" ARUNACHAL PRADESH";
       gotoxy(24,2);cout<<"-------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Itanagar-    -Bomdila- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Ita .      751 I.A.        11000Rs.       9000Rs.  07:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Bom.       752 I.A.        11000Rs.       9000Rs.  07:00(d)-10:40(a)"<<endl;
       cout<<"  BY Train Ita.   Arunachal Express    4500Rs.       2000Rs.  05:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Bom.    Bomdila Mail        4500Rs.       2000Rs.  04:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Ita.         Bus             800Rs.        600Rs.  04:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Bom.         Bus             800Rs.        600Rs.  02:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Ita            Ganga                    5000Rs      3000Rs      "<<endl;
       cout<<"    5      Bom            Himalaya                 5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Ita            Hornbill                 3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Bom            resort                   3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Ita            sarai                    1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Bom            star                     1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=11000;atr2=9000;ttr1=4500;ttr2=2000;rtr1=800;rtr2=600;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 3:clrscr();
       gotoxy(25,1);cout<<"      BIHAR";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Patna-    -Gaya- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Pat.      091 I.A.       8000Rs.       6000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Gay.      092 I.A.       8000Rs.       6000Rs.   5:00(d)- 5:40(a)"<<endl;
       cout<<"  BY Train Pat.     Patna Express   1200Rs.       1000Rs.  13:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Gay.     Gaya  Mail      1200Rs.       1000Rs.  14:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Pat.      Bus            300Rs.        200Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Gay.      Bus            300Rs.        200Rs.  14:00(d)-23:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Pat            Patliputra               5000Rs      3000Rs      "<<endl;
       cout<<"    5      Gay            Ashok                    5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Pat            Chaitanya                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Gay            Mayur                    3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Pat            satkar                   1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Gay            marwari                  1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 4:clrscr();
       gotoxy(25,1);cout<<"    WEST BENGAL";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Calcutta-    -Darjiling- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Cal.      451 I.A.     12000Rs.       10000Rs.  12:30(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Dar.      452 I.A.     12000Rs.       10000Rs.   6:50(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Cal.   Rajdhani Express  2000Rs.       1000Rs.  08:00(d)-19:00(a)"<<endl;
       cout<<"  By Train Dar.    kalka Mail       2000Rs.       1000Rs.  09:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  Cal.      Bus            800Rs.        500Rs.  05:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Dar.      Bus            800Rs.        500Rs.  06:00(d)-20:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Cal            Continental              4000Rs      3000Rs      "<<endl;
       cout<<"    5      Dar            Diplomat                 4000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Cal           geetanjali                3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Dar           parkview                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Cal           guesthouse                 800Rs.     500Rs.      "<<endl;
       cout<<"   normal  Dar           Paragon                    800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=12000;atr2=10000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
       fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
       opening2();
       break;

case 5:clrscr();
       gotoxy(25,1);cout<<"   UTTAR PRADESH";
       gotoxy(24,2);cout<<"-------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Lucknow-    -Kanpur- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Luc.      121 I.A.     10000Rs.       8000Rs.  12:30(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Kan.      122 I.A.     10000Rs.       8000Rs.   6:50(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Luc.   Shatabdi Express  2000Rs.       1000Rs.  13:00(d)-19:00(a)"<<endl;
       cout<<"  By Train Kan.   Frontier Mail     2000Rs.       1000Rs.  14:00(d)-19:30(a)"<<endl;
       cout<<"  By Road  Luc.      Bus            800Rs.        500Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Kan.      Bus            800Rs.        500Rs.  14:00(d)-20:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Luc            Shilton                  4000Rs      3000Rs      "<<endl;
       cout<<"    5      Kan            Plaza                    4000Rs.     3000Rs.     "<<endl; 
       cout<<"    3      Luc            Lindsay                  3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Kan            Minerva                  3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Luc            Fairlawn                  800Rs.     500Rs.      "<<endl;
       cout<<"   normal  Kan            Executive                 800Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
       fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
       opening2();
       break;
}
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY 
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SHOWS THE PLACES OF WEST INDIA
//**********************************************************
void travelagency::windia(int wdes)  //function to display west india information
{
switch(wdes)
{
case 1:clrscr();
       gotoxy(25,1);cout<<"     GUJARAT ";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Ahmedabad-    -Gandhinagar- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Ahm.        045 I.A.       12000Rs.       9000Rs.  13:50(d)-15:30(a)"<<endl;
       cout<<"  BY Air   Gan.        045 I.A.       12000Rs.       9000Rs.   8:00(d)- 9:40(a)"<<endl;
       cout<<"  BY Train Ahm.   Ahmedabad Express    2500Rs.       2000Rs.  11:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Gan.   Gujarat Mail         2500Rs.       2000Rs.  12:00(d)-16:30(a)"<<endl;
       cout<<"  By Road  Ahm.         Bus            700Rs.        500Rs.  09:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Gan.         Bus            700Rs.        500Rs.  10:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Ahm           Royal                     4000Rs      2000Rs      "<<endl;
       cout<<"    5      Gan          Kingfort                   4000Rs.     2000Rs.     "<<endl;
       cout<<"    3      Ahm          Kinshu                     2000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Gan          Rama                       2000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Ahm          best                       1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Gan          jesture                    1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";

       atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
       fst1=4000;fst2=2000;tst1=2000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 2:clrscr();
       gotoxy(25,1);cout<<"     RAJASTHAN";
       gotoxy(24,2);cout<<"-------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Jaipur-    -Jodhpur- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Jai.      351 I.A.         10000Rs.       8000Rs.  12:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Jod.      352 I.A.         10000Rs.       8000Rs.   7:00(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Jai.   Pinkcity Express    1500Rs.       1000Rs.  13:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Jod.    Avadh Mail         1500Rs.       1000Rs.  14:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Jai.      Bus               300Rs.        200Rs.  12:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Jod.      Bus               300Rs.        200Rs.  14:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Jai          Clarks                     5000Rs      3000Rs      "<<endl;
       cout<<"    5      Jod          Rajputana                  5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Jai          copperchimney              3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Jod          resort                     3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Jai          dholamaru                  1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Jod          Rajstar                    1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;
}
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT SHOWS THE PLACES OF CENTRAL INDIA
//**********************************************************
void travelagency::cindia(int cdes)   //function to display central india information
{
switch(cdes)
{
case 1:clrscr();
       gotoxy(25,1);cout<<"      ORISSA ";
       gotoxy(24,2);cout<<"------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Bhubaneshwar-    -Cuttack- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Bhub.       091 I.A.     13000Rs.       10000Rs.  13:50(d)-17:30(a)"<<endl;
       cout<<"  BY Air   Cutt.       092 I.A.     13000Rs.       10000Rs.   8:00(d)-11:40(a)"<<endl;
       cout<<"  BY Train Bhub.     Puri Express    2500Rs.       2000Rs.  04:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Cutt.     Mundu Mail      2500Rs.       2000Rs.  07:00(d)-16:30(a)"<<endl;
       cout<<"  By Road  Bhub .      Bus            700Rs.        500Rs.   03:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Cutt.       Bus            700Rs.        500Rs.   07:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Bhub         Janpath                    5000Rs      3000Rs      "<<endl;
       cout<<"    5      Cutt         Lingraj                    5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Bhub         Prachi                     3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Cutt         Keshari                    3000Rs.     1500Rs.     "<<endl;
       cout<<"   normal  Bhub         Anarkali                   1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Cutt         Pushpak                    1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";

       atr1=13000;atr2=10000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;

case 2:clrscr();
       gotoxy(25,1);cout<<"   MADHYA PRADESH";
       gotoxy(24,2);cout<<"--------------------";
       gotoxy(20,3);cout<<"Places To Visit::         -Bhopal-    -Gwalior- "<<endl;
       gotoxy(5,4);cout<<"Transportation Available::(from delhi)"<<endl;
       cout<<"   MODE    Place        NAME    Price:Executive   Economy   Timings          "<<endl;
       cout<<"  BY Air   Bhop.       061 I.A.     10000Rs.       8000Rs.  11:50(d)-13:30(a)"<<endl;
       cout<<"  BY Air   Gwal.       062 I.A.     10000Rs.       8000Rs.   6:00(d)- 7:40(a)"<<endl;
       cout<<"  BY Train Bhop.   Deccan Express    1500Rs.       1000Rs.  11:00(d)-18:00(a)"<<endl;
       cout<<"  By Train Gwal.    Gwalior Mail     1500Rs.       1000Rs.  07:00(d)-14:30(a)"<<endl;
       cout<<"  By Road  Bhop.       Bus            300Rs.        200Rs.  07:00(d)-20:00(a)"<<endl;
       cout<<"  By Road  Gwal.       Bus            300Rs.        200Rs.  08:00(d)-15:00(a)"<<endl;
       gotoxy(5,12);cout<<"Accomodation Available::"<<endl;
       cout<<"   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe   "<<endl;
       cout<<"    5      Bhop         taj                        5000Rs      3000Rs      "<<endl;
       cout<<"    5      Gwal         fortview                   5000Rs.     3000Rs.     "<<endl;
       cout<<"    3      Bhop         metro                      3000Rs.     1500Rs.     "<<endl;
       cout<<"    3      Gwal         president                  3000Rs.     1500Rs.     "<<endl; 
       cout<<"   normal  Bhop         shelter                    1000Rs.     500Rs.      "<<endl;
       cout<<"   normal  Gwal         safari                     1000Rs.     500Rs.      "<<endl;
       cout<<setw(10)<<"          NOTE::(The Tarrif does not include meals except breakfast)     ";
       atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
       fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
       opening2();
       break;
}
}
//**********************************************************
//	CLASS NAME    : TRAVELAGENCY
//	FUNCTION NAME : RESHO
//	DETAILS       : IT ASSIGNS THE PRICES TO PLACES
//**********************************************************
void travelagency::assignprice()  //function to assign price according to the choice of destination
{
clrscr();

int toasspri;
  gotoxy(20,2);cout<<"PLEASE CHOOSE YOUR DESTINATION..";
  gotoxy(5,5);cout<<"1:Kashmir or Jammu                        2:Chandigarh or Gurgaon";
  gotoxy(5,7);cout<<"3:Amritsar or Ludhiana                    4: Shimla or Manali";
  gotoxy(5,9);cout<<"5:Trivandrum or Kochi                    6: Chennai or Bangalore";
  gotoxy(5,11);cout<<"7:Hyderabad or Nagpur                    8: Mumbai or Pune ";
  gotoxy(5,13);cout<<"9:Port blair or Rangat                   10: Guwahati";
  gotoxy(5,15);cout<<"11:Itanagar or Bomdila                   12: Patna or Gaya      ";
  gotoxy(5,17);cout<<"13:Calcutta or Darjiling                 14: Lucknow or Kanpur   ";
  gotoxy(5,19);cout<<"15:Ahmedabad or Gandhinagar              16: Jaipur or Jodhpur  ";
  gotoxy(5,21);cout<<"17:Bhubneshwar or Cuttack                18: Bhopal or Gwalior ";
  gotoxy(5,23);cout<<"Enter (1-18) to Reserve ...";
  gotoxy(45,23);cin>>toasspri;

switch(toasspri)

{
 case 1:atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 2:atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 3:atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 4:atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	break;
 case 5:atr1=15000;atr2=12000;ttr1=3500;ttr2=2000;rtr1=1200;rtr2=700;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 6:atr1=9000;atr2=7000;ttr1=1200;ttr2=1000;rtr1=700;rtr2=500;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 7:atr1=9000;atr2=7000;ttr1=1200;ttr2=1000;rtr1=700;rtr2=500;
	fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	break;
 case 8:atr1=11000;atr2=9000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	fst1=5000;fst2=4000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	break;
 case 9:atr1=15000;atr2=12000;ttr1=2000;ttr2=1000;rtr1=0;rtr2=0;
	fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	break;
 case 10:atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 11:atr1=11000;atr2=9000;ttr1=4500;ttr2=2000;rtr1=800;rtr2=600;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 12:atr1=8000;atr2=6000;ttr1=1200;ttr2=1000;rtr1=300;rtr2=200;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 13:atr1=12000;atr2=10000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	 fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	 break;
 case 14:atr1=10000;atr2=8000;ttr1=2000;ttr2=1000;rtr1=800;rtr2=500;
	 fst1=4000;fst2=3000;tst1=3000;tst2=1500;nst1=800;nst2=500;
	 break;
 case 15:atr1=12000;atr2=9000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	 fst1=4000;fst2=2000;tst1=2000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 16:atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 17:atr1=13000;atr2=10000;ttr1=2500;ttr2=2000;rtr1=700;rtr2=500;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
 case 18:atr1=10000;atr2=8000;ttr1=1500;ttr2=1000;rtr1=300;rtr2=200;
	 fst1=5000;fst2=3000;tst1=3000;tst2=1500;nst1=1000;nst2=500;
	 break;
}
}

//**********************************************************
//	FUNCTION NAME : MAIN
//	DETAILS       : IT CALLS ALL THE  FUNCTIONS
//**********************************************************
void main()
{
clrscr();
startup();
cout.setf(ios::fixed,ios::floatfield);
cout.setf(ios::showpoint);
int opt;
while(opt!=5)
{
opt=opening1();

 switch(opt)
 {
 case 1:places();            //function call to view places
	break;
 case 2:                    //function call to reserve transport
	maketrfile();i++;
	break;
 case 3:                   //function call to reserve hotel
	makehofile();i++;
	break;
 case 4:clrscr();
	int search1;
	gotoxy(25,15);cout<<"Enter 1 or 2";
	gotoxy(25,17);cout<<"1: Hotel Reservation Records";
	gotoxy(25,19);cout<<"2: Transport Reservation Records";
	gotoxy(25,21);cout<<"??.....";cin>>search1;

	switch(search1)
	{
	case 1:user.viewhorec();       //function call for hotelrecords
	       break;
	case 2:user.viewtrrec();       //function call for transportrecords
	       break;
	}
	break;
 }

}
}

/*

		      OUTPUT  SCREENS ::
		    ---------------------


	START UP SCREEN :






			Welcome to the TRAVEL AGENCY






			  please wait    .......








      ..NEXT SCREEN.. 



		ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ
		    ‹‹‹‹‹‹‹ ‹‹‹‹‹‹ ‹‹‹‹‹‹ ‹    ‹ ‹‹‹‹‹‹ ‹
		       €    €    € €    € €    € €      €
		       €    €‹‹‹€  €‹‹‹‹€ €    € €‹‹‹   €
		       €    € €    €    €  €  €  €      €
		       €    €  €€  €    €   €€   €€€€€€ €€€€
				  ‹‹‹‹‹‹‹ ‹    ‹ ‹‹‹‹‹‹ ‹‹‹‹‹‹‹ ‹‹‹‹‹‹
				     €    €€   € €    €    €    €    €
				     €    € €  € €    €    €    €‹‹‹‹€
				     €    €  € € €    €    €    €    €
				  ‹‹‹€‹‹‹ €   €€ €‹‹‹‹€ ‹‹‹€‹‹‹ €    €
			     ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ







			press any key to continue...


	..MAIN MENU..
  Œ                                                                            Œ
  Œ                                                                            Œ
  Œ                                                                            Œ
  Œ                                                                            Œ
  Œ      Good morning!!!!!!......What would you like us to do for you          Œ
  Œ                                                                            Œ
  Œ                                                                            Œ
  Œ           1: View Tourist Places                                           Œ
  Œ                                                                            Œ
  Œ           2: Reserve Transportation                                        Œ
  Œ                                                                            Œ
  Œ           3: Reserve Accomodation                                          Œ
  Œ                                                                            Œ
  Œ           4: View Existing Bookings                                        Œ
  Œ                                                                            Œ
  Œ           5: Exit                                                          Œ
  Œ                                                                            Œ
  Œ                                                                            Œ
  Œ         Enter (1,2,3,4 or 5)....?                                          Œ
  Œ                                                                            Œ
  Œ                                                                            Œ
  Œ                                                                            Œ
  Œ                                                                            Œ
  Œ                                                                            Œ


	  ..ON CHOOSING 1..


		     Choose Destination




		  …ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ"
		  ∫      1.NORTH INDIA            ∫
		  ∫      2.SOUTH INDIA            ∫
		  ∫      3.EAST INDIA             ∫ 
		  ∫      4.WEST INDIA             ∫
		  ∫      5.CENTRAL INDIA          ∫
		  ∫      6.EXIT                   ∫
		  ∫   ??ENTER COICE>>.....?1      ∫
		  »ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ–








	  ..CHOOSE PLACE..






		     Where do u wanna go......




		  …ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ"
		  ∫      1.KERELA                 ∫
		  ∫      2.TAMIL NADU             ∫
		  ∫      3.ANDHRA PRADESH         ∫
		  ∫      4.MAHARASHTRA            ∫
		  ∫      5.ANDAMAN AND NICOBAR    ∫
		  ∫      6.EXIT                   ∫
		  ∫   ??ENTER COICE>>...... 4     ∫
		  »ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ–






	 ..ACCOMODATION AND TRANSPORT INFORMATION OF THE PLACE..


			    MAHARASTRA
		       ------------------
		   Places To Visit::         -Mumbai-    -Pune-
    Transportation Available::(from delhi)
   MODE    Place        NAME    Price:Executive   Economy   Timings
  BY Air   Mum.      351 I.A.     11000Rs.       9000Rs.  12:30(d)-13:30(a)
  BY Air   Pun.      352 I.A.     11000Rs.       9000Rs.   6:50(d)- 7:40(a)
  BY Train Mum.   Rajdhani Express 2000Rs.       1000Rs.  10:00(d)-19:00(a)
  By Train Pun.    Pune Mail       2000Rs.       1000Rs.  10:00(d)-19:30(a)
  By Road  Mum.      Bus            800Rs.        500Rs.  09:00(d)-20:00(a)
  By Road  Pun.      Bus            800Rs.        500Rs.  09:00(d)-20:00(a)
    Accomodation Available::
   Star    Place        NAME Of Hotel     Tariff:  Deluxe     Non-deluxe
    5      Mum            Centaur                  5000Rs      4000Rs
    5      Pun           Holiday inn               5000Rs.     4000Rs.
    3      Mum            Clarks                   3000Rs.     1500Rs.
    3      Pun           seaview                   3000Rs.     1500Rs.
   normal  Mum           guesthouse                800Rs.     500Rs.
   normal  Pun           niceview                  800Rs.     500Rs.
	  NOTE::(The Tarrif does not include meals except breakfast)
	 1: Reserve Transportation
	 2: Reserve Accomodation
	 3: Reserve Transportation and Accomodation
	 4: Exit  ???....



	 ..TRANSPORT RESERVATION PROCEDURE..


	      Please Enter Information For Transport Reservation

	      Please enter the choice of your mode of transportaion......

			1: by Air
			2: by Train
			3: by Road
			 ......














		   PLEASE CHOOSE YOUR DESTINATION..


    1:Kashmir or Jammu                        2:Chandigarh or Gurgaon

    3:Amritsar or Ludhiana                    4: Shimla or Manali

    5:Trivandrum or Kochi                    6: Chennai or Bangalore

    7:Hyderabad or Nagpur                    8: Mumbai or Pune

    9:Port blair or Rangat                   10: Guwahati

    11:Itanagar or Bomdila                   12: Patna or Gaya

    13:Calcutta or Darjiling                 14: Lucknow or Kanpur

    15:Ahmedabad or Gandhinagar              16: Jaipur or Jodhpur

    17:Bhubneshwar or Cuttack                18: Bhopal or Gwalior

    Enter (1-18) to Reserve ...             16




	      PLEASE FILL IN THE DETAILS ...


			TRANSPORT RESERVATION FORM


    Name:ankit

    Address:663 sector a pkt b and c vasant kunj newdelhi

    Destination:  jaipur     Mode of Transport:  air

    Type of Tickets to be Reserved

	 Executive:  1       Economy:  0





	 Is the information correct(y/n)??  y













		   Please wait while we make the Reservation

			€€€€€€€€€€














			Transport   Reservation
		       -----------------------

	      Name:ANKIT

	      Address:663 SECTOR A PKT B AND C VASANT KUNJ NEWDELHI

	      Mode of transportation:    air    Destination: JAIPUR

	      No. of EXECUTIVE class tickets reserved: 1

	      No. of ECONOMY   class tickets reserved: 0



	      Your Reservations have been done Please pay the Amount!!!

			Amount: Rs.10000.00





	  ..ACCOMMODATION RESERVATION PROCEDURE..


		   Please Enter Information For Hotel Reservation

		   Please enter the choice of your hotel......

			1: 5 Star
			2: 3 Star
			3: Normal
			 ......1














		   PLEASE CHOOSE YOUR DESTINATION..


    1:Kashmir or Jammu                        2:Chandigarh or Gurgaon

    3:Amritsar or Ludhiana                    4: Shimla or Manali

    5:Trivandrum or Kochi                    6: Chennai or Bangalore

    7:Hyderabad or Nagpur                    8: Mumbai or Pune

    9:Port blair or Rangat                   10: Guwahati

    11:Itanagar or Bomdila                   12: Patna or Gaya

    13:Calcutta or Darjiling                 14: Lucknow or Kanpur

    15:Ahmedabad or Gandhinagar              16: Jaipur or Jodhpur

    17:Bhubneshwar or Cuttack                18: Bhopal or Gwalior

    Enter (1-18) to Reserve ...             16








	      PLEASE FILL IN THE DETAILS ...


			HOTEL RESERVATION FORM


    Name:robion singh

    Address:420 mumbai

    Destination:  jaipur     Name of Hotel:  clarks

    No. of days to stay:  2

    Type of Rooms to be Reserved

	 Deluxe:     1       Non Deluxe:    0



	 Is the information correct(y/n)??  y











		   Please wait while we make the Reservation

			€€€€€€€€€€€€€€€€



















			Hotel     Reservation
		       -----------------------

	      Name:ROBION SINGH

	      Address:420 MUMBAI

	      Name of the hotel:  CLARKS , JAIPUR

	      No. of Days to stay: 2

	      No. of DELUXE rooms reserved: 1

	      No. of NON-DELUXE rooms reserved: 0

	      Your Reservations have been done Please pay the Amount!!!

			Amount: Rs.10000.00



	    ..VIEWING THE EXISTING RECORDS..



			Enter 1 or 2

			1: Hotel Reservation Records

			2: Transport Reservation Records

			??.....1





	     ..HOTEL RECORDS ..


		       HOTEL RESERVATION INFORMATION




			choose.....

			1: View hotel reservation records

			2: Delete a particular record

			3: Search for a record

			4: Edit a record

			5: Exit.....  1





	     ..VIEWING HOTEL RECORDS..



			Hotel     Reservation
		       -----------------------

	      Name:ROBION SINGH

	      Address:420 MUMBAI

	      Name of the hotel:  CLARKS , JAIPUR

	      No. of Days to stay: 2

	      No. of DELUXE rooms reserved: 1

	      No. of NON-DELUXE rooms reserved: 0

	      Your Reservations have been done Please pay the Amount!!!

			Amount: Rs.10000.00




	      ..DELETING A HOTEL RECORD..


		   Enter name to delete record for...

			     robion singh

			 ...Deleted...







		   Enter name to delete record for...

			     ankit

		       Record not found..






		 ..SEARCHING FOR A HOTEL RECORD..


		   Enter Name to search for..

			anky







			Hotel     Reservation
		       -----------------------

	      Name:ANKY

	      Address:DELHI

	      Name of the hotel:  KINSHU , AMRITSAR

	      No. of Days to stay: 2

	      No. of DELUXE rooms reserved: 1

	      No. of NON-DELUXE rooms reserved: 0

	      Your Reservations have been done Please pay the Amount!!!

			Amount: Rs.6000.00







		   Enter Name to search for..

			abc


			 No Record Exists









		 ..EDITING A HOTEL RECORD..



		   Enter Name to Edit Record for...

			anky








		   Please Enter Information For Hotel Reservation

		   Please enter the choice of your hotel......

			1: 5 Star
			2: 3 Star
			3: Normal
			 ......2







		   PLEASE CHOOSE YOUR DESTINATION..


    1:Kashmir or Jammu                        2:Chandigarh or Gurgaon

    3:Amritsar or Ludhiana                    4: Shimla or Manali

    5:Trivandrum or Kochi                    6: Chennai or Bangalore

    7:Hyderabad or Nagpur                    8: Mumbai or Pune

    9:Port blair or Rangat                   10: Guwahati

    11:Itanagar or Bomdila                   12: Patna or Gaya

    13:Calcutta or Darjiling                 14: Lucknow or Kanpur

    15:Ahmedabad or Gandhinagar              16: Jaipur or Jodhpur

    17:Bhubneshwar or Cuttack                18: Bhopal or Gwalior

    Enter (1-18) to Reserve ...             6



	      PLEASE FILL IN THE DETAILS ...


			HOTEL RESERVATION FORM


    Name:anky

    Address:delhi

    Destination:  kashmir    Name of Hotel:  kashmir

    No. of days to stay:  3

    Type of Rooms to be Reserved

	 Deluxe:     1       Non Deluxe:    0



	 Is the information correct(y/n)??  y







			Hotel     Reservation
		       -----------------------

	      Name:ANKY

	      Address:DELHI

	      Name of the hotel:  KASHMIR , KASHMIR

	      No. of Days to stay: 3

	      No. of DELUXE rooms reserved: 1

	      No. of NON-DELUXE rooms reserved: 0

	      Your Reservations have been done Please pay the Amount!!!

			Amount: Rs.9000.00





	    .. TRANSPORT RECORDS..

		       TRANSPORT RESERVATION INFORMATION...




			choose.....

			1: View transport reservation records

			2: Delete a particular record

			3: Search for a record

			4: Edit a record

			5: Exit...     1







	      ..VIEWING TRANSPORT RECORDS..

			Transport   Reservation
		       -----------------------

	      Name:ANKIT

	      Address:DELHI

	      Mode of transportation:    air   Destination: JAIPUR

	      No. of EXECUTIVE class tickets reserved: 1

	      No. of ECONOMY   class tickets reserved: 0



	      Your Reservations have been done Please pay the Amount!!!

			Amount: Rs.10000.00





		  ..SEARCHING A TRANSPORT RECORD..

		   Enter Name to search for..

			ankit







			Transport   Reservation
		       -----------------------

	      Name:ANKIT

	      Address:DELHI

	      Mode of transportation:    air  Destination: JAIPUR

	      No. of EXECUTIVE class tickets reserved: 1

	      No. of ECONOMY   class tickets reserved: 0



	      Your Reservations have been done Please pay the Amount!!!

			Amount: Rs.10000.00




		  ..EDITING A TRANSPORT RECORD..

		   Enter Name to Edit Record for...

			ankit





		   Please Enter Information For Transport Reservation

		   Please enter the choice of your mode of transportaion......

			1: by Air
			2: by Train
			3: by Road
			 ......3






		       PLEASE FILL IN THE DETAILS ...


			TRANSPORT RESERVATION FORM


    Name:ankit

    Address:delhi

    Destination:  gurgaon    Mode of Transport:  bus

    Type of Tickets to be Reserved

	 Executive:  1       Economy:  0





	 Is the information correct(y/n)??  y







			Transport   Reservation
		       -----------------------

	      Name:ANKIT

	      Address:DELHI

	      Mode of transportation:    bus   Destination: GURGAON

	      No. of EXECUTIVE class tickets reserved: 1

	      No. of ECONOMY   class tickets reserved: 0



	      Your Reservations have been done Please pay the Amount!!!

			Amount: Rs.300.00




		  ..DELETING A TRANSPORT RECORD..


		   Enter name to delete record for...

			     ankit

			 ... Deleted...
 */