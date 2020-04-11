#include<stdio.h>
#include<iostream>

class complex
{
private:
    int a,b;
public:
    complex(int x,int y)  //constructor with same name as class
    {std::cout<<"a="<<x<<" b="<<y;}
};

int main()
{
    complex c1(3,4);//parameterized constructor
    getchar();
}
