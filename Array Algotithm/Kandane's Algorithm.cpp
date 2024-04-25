
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // int endindex=-1;
        // int endstart=-1;
        // int start=-1;
        int maxn = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            // if(sum==0) start=i;
            sum += nums[i];
            if (sum > maxn)
            {
                // endindex=i, endstart=start
                maxn = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        if (maxn < 0)
        {
            return maxn;
        }
        return maxn;
    }
};