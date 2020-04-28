#include <iostream>

using namespace std;
class Box
{
  int l,b,h;
  public:
    void setdimension(int l,int b,int h)
    {
      this->l=l;this->b=b;this->h=h;//To differentiate between local variable and object variables.
    }
    void showdimension()
    {
      cout<<"\nl="<<l<<" b="<<b<<" h="<<h;
    }
};
int main() {
  int x,y,z;
  Box *p,smallbox; 
  p=&smallbox; //holding address of object
               //Object pointer
  cout<<"Enter l,b and h:\n";
  cin>>x>>y>>z;
  p->setdimension(x,y,z);
  p->showdimension();
  getchar ();
}