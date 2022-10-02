#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="abcabcd";
    //copying string
    string str2=str;
    cout<<str2<<endl;
    // taking string from user
    cout<<"Enter String: ";
    getline(cin,str);
    cout<<str;
    // size of string
    cout<<"\nLength Of String:"<<str.size()<<endl;
    //  swapping string
    str2.swap(str);
    // appending string
    str2.append("ji");
    // character position
    cout<<str2.at(1)<<endl;
   // cout<<str2.back();
    cout<<endl;
    return 0;
}