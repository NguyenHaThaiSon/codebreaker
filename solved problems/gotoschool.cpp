#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int array[N];
    vector<int> order(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> array[i];
        order[array[i] - 1] = i + 1;
    }

    for (int i = 0; i < N; ++i)
    {
        cout << order[i] << ' ';
    }
    return 0;
}