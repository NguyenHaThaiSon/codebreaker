#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool containDigit(int num, int target)
{
    string numStr = to_string(num);
    string targetStr = to_string(target);

    return numStr.find(targetStr) != string::npos;
}

int main()
{
    int N, K, X;
    cin >> N >> K >> X;

    int init = X;
    for (int i = 0; i < K; ++i)
    {

        X = init + (N * i);
        if (X % 7 == 0 || containDigit(X, 7))
        {
            cout << "UP!" << '\n';
        }
        else
        {
            cout << X << '\n';
        }
    }

    return 0;
}