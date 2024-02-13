#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    unordered_set<string> unique;

    for (int i = 0; i < N; ++i)
    {
        string num;
        cin >> num;
        unique.insert(num);
    }

    cout << unique.size();
    return 0;
}