#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    int lis[N];
    for (int i = 0; i < N; ++i)
    {
        lis[i] = 1;
        for (int j = 0; j < i; ++j)
        {
            if (arr[j] < arr[i])
            {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        ans = max(ans, lis[i]);
    }

    cout << ans;

    return 0;
}