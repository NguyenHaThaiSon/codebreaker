#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    string sample = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> map;
    for (char letter : sample)
    {
        map[letter]++;
    }
    for (char letter : S)
    {
        map[letter]++;
    }
    for (auto &[key, value] : map)
    {
        cout << key << ' ' << value - 1 << '\n';
    }
    return 0;
}