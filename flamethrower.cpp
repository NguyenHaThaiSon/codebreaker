#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    int sum = 0;
    for (int i = 0; i < K; i++)
    {
        sum += array[i];
    }

    int maxSum = sum;
    for (int i = K; i < N; i++)
    {
        sum += array[i] - array[i - K];
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}