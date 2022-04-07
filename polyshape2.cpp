#include<iostream>
using namespace std;
#define pi 3.14

class shape
{
	protected:
		float aor,aoc,aot,r,l,b,h;
		public:
			virtual void area()
			{
			}
		virtual void display()
		{
		}
};
class circle:public shape
{
	public:
		void area()
		{
			cout<<"enter radius of circle";
			cin>>r;
			aoc=pi*r*r;
		}
void display()
{
	cout<<"area of circle is"<<aoc<<endl;
}
};
class rectangle:public shape
{
	public:
		void area()
		{
			cout<<"enter length and breadth of rectangle";
			cin>>l>>b;
			aor=l*b;
		}
		void display()
		{
			cout<<"area of rectangle is"<<aor<<endl;
		}
};
class trapezoid:public shape
{
	public:
		void area()
		{
			cout<<"enter length,breadth and height of trapezium";
			cin>>l>>b>>h;
			aot=(l*b)/2*h;
		}
	 void display()
	{
		cout<<"area of trapezium is"<<aot<<endl;
		}	
 };
 main()
 {
 	shape *shapeptr;
 	circle c;
 	rectangle r;
 	trapezoid t;
 	shapeptr=&c;
 	shapeptr->area();
 	shapeptr->display();
 	shapeptr=&r;
 	shapeptr->area();
 	shapeptr->display();
 	shapeptr=&t;
 	shapeptr->area();
 	shapeptr->display();
 	
 	
 }
 
