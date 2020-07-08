#include<iostream>
#include<conio.h>
int main()
{int n,x;
std::cout<<"enter the size of square pattern";
std::cin>>n;
    for(int i=0;i<n;i++)
    {std::cout<<"\n";
    x=i;
          for(int j=0;j<n;j++)
        {
           std::cout<<x+1;
           x++;
        }
    }
         return 0;
}
