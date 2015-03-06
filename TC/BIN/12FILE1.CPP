class tour
{
	private:

	int tcode,children,adults,distance;
	float totalfare;
	void assignfare()
	{
		if(distance>=1500)
		totalfare = (500*adults)+(50*children);
		else
		totalfare = (375*adults)+(50*children);
	}

	public:

	tour() { tcode=0; adults=0; children=0; distance=0; totalfare=0; }
	void entertour();
	void showtour();
};

void tour::entertour()
{
	cout<<"\n\tEnter tour code : ";
	cin>>tcode;
	cout<<"\n\tEnter number of adults : ";
	cin>>adults;
	cout<<"\n\tEnter number of children : ";
	cin>>children;
	cout<<"\n\tEnter distance : ";
	cin>>distance;
	assignfare();
}

void tour::showtour()
{
	cout<<"\n\tTravel code = "<<tcode;
	cout<<"\n\tNumber of adults = "<<adults;
	cout<<"\n\tNumber of children = "<<children;
	cout<<"\n\tDistance = "<<distance;
	cout<<"\n\tTotal fare = "<<totalfare;
}