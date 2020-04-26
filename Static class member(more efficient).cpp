#include <iostream>
using namespace std;

class item
{
private:
    static int count;//static member by default initialize with zero.
                     //A static member is one for all i.e. it will have the same value for any no. of objects
    int code;
public:
    void setcode(void)
    {
        code=++count;
    }
    void showcode(void)
    {
        cout<<"object number"<<code<<endl;
    }
    static void showcount(void)//static member function-it can only access static members only.
                               //i.e. we can't print code value here.Also,we can call it without any object.
    {
        cout<<"count"<<count<<endl;
    }
    void onlycount(void)
    {
        cout<<count<<endl;
    }
    void countincrement(void)
    {
        count++;
    }
};
int item::count;
int main()
{
    item t1,t2,t3;
    t1.onlycount();
    t2.onlycount();
    t3.onlycount();

    t1.countincrement();
    t1.countincrement();
    t1.countincrement();

    t1.onlycount();
    t2.onlycount();
    t3.onlycount();

    cout<<"After 1st phase:\n";

    t1.setcode();
    t2.setcode();

    item::showcount();

    t3.setcode();

    item::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}
