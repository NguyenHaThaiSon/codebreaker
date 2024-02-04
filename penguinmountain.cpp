#include <iostream>
using namespace std;

int main()
{
    int X, Y, E;
    cin >> X >> Y >> E;

    cout << (X - E * 2 >= Y ? X - E * 2 : Y);
    return 0;
}