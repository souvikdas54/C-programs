//C++ program to show the total marks obtained
#include<iostream>
using namespace std;

int main()
{
	float sub1,sub2,sub3;
	float total,average;
	cout << " Enter marks obtained in three subjects "<<endl;
	cin >> sub1 >> sub2 >> sub3;
	total=(sub1+sub2+sub3);
	average=(sub1+sub2+sub3)/3;
	cout<< "subject 1 marks : " << sub1<<endl;
	cout<< "subject 2 marks : " << sub2<<endl;
	cout<< "subject 3 marks : " << sub3<<endl;
	cout<< "total marks : " << total<<endl;
	cout<< "average marks : " << average<<endl;
	return 0;
}
