#include <iostream>
using namespace std;

class M
{
	int x;
	int y;
public:
	void setxy(int a,int b)
	{
		x=a;
		y=b;
	}
	friend int sum(M m);
};
int sum(M m)
{
	int M::*px = &M::x;//pointer px to member x of class M which stores x address.
			   //int *px=&x is wrong as only. class and member functions have access to member variables.
	int M::*py = &M::y;//pointer py to member y of class M which stores y address.
	M*pm = &m;         //pointer pm which stores address of object m of class M.
	int s = m.*px + pm->*py;
	return s;
}
int main()
{
	M n;
	void(M::*pf)(int,int) = &M::setxy;//pointer to member function.
	(n.*pf)(10,20);                   //n object calling setxy function using pf pointer.
	cout<<"sum="<<sum(n)<<"\n";

	M*op = &n;                        //pointer to address of n object of class M.
	(op->*pf)(30,40);
	cout<<"sum="<<sum(n)<<"\n";
	return 0;
}
