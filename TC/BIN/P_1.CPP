class Tour
{
	private:
		long tcode;
		int adults,children,distance;
		float totalfare;
		void assignfare();
	public:
		Tour();
		void entertour();
		void showtour();
}

void Tour::assignfare()
{
	if (distance<1500)
	totalfare = 500.0-((25.0/100.0)*500.0);
	else
	totalfare = 500;
}


