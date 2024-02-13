#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, M;
    long long num;
    cin >> N >> M;

    long long A[N];
    vector<long long> reverse;
    unordered_map<long long, long long> B;
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; ++i)
    {
        cin >> num;
        B[num]++;
    }

    for (int i = N - 1; i >= 0; --i)
    {
        if (B[A[i]] != 0)
        {
            reverse.push_back(A[i]);
        }
    }

    for (long long num : reverse)
    {
        cout << num << ' ';
    }
    return 0;
}