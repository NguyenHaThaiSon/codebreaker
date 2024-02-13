#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string contestant;
    int score;

    unordered_map<string, int> map;
    for (int i = 0; i < N; ++i)
    {
        cin >> contestant >> score;
        map[contestant] = score;
    }

    int M;
    cin >> M;

    int sum = 0;
    for (int i = 0; i < M; ++i)
    {
        cin >> contestant;
        sum += map[contestant];
    }
    cout << sum / M;
    return 0;
}