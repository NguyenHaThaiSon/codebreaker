#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arrange(n);

    for (int i = 1; i <= n; ++i)
    {
        int pos;
        cin >> pos;
        arrange[pos - 1] = i;
    }

    for (int guestNumber : arrange)
    {
        cout << guestNumber << '\n';
    }

    return 0;
}
