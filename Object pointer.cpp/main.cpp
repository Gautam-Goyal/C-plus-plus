#include <iostream>

using namespace std;
class Box
{
  int l,b,h;
  public:
    void setdimension()
    {
      cin>>l>>b>>h;
    }
    void showdimension()
    {
      cout<<"\nl="<<l<<" b="<<b<<" h="<<h;
    }
};
int main() {
  Box *p,smallbox; 
  p=&smallbox; //holding address of object
               //Object pointer
  p->setdimension();
  p->showdimension();
  getchar ();
}