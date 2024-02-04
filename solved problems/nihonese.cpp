#include <iostream>
using namespace std;

int main()
{
    int N, M;
    string S;
    cin >> N >> M;

    int check = 0;
    for (int i = 0; i < 2; i++)
    {
        cin >> S;
        for (int i = 0; i < S.length(); ++i)
        {
            if (S[i] == 'n')
            {
                continue;
            }

            if (S[i] != 'u' && S[i] != 'e' && S[i] != 'o' && S[i] != 'a' && S[i] != 'i')
            {
                if (S[i + 1] == 'u' || S[i + 1] == 'e' || S[i + 1] == 'o' || S[i + 1] == 'a' || S[i + 1] == 'i')
                {
                    continue;
                }
                else
                {
                    check++;
                    break;
                }
            }
        }
    }

    if (check == 0)
    {
        cout << "su";
    }
    else if (check == 1)
    {
        cout << "wan";
    }
    else if (check == 2)
    {
        cout << "zero";
    }

    return 0;
}