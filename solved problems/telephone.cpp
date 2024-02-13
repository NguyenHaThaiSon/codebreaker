#include <iostream>
using namespace std;

int main()
{
    int S, X, Y;
    cin >> S >> X >> Y;

    cout << S - X * Y << " " << S + X * Y;
    return 0;
}