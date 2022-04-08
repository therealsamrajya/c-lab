#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char ch='c';
	int i=70;
	float f=6.14;
	char *str="patan";
	ofstream fout("Text.txt");
	fout<<ch<<" "<<i<<" "<<f<<" "<<str;
	cout<<"data written in file";
	ifstream fin("Text.txt");
	fin>>ch>>i>>f>>str;
	cout<<ch<<endl<<i<<endl<<f<<endl<<str;

}
