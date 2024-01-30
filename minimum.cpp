#include <iostream>
using namespace std;

int findMin(int N, int A[])
{
    int min = A[0];

    for (int i = 0; i < N; ++i)
    {
        if (min > A[i])
        {
            min = A[i];
        }
    }

    return min;
}