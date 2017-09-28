//C++ program to show details of a box using encapsulation
#include <iostream>
using namespace std;
#include <conio.h>

class box
{
   private:
       int code;
       char mat[10];
       char col[10];
       float price;

   public:
       void read();
       void print();
};

void box::read()
{
    cout<<"Enter Code, Material, Colour & Price";
    cin>>code;
    gets(mat);
    gets(col);
    cin>>price;
}

void box::print()
{
    cout<<"Code Of Box Is "<<code<<'\n'<<"Colour Is "<<col<<'\n'<<"Material Is "<<mat<<'\n'<<"Price Is "<<price;
}

int main()
{
    box b;
    b.read();
    b.print();
    getch();
    return 0;
}
