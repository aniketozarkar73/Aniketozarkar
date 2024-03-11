//1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best 
//performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include<iostream>
using namespace std;
class Cricketer
{
	 protected:
	 	string name;
	 	int match;
	 	
	 	void input_matches()
	 	{
	 		cout<<"Enter the number of matches played :";
	 		cin>>match;
	 		
		}	 	
	 	
	
};
class Batsman : public Cricketer
{
	int totalruns;
	double averageruns;
	int bestperformance;
	
	public:
		void get_data()
		{
			cout<<"Enter the Total runs :";
			cin>>totalruns;
			
			cout<<"Enter Best performance :";
			cin>>bestperformance;
			
		}
		void calculate_average_runs()
		{
			averageruns=totalruns/match;
		}
		void display_data()
		{
			cout<<"\nBatsman";
			
			cout<<"\nTotal runs"<<totalruns;
			
			cout<<"\nBest performance"<<bestperformance;
			
		}
	
	
	
};
main()
{
	Batsman b;
	b.get_data();
	b.calculate_average_runs();
	b.display_data();
	
}
