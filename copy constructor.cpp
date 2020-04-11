#include<stdio.h>
#include<iostream>

class complex
{
private:
    int a,b;
public:
    complex(int x,int y)
    {   a=x;
        b=y;
        std::cout<<"Double argument constructor  ";
        std::cout<<"a="<<x<<" b="<<y;}
    complex(int k)
    {std::cout<<"\nSingle argument constructor  a="<<k;}
    complex()           //default constructor
    {}
    complex(complex& c)   //copy constructor
    {
        std::cout<<"\nIn copy constructor(copy of double arg. constr.)";
        std::cout<<" a="<<c.a;
        std::cout<<" b="<<c.b;
    }
};

int main()
{
    complex c1(3,4),c2(5),c3;
    complex c4(c1);
    getchar();
}
