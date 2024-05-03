#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &a)
    {
        int mid = 0, low = 0, high = a.size() - 1;
        while (mid <= high)
        {
            if (a[mid] == 0)
            {
                swap(a[mid], a[low]);
                mid++;
                low++;
            }
            else if (a[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
};