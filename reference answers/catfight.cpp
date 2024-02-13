#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, P;
    cin >> N >> P;

    vector<int> battlePower(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> battlePower[i];
    }

    int start = 0, end = 0;
    int powerLeft = P;
    int maxGroupSize = 0;

    while (end < N)
    {
        if (powerLeft >= battlePower[end])
        {
            powerLeft -= battlePower[end];
            maxGroupSize = max(maxGroupSize, end - start + 1);
            ++end;
        }
        else
        {
            powerLeft += battlePower[start];
            ++start;
        }
    }

    cout << maxGroupSize << endl;

    return 0;
}
