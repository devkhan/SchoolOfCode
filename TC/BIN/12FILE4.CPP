class admission
{
	private:

	int ad_no;
	char name[20],classs;
	float fees;

	public:

	void read_data();
	void display();
	void draw_nos();
};

void admission::read_data()
{
	cout<<"\n\tEnter admission number (10 - 2000) : ";
	cin>>ad_no;
	cout<<"\n\tEnter name : ";
	gets(name);
	cout<<"\n\tEnter class : ";
	cin>>classs;
	cout<<"\n\tEnter fees : ";
	cin>>fees;
}

void admission::display()
{
	cout<<"\n\tAdmission Number = "<<ad_no;
	cout<<"\n\tName = "<<name;
	cout<<"\n\tClass = "<<classs;
	cout<<"\n\tFees = "<<fees;
}

void admission::draw_nos()
{
	int no1,no2;
	randomize();
	no1=random(1991)+10;
	no2=random(1991)+10;
	if(no1==ad_no||no2==ad_no)
	display();
}