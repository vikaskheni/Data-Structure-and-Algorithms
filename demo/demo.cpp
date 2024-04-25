#include <bits/stdc++.h>
using namespace std;

vector<int> deckRevealedIncreasing(vector<int> &deck)
{
    int i = 0, n = deck.size();
    sort(deck.begin(), deck.end());
    vector<int> copy_deck(deck.size());
    int j = 0;

    while (i < n)
    {
    }
    return copy_deck;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout)
    vector<int> d = {17, 13, 11, 2, 3, 5, 7};
    vector<int> r = deckRevealedIncreasing(d);
    for (auto x : r)
    {
        cout << x;
    }
    return 0;
}