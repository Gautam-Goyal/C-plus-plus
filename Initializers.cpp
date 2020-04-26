#include <conio.h>
#include <iostream>
using namespace std;

class test
{
private:
    int a,b;//we cannot initialize any variable in private section.
    const int x;//const are also required to initialize during declaration but here it is not possible.
    int &y;//A reference variable is declared here but we cannot assign value here
public:
    test(int &n):x(5),y(n)//initializer list
    {}          //non static const data cannot be declared inside constructor so initializer list is required.
                //also,for initialization of reference members(for using y as a reference member with help of initializer list
                //we transferred reference of m through n to y;
};
int main()
{
    int m=6;
    test t1(m);
}

