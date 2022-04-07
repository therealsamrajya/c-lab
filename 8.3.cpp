#include<iostream>
#include<cstring>
using namespace std;
class musicians
{
	protected:
		char instrument[15][15];
		public:
			void string()
			{
				strcpy(instrument[0],"veena");
				strcpy(instrument[1],"guitar");
				strcpy(instrument[2],"sitar");
				strcpy(instrument[3],"sarod");
				strcpy(instrument[4],"mandolin");
			}
			void wind()
			{
			strcpy(instrument[0],"flute");
			strcpy(instrument[1],"clarinet");
			strcpy(instrument[2],"saxophone");
			strcpy(instrument[3],"nadhaswaram");
			strcpy(instrument[4],"piccolo");
			}
			void perc(void)
			{
				strcpy(instrument[0],"tabla");
				strcpy(instrument[1],"mridangam");
				strcpy(instrument[2],"bangos");
				strcpy(instrument[3],"drums");
				strcpy(instrument[4],"tambour");
			}
			void show()
			{
				for(int i=0;i<5;i++)
				{
					cout<<instrument[i];
					cout<<" ";
				}
			}
			};
			class typins:public musicians
			{
				public:
				void get()
				{
					cout<<"1.String instrument"<<endl;
					cout<<"2.Ind instrument"<<endl;
					cout<<"3.Percussion instrument"<<endl;
		
				}
				void show(int choice)
				{
					switch(choice)
					{
						case 1:
							string();
							musicians::show();
							break;
						case 2:
								wind();
								musicians::show();
								break;
					    case 3:
						        perc();
								musicians::show();
								break;
											
								
					}
				}
			};
			int main()
			{
				int x;
				typins t;
				t.get();
				cout<<"enter your choice: ";
				cin>>x;
				t.show(x);
				return 0;
							}

