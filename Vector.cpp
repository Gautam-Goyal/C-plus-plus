#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1(10);
    cout<<"Current capacity is "<<v1.capacity()<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i];
    cout<<endl;
    vector<int> v2 {5};
    cout<<"Current capacity is "<<v2.capacity()<<endl;
    for(int i=0;i<v2.size();i++)
        cout<<v2[i];
        cout<<endl;
    vector<int> v3(5,9);
    cout<<"Current capacity is "<<v3.capacity()<<endl;
    for(int i=0;i<v3.size();i++)
        cout<<v3[i];
        cout<<endl;
         vector<string> v4(3,"hello");
    cout<<"Current capacity is "<<v4.capacity()<<endl;
    for(int i=0;i<v4.size();i++)
        cout<<v4[i];
        cout<<endl;
        v4.push_back("HI");
        cout<<"Current capacity is "<<v4.capacity()<<endl;
    for(int i=0;i<v4.size();i++)
        cout<<v4[i];
        cout<<endl;

        v3.pop_back();
        cout<<"Current capacity is "<<v3.capacity()<<endl;
        cout<<"Current size is "<<v3.size()<<endl;
    for(int i=0;i<v3.size();i++)
        cout<<v3[i];
        cout<<endl;//Capacity does not decrease




}
