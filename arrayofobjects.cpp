#include<iostream>
#include<iomanip>
using namespace std;
class student
{
	private:
		int roll;
		char name[20];
		float m1,m2,m3,m4,m5,total,per;
	public:
		void Input();
		void Display();
		void Calavg();
		void Calculate();		
};
void student :: Input()
   {
	cout<<"Enter roll no: "<<endl;
	cin>>roll;
	cout<<"Enter name :"<<endl;
	cin>>name;
	cout<<"Enter marks of 5 subjects  :"<<endl;
	cin>>m1>>m2>>m3>>m4>>m5;
 	}
void student :: Display()
{
	cout<<"Roll no:"<<setw(8)<<roll<<endl;
	cout<<"Name:"<<setw(8)<<name<<endl;
	cout<<"Marks"<<setw(8)<<m1<<setw(8)<<m2<<setw(8)<<m3<<setw(8)<<m4<<setw(8)<<m5<<endl;
}
void student :: Calculate()
{
	total=m1+m2+m3+m4+m5;
	per=total/5;
	cout<<"Total="<<total<<endl;;
	cout<<"Percentage="<<per<<endl;
}
void student :: Calavg()
{
	float avg;
	avg=(m1+m2+m3+m4+m5)/5;
	cout<<"Average="<<avg<<endl;
	}
int main()
{
	const int size=5;
	student s[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter data for student"<<(i+1)<<endl;
		s[i].Input();
		cout<<"\nStudent"<<(i+1)<<endl;
		s[i].Display();
		s[i].Calculate();
		s[i].Calavg();
	}
 
	
	return 0;

}


