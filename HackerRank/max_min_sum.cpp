#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> varr={1 ,2, 3, 4, 5};
    vector<int>::iterator itr;
    // varr.clear(); 
    itr=varr.begin();
    while(itr!=varr.end())
    {
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;
    return 0;
}