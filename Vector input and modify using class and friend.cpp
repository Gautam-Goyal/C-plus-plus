#include <iostream>
#include <vector>
using namespace std;
class project
{
  private:
  vector<int> v1;
  public:
    void addelement(int a)
    {
      v1.push_back(a);
  
    }

    void view()
    {
      for(auto i=v1.begin();i<v1.end();i++)
      {
        cout<<*i<<endl;
      }
    }

    friend void modify(int,int,project);

};

void modify(int data,int index,project p)
    {
      //vector<int>::iterator it=v1.begin();
      //v1.insert(it+index,data); To insert element
      p.v1[index]=data;//to replace element
    }

int main()
{
  project p1;
  p1.addelement(7);
  p1.addelement(91);
  modify(24,0,p1);
  modify(22,3,p1);
  p1.view();
}