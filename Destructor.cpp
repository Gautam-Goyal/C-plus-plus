#include <stdio.h>
#include <iostream>

class complex
{
    private:
    int a,b;
    public:
    ~complex()
    {std::cout<<"IN Destructor";}
};
void fun()
{
    complex obj;  //as this object was about to destroy.
}
int main()
{
    fun();
    getchar();

}
