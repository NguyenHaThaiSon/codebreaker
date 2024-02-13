#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    cin >> N;

    long long sum = 0;
    int a, b;

    for (int i = 0; i < N; ++i)
    {
        cin >> a >> b;

        sum += a * b;
    }

    cout << sum;
    return 0;
}