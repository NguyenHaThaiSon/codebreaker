#include <iostream>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    int count = 0;
    int pos1 = -1;
    int pos2 = -1;

    for (int i = 0; i < S.length(); ++i)
    {
        if (S[i] != T[i])
        {
            count++;

            if (count == 1)
            {
                pos1 = i;
            }
            else if (count == 2)
            {
                pos2 = i;
            }
        }
    }

    if ((count == 2 && S[pos1] == T[pos2] && S[pos2] == T[pos1]) && abs(pos1 - pos2) == 1 || count == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}