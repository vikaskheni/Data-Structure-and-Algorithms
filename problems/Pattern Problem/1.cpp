#include <bits/stdc++.h>
using namespace std;
void print_star(int n)
{

    int start;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        if (i < n)
        {
            start = 2 * n - 2 * i - 1;
        }
        if (i < n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            for (int j = 1; j <= start; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else if (i == n)
        {
            for (int j = 1; j < 2 * n; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "* ";
            }
            for (int j = 1; j <= start; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "* ";
            }
            start = start + 2;
        }
        cout << endl;
    }
}
int main()
{
    int n;

    cin >> n;
    print_star(n);

    return 0;
}