#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int dx = abs(x2 - x1);
        int dy = abs(y2 - y1);

        int minTime = dx + dy;

        // Account for turning
        if (dx > 0 && dy > 0)
        {
            minTime += 2;
        }

        cout << minTime << '\n';
    }
}