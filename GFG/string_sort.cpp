#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int num;
    // cin >> num;    //Reading input from STDIN
    // cout << "Input number is " << num << endl;	// Writing output to STDOUT
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        int count = 0;
        int arr[100];
        cin >> n >> m;
        int mat[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == '#')
                {
                    count++;
                }
            }
            arr[i] = count;
            count = 0;
        }
        for (int i = 0; i < n; i++)
            for (int j = i + 1; i < sizeof(arr); j++)
            {
                if (arr[i] > arr[j])
                    cout << arr[i] << endl;
            }
    }
    return 0;
}