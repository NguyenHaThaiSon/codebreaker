#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    cin >> N;

    unordered_map<long long, long long> evenCount, oddCount;
    long long oddPairs = 0;

    for (long long i = 0; i < N; ++i)
    {
        long long num;
        cin >> num;

        if (num % 2 == 0)
        {
            evenCount[num]++;
        }
        else
        {
            oddCount[num]++;
        }
    }

    for (const auto &[num, count] : oddCount)
    {
        for (const auto &[num2, count2] : evenCount)
        {

            oddPairs += count * count2;
        }
    }

    cout << oddPairs;

    return 0;
}
