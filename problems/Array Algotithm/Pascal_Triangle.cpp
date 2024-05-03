#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> row(int r)
    {
        vector<int> result;
        result.push_back(1);
        long long int ans = 1;
        for (int i = 1; i < r; i++)
        {
            ans = ans * (r - i);
            ans = ans / i;
            result.push_back(ans);
        }
        return result;
    }
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;
        for (int i = 1; i <= numRows; i++)
        {
            vector<int> r = row(i);
            result.push_back(r);
        }
        return result;
    }
};