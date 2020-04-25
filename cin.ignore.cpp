#include<iostream>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits
using namespace std;
int main() {
   int x;
   char str[80];
   cout << "Enter a number and a string:\n";
   cin >> x;
    cin.ignore(2,'\n');// mainly used in case of strings or character arrays or just use cin>>str;
                        //2 is streamsize(effects mainly in case of string) and \n is deliminator.
   cin.getline(str,80);//in unformatted input we need to use ignore function to avoid \n from entering getline.
   cout << "You have entered:\n";
   cout << x << endl;
   cout << str << endl;
}
