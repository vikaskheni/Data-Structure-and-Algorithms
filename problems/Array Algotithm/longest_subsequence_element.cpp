/*There is an integer array ‘A’ of size ‘N’.

A sequence is successive when the adjacent elements of the sequence have a difference of 1.

You must return the length of the longest successive sequence.

Note:

You can reorder the array to form a sequence.
For example,

Input:
A = [5, 8, 3, 2, 1, 4], N = 6
Output:
5
Explanation:
The resultant sequence can be 1, 2, 3, 4, 5.
The length of the sequence is 5.*/

#include <bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(vector<int> &a)
{
    // Write your code here.
    int count = 1;
    if (a.size() == 0)
    {
        return 0;
    }
    unordered_set<int> set1;
    for (int i = 0; i < a.size(); i++)
    {
        set1.insert(a[i]);
    }
    for (auto it : set1)
    {
        if (set1.find(it - 1) == set1.end())
        {
            int x = it;
            int cnt = 1;
            while (set1.find(x + 1) != set1.end())
            {
                x++;
                cnt++;
            }
            count = max(count, cnt);
        }
    }
    return count;
}