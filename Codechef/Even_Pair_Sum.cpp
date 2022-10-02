#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int A, B;
        int count = 0;
        cin >> A >> B;
        for (int j = 1; j <= A; j++)
        {
            for (int k = 1; k <= B; k++)
            {
                if ((j + k) % 2 == 0)
                {
                    count++;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}