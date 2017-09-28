//C++ program to calculate net salary from basic salary
#include <iostream>
using namespace std;
#include<conio.h>

class Emp
{
    char na[10];
    int code, basic;

    public:

      void read()
        { 
            cout<<"Enter Name, Code & Basic Salary:";
            gets (na);
            cin>>code>>basic;
        }

      float cal()
        {
            float net;
            float da,hra;
            hra=basic*0.5;
            da=basic*0.4;
            net=basic+hra+da;
            return(net);
        }

      void print()
        {
            cout<<'\n'<<"Details Of Employee:"<<'\n';
            cout<<"********************"<<'\n';
            cout<<"Code: "<<code<<'\n';
            cout<<"Name:"<<na<<'\n';
            cout<<"Net Salary: "<<cal();
        }

};

int main()
{
    Emp E;
    E.read();
    E.print();
    getch();
    return 0;
}
