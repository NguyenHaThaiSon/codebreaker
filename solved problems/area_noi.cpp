#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    pair<int, int> area;
    int track = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> area.first >> area.second;
        track = max(track, area.first * area.second);
    }

    cout << track;
    return 0;
}