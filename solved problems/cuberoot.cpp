#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long num;
    double middle;

    for (int i = 0; i < t; ++i)
    {
        cin >> num;
        if (num == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            long long up = num;
            long long low = 0;

            while (up - low > 1)
            {
                middle = (up + low) / 2;
                if (middle * middle * middle > num)
                {
                    up = middle;
                }
                else
                {
                    low = middle;
                }
            }
            cout << low << '\n';
        }
    }

    return 0;
}