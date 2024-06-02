//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int N)
    {
        // code here
        long long n = N;
        long long initial = 0, initial2 = 0;
        long long sum1 = (n * (n + 1)) / 2;
        long long sum2 = (n * (n + 1) * (2 * n + 1)) / 6;
        for (int i = 0; i < n; i++)
        {
            initial += arr[i];
            initial2 += (long long)arr[i] * (long long)arr[i];
        }
        long long p = initial - sum1;
        long long q = initial2 - sum2;
        q = q / p;

        long long x = (q + p) / 2;
        long long y = q - x;

        return {int(x), int(y)};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends