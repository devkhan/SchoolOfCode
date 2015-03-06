//Program to store local area's information.


#include<iostream.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>

void main_menu();
void find();
void ss_no();
void sname();
void sllnum();
void add();
void edit();
void database();
void check();
void acces();

fstream file("Database.dat",ios::in|ios::out|ios::binary|ios::app);
//file.open("Database.dat";ios::in|ios::out|ios::binary|ios::app);

/*void accces()
{
   char password[20];
   start:
	cout<<"\n\n\n\n\t\t\t^^^^^WELCOME^^^^^";
   cout<<"\n\n\t\tEnter password : ";
   gets(password);
   if(!strcmp(password,"DAARK"))
   {
   	cout<<"\n\t\tAccess Granted!!!\n\n\tPress any to continue.....";
      getch();
      main_menu();
   }
	else
   {
   	cout<<"\n\t\t#####Wrong Password#####\n\n\tPress any key to continue : ";
      getch();
      goto start;
   }
} */
void check()
{
	if(!file)
   {
   	cout<<"\n\tUnable to open file!!!!!";
      cout<<"\n\tPress any key go to main menu.....";
      getch();
      main_menu();
   }
}

class house
{
	private :

		char bck;
		int h_no, age, hcode;
      float area;
		char name[20];
		long ll;

   public :

   	void read();
      void show();
      void modify();
      long ret_ll();
      int ret_code();
      void ret_name(char []);
}obr, obw;

void house::read()
{
   cout<<"\n\tEnter serial code : ";
   cin>>hcode;
	cout<<"\n\tEnter block : ";
   cin>>bck;
   cout<<"\n\tEnter house number : ";
   cin>>h_no;
   cout<<"\n\tEnter name of the owner : ";
   gets(name);
   cout<<"\n\tEnter age of the owner : ";
   cin>>age;
   cout<<"\n\tEnter area : ";
   cin>>area;
   cout<<"\n\tEnter landline phone no. : ";
   cin>>ll;
}

void house::show()
{
	cout<<"\n\tSerial code : "<<hcode;
   cout<<"\n\tBlock : "<<bck;
   cout<<"\n\tHouse number : "<<h_no;
   cout<<"\n\tName of the owner : "<<name;
   cout<<"\n\tAge of the owner : "<<age;
   cout<<"\n\tArea : "<<area;
   cout<<"\n\tLandline No. : "<<ll;
}

void house::modify()
{
   int ch;
   cout<<"\n\tEnter detail to be modified : ";
   cout<<"\n\t1. Serial code."<<"\n\t2. Block"<<"\n\t3. House No."<<"\n\t4. Name"<<"\n\t5. Area"<<"\n\t5. Age"<<"\n\t6. Landline no.";
   cin>>ch;
   switch(ch)
   {
   	case 1 : cout<<"\n\tEnter new serial code : ";
      			cin>>hcode;
               break;
      case 2 : cout<<"\n\tEnter new block : ";
      			cin>>bck;
               break;
      case 3 : cout<<"\n\tEnter new house no. : ";
      			cin>>h_no;
               break;
   	case 4 : cout<<"\n\tEnter new name : ";
      			gets(name);
               break;
      case 5 : cout<<"\n\tEnter new area : ";
      			cin>>area;
               break;
		case 6 : cout<<"\n\tEnter new age : ";
      			cin>>age;
               break;
      case 7 : cout<<"\n\tEnter new landline no. : ";
      			cin>>ll;
               break;
      default: cout<<"\n\t~~~~~INVALID CHOICE~~~~~";
   }
   cout<<"\n\tRecord modified.";
   cout<<"\n\tPress any key to go to main menu.....";
   getch();
   main_menu();
}


long house::ret_ll()
{	return ll ;	}

int house::ret_code()
{	return hcode ;	}

void house::ret_name(char x[])
{	strcpy(x,name);	}

/*int h_no1,h_area1,age1;
long ll1;
char bck1,name1[25]; */
/*
street_info d[30]={{'A',93,"Apurva Khandelwal   ",17,40,22174439},
		   {'B',67,"Anita Khandelwal	",43,42,23702371},
		   {'C',65,"Rajender Khandelwal ",45,41,22974439},
		   {'D',95,"Devesh Khandelwal	",15,33,22000022},
		   {'E',94,"Aditya Kumar	",16,10,22010122},
		   {'F',94,"Akshat Bhardwaj	",16,16,22020222},
		   {'G',94,"Ayushi Arora	",16,35,22030322},
		   {'H',94,"Divye Gupta		",16,15,22040422},
		   {'I',94,"Gaurav Chauhan	",16,18,22060622},
		   {'J',94,"Gita Gupta		",16,20,22070722},
		   {'K',94,"Kriti Srivastava	",16,23,22080822},
		   {'L',94,"Manali Gurani	",16,17,22090922},
		   {'M',94,"Nishant Singh	",16,10,22101022},
		   {'N',94,"       		",16,10,22111122},
		   {'O',94,"Sandipta Saha	",16,23,22121222},
		   {'P',94,"Shivansh Sabnani	",16,17,22131322},
		   {'Q',94,"Vivek Panchal	",16,10,22141422},
		   {'R',94,"Vivek Rajput	",16,10,22151522},
		   {'S',94,"Yamank Singh	",16,10,22161622},
		   {'T',94,"Surbhi Shauran	",16,20,22525222},
		   {bck1,h_no1,name1[25],age1,h_area1,ll1}};

int list_counter = 20; */

void main_menu()
{
	int choice;
   clrscr();
	cout<<"\n\n\n\n\t\t\tLOCAL AREA INFORMATION MENU";
	cout<<"\n\n\t\t\t1.) Find a person's info.";
	cout<<"\n\t\t\t2.) Add a new person's info.";
	cout<<"\n\t\t\t3.) Edit info. of a person.";
	cout<<"\n\t\t\t4.) See whole database.";
	cout<<"\n\t\t\t5.) EXIT.";
	cout<<"\n\n\n\t\t\tEnter your choice : ";
	cin>>choice;
   file.seekg(0);
   file.seekp(0,ios::end );
	switch (choice)
	{

		case 1 : find();
			 break ;

		case 2 : add();
			 break;

		case 3 : edit();
			 break ;

		case 4 : database();
			 break ;

		case 5 : exit(0);

		default: cout<<"\n\n\n\t\t\t^^^^^INVALID CHOICE^^^^^";

	}
}

void find()
{
	clrscr();
	int choice1;
	cout<<"\n\t\tSEARCHING MENU : ";
	cout<<"\n\n\t\tFIND BY:";
	cout<<"\n\n\t\t1.) Serial Code.";
	cout<<"\n\t\t2.) Name of house owner.";
	cout<<"\n\t\t3.) Landline Number.";
	cout<<"\n\n\t\tEnter your choice : ";
	cin>>choice1;
	switch (choice1)
	{

		case 1 : ss_no();
			 		break ;

		case 2 : sname();
			 		break ;

		case 3 : sllnum();
			 		break ;

		default: cout<<"\n\n\t\t%%%%%INVALID CHOICE%%%%%";

	}
	getch();
}

void sname()
{
	clrscr();
   char xname[20],choice4,hold[20];
	int flag=0;
	contd3 :
	cout<<"\n\n\tEnter full name of the person to find(starting letter capital) : ";
	gets(xname);
   file.seekg(0);
   check();
   while(file)
   {
   	file.read((char*)&obr, sizeof(obr));
      obr.ret_name(hold);
      if(!strcmp(hold,xname))
      {
      	cout<<"\n\tName found in database, details as per below : ";
         obr.show();
         getch();
         flag=1;
         break;
      }
   }
   if(flag==0)
   {
   	cout<<"\n\tName not found in database!!!!!";
      cout<<"\n\tWant to search again?";
      cin>>choice4;
   }
   if(choice4=='y'||choice4=='Y')
   	goto contd3;
   else
   	main_menu();


   /*
	for (i=0;i<::list_counter;i++)
	{
		if (!strcmp(xname,d[i].name))
		{
			flag=1;
			break ;
		}
	}
	if (flag==0)
	{
		cout<<"\n\n\tNo one found in the database with the given name!!!!!";
		cout<<"\n\n\tWant to continue(y or n) ? ";
		cin>>choice4;
		if(choice4=='y'||choice4=='Y')
			goto contd3;
		if(choice4=='n'||choice4=='N')
		{
			cout<<"\n\n\tPress any key continue to main menu.....";
			getch();
			main_menu();
		}
	}
	else
	{
		cout<<"\n\n\tName found in the database!!!!!";
		cout<<"\n\n\tDetails:: ";
		cout<<"\n\n\tSerial Number : "<<i+1;
		cout<<"\n\n\tName : "<<xname;
		cout<<"\n\n\tBlock and house number : "<<d[i].bck<<"-"<<d[i].h_no;
		cout<<"\n\n\tAge of the owner : "<<d[i].age;
		cout<<"\n\n\tArea of the house : "<<d[i].h_area;
		cout<<"\n\n\tHouse's landline number : "<<d[i].ll;
		cout<<"\n\n\tPress any key to continue to main menu.....";
		getch();
		clrscr();
		main_menu();
	}
   */
}

void ss_no()
{
	clrscr();
   file.seekg(0,ios::beg);
	int sno,flag=0;
   char ch='Y';
   while(ch=='y'||ch=='Y')
   {
   	cout<<"\n\n\tEnter the serial code to search for : ";
   	cin>>sno;
   	file.seekg(0,ios::beg);
   	check();
   	while(file)
   	{
   		file.read((char*)&obr, sizeof(obr));
      	if(sno==obr.ret_code())
      	{
      		cout<<"\n\tMatch found, details as per below : \n";
         	obr.show();
         	flag=1;
         	break;
      	}
		}
   	if(flag==0)
   	{
   		cout<<"\n\n\tMatch not found in database!!!!!";
      }
      cout<<"\n\n\tWant to retry ?";
      cin>>ch;
   }
   cout<<"\n\n\tPress any key to go to main menu.....";
   getch();
   main_menu();
   /*
   cout<<"\n\n\t\tEnter serial code (1-"<<::list_counter+1<<") : ";
	cin>>sno;
	cout<<"\n\n\t\tName : "<<d[--sno].name;
	cout<<"\n\n\t\tHouse code : "<<d[sno].bck<<"-"<<d[sno].h_no;
	cout<<"\n\n\t\tAge of the owner : "<<d[sno].age;
	cout<<"\n\n\t\tArea of the house : "<<d[sno].h_area;
	cout<<"\n\n\t\tLandline number : "<<d[sno].ll;
	cout<<"\n\n\t\tPress any key to continue to main menu .....";
   */
   /*
	getch();
	clrscr();
	main_menu();
   */
}

void sllnum()
{
	clrscr();
	long llnum;
	int flag;
   char ch='y';
   while(ch=='y'||ch=='Y')
   {
      flag=0;
   	cout<<"\n\n\tEnter landline number of the house (8-digit number) : ";
		cin>>llnum;
      file.seekg(0,ios::beg);
   	check();
   	while(file)
      {
      	file.read((char*)&obr, sizeof(obr));
         if(llnum==obr.ret_ll())
         {
         	cout<<"\n\tMatch found, details as per below : \n";
            obr.show();
            flag==1;
            break;
         }
      }
      if(flag==0)
   	{
   		cout<<"\n\n\tMatch not found in database!!!!!";
      }
      cout<<"\n\n\tWant to retry ?";
      cin>>ch;
   }
   cout<<"\n\n\tPress any key to go to main menu.....";
   getch();
   main_menu();



   /*
	for (i=0;i<::list_counter;i++)
	{
		if (llnum==d[i].ll)
		{
			flag=1;
			break ;
		}
	}
	if (!flag)
	{
		cout<<"\n\n\tNo number matched in the database with the given number!!!!!!";
		cout<<"\n\n\tPress any key to skip to main menu.....";
		getch();
		clrscr();
		main_menu();
	}
	else
	{
		cout<<"\n\n\tNumber Matched!!!!!";
		cout<<"\n\n\tDetails :- ";
		cout<<"\n\n\tSerial Number : "<<1+i;
		cout<<"\n\n\tName of the owner : "<<d[i].name;
		cout<<"\n\n\tHouse Code : "<<d[i].bck<<"-"<<d[i].h_no;
		cout<<"\n\n\tArea of the house : "<<d[i].h_area;
		cout<<"\n\n\tLandline number of the house : "<<d[i].ll;
		cout<<"\n\n\tPress any key to go to main menu.....";
		getch();
		clrscr();
		main_menu();
	}
   */
}



void add()
{
	clrscr();
   char ch='y';
   while(ch=='y'||ch=='Y')
   {
      file.seekp(0,ios::end);
      check();
   	cout<<"\n\tADDING MENU : ";
      obw.read();
      file.write((char*)&obw, sizeof(obw));
      cout<<"\n\n\tData written sucessfully.";
      cout<<"\n\n\tWant to add more : ";
      cin>>ch;
   }
   cout<<"\n\n\tPress any key to continue to main menu.....";
   getch();
   main_menu();
}

	/*
	char choice2,choice3,name2[25],bck2;
	int h_no2,h_area2,age2;
	long ll2;
	addmore :
	cout<<"\n\n\t\t\tADDING MENU";
	cout<<"\n\n\t\tSerial Number : \n\n\t\t"<<++::list_counter<<".)";
	cout<<" Enter full name of the owner : ";
	gets(name2);
	d[::list_counter].name[25]=name2[25];
	cout<<"\n\t\t   Enter block of the house : ";
	cin>>bck2;
	//static d[::list_counter].bck=bck2;
	cout<<"\n\t\t   Enter house number : ";
	cin>>h_no2;
	//static d[::list_counter].h_no=h_no2;
	cout<<"\n\t\t   Enter age of the house owner : ";
	cin>>age2;
	//static d[::list_counter].age=age2;
	cout<<"\n\t\t   Enter area of the house : ";
	cin>>h_area2;
	//static d[::list_counter].h_area=h_area2;
	cout<<"\n\t\t   Enter landline phone number : ";
	cin>>ll2;
	//static d[::list_counter].ll=ll2;
	//d[::list_counter]={(bck2),(h_no2),(name2[25]),(age2),(h_area2),(ll2)};
	cout<<"\n\n\t\t*****NEW ENTRY ADDED SUCESSFULLY*****";
	getch();
	contd:
	cout<<"\n\n\t\tWant to add more(Y/N) : ";
	cin>>choice2;
	if (choice2=='Y'||choice2=='y')
	goto addmore;
	else if (choice2!='n'&&choice2!='N')
	     {
		cout<<"\n\n\t\t#####INVALID CHOICE#####\n\n\t\tEnter y or n.";
		goto contd;
	     }
	     else
	     {
		contd2:
		cout<<"\n\n\t\tWant to continue to main menu (Y or N) : ";
		cin>> choice3;
		if (choice3=='y'||choice3=='Y')
		main_menu();
		else if (choice3=='N'||choice3=='n')
		     exit(1);
		     else
		     {
			cout<<"\n\n\t\t#####INVALID CHOICE#####";
			goto contd2;
		     }
	     }
}
*/

void edit()
{
	clrscr();
   int code, pos, flag=0;
   cout<<"\n\tEDITING MENU : ";
   cout<<"\n\n\tEnter serial code of which the detail is to be modified : ";
   cin>>code;
   file.seekg(0);
   check();
   while(file)
   {
      pos=file.tellg();
   	file.read((char*)&obr, sizeof(obr));
      obw=obr;
      if(code==obw.ret_code())
      {
      	flag=1;
         break;
      }
   }
   if(flag==0)
   	cout<<"\n\n\tRecord not found!!!!";
   else
   {
   	obw.modify();
      file.seekp(pos);
      file.write((char*)&obw, sizeof(obw));
      cout<<"\n\n\tRecord updated.";
   }
   cout<<"\n\n\tPress any key to continue to the main menu.....";
   getch();
   main_menu();
}





   /*
	int sno1;//,age1,h_no1,h_area1;
	char choice5;//,bck1,name1[25];
	//long ll1;
	cout<<"\n\n\t\t&&&&&-EDITING MENU-&&&&&";
	cout<<"\n\n\t\tEnter the serial number of which the data has to be edited : ";
	cin>>sno1;
	cout<<"\n\n\t\t(N=Name, A=Age, B=Block, H=House No., R=Area, L=Landline No.)";
	cout<<"\n\n\t\tEnter the info to be edited : ";
	cin>>choice5;
	switch (choice5)
	{

		case 'A' :

		case 'a' : cout<<"\n\n\t\tEnter age : ";
			   cin>>::age1;
			   d[sno1].age=::age1;
			   break ;

		case 'B' :

		case 'b' : cout<<"\n\n\t\tEnter block : ";
			   cin>>::bck1;
			   d[sno1].bck=::bck1;
			   break ;

		case 'N' :

		case 'n' : cout<<"\n\n\t\tEnter name : ";
			   gets(::name1);
			   d[sno1].name[25]=::name1[25];
			   break ;

		case 'H' :

		case 'h' : cout<<"\n\n\t\tEnter house number : ";
			   cin>>::h_no1;
			   d[sno1].h_no=::h_no1;
			   break ;

		case 'R' :

		case 'r' : cout<<"\n\n\t\tEnter area of the house : ";
			   cin>>::h_area1;
			   d[sno1].h_area=::h_area1;
			   break ;

		case 'L' :

		case 'l' : cout<<"\n\n\t\tEnter landline number : ";
			   cin>>::ll1;
			   d[sno1].ll=::ll1;
			   break ;

		default  : cout<<"\n\n\t\t$$$$$INVALID CHOICE$$$$$";
			   cout<<"\n\n\t\tPress any key to continue to main menu.....";
			   getch();
			   clrscr();
			   main_menu();

	}
	cout<<"\n\n\t+++++INFORMATION EDITED SUCESSFULLY+++++";
	cout<<"\n\n\tPress any key to continue to main menu.....";

	getch();
	main_menu();

}  */

void database()
{
	clrscr();
   cout<<"\n\n\t\t\t~~~~~DATABASE~~~~~"<<endl;
   /*
	cout<<"\n\nS.No.      NAME	  	    AGE	  ADDRESS   AREA    LANDLINE";
	for (int i=0;i<::list_counter;i++)
	{
		cout<<endl<<i+1<<".) "<<d[i].name<<"    "<<d[i].age<<"     "<<d[i].bck<<"-"<<d[i].h_no<<"      "<<d[i].h_area<<"     "<<d[i].ll;
	}
   */
   file.seekg(0);
   check();
   while(file)
   {
   	file.read((char*)&obr, sizeof(obr));
      obr.show();
   }
	cout<<"\n\n\t\tPress any key to go to main menu.....";
	getch();
	main_menu();
}

void main()
{
	clrscr();
	main_menu();
	getch();
}