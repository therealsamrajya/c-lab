#include<iostream>
using namespace std;
class item
{
	private:
		int code;
		int price;	
public:
 void getdata(int a,int b)
 {
 	code=a;
 	price=b;

 }
 void showdata()
 {
 	cout<<"code\tprice\n";
 	cout<<code<<"\t"<<price<<endl;
 }
};
main()
{
	item i;
	item *ptr,*ptr1;
	ptr=new item[5];
	ptr1=ptr;
	int x,j;
	int y;
	for(j=0;j<5;j++)
	{
		cout<<"enter code and price";
		cin>>x>>y;
		ptr->getdata(x,y);
		ptr++;
	}
	
	for(j=0;j<5;j++)
	{
		ptr1->showdata();
		ptr1++;
	}
}
