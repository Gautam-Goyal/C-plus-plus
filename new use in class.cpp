#include <iostream>
using namespace std;
 
class Test 
{
  int x;
  Test() { x = 5;}
};
 
int main()
{
   Test *t = new Test;
   cout << t->x;
}

//ERROR:- There is compiler error: Test::Test() is private. new makes call to the constructor. 
//        In class Test, constructor is private (note that default access is private in C++).