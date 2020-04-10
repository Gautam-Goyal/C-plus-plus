#include <stdio.h>
#include <iostream>
class complex
{
    private:
        int a,b;
    public:
        void setdata ()
        {
           std::cin>>a>>b;
        }
        void showdata()
        {
            std::cout<<"\na="<<a<<"\nb="<<b;
        }
        complex add(complex c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return (temp);
        }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata();
    c2.setdata();
    c3=c1.add(c2);
    c3.showdata();
    getchar();
}
