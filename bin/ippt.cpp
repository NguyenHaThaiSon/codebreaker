#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    if (a == 0 || b == 0 || c == 0 || sum <= 60)
    {
        cout << "FAIL";
    }
    else if (sum <= 74)
    {
        cout << "PASS";
    }
    else if (sum <= 84)
    {
        cout << "SILVER";
    }
    else if (sum >= 85)
    {
        cout << "GOLD";
    }
    return 0;
}