#include <iostream>

using namespace std;

//class declaration
class staticDemo
{

private:
    //static variable declaration
    static int sum;
    //normal variable declaration
    int x;

public:
    //Constructor of the class
    staticDemo()
    {
        sum = sum + 1;
        x = sum;
    }

    //Static function staticFunction( ) defined with keyword static
    static void staticFunction()
    {
        cout << "\nResult is : " << sum;
    }

    //Normal member function normalFunctionNumber()
    void normalFunctionNumber()
    {
        cout << "\nNumber is : " << x;
    }
};


int staticDemo::sum = 0;

//declaration of main method
int main()
{
    cout << "This is how static method and variable work : \n";
    //creation of object
    staticDemo stat;

    //Static function staticFunction() accessed using class name staticDemo and the scope resolution operator ::
    staticDemo::staticFunction();

    //
    staticDemo stat1, stat2, stat3;
    staticDemo::staticFunction();
    stat.normalFunctionNumber();

    //Normal member function accessed using object stat and the dot member access operator.
    stat1.normalFunctionNumber();
    stat2.normalFunctionNumber();
    stat3.normalFunctionNumber();

    return 0;
}
