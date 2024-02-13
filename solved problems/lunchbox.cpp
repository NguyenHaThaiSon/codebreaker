#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, m;
    cin >> N >> m;

    int lunchBoxes[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> lunchBoxes[i];
    }

    // Sort lunch boxes in non-decreasing order
    sort(lunchBoxes, lunchBoxes + m);

    int maxSchools = 0;
    int totalBoxes = 0;

    for (int i = 0; i < m; ++i)
    {
        if (totalBoxes + lunchBoxes[i] <= N)
        {
            totalBoxes += lunchBoxes[i];
            maxSchools++;
        }
        else
        {
            break;
        }
    }

    cout << maxSchools << endl;

    return 0;
}
