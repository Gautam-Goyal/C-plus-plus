#include<iostream>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits
using namespace std;
int main() {
   int x;
   char str1[80];
   string str2;
   cout << "Enter a number and a string:\n";
   cin >> x;
    cin.ignore(2,'\n');// mainly used in case of strings or character arrays or just use cin>>str;
                        //2 is streamsize(effects mainly in case of string) and \n is deliminator.
   cin.getline(str1,80);//in unformatted input we need to use ignore function to avoid \n from entering getline.
                        //can't input str2 by this method.for char array.
   cout << "You have entered:\n";
   cout << x << endl;
   cout << str1 << endl;
   cout<<"After updating\n";
   getline(cin,str2);//not for char array.
   cout<<str2;

}
