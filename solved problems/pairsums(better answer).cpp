#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    cin >> N;

    long long oddNum = 0;
    long long evenNum = 0;

    for (long long i = 0; i < N; ++i)
    {
        long long num;
        cin >> num;

        if (num % 2 == 0)
        {
            evenNum++;
        }
        else
        {
            oddNum++;
        }
    }
    cout << oddNum * evenNum;

    return 0;
}
