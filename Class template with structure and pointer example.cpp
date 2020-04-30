#include <iostream>
#include <vector>
using namespace std;
template<class T>class project
{
  private:
  struct Control//can also do without structure,used here only for more info
  {
    int capacity;
    T *arr;
  }*s;
  public:
  project(int capacity)
  {
    s=new Control;//space allocated to structure variables
    s->capacity=capacity;
    s->arr=new T[s->capacity];
  }
    void addelement(int index,T data)
    {
      if(index>=0 && index<s->capacity)
      s->arr[index]=data;
      else
      cout<<"\nArray not valid\n";
    }

    void Viewelement(int index,T& data)
    {
      if(index>=0 && index<s->capacity)
      data=s->arr[index];
      else
      cout<<"\nNot valid";
    }
    void view()
    {
      for(int i=0;i<s->capacity;i++)
      {
        cout<<" "<<s->arr[i]<<endl;
      }
    }


};
int main()
{
  int n;
  project <int> p1(4);
  p1.addelement(0,44);
  p1.addelement(1,91);
  p1.addelement(2,23);
  p1.addelement(3,34);
  p1.Viewelement(1,n);
  cout<<"\n"<<n<<endl;
  p1.view();
}