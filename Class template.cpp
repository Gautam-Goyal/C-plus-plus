#include <iostream>
using namespace std;

template<class Z>
class Arraylist
{
	struct Controlblock
	{
		int capacity;
		Z *arr_ptr;
	};
	Controlblock *s;
public:
	Arraylist(int capacity)
	{
		s=new Controlblock;//space allocated to structure variables
		s->capacity=capacity;
		s->arr_ptr=new Z[s->capacity];
	}
	void Addelement(int index,Z data)
	{
		if(index>=0&&index<s->capacity)
		{
			s->arr_ptr[index]=data;
		}
		else
			cout<<"\nArray index not valid";
	}
	void Viewelement(int index,Z &data)
	{
		if(index>=0&&index<s->capacity)
			data=s->arr_ptr[index];
		else
			cout<<"\n Not valid";
	}
	void Viewlist()
	{
		int i;
		for(i=0;i<s->capacity;i++)
			cout<<" "<<s->arr_ptr[i];
	}
};
int main()
{
	Arraylist <int>list1(4);
	list1.Addelement(0,32);
	list1.Addelement(1,41);
	list1.Addelement(2,33);
	list1.Viewlist();
}