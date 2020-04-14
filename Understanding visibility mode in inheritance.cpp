#include <stdio.h>
#include <iostream>
using namespace std;
class Array
{
    private:
     int a[10],top,val,n=10,i;
    protected:
        void insert()
        {
            for(top=0;top<5;top++)
            {
                cin>>val;
                a[top]=val;
            }
            print();
        }
        void print()
        {
            cout<<"Array elements input by u are:"<<endl;
            for(i=0;i<5;i++)
            {
                cout<<a[i]<<" ";
                cout<<endl;
            }
        }
};
class Stack:public Array
{
    public:
        int push()
        {
            cout<<"Insert any 5 elements"<<endl;
            insert();
        }
};
int main()
{
    Stack s1;
    s1.push();
}
