#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        string left(N - i - 1, ' ');
        string middle(i * 2 + 1, '*');
        string right(N - i - 1, ' ');
        cout << left << middle << right << '\n';
    }

    for (int i = N - 1; i > 0; --i)
    {
        string left(N - i + 1, ' ');
        string middle(i * 2 - 1, '*');
        string right(N - i + 1, ' ');
        cout << left << middle << right << '\n';
    }
    return 0;
}