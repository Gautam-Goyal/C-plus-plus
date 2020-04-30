#include<iostream>
using namespace std;
int main()
{int n,x,y;
std::cout<<"enter the  come size for square pattern";
std::cin>>n;
    for(int i=0;i<n;i++)
    {std::cout<<"\n";
          for(int j=0;j<n;j++)
           {
                if(i%2==0)
                {x=0;y=1;}
                else
                {y=0;x=1;}
                std::cout<<y;
                std::cout<<x;

           }

    }
         return 0;
}