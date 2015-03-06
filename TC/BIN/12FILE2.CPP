class bank
{
	private:

	char name[20],type_of_account;
	long account_no;
	float balance;

	public:

	bank()
	{
		strcpy(name,"NULL");
		account_no=100001;
		type_of_account='S';
		balance=1000;
	}
	void newaccount();
	void deposit();
	void withdrawal();
	void display();
};

void bank::newaccount()
{
	cout<<"\n\tEnter name of the account holder : ";
	gets(name);
	cout<<"\n\tEnter account number : ";
	cin>>acount_no;
	cout<<"\n\tEnter type of account : ";
	cin>>type_of_account;
	cout<<"\n\tEnter balance(min. 1000 for savings, 3000 for current a/c): ";
	cin>>balance;
}

void bank::deposit()
{
	float temp;
	cout<<"\n\tEnter amount to be deposited : ";
	cin>>temp;
	balance+=temp;
}

void bank::withdrawal()
{
	float temp;
	cout<<"\n\tEnter amount to be withdrawn : ";
	cin>>temp;
	if(type_of_account=='S'&&balance>=1000)
	balance-=temp;
	else
	cout<<"\n\tBalance less than 1000,hence cannot withdraw!!!";
	if(type_of_account=='C'&&balance>=3000)
	balance-=temp;
	else
	cout<<"\n\tBalance less than 3000,hence cannot withdraw!!!";
}

void bank::display()
{
	cout<<"\n\tName of the account holder = "<<name;
	cout<<"\n\tType fo account = "<<type_of_account;
	cout<<"\n\tAccount Number = "<<account_no;
	cout<<"\n\tBalance = "<<balance;
}