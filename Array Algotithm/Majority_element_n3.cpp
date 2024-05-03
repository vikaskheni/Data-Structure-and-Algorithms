#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
    int cnt1 = 0, cnt2 = 0;
    int a = INT_MIN, b = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && b != nums[i])
        {
            cnt1 = 1;
            a = nums[i];
        }
        else if (cnt2 == 0 && a != nums[i])
        {
            cnt2 = 1;
            b = nums[i];
        }
        else if (a == nums[i])
        {
            cnt1++;
        }
        else if (b == nums[i])
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == a)
        {
            cnt1++;
        }
        else if (nums[i] == b)
        {
            cnt2++;
        }
    }
    vector<int> result;
    int r = (int)n / 3;
    if (cnt1 > r)
    {
        result.push_back(a);
    }
    if (cnt2 > r)
    {
        result.push_back(b);
    }
    sort(result.begin(), result.end());
    return result;
}