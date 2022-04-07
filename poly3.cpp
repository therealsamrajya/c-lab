#include<iostream>
using namespace std;
class Person

{

    private:

        char name[20];

    public:

        void getdata()

        {

            cout<<"\nEnter the name: ";

            cin>>name;

        }

        void showdata()

        {

            cout<<"\nThe name is: "<<name;

        }

};


class Employee :virtual public Person
{
    private:
        char emp_id[10];
    public:
        void get_data()
        {
            cout<<"Enter Employee ID: ";
            cin>>emp_id;
        }
        void show_data()
        {
            cout<<"\nEmpolyee ID: "<<emp_id;
        }
};
class Student : virtual public Person
{
    private:
        char roll_no[10];
    public:
        void get_data()
        {
            cout<<"Enter Roll No: ";
            cin>>roll_no;
        }
        void show_data()
        {
            cout<<"\nRoll No: "<<roll_no;
        }
};
class Manager: public Employee, public Student
{
    private:
         int salary;
    public:
        void get_data()
        {
            Employee::get_data(); 
            Student::get_data();
            cout<<"Enter Salary: ";
            cin>>salary;
        }
        void show_data()
        {
            Employee::show_data();
            Student::show_data();
            cout<<"\nSalary: "<<salary;
        }
};
int main()
{
    Manager m;
    cout<<"Enter data for manager: ";
    m.getdata(); 
    m.get_data();
    cout<<"\nThe data on manager is:  ";
    m.showdata();
    m.show_data();
    return 0;
}
