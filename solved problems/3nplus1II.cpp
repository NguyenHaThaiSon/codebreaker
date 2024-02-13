#include <iostream>
using namespace std;

int main()
{
    int L, T;
    cin >> L >> T;

    int tracker;
    for (int i = 0; i < T - 1; ++i)
    {
        if (L == 1)
        {
            tracker = -1;
            break;
        }

        if (L % 2 == 0)
        {
            L = L / 2;
        }
        else
        {
            L = 3 * L + 1;
        }
        tracker = L;
    }
    cout << tracker;
    return 0;
}