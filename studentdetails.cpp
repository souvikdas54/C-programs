//C++ program to print student details using encapsulation
#include<iostream>
using namespace std;
#include<conio.h>
class student
{
	private:
		int roll;
		char name[25];
	public:
		void read()
		{
			cout << "Enter Name and Roll number of the student "<<endl;
			gets(name);
			cin >> roll;
		}
		void print()
		{
			cout << "Name and Roll number of the student "<<endl;
			puts(name);
			cout <<roll;
		}
};
int main()
{
	student S;
	S.read();
	S.print();
	getch();
	return 0;
}
