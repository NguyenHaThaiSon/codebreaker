#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, H;
    cin >> N >> H;
    long long person;

    long long check = H / N;
    long long track = 0;
    bool can = true;

    for (int i = 1; i < N; ++i)
    {
        cin >> person;
        if (person >= check * i)
        {
            track++;
            can = false;
        }
    }

    if (!can)
    {
        cout << "No" << '\n'
             << track;
    }
    else
    {
        cout << "Yes";
    }
    return 0;
}