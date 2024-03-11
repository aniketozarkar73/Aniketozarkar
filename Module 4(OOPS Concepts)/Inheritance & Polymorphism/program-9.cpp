//9. Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include<iostream>
using namespace std;
class addition
{
	int array[3];
	int i;
	public:
		void get()
		{
			cout<<"\nEnter 3 values :";
			for(i=0;i<3;i++)
			{
				cin>>array[i];
			}
		}
		void display()
		{
			cout<<"\nvalues are :"<<endl;
			for(i=0;i<3;i++)
			{
				cout<<array[i]<<"\t";
			}
		}
		addition operator+ (addition obj)
		{
			int result[3];
			int i;
			for(i=0;i<3;i++)
			{
				result[i]=array[i]+obj.array[i];
			}
			cout<<"\nresult array is ";
			for(i=0;i<3;i++)
			{
				cout<<" "<<result[i];
			}
		}
};
main()
{
	addition obj1,obj2;
	cout<<"-------obj1--------";
	obj1.get();
	obj1.display();
	cout<<"\n-------obj2------";
	obj2.get();
	obj2.display();
	obj1+obj2;
} 

