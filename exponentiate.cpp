#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int a, b, m;
        cin >> a >> b >> m;

        cout << ((int)(pow(a, b)) % m) << '\n';
    }
    return 0;
}