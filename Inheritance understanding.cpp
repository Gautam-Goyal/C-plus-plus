#include <stdio.h>
#include <iostream>
using namespace std;
class A
{
    private:
     int a;
    protected:
        void setvalue(int k)
        {
            a=k;
            cout<<"Value of a becomes "<<a;
        }
};
class B:public A
{
    int x;
    public:
        void setdata()
        {
            cin>>x;
            setvalue(x);
        }
};
int main()
{
    B obj;
    obj.setdata();
}
