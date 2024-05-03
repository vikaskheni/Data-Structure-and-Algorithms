#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int element;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                count = 1;
                element = nums[i];
            }
            else if (element == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        int count2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == element)
            {
                count2++;
            }
        }
        if (count2 > nums.size() / 2)
        {
            return element;
        }
        return element;
    }
};