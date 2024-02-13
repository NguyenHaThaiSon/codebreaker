#include <iostream>
using namespace std;

bool isInRange(int a, int b, int c)
{
    int lower = min(b, c);
    int upper = max(b, c);

    return a >= lower && a <= upper;
}

int main()
{
    int n;
    cin >> n;

    pair<int, int> kai;
    pair<int, int> pavement;
    pair<int, int> cell;

    cin >> kai.first >> kai.second >> pavement.first >> pavement.second >> cell.first >> cell.second;

    if (!isInRange(kai.first, pavement.first, cell.first) && !isInRange(kai.second, pavement.second, cell.second))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}