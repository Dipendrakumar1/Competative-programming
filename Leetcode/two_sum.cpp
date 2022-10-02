#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(11);
    nums.push_back(7);
    nums.push_back(15);
    int target = 9;
    vector<int> v1;
    for (int i = 0; i < nums.capacity(); i++)
    {
        for (int j = 1; j < nums.capacity(); j++)
        {
            if ((nums.at(i) + nums.at(j)) == target)
            {
               v1.push_back(i);
               v1.push_back(j);
            }
        }
    }
    cout<<v1.at(0)<<endl<<v1.at(1)<<endl;
    return 0;
}