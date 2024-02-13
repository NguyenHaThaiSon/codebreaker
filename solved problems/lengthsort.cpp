#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    multimap<int, string, greater<int>> order;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        order.emplace(s.length(), s);
    }

    for (const auto &[value, string] : order)
    {
        cout << string << '\n';
    }

    return 0;
}