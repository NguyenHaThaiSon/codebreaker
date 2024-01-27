#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0, b = 1;

    cout << a << "\n";

    for (int i = 1; i <= n; i++)
    {
        int c = (a + b) % 998244353;
        a = b;
        b = c;

        cout << a << "\n";
    }

    return 0;
}