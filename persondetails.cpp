//C++ program showing inheritance
#include<iostream>
using namespace std;
#include<conio.h>
class Person
{
	private:
		int personid,age;
		string name;
		
	public:
		void read1()
		{
			cout<<"Enter the name,id and age of the person";
			getline(cin,name);
			cin>>personid;
			cin>>age;
		}
		void print1()
		{
			cout<<'\n'<<"******Details Entered******"<<endl;
			cout<<"Name of poerson "<<name<<endl;
			cout<<"ID of the person "<<personid<<endl;
			cout<<"Age of the perosn "<<age<<endl;
		}
};
class address:public Person
{
	private:
		int hno;
		string hname,sname,po;
	public:
	void read2()
	{
		read1();
		cout<<"Enter the house number house name,street name,post office";
		cin>>hno;
		getline(cin,hname);
		getline(cin,sname);
		getline(cin,po);
	}
	void print2()
	{
		print1();
		cout<<"The address of the person is "<<endl;
		cout<<"House number: "<<hno<<endl;
		cout<<"House name: "<<hname<<endl;
		cout<<"Street name: "<<sname<<endl;
		cout<<"Post Office: "<<po<<endl;	
	}	
};
int  main()
{
	address A;
	A.read2();
	A.print2();
	getch();
	return 0;
}
















