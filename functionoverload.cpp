#include<iostream>
#include<iomanip>
using namespace std;

class dist{
	int feet,inches;
	public:
	void getData()
	{
		cout<<"Enter distance in feet and inches:"<<endl;
		cin>>feet>>inches;
	}
	void display(){
		cout<<feet<<"feet"<<setw(4)<<inches<<"inches"<<endl<<endl;
	}
	dist operator +(dist d)	
	{
	dist x;
	x.inches=inches+d.inches;
	x.feet=x.inches/12;
	x.inches=x.inches%12;
	x.feet=feet+x.feet+d.feet;
	return x;
	}
friend dist operator +(dist d);		
};
	dist operator +(dist d)	
	{
	dist x;
	x.inches=inches+d.inches;
	x.feet=x.inches/12;
	x.inches=x.inches%12;
	x.feet=feet+x.feet+d.feet;
	return x;
	}


int main()
{
	dist d1,d2,d3,d4,d5,d6;
	cout<<"For first distance:"<<endl;
	d1.getData();
	d1.display();
	cout<<"For second distance:"<<endl;
	d2.getData();
	d2.display();
	d3=d1+d2;
	cout<<"After addition"<<endl;
	d3.display();
	cout<<"For third distance:"<<endl;
	d1.getData();
	d1.display();
	cout<<"For fourth distance:"<<endl;
	d2.getData();
	d2.display();
	d6=d4+d5;
	cout<<"After addition"<<endl;
	d3.display();
	
	
}
