#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        long long a, b;
        cin >> a >> b;

        cout << lcm(a, b) << '\n';
    }
    return 0;
}