
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &a)
    {
        int index = -1;
        int n = a.size();
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] < a[i + 1])
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            reverse(a.begin(), a.end());
        }
        else
        {
            for (int i = n - 1; i > index; i--)
            {
                if (a[i] > a[index])
                {
                    swap(a[i], a[index]);
                    break;
                }
            }
            reverse(a.begin() + index + 1, a.end());
        }
    }
};