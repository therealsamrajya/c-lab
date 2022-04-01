#include<iostream>
using namespace std;
class person
{
	protected:
		int age;
		char name[20];
	public:
		void readage()
		{
		
		cout<<"enter age";
		cin>>age;
}
void readname()
{
	cout<<"enter your name";
	cin>>name;
}
void display()
{
	cout<<"name="<<name<<endl<<"age="<<age<<endl;
	
}
};
class student:public person
{
	int serial_no,percentage;
	public:
	void readserial_no()
	{
		cout<<"enter serial number ";
		cin>>serial_no;
	}
	void readpercentage()
	{
		cout<<"enter percentage ";
		cin>>percentage;
		
	}
void information()
{
	if(percentage>=80)
	cout<<"outstanding"<<endl;
	else if(percentage>=70)
	cout<<"medium"<<endl;
	else 
	cout<<"poor";
	}	
	
};
main()
{            
	student s;
	s.readage();
	s.readname();
	s.display();
	s.readserial_no();
	s.readpercentage();
	s.information();
	}

