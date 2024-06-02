#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> merge;
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < intervals.size(); i++)
        {
            if (!merge.empty() && merge.back()[1] >= intervals[i][0])
            {
                merge.back()[1] = max(merge.back()[1], intervals[i][1]);
            }
            else
            {
                merge.push_back(intervals[i]);
            }
        }
        return merge;
    }
};