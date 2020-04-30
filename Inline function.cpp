#include <iostream>
#include <vector>
using namespace std;

  inline int sum(int a,int b)
  {
    return a+b;
  }
  inline int multiply(int a,int b)
    {
      return a*b;
    }
int main()
{
  int a=4,b=5;
  
  cout<<sum(a,b)<<endl; //this function call will be replaced by whole function if possible     //acc to size,...etc.
  cout<<multiply(a,b)<<endl;

  return 0;
}