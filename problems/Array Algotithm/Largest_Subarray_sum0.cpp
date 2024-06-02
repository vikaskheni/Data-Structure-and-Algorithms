//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*You are required to complete this function*/

class Solution
{
public:
    int maxLen(vector<int> &arr, int n)
    {
        // Your code here
        int ar = 0;
        map<int, int> map;
        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            ar = ar + arr[i];
            if (ar == 0)
            {
                maxi = i + 1;
            }
            else
            {
                if (map.find(ar) != map.end())
                {
                    maxi = max(maxi, i - map[ar]);
                }
                else
                {
                    map[ar] = i;
                }
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends