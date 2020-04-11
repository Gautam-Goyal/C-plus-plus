#include<stdio.h>
#include<iostream>

class complex
{
private:
    int a,b;
public:
    complex()  //constructor with same name as class
    {std::cout<<"Hello constructor\n";}
};

int main()
{
    complex c1,c2,c3;
    getchar();
}
