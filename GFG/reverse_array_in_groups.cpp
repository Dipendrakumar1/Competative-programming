#include <iostream>
#include <string>
#include <vector>
using namespace std;
void reverseInGroups(vector<long long> &arr, int n, int k)
{
      vector<long long> temp;
if (k > n)
    {
        for (int i = 0, j = n - 1; i < n || j >= 0; i++, j--)
        {
            temp.push_back(arr[j]);
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }
    else
    {
        for (int i = k - 1, j = 0; i >= 0 || j < k; i--, j++)
        {
            temp.push_back(arr[i]);
        }
        for (int i = k, j = n - 1; i < n || j >= k; i++, j--)
        {
            temp[i] = arr[j];
        }
        for (int m = 0; m < n; m++)
        {
            arr[m] = temp[m];
        }
    }
}
int main()
{
    vector<long long> vec = {36, 93, 64, 48, 96, 55, 70, 0, 82, 30, 16, 22, 38, 53, 19, 50, 91, 43, 70, 88, 10, 57, 14, 94, 13, 36, 59, 32, 54, 58, 18, 82, 67};
    // int size=sizeof(arr)/sizeof(arr[0]);
    // int  temp[size];
    // int k = 2;
    // for (int i = k-1,j=0; i >= 0 || j<k; i--,j++)
    // {
    //    temp[j]=arr[i];
    // }
    // for (int i = k,j=size-1; i<size || j>=k;i++,j--)
    // {
    //    temp[i]=arr[j];
    // }
    // for (int m = 0; m < size; m++)
    // {
    //     cout << temp[m] << " ";
    // }
    reverseInGroups(vec, 33, 13);
    for (int m = 0; m < 33; m++)
    {
        cout << vec[m] << " ";
    }
    cout << endl;
    return 0;
}