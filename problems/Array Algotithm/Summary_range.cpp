
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> result;
        int n = nums.size(), i = 0;
        while (i < n)
        {
            int ans = nums[i++];
            int prev = ans;
            while (i < n && nums[i] == ans + 1)
            {
                ans = nums[i];
                i++;
            }
            if (prev != ans)
            {
                string re = to_string(prev) + "->" + to_string(ans);
                result.push_back(re);
            }
            else
            {
                result.push_back(to_string(prev));
            }
        }
        return result;
    }
};