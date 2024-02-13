#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int max = 0;
    int peak;
    for (int i = 0; i < N; ++i)
    {
        cin >> peak;
        if (max < peak)
        {
            max = peak;
        }
    }

    cout << max;
    return 0;
}