#include<iostream>
#include<stdio.h>

using namespace std;

int main( )
{
	char str[80];
	int temp,l,i,j;
	cout<<"Enter string : ";
	gets(str);

	for(l=0;str[l]!='\0';l++);    //finding length of string

	for(i=0,j=l-1;i<l/2;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}

	cout<<"Reverse of String : "<<str;

	return 0;
}
