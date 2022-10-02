#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st = "abcd";
    // int i = 0;
    // while (st[i] != '\0')
    // {
    //     cout<< st[i];
    //     i++;
    // }
    for (int k = 0; st[k] != '\0'; k++)
    {
        for (int i =k+1; i<=k; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << st[j];
            }
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}