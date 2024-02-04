#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> swords(n);
    for (int i = 0; i < n; i++)
    {
        cin >> swords[i].first >> swords[i].second;
    }

    int useful = 0;
    for (int i = 0; i < n; i++)
    {
        bool isUseful = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j && swords[i].first <= swords[j].first &&
                swords[i].second <= swords[j].second)
            {
                isUseful = false;
                break;
            }
        }
        if (isUseful)
        {
            useful++;
        }
    }

    cout << useful << endl;
    return 0;
}