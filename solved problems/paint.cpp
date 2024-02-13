#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;
        sum += num;
    }

    int array[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> array[i];
    }

    sort(array, array + N, greater<int>());

    int cost = 0;
    for (int i = 0; i < N; ++i)
    {
        cost += array[i] * i;
    }

    cout << sum + cost;
    return 0;
}