#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    int B[N];
    int tracker = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
        if (B[i] == A[i])
        {
            tracker++;
        }
    }

    cout << tracker;
    return 0;
}