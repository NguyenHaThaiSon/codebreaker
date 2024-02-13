#include <iostream>
using namespace std;

int main()
{
    int N;
    string S;

    cin >> N >> S;

    int tracker = 0;
    char compare = '.';
    for (auto color : S)
    {
        if (color != compare)
        {
            tracker++;
            compare = color;
        }
    }

    cout << tracker;
    return 0;
}