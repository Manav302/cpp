#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class person
{
	public: string name;
			string mob_no;
			string email_id;
};

class student : public person
{
	public: string roll_no;
	public:
			void get_data()
			{
				cout<<"Enter Student Name"<<endl;
				cin>>name;
				cout<<"Enter Student Roll No:"<<endl;
				cin>>roll_no;
				cout<<"Enter Student Mobile No: "<<endl;
				cin>>mob_no;
				cout<<"Enter Student Email_id:"<<endl;
				cin>>email_id;
			
			}
			void display()
			{
				cout<<endl;
				cout<<"_____________________________Student Information________________________________"<<endl;
				cout<<name<<setw(15)<<roll_no<<setw(15)<<mob_no<<setw(15)<<email_id<<endl;
			}
};

class faculty : public person
{
	public : int emp_id;
			 string subject;
			 int salary;
	public : 
			void get_data()
			{
				cout<<"Enter faculty Name:"<<endl;
				cin>>name;
				cout<<"Enter faculty Id:"<<endl;
				cin>>emp_id;
				cout<<"Enter faculty Subject:"<<endl;
				cin>>subject;
				cout<<"Enter faculty Salary:"<<endl;
				cin>>salary;
				cout<<"Enter faculty Mobile No:"<<endl;
				cin>>mob_no;
				cout<<"Enter faculty Email_id:"<<endl;
				cin>>email_id;
			}
			void display()
			{
				cout<<"_____________________________Falculty Information________________________________"<<endl;
				cout<<name<<setw(50)<<emp_id<<setw(20)<<mob_no<<setw(20)<<salary<<setw(30)<<email_id<<endl;
			}
};

int main()
{
	student s;
	s.get_data();
	s.display();
	
	faculty f;
	f.get_data();
	f.display();
	return 0;
}
