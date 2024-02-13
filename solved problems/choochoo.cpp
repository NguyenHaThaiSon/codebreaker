#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    int track = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> S;
        if (S == "chugga")
        {
            track++;
        }
    }

    if (track % 2 == 0)
    {
        cout << "CHOO choo";
    }
    else
    {
        cout << "choo CHOO";
    }
    return 0;
}