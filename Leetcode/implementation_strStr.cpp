#include <bits/stdc++.h>
using namespace std;
int strStr(string st1, string st2)
{
    //   write Your Logic Here!!
    int i, j;
    for (i = 0; i < st1.size(); i++)
    {
        for (j = 0;j < ; j++)
        {
            if(st1[i]==st2[j])
            {
                return i;
            }
        }
    }
    return -1;
}
// Driver code
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int indx;
    indx = strStr(str1, str2);
    cout << indx;
    cout<<endl;
    return 0;
}